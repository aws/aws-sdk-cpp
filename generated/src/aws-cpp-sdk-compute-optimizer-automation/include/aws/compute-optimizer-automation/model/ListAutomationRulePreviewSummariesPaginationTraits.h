/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationServiceClientModel.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewSummariesRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewSummariesResult.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Pagination {

template <typename Client = ComputeOptimizerAutomationClient>
struct ListAutomationRulePreviewSummariesPaginationTraits {
  using RequestType = Model::ListAutomationRulePreviewSummariesRequest;
  using ResultType = Model::ListAutomationRulePreviewSummariesResult;
  using OutcomeType = Model::ListAutomationRulePreviewSummariesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAutomationRulePreviewSummaries(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
