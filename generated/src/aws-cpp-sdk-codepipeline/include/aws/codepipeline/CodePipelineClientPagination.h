/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipelineClient.h>
#include <aws/codepipeline/model/ListActionExecutionsPaginationTraits.h>
#include <aws/codepipeline/model/ListActionTypesPaginationTraits.h>
#include <aws/codepipeline/model/ListDeployActionExecutionTargetsPaginationTraits.h>
#include <aws/codepipeline/model/ListPipelineExecutionsPaginationTraits.h>
#include <aws/codepipeline/model/ListPipelinesPaginationTraits.h>
#include <aws/codepipeline/model/ListRuleExecutionsPaginationTraits.h>
#include <aws/codepipeline/model/ListTagsForResourcePaginationTraits.h>
#include <aws/codepipeline/model/ListWebhooksPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodePipeline {

using ListActionExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<CodePipelineClient, Model::ListActionExecutionsRequest,
                                      Pagination::ListActionExecutionsPaginationTraits<CodePipelineClient>>;
using ListActionTypesPaginator = Aws::Utils::Pagination::Paginator<CodePipelineClient, Model::ListActionTypesRequest,
                                                                   Pagination::ListActionTypesPaginationTraits<CodePipelineClient>>;
using ListDeployActionExecutionTargetsPaginator =
    Aws::Utils::Pagination::Paginator<CodePipelineClient, Model::ListDeployActionExecutionTargetsRequest,
                                      Pagination::ListDeployActionExecutionTargetsPaginationTraits<CodePipelineClient>>;
using ListPipelineExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<CodePipelineClient, Model::ListPipelineExecutionsRequest,
                                      Pagination::ListPipelineExecutionsPaginationTraits<CodePipelineClient>>;
using ListPipelinesPaginator = Aws::Utils::Pagination::Paginator<CodePipelineClient, Model::ListPipelinesRequest,
                                                                 Pagination::ListPipelinesPaginationTraits<CodePipelineClient>>;
using ListRuleExecutionsPaginator = Aws::Utils::Pagination::Paginator<CodePipelineClient, Model::ListRuleExecutionsRequest,
                                                                      Pagination::ListRuleExecutionsPaginationTraits<CodePipelineClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<CodePipelineClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<CodePipelineClient>>;
using ListWebhooksPaginator = Aws::Utils::Pagination::Paginator<CodePipelineClient, Model::ListWebhooksRequest,
                                                                Pagination::ListWebhooksPaginationTraits<CodePipelineClient>>;

}  // namespace CodePipeline
}  // namespace Aws
