/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRankingServiceClientModel.h>
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/kendra-ranking/model/ListRescoreExecutionPlansRequest.h>
#include <aws/kendra-ranking/model/ListRescoreExecutionPlansResult.h>

namespace Aws {
namespace KendraRanking {
namespace Pagination {

template <typename Client = KendraRankingClient>
struct ListRescoreExecutionPlansPaginationTraits {
  using RequestType = Model::ListRescoreExecutionPlansRequest;
  using ResultType = Model::ListRescoreExecutionPlansResult;
  using OutcomeType = Model::ListRescoreExecutionPlansOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRescoreExecutionPlans(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace KendraRanking
}  // namespace Aws
