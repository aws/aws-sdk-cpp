/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/databrew/GlueDataBrewClient.h>
#include <aws/databrew/model/ListDatasetsPaginationTraits.h>
#include <aws/databrew/model/ListJobRunsPaginationTraits.h>
#include <aws/databrew/model/ListJobsPaginationTraits.h>
#include <aws/databrew/model/ListProjectsPaginationTraits.h>
#include <aws/databrew/model/ListRecipeVersionsPaginationTraits.h>
#include <aws/databrew/model/ListRecipesPaginationTraits.h>
#include <aws/databrew/model/ListRulesetsPaginationTraits.h>
#include <aws/databrew/model/ListSchedulesPaginationTraits.h>

namespace Aws {
namespace GlueDataBrew {

using ListDatasetsPaginator = Aws::Utils::Pagination::Paginator<GlueDataBrewClient, Model::ListDatasetsRequest,
                                                                Pagination::ListDatasetsPaginationTraits<GlueDataBrewClient>>;
using ListJobRunsPaginator = Aws::Utils::Pagination::Paginator<GlueDataBrewClient, Model::ListJobRunsRequest,
                                                               Pagination::ListJobRunsPaginationTraits<GlueDataBrewClient>>;
using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<GlueDataBrewClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<GlueDataBrewClient>>;
using ListProjectsPaginator = Aws::Utils::Pagination::Paginator<GlueDataBrewClient, Model::ListProjectsRequest,
                                                                Pagination::ListProjectsPaginationTraits<GlueDataBrewClient>>;
using ListRecipesPaginator = Aws::Utils::Pagination::Paginator<GlueDataBrewClient, Model::ListRecipesRequest,
                                                               Pagination::ListRecipesPaginationTraits<GlueDataBrewClient>>;
using ListRecipeVersionsPaginator = Aws::Utils::Pagination::Paginator<GlueDataBrewClient, Model::ListRecipeVersionsRequest,
                                                                      Pagination::ListRecipeVersionsPaginationTraits<GlueDataBrewClient>>;
using ListRulesetsPaginator = Aws::Utils::Pagination::Paginator<GlueDataBrewClient, Model::ListRulesetsRequest,
                                                                Pagination::ListRulesetsPaginationTraits<GlueDataBrewClient>>;
using ListSchedulesPaginator = Aws::Utils::Pagination::Paginator<GlueDataBrewClient, Model::ListSchedulesRequest,
                                                                 Pagination::ListSchedulesPaginationTraits<GlueDataBrewClient>>;

}  // namespace GlueDataBrew
}  // namespace Aws
