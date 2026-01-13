/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationClient.h>
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

namespace Aws {
namespace ComputeOptimizerAutomation {

using ListAccountsPaginator = Aws::Utils::Pagination::Paginator<ComputeOptimizerAutomationClient, Model::ListAccountsRequest,
                                                                Pagination::ListAccountsPaginationTraits<ComputeOptimizerAutomationClient>>;
using ListAutomationEventsPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerAutomationClient, Model::ListAutomationEventsRequest,
                                      Pagination::ListAutomationEventsPaginationTraits<ComputeOptimizerAutomationClient>>;
using ListAutomationEventStepsPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerAutomationClient, Model::ListAutomationEventStepsRequest,
                                      Pagination::ListAutomationEventStepsPaginationTraits<ComputeOptimizerAutomationClient>>;
using ListAutomationEventSummariesPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerAutomationClient, Model::ListAutomationEventSummariesRequest,
                                      Pagination::ListAutomationEventSummariesPaginationTraits<ComputeOptimizerAutomationClient>>;
using ListAutomationRulePreviewPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerAutomationClient, Model::ListAutomationRulePreviewRequest,
                                      Pagination::ListAutomationRulePreviewPaginationTraits<ComputeOptimizerAutomationClient>>;
using ListAutomationRulePreviewSummariesPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerAutomationClient, Model::ListAutomationRulePreviewSummariesRequest,
                                      Pagination::ListAutomationRulePreviewSummariesPaginationTraits<ComputeOptimizerAutomationClient>>;
using ListAutomationRulesPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerAutomationClient, Model::ListAutomationRulesRequest,
                                      Pagination::ListAutomationRulesPaginationTraits<ComputeOptimizerAutomationClient>>;
using ListRecommendedActionsPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerAutomationClient, Model::ListRecommendedActionsRequest,
                                      Pagination::ListRecommendedActionsPaginationTraits<ComputeOptimizerAutomationClient>>;
using ListRecommendedActionSummariesPaginator =
    Aws::Utils::Pagination::Paginator<ComputeOptimizerAutomationClient, Model::ListRecommendedActionSummariesRequest,
                                      Pagination::ListRecommendedActionSummariesPaginationTraits<ComputeOptimizerAutomationClient>>;

}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
