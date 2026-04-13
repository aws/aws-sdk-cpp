/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/interconnect/model/ListAttachPointsPaginationTraits.h>
#include <aws/interconnect/model/ListConnectionsPaginationTraits.h>
#include <aws/interconnect/model/ListEnvironmentsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Interconnect {

class InterconnectClient;

template <typename DerivedClient>
class InterconnectPaginationBase {
 public:
  /**
   * Create a paginator for ListAttachPoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachPointsRequest,
                                    Pagination::ListAttachPointsPaginationTraits<DerivedClient>>
  ListAttachPointsPaginator(const Model::ListAttachPointsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachPointsRequest,
                                             Pagination::ListAttachPointsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionsRequest,
                                    Pagination::ListConnectionsPaginationTraits<DerivedClient>>
  ListConnectionsPaginator(const Model::ListConnectionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionsRequest,
                                             Pagination::ListConnectionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                    Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>
  ListEnvironmentsPaginator(const Model::ListEnvironmentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                             Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace Interconnect
}  // namespace Aws
