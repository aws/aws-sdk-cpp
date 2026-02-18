/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorerServiceClientModel.h>
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/GetSavingsPlansUtilizationDetailsRequest.h>
#include <aws/ce/model/GetSavingsPlansUtilizationDetailsResult.h>

namespace Aws {
namespace CostExplorer {
namespace Pagination {

template <typename Client = CostExplorerClient>
struct GetSavingsPlansUtilizationDetailsPaginationTraits {
  using RequestType = Model::GetSavingsPlansUtilizationDetailsRequest;
  using ResultType = Model::GetSavingsPlansUtilizationDetailsResult;
  using OutcomeType = Model::GetSavingsPlansUtilizationDetailsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetSavingsPlansUtilizationDetails(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CostExplorer
}  // namespace Aws
