/*
 * TSDFGrid.hpp
 *
 *  November 29, 2014
 *  Author: Tristan Igelbrink
 */

#ifndef _TSDFGRID_HPP_
#define _TSDFGRID_HPP_

#include "HashGrid.hpp"

namespace lvr
{

template<typename VertexT, typename BoxT, typename TsdfT>
class TsdfGrid: public HashGrid<VertexT, BoxT>
{
public:
	TsdfGrid(float cellSize,  BoundingBox<VertexT> bb, TsdfT* tsdf, size_t size, bool isVoxelsize = true);
	virtual ~TsdfGrid();

};

} /* namespace lvr */

#include "TsdfGrid.tcc"


#endif /* INCLUDE_LIBLVR_RECONSTRUCTION_TsdfGrid_HPP_ */
