/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/gameliftstreams/model/ListApplicationsPaginationTraits.h>
#include <aws/gameliftstreams/model/ListStreamGroupsPaginationTraits.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountPaginationTraits.h>
#include <aws/gameliftstreams/model/ListStreamSessionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace GameLiftStreams {

class GameLiftStreamsClient;

template <typename DerivedClient>
class GameLiftStreamsPaginationBase {
 public:
  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListStreamGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamGroupsRequest,
                                    Pagination::ListStreamGroupsPaginationTraits<DerivedClient>>
  ListStreamGroupsPaginator(const Model::ListStreamGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamGroupsRequest,
                                             Pagination::ListStreamGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListStreamSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamSessionsRequest,
                                    Pagination::ListStreamSessionsPaginationTraits<DerivedClient>>
  ListStreamSessionsPaginator(const Model::ListStreamSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamSessionsRequest,
                                             Pagination::ListStreamSessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStreamSessionsByAccount operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamSessionsByAccountRequest,
                                    Pagination::ListStreamSessionsByAccountPaginationTraits<DerivedClient>>
  ListStreamSessionsByAccountPaginator(const Model::ListStreamSessionsByAccountRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamSessionsByAccountRequest,
                                             Pagination::ListStreamSessionsByAccountPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace GameLiftStreams
}  // namespace Aws
