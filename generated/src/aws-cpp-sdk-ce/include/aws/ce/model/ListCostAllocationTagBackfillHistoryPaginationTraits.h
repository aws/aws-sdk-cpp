/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorerServiceClientModel.h>
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/ListCostAllocationTagBackfillHistoryRequest.h>
#include <aws/ce/model/ListCostAllocationTagBackfillHistoryResult.h>

namespace Aws {
namespace CostExplorer {
namespace Pagination {

template <typename Client = CostExplorerClient>
struct ListCostAllocationTagBackfillHistoryPaginationTraits {
  using RequestType = Model::ListCostAllocationTagBackfillHistoryRequest;
  using ResultType = Model::ListCostAllocationTagBackfillHistoryResult;
  using OutcomeType = Model::ListCostAllocationTagBackfillHistoryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCostAllocationTagBackfillHistory(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CostExplorer
}  // namespace Aws
