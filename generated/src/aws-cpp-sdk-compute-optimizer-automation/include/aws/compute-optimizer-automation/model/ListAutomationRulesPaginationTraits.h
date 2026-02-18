/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationServiceClientModel.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulesRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulesResult.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Pagination {

template <typename Client = ComputeOptimizerAutomationClient>
struct ListAutomationRulesPaginationTraits {
  using RequestType = Model::ListAutomationRulesRequest;
  using ResultType = Model::ListAutomationRulesResult;
  using OutcomeType = Model::ListAutomationRulesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAutomationRules(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
