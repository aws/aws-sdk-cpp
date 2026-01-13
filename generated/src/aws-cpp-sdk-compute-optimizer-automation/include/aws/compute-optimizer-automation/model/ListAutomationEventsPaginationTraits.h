/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationServiceClientModel.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventsRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventsResult.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Pagination {

template <typename Client = ComputeOptimizerAutomationClient>
struct ListAutomationEventsPaginationTraits {
  using RequestType = Model::ListAutomationEventsRequest;
  using ResultType = Model::ListAutomationEventsResult;
  using OutcomeType = Model::ListAutomationEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAutomationEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
