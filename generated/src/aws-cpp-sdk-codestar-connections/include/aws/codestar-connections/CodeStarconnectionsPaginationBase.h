/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/codestar-connections/model/ListConnectionsPaginationTraits.h>
#include <aws/codestar-connections/model/ListHostsPaginationTraits.h>
#include <aws/codestar-connections/model/ListRepositoryLinksPaginationTraits.h>
#include <aws/codestar-connections/model/ListSyncConfigurationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CodeStarconnections {

class CodeStarconnectionsClient;

template <typename DerivedClient>
class CodeStarconnectionsPaginationBase {
 public:
  /**
   * Create a paginator for ListConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionsRequest,
                                    Pagination::ListConnectionsPaginationTraits<DerivedClient>>
  ListConnectionsPaginator(const Model::ListConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionsRequest,
                                             Pagination::ListConnectionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListHosts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHostsRequest, Pagination::ListHostsPaginationTraits<DerivedClient>>
  ListHostsPaginator(const Model::ListHostsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHostsRequest, Pagination::ListHostsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRepositoryLinks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoryLinksRequest,
                                    Pagination::ListRepositoryLinksPaginationTraits<DerivedClient>>
  ListRepositoryLinksPaginator(const Model::ListRepositoryLinksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoryLinksRequest,
                                             Pagination::ListRepositoryLinksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSyncConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSyncConfigurationsRequest,
                                    Pagination::ListSyncConfigurationsPaginationTraits<DerivedClient>>
  ListSyncConfigurationsPaginator(const Model::ListSyncConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSyncConfigurationsRequest,
                                             Pagination::ListSyncConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CodeStarconnections
}  // namespace Aws
