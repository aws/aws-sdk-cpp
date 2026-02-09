/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHubClient.h>
#include <aws/AWSMigrationHub/model/ListApplicationStatesPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListCreatedArtifactsPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListMigrationTaskUpdatesPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListMigrationTasksPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListSourceResourcesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace MigrationHub {

using ListApplicationStatesPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubClient, Model::ListApplicationStatesRequest,
                                      Pagination::ListApplicationStatesPaginationTraits<MigrationHubClient>>;
using ListCreatedArtifactsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubClient, Model::ListCreatedArtifactsRequest,
                                      Pagination::ListCreatedArtifactsPaginationTraits<MigrationHubClient>>;
using ListDiscoveredResourcesPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubClient, Model::ListDiscoveredResourcesRequest,
                                      Pagination::ListDiscoveredResourcesPaginationTraits<MigrationHubClient>>;
using ListMigrationTasksPaginator = Aws::Utils::Pagination::Paginator<MigrationHubClient, Model::ListMigrationTasksRequest,
                                                                      Pagination::ListMigrationTasksPaginationTraits<MigrationHubClient>>;
using ListMigrationTaskUpdatesPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubClient, Model::ListMigrationTaskUpdatesRequest,
                                      Pagination::ListMigrationTaskUpdatesPaginationTraits<MigrationHubClient>>;
using ListProgressUpdateStreamsPaginator =
    Aws::Utils::Pagination::Paginator<MigrationHubClient, Model::ListProgressUpdateStreamsRequest,
                                      Pagination::ListProgressUpdateStreamsPaginationTraits<MigrationHubClient>>;
using ListSourceResourcesPaginator = Aws::Utils::Pagination::Paginator<MigrationHubClient, Model::ListSourceResourcesRequest,
                                                                       Pagination::ListSourceResourcesPaginationTraits<MigrationHubClient>>;

}  // namespace MigrationHub
}  // namespace Aws
