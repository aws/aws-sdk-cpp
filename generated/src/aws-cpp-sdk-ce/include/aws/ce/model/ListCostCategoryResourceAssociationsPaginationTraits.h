/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorerServiceClientModel.h>
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/ListCostCategoryResourceAssociationsRequest.h>
#include <aws/ce/model/ListCostCategoryResourceAssociationsResult.h>

namespace Aws {
namespace CostExplorer {
namespace Pagination {

template <typename Client = CostExplorerClient>
struct ListCostCategoryResourceAssociationsPaginationTraits {
  using RequestType = Model::ListCostCategoryResourceAssociationsRequest;
  using ResultType = Model::ListCostCategoryResourceAssociationsResult;
  using OutcomeType = Model::ListCostCategoryResourceAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCostCategoryResourceAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CostExplorer
}  // namespace Aws
