/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsightsServiceClientModel.h>
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/ListLogPatternsRequest.h>
#include <aws/application-insights/model/ListLogPatternsResult.h>

namespace Aws {
namespace ApplicationInsights {
namespace Pagination {

template <typename Client = ApplicationInsightsClient>
struct ListLogPatternsPaginationTraits {
  using RequestType = Model::ListLogPatternsRequest;
  using ResultType = Model::ListLogPatternsResult;
  using OutcomeType = Model::ListLogPatternsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLogPatterns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationInsights
}  // namespace Aws
