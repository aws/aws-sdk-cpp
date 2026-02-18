/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/appfabric/model/ListAppAuthorizationsPaginationTraits.h>
#include <aws/appfabric/model/ListAppBundlesPaginationTraits.h>
#include <aws/appfabric/model/ListIngestionDestinationsPaginationTraits.h>
#include <aws/appfabric/model/ListIngestionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AppFabric {

class AppFabricClient;

template <typename DerivedClient>
class AppFabricPaginationBase {
 public:
  /**
   * Create a paginator for ListAppAuthorizations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppAuthorizationsRequest,
                                    Pagination::ListAppAuthorizationsPaginationTraits<DerivedClient>>
  ListAppAuthorizationsPaginator(const Model::ListAppAuthorizationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppAuthorizationsRequest,
                                             Pagination::ListAppAuthorizationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppBundles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppBundlesRequest, Pagination::ListAppBundlesPaginationTraits<DerivedClient>>
  ListAppBundlesPaginator(const Model::ListAppBundlesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppBundlesRequest,
                                             Pagination::ListAppBundlesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListIngestionDestinations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngestionDestinationsRequest,
                                    Pagination::ListIngestionDestinationsPaginationTraits<DerivedClient>>
  ListIngestionDestinationsPaginator(const Model::ListIngestionDestinationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngestionDestinationsRequest,
                                             Pagination::ListIngestionDestinationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIngestions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngestionsRequest, Pagination::ListIngestionsPaginationTraits<DerivedClient>>
  ListIngestionsPaginator(const Model::ListIngestionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngestionsRequest,
                                             Pagination::ListIngestionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace AppFabric
}  // namespace Aws
