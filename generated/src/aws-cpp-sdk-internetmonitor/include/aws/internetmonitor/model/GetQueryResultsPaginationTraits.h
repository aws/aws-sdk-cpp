/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitorServiceClientModel.h>
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/GetQueryResultsRequest.h>
#include <aws/internetmonitor/model/GetQueryResultsResult.h>

namespace Aws {
namespace InternetMonitor {
namespace Pagination {

template <typename Client = InternetMonitorClient>
struct GetQueryResultsPaginationTraits {
  using RequestType = Model::GetQueryResultsRequest;
  using ResultType = Model::GetQueryResultsResult;
  using OutcomeType = Model::GetQueryResultsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetQueryResults(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace InternetMonitor
}  // namespace Aws
