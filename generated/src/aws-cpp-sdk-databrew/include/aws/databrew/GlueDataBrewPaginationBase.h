/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/databrew/model/ListDatasetsPaginationTraits.h>
#include <aws/databrew/model/ListJobRunsPaginationTraits.h>
#include <aws/databrew/model/ListJobsPaginationTraits.h>
#include <aws/databrew/model/ListProjectsPaginationTraits.h>
#include <aws/databrew/model/ListRecipeVersionsPaginationTraits.h>
#include <aws/databrew/model/ListRecipesPaginationTraits.h>
#include <aws/databrew/model/ListRulesetsPaginationTraits.h>
#include <aws/databrew/model/ListSchedulesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace GlueDataBrew {

class GlueDataBrewClient;

template <typename DerivedClient>
class GlueDataBrewPaginationBase {
 public:
  /**
   * Create a paginator for ListDatasets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest, Pagination::ListDatasetsPaginationTraits<DerivedClient>>
  ListDatasetsPaginator(const Model::ListDatasetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest,
                                             Pagination::ListDatasetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListJobRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunsRequest, Pagination::ListJobRunsPaginationTraits<DerivedClient>>
  ListJobRunsPaginator(const Model::ListJobRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunsRequest,
                                             Pagination::ListJobRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListRecipes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecipesRequest, Pagination::ListRecipesPaginationTraits<DerivedClient>>
  ListRecipesPaginator(const Model::ListRecipesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecipesRequest,
                                             Pagination::ListRecipesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListRecipeVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecipeVersionsRequest,
                                    Pagination::ListRecipeVersionsPaginationTraits<DerivedClient>>
  ListRecipeVersionsPaginator(const Model::ListRecipeVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecipeVersionsRequest,
                                             Pagination::ListRecipeVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRulesets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesetsRequest, Pagination::ListRulesetsPaginationTraits<DerivedClient>>
  ListRulesetsPaginator(const Model::ListRulesetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesetsRequest,
                                             Pagination::ListRulesetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSchedules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchedulesRequest, Pagination::ListSchedulesPaginationTraits<DerivedClient>>
  ListSchedulesPaginator(const Model::ListSchedulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchedulesRequest,
                                             Pagination::ListSchedulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace GlueDataBrew
}  // namespace Aws
