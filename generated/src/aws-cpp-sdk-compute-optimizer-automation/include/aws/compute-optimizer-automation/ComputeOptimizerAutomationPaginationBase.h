/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/compute-optimizer-automation/model/ListAccountsPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventStepsPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventSummariesPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventsPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewSummariesPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulesPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionSummariesPaginationTraits.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ComputeOptimizerAutomation {

class ComputeOptimizerAutomationClient;

template <typename DerivedClient>
class ComputeOptimizerAutomationPaginationBase {
 public:
  /**
   * Create a paginator for ListAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsRequest, Pagination::ListAccountsPaginationTraits<DerivedClient>>
  ListAccountsPaginator(const Model::ListAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsRequest,
                                             Pagination::ListAccountsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListAutomationEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationEventsRequest,
                                    Pagination::ListAutomationEventsPaginationTraits<DerivedClient>>
  ListAutomationEventsPaginator(const Model::ListAutomationEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationEventsRequest,
                                             Pagination::ListAutomationEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutomationEventSteps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationEventStepsRequest,
                                    Pagination::ListAutomationEventStepsPaginationTraits<DerivedClient>>
  ListAutomationEventStepsPaginator(const Model::ListAutomationEventStepsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationEventStepsRequest,
                                             Pagination::ListAutomationEventStepsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutomationEventSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationEventSummariesRequest,
                                    Pagination::ListAutomationEventSummariesPaginationTraits<DerivedClient>>
  ListAutomationEventSummariesPaginator(const Model::ListAutomationEventSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationEventSummariesRequest,
                                             Pagination::ListAutomationEventSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutomationRulePreview operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationRulePreviewRequest,
                                    Pagination::ListAutomationRulePreviewPaginationTraits<DerivedClient>>
  ListAutomationRulePreviewPaginator(const Model::ListAutomationRulePreviewRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationRulePreviewRequest,
                                             Pagination::ListAutomationRulePreviewPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutomationRulePreviewSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationRulePreviewSummariesRequest,
                                    Pagination::ListAutomationRulePreviewSummariesPaginationTraits<DerivedClient>>
  ListAutomationRulePreviewSummariesPaginator(const Model::ListAutomationRulePreviewSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationRulePreviewSummariesRequest,
                                             Pagination::ListAutomationRulePreviewSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutomationRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationRulesRequest,
                                    Pagination::ListAutomationRulesPaginationTraits<DerivedClient>>
  ListAutomationRulesPaginator(const Model::ListAutomationRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomationRulesRequest,
                                             Pagination::ListAutomationRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendedActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendedActionsRequest,
                                    Pagination::ListRecommendedActionsPaginationTraits<DerivedClient>>
  ListRecommendedActionsPaginator(const Model::ListRecommendedActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendedActionsRequest,
                                             Pagination::ListRecommendedActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendedActionSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendedActionSummariesRequest,
                                    Pagination::ListRecommendedActionSummariesPaginationTraits<DerivedClient>>
  ListRecommendedActionSummariesPaginator(const Model::ListRecommendedActionSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendedActionSummariesRequest,
                                             Pagination::ListRecommendedActionSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
