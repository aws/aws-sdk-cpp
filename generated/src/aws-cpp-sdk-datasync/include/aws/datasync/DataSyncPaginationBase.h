/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/datasync/model/ListAgentsPaginationTraits.h>
#include <aws/datasync/model/ListLocationsPaginationTraits.h>
#include <aws/datasync/model/ListTagsForResourcePaginationTraits.h>
#include <aws/datasync/model/ListTaskExecutionsPaginationTraits.h>
#include <aws/datasync/model/ListTasksPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DataSync {

class DataSyncClient;

template <typename DerivedClient>
class DataSyncPaginationBase {
 public:
  /**
   * Create a paginator for ListAgents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentsRequest, Pagination::ListAgentsPaginationTraits<DerivedClient>>
  ListAgentsPaginator(const Model::ListAgentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentsRequest,
                                             Pagination::ListAgentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListLocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLocationsRequest, Pagination::ListLocationsPaginationTraits<DerivedClient>>
  ListLocationsPaginator(const Model::ListLocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLocationsRequest,
                                             Pagination::ListLocationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
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
   * Create a paginator for ListTaskExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaskExecutionsRequest,
                                    Pagination::ListTaskExecutionsPaginationTraits<DerivedClient>>
  ListTaskExecutionsPaginator(const Model::ListTaskExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaskExecutionsRequest,
                                             Pagination::ListTaskExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DerivedClient>>
  ListTasksPaginator(const Model::ListTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace DataSync
}  // namespace Aws
