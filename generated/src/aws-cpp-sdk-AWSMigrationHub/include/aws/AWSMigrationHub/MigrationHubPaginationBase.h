/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/AWSMigrationHub/model/ListApplicationStatesPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListCreatedArtifactsPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListMigrationTaskUpdatesPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListMigrationTasksPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListSourceResourcesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace MigrationHub {

class MigrationHubClient;

template <typename DerivedClient>
class MigrationHubPaginationBase {
 public:
  /**
   * Create a paginator for ListApplicationStates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationStatesRequest,
                                    Pagination::ListApplicationStatesPaginationTraits<DerivedClient>>
  ListApplicationStatesPaginator(const Model::ListApplicationStatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationStatesRequest,
                                             Pagination::ListApplicationStatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCreatedArtifacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCreatedArtifactsRequest,
                                    Pagination::ListCreatedArtifactsPaginationTraits<DerivedClient>>
  ListCreatedArtifactsPaginator(const Model::ListCreatedArtifactsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCreatedArtifactsRequest,
                                             Pagination::ListCreatedArtifactsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDiscoveredResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoveredResourcesRequest,
                                    Pagination::ListDiscoveredResourcesPaginationTraits<DerivedClient>>
  ListDiscoveredResourcesPaginator(const Model::ListDiscoveredResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoveredResourcesRequest,
                                             Pagination::ListDiscoveredResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMigrationTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMigrationTasksRequest,
                                    Pagination::ListMigrationTasksPaginationTraits<DerivedClient>>
  ListMigrationTasksPaginator(const Model::ListMigrationTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMigrationTasksRequest,
                                             Pagination::ListMigrationTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMigrationTaskUpdates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMigrationTaskUpdatesRequest,
                                    Pagination::ListMigrationTaskUpdatesPaginationTraits<DerivedClient>>
  ListMigrationTaskUpdatesPaginator(const Model::ListMigrationTaskUpdatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMigrationTaskUpdatesRequest,
                                             Pagination::ListMigrationTaskUpdatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProgressUpdateStreams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProgressUpdateStreamsRequest,
                                    Pagination::ListProgressUpdateStreamsPaginationTraits<DerivedClient>>
  ListProgressUpdateStreamsPaginator(const Model::ListProgressUpdateStreamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProgressUpdateStreamsRequest,
                                             Pagination::ListProgressUpdateStreamsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSourceResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceResourcesRequest,
                                    Pagination::ListSourceResourcesPaginationTraits<DerivedClient>>
  ListSourceResourcesPaginator(const Model::ListSourceResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceResourcesRequest,
                                             Pagination::ListSourceResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace MigrationHub
}  // namespace Aws
