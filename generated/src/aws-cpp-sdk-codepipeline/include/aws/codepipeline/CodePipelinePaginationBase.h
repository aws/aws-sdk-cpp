/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/codepipeline/model/ListActionExecutionsPaginationTraits.h>
#include <aws/codepipeline/model/ListActionTypesPaginationTraits.h>
#include <aws/codepipeline/model/ListDeployActionExecutionTargetsPaginationTraits.h>
#include <aws/codepipeline/model/ListPipelineExecutionsPaginationTraits.h>
#include <aws/codepipeline/model/ListPipelinesPaginationTraits.h>
#include <aws/codepipeline/model/ListRuleExecutionsPaginationTraits.h>
#include <aws/codepipeline/model/ListTagsForResourcePaginationTraits.h>
#include <aws/codepipeline/model/ListWebhooksPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CodePipeline {

class CodePipelineClient;

template <typename DerivedClient>
class CodePipelinePaginationBase {
 public:
  /**
   * Create a paginator for ListActionExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionExecutionsRequest,
                                    Pagination::ListActionExecutionsPaginationTraits<DerivedClient>>
  ListActionExecutionsPaginator(const Model::ListActionExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionExecutionsRequest,
                                             Pagination::ListActionExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListActionTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionTypesRequest,
                                    Pagination::ListActionTypesPaginationTraits<DerivedClient>>
  ListActionTypesPaginator(const Model::ListActionTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionTypesRequest,
                                             Pagination::ListActionTypesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDeployActionExecutionTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeployActionExecutionTargetsRequest,
                                    Pagination::ListDeployActionExecutionTargetsPaginationTraits<DerivedClient>>
  ListDeployActionExecutionTargetsPaginator(const Model::ListDeployActionExecutionTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeployActionExecutionTargetsRequest,
                                             Pagination::ListDeployActionExecutionTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPipelineExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineExecutionsRequest,
                                    Pagination::ListPipelineExecutionsPaginationTraits<DerivedClient>>
  ListPipelineExecutionsPaginator(const Model::ListPipelineExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineExecutionsRequest,
                                             Pagination::ListPipelineExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPipelines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelinesRequest, Pagination::ListPipelinesPaginationTraits<DerivedClient>>
  ListPipelinesPaginator(const Model::ListPipelinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelinesRequest,
                                             Pagination::ListPipelinesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListRuleExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleExecutionsRequest,
                                    Pagination::ListRuleExecutionsPaginationTraits<DerivedClient>>
  ListRuleExecutionsPaginator(const Model::ListRuleExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleExecutionsRequest,
                                             Pagination::ListRuleExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListWebhooks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebhooksRequest, Pagination::ListWebhooksPaginationTraits<DerivedClient>>
  ListWebhooksPaginator(const Model::ListWebhooksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebhooksRequest,
                                             Pagination::ListWebhooksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace CodePipeline
}  // namespace Aws
