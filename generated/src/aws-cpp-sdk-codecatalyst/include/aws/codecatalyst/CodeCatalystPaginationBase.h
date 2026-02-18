/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace CodeCatalyst {

class CodeCatalystClient;

template <typename DerivedClient>
class CodeCatalystPaginationBase {
 public:
  /**
   * Create a paginator for ListAccessTokens operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessTokensRequest,
                                    Pagination::ListAccessTokensPaginationTraits<DerivedClient>>
  ListAccessTokensPaginator(const Model::ListAccessTokensRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessTokensRequest,
                                             Pagination::ListAccessTokensPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListDevEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevEnvironmentsRequest,
                                    Pagination::ListDevEnvironmentsPaginationTraits<DerivedClient>>
  ListDevEnvironmentsPaginator(const Model::ListDevEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevEnvironmentsRequest,
                                             Pagination::ListDevEnvironmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDevEnvironmentSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevEnvironmentSessionsRequest,
                                    Pagination::ListDevEnvironmentSessionsPaginationTraits<DerivedClient>>
  ListDevEnvironmentSessionsPaginator(const Model::ListDevEnvironmentSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevEnvironmentSessionsRequest,
                                             Pagination::ListDevEnvironmentSessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEventLogs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventLogsRequest, Pagination::ListEventLogsPaginationTraits<DerivedClient>>
  ListEventLogsPaginator(const Model::ListEventLogsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventLogsRequest,
                                             Pagination::ListEventLogsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest, Pagination::ListProjectsPaginationTraits<DerivedClient>>
  ListProjectsPaginator(const Model::ListProjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest,
                                             Pagination::ListProjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSourceRepositories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceRepositoriesRequest,
                                    Pagination::ListSourceRepositoriesPaginationTraits<DerivedClient>>
  ListSourceRepositoriesPaginator(const Model::ListSourceRepositoriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceRepositoriesRequest,
                                             Pagination::ListSourceRepositoriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSourceRepositoryBranches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceRepositoryBranchesRequest,
                                    Pagination::ListSourceRepositoryBranchesPaginationTraits<DerivedClient>>
  ListSourceRepositoryBranchesPaginator(const Model::ListSourceRepositoryBranchesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceRepositoryBranchesRequest,
                                             Pagination::ListSourceRepositoryBranchesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSpaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesRequest, Pagination::ListSpacesPaginationTraits<DerivedClient>>
  ListSpacesPaginator(const Model::ListSpacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesRequest,
                                             Pagination::ListSpacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListWorkflowRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowRunsRequest,
                                    Pagination::ListWorkflowRunsPaginationTraits<DerivedClient>>
  ListWorkflowRunsPaginator(const Model::ListWorkflowRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowRunsRequest,
                                             Pagination::ListWorkflowRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListWorkflows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest, Pagination::ListWorkflowsPaginationTraits<DerivedClient>>
  ListWorkflowsPaginator(const Model::ListWorkflowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest,
                                             Pagination::ListWorkflowsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace CodeCatalyst
}  // namespace Aws
