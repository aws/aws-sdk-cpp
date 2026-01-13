/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHubServiceClientModel.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/ListEfficiencyMetricsRequest.h>
#include <aws/cost-optimization-hub/model/ListEfficiencyMetricsResult.h>

namespace Aws {
namespace CostOptimizationHub {
namespace Pagination {

template <typename Client = CostOptimizationHubClient>
struct ListEfficiencyMetricsPaginationTraits {
  using RequestType = Model::ListEfficiencyMetricsRequest;
  using ResultType = Model::ListEfficiencyMetricsResult;
  using OutcomeType = Model::ListEfficiencyMetricsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEfficiencyMetrics(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CostOptimizationHub
}  // namespace Aws
