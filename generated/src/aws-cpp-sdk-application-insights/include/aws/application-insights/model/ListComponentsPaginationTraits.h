/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsightsServiceClientModel.h>
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/ListComponentsRequest.h>
#include <aws/application-insights/model/ListComponentsResult.h>

namespace Aws {
namespace ApplicationInsights {
namespace Pagination {

template <typename Client = ApplicationInsightsClient>
struct ListComponentsPaginationTraits {
  using RequestType = Model::ListComponentsRequest;
  using ResultType = Model::ListComponentsResult;
  using OutcomeType = Model::ListComponentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListComponents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationInsights
}  // namespace Aws
