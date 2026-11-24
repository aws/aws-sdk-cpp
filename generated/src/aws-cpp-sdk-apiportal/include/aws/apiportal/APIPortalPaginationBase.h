/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/apiportal/model/ListApiInventoryItemsPaginationTraits.h>
#include <aws/apiportal/model/ListDiscoveryStatusesPaginationTraits.h>
#include <aws/apiportal/model/ListManagedApiEventsPaginationTraits.h>
#include <aws/apiportal/model/ListManagedApisPaginationTraits.h>
#include <aws/apiportal/model/ListPortalsPaginationTraits.h>
#include <aws/apiportal/model/ListProductApiPagesPaginationTraits.h>
#include <aws/apiportal/model/ListProductPagesPaginationTraits.h>
#include <aws/apiportal/model/ListProductsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace APIPortal {

template <typename DerivedClient>
class APIPortalPaginationBase {
 public:
  /**
   * Create a paginator for ListApiInventoryItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApiInventoryItemsRequest,
                                    Pagination::ListApiInventoryItemsPaginationTraits<DerivedClient>>
  ListApiInventoryItemsPaginator(const Model::ListApiInventoryItemsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApiInventoryItemsRequest,
                                             Pagination::ListApiInventoryItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDiscoveryStatuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoveryStatusesRequest,
                                    Pagination::ListDiscoveryStatusesPaginationTraits<DerivedClient>>
  ListDiscoveryStatusesPaginator(const Model::ListDiscoveryStatusesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoveryStatusesRequest,
                                             Pagination::ListDiscoveryStatusesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedApiEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedApiEventsRequest,
                                    Pagination::ListManagedApiEventsPaginationTraits<DerivedClient>>
  ListManagedApiEventsPaginator(const Model::ListManagedApiEventsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedApiEventsRequest,
                                             Pagination::ListManagedApiEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedApis operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedApisRequest,
                                    Pagination::ListManagedApisPaginationTraits<DerivedClient>>
  ListManagedApisPaginator(const Model::ListManagedApisRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedApisRequest,
                                             Pagination::ListManagedApisPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListPortals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortalsRequest, Pagination::ListPortalsPaginationTraits<DerivedClient>>
  ListPortalsPaginator(const Model::ListPortalsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortalsRequest,
                                             Pagination::ListPortalsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListProductApiPages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProductApiPagesRequest,
                                    Pagination::ListProductApiPagesPaginationTraits<DerivedClient>>
  ListProductApiPagesPaginator(const Model::ListProductApiPagesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProductApiPagesRequest,
                                             Pagination::ListProductApiPagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProductPages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProductPagesRequest,
                                    Pagination::ListProductPagesPaginationTraits<DerivedClient>>
  ListProductPagesPaginator(const Model::ListProductPagesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProductPagesRequest,
                                             Pagination::ListProductPagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListProducts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProductsRequest, Pagination::ListProductsPaginationTraits<DerivedClient>>
  ListProductsPaginator(const Model::ListProductsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProductsRequest,
                                             Pagination::ListProductsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace APIPortal
}  // namespace Aws
