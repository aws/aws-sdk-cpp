/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalystClient.h>
#include <aws/codecatalyst/model/ListAccessTokensPaginationTraits.h>
#include <aws/codecatalyst/model/ListDevEnvironmentSessionsPaginationTraits.h>
#include <aws/codecatalyst/model/ListDevEnvironmentsPaginationTraits.h>
#include <aws/codecatalyst/model/ListEventLogsPaginationTraits.h>
#include <aws/codecatalyst/model/ListProjectsPaginationTraits.h>
#include <aws/codecatalyst/model/ListSourceRepositoriesPaginationTraits.h>
#include <aws/codecatalyst/model/ListSourceRepositoryBranchesPaginationTraits.h>
#include <aws/codecatalyst/model/ListSpacesPaginationTraits.h>
#include <aws/codecatalyst/model/ListWorkflowRunsPaginationTraits.h>
#include <aws/codecatalyst/model/ListWorkflowsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodeCatalyst {

using ListAccessTokensPaginator = Aws::Utils::Pagination::Paginator<CodeCatalystClient, Model::ListAccessTokensRequest,
                                                                    Pagination::ListAccessTokensPaginationTraits<CodeCatalystClient>>;
using ListDevEnvironmentsPaginator = Aws::Utils::Pagination::Paginator<CodeCatalystClient, Model::ListDevEnvironmentsRequest,
                                                                       Pagination::ListDevEnvironmentsPaginationTraits<CodeCatalystClient>>;
using ListDevEnvironmentSessionsPaginator =
    Aws::Utils::Pagination::Paginator<CodeCatalystClient, Model::ListDevEnvironmentSessionsRequest,
                                      Pagination::ListDevEnvironmentSessionsPaginationTraits<CodeCatalystClient>>;
using ListEventLogsPaginator = Aws::Utils::Pagination::Paginator<CodeCatalystClient, Model::ListEventLogsRequest,
                                                                 Pagination::ListEventLogsPaginationTraits<CodeCatalystClient>>;
using ListProjectsPaginator = Aws::Utils::Pagination::Paginator<CodeCatalystClient, Model::ListProjectsRequest,
                                                                Pagination::ListProjectsPaginationTraits<CodeCatalystClient>>;
using ListSourceRepositoriesPaginator =
    Aws::Utils::Pagination::Paginator<CodeCatalystClient, Model::ListSourceRepositoriesRequest,
                                      Pagination::ListSourceRepositoriesPaginationTraits<CodeCatalystClient>>;
using ListSourceRepositoryBranchesPaginator =
    Aws::Utils::Pagination::Paginator<CodeCatalystClient, Model::ListSourceRepositoryBranchesRequest,
                                      Pagination::ListSourceRepositoryBranchesPaginationTraits<CodeCatalystClient>>;
using ListSpacesPaginator = Aws::Utils::Pagination::Paginator<CodeCatalystClient, Model::ListSpacesRequest,
                                                              Pagination::ListSpacesPaginationTraits<CodeCatalystClient>>;
using ListWorkflowRunsPaginator = Aws::Utils::Pagination::Paginator<CodeCatalystClient, Model::ListWorkflowRunsRequest,
                                                                    Pagination::ListWorkflowRunsPaginationTraits<CodeCatalystClient>>;
using ListWorkflowsPaginator = Aws::Utils::Pagination::Paginator<CodeCatalystClient, Model::ListWorkflowsRequest,
                                                                 Pagination::ListWorkflowsPaginationTraits<CodeCatalystClient>>;

}  // namespace CodeCatalyst
}  // namespace Aws
