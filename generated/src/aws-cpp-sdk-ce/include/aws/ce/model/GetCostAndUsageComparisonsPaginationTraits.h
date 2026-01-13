/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorerServiceClientModel.h>
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/GetCostAndUsageComparisonsRequest.h>
#include <aws/ce/model/GetCostAndUsageComparisonsResult.h>

namespace Aws {
namespace CostExplorer {
namespace Pagination {

template <typename Client = CostExplorerClient>
struct GetCostAndUsageComparisonsPaginationTraits {
  using RequestType = Model::GetCostAndUsageComparisonsRequest;
  using ResultType = Model::GetCostAndUsageComparisonsResult;
  using OutcomeType = Model::GetCostAndUsageComparisonsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetCostAndUsageComparisons(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextPageToken(result.GetNextPageToken()); }
};

}  // namespace Pagination
}  // namespace CostExplorer
}  // namespace Aws
