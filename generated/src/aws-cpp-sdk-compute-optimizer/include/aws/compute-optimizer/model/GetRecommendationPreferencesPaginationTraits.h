/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizerServiceClientModel.h>
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/GetRecommendationPreferencesRequest.h>
#include <aws/compute-optimizer/model/GetRecommendationPreferencesResult.h>

namespace Aws {
namespace ComputeOptimizer {
namespace Pagination {

template <typename Client = ComputeOptimizerClient>
struct GetRecommendationPreferencesPaginationTraits {
  using RequestType = Model::GetRecommendationPreferencesRequest;
  using ResultType = Model::GetRecommendationPreferencesResult;
  using OutcomeType = Model::GetRecommendationPreferencesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetRecommendationPreferences(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ComputeOptimizer
}  // namespace Aws
