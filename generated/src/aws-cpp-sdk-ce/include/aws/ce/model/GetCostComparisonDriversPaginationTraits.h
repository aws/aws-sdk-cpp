/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorerServiceClientModel.h>
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/GetCostComparisonDriversRequest.h>
#include <aws/ce/model/GetCostComparisonDriversResult.h>

namespace Aws {
namespace CostExplorer {
namespace Pagination {

template <typename Client = CostExplorerClient>
struct GetCostComparisonDriversPaginationTraits {
  using RequestType = Model::GetCostComparisonDriversRequest;
  using ResultType = Model::GetCostComparisonDriversResult;
  using OutcomeType = Model::GetCostComparisonDriversOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetCostComparisonDrivers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextPageToken(result.GetNextPageToken()); }
};

}  // namespace Pagination
}  // namespace CostExplorer
}  // namespace Aws
