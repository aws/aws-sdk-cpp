/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHubServiceClientModel.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/ListRecommendationsRequest.h>
#include <aws/cost-optimization-hub/model/ListRecommendationsResult.h>

namespace Aws {
namespace CostOptimizationHub {
namespace Pagination {

template <typename Client = CostOptimizationHubClient>
struct ListRecommendationsPaginationTraits {
  using RequestType = Model::ListRecommendationsRequest;
  using ResultType = Model::ListRecommendationsResult;
  using OutcomeType = Model::ListRecommendationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecommendations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CostOptimizationHub
}  // namespace Aws
