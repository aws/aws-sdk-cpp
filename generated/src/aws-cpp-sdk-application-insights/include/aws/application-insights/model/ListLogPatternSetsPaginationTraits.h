/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsightsServiceClientModel.h>
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/ListLogPatternSetsRequest.h>
#include <aws/application-insights/model/ListLogPatternSetsResult.h>

namespace Aws {
namespace ApplicationInsights {
namespace Pagination {

template <typename Client = ApplicationInsightsClient>
struct ListLogPatternSetsPaginationTraits {
  using RequestType = Model::ListLogPatternSetsRequest;
  using ResultType = Model::ListLogPatternSetsResult;
  using OutcomeType = Model::ListLogPatternSetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLogPatternSets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationInsights
}  // namespace Aws
