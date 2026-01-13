/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuruServiceClientModel.h>
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/SearchInsightsRequest.h>
#include <aws/devops-guru/model/SearchInsightsResult.h>

namespace Aws {
namespace DevOpsGuru {
namespace Pagination {

template <typename Client = DevOpsGuruClient>
struct SearchInsightsPaginationTraits {
  using RequestType = Model::SearchInsightsRequest;
  using ResultType = Model::SearchInsightsResult;
  using OutcomeType = Model::SearchInsightsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchInsights(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DevOpsGuru
}  // namespace Aws
