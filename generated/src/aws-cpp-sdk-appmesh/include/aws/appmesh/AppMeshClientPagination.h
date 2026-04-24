/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMeshClient.h>
#include <aws/appmesh/model/ListGatewayRoutesPaginationTraits.h>
#include <aws/appmesh/model/ListMeshesPaginationTraits.h>
#include <aws/appmesh/model/ListRoutesPaginationTraits.h>
#include <aws/appmesh/model/ListTagsForResourcePaginationTraits.h>
#include <aws/appmesh/model/ListVirtualGatewaysPaginationTraits.h>
#include <aws/appmesh/model/ListVirtualNodesPaginationTraits.h>
#include <aws/appmesh/model/ListVirtualRoutersPaginationTraits.h>
#include <aws/appmesh/model/ListVirtualServicesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AppMesh {

using ListGatewayRoutesPaginator = Aws::Utils::Pagination::Paginator<AppMeshClient, Model::ListGatewayRoutesRequest,
                                                                     Pagination::ListGatewayRoutesPaginationTraits<AppMeshClient>>;
using ListMeshesPaginator =
    Aws::Utils::Pagination::Paginator<AppMeshClient, Model::ListMeshesRequest, Pagination::ListMeshesPaginationTraits<AppMeshClient>>;
using ListRoutesPaginator =
    Aws::Utils::Pagination::Paginator<AppMeshClient, Model::ListRoutesRequest, Pagination::ListRoutesPaginationTraits<AppMeshClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<AppMeshClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<AppMeshClient>>;
using ListVirtualGatewaysPaginator = Aws::Utils::Pagination::Paginator<AppMeshClient, Model::ListVirtualGatewaysRequest,
                                                                       Pagination::ListVirtualGatewaysPaginationTraits<AppMeshClient>>;
using ListVirtualNodesPaginator = Aws::Utils::Pagination::Paginator<AppMeshClient, Model::ListVirtualNodesRequest,
                                                                    Pagination::ListVirtualNodesPaginationTraits<AppMeshClient>>;
using ListVirtualRoutersPaginator = Aws::Utils::Pagination::Paginator<AppMeshClient, Model::ListVirtualRoutersRequest,
                                                                      Pagination::ListVirtualRoutersPaginationTraits<AppMeshClient>>;
using ListVirtualServicesPaginator = Aws::Utils::Pagination::Paginator<AppMeshClient, Model::ListVirtualServicesRequest,
                                                                       Pagination::ListVirtualServicesPaginationTraits<AppMeshClient>>;

}  // namespace AppMesh
}  // namespace Aws
