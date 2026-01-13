/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/appmesh/model/ListGatewayRoutesPaginationTraits.h>
#include <aws/appmesh/model/ListMeshesPaginationTraits.h>
#include <aws/appmesh/model/ListRoutesPaginationTraits.h>
#include <aws/appmesh/model/ListTagsForResourcePaginationTraits.h>
#include <aws/appmesh/model/ListVirtualGatewaysPaginationTraits.h>
#include <aws/appmesh/model/ListVirtualNodesPaginationTraits.h>
#include <aws/appmesh/model/ListVirtualRoutersPaginationTraits.h>
#include <aws/appmesh/model/ListVirtualServicesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AppMesh {

class AppMeshClient;

template <typename DerivedClient>
class AppMeshPaginationBase {
 public:
  /**
   * Create a paginator for ListGatewayRoutes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewayRoutesRequest,
                                    Pagination::ListGatewayRoutesPaginationTraits<DerivedClient>>
  ListGatewayRoutesPaginator(const Model::ListGatewayRoutesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewayRoutesRequest,
                                             Pagination::ListGatewayRoutesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMeshes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMeshesRequest, Pagination::ListMeshesPaginationTraits<DerivedClient>>
  ListMeshesPaginator(const Model::ListMeshesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMeshesRequest,
                                             Pagination::ListMeshesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListRoutes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutesRequest, Pagination::ListRoutesPaginationTraits<DerivedClient>>
  ListRoutesPaginator(const Model::ListRoutesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoutesRequest,
                                             Pagination::ListRoutesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVirtualGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualGatewaysRequest,
                                    Pagination::ListVirtualGatewaysPaginationTraits<DerivedClient>>
  ListVirtualGatewaysPaginator(const Model::ListVirtualGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualGatewaysRequest,
                                             Pagination::ListVirtualGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVirtualNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualNodesRequest,
                                    Pagination::ListVirtualNodesPaginationTraits<DerivedClient>>
  ListVirtualNodesPaginator(const Model::ListVirtualNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualNodesRequest,
                                             Pagination::ListVirtualNodesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListVirtualRouters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualRoutersRequest,
                                    Pagination::ListVirtualRoutersPaginationTraits<DerivedClient>>
  ListVirtualRoutersPaginator(const Model::ListVirtualRoutersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualRoutersRequest,
                                             Pagination::ListVirtualRoutersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVirtualServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualServicesRequest,
                                    Pagination::ListVirtualServicesPaginationTraits<DerivedClient>>
  ListVirtualServicesPaginator(const Model::ListVirtualServicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualServicesRequest,
                                             Pagination::ListVirtualServicesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AppMesh
}  // namespace Aws
