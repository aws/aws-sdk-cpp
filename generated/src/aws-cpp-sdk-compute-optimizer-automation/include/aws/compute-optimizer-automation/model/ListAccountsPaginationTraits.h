/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationServiceClientModel.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/ListAccountsRequest.h>
#include <aws/compute-optimizer-automation/model/ListAccountsResult.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Pagination {

template <typename Client = ComputeOptimizerAutomationClient>
struct ListAccountsPaginationTraits {
  using RequestType = Model::ListAccountsRequest;
  using ResultType = Model::ListAccountsResult;
  using OutcomeType = Model::ListAccountsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccounts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
