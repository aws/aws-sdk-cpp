/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitorServiceClientModel.h>
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/ListInternetEventsRequest.h>
#include <aws/internetmonitor/model/ListInternetEventsResult.h>

namespace Aws {
namespace InternetMonitor {
namespace Pagination {

template <typename Client = InternetMonitorClient>
struct ListInternetEventsPaginationTraits {
  using RequestType = Model::ListInternetEventsRequest;
  using ResultType = Model::ListInternetEventsResult;
  using OutcomeType = Model::ListInternetEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListInternetEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace InternetMonitor
}  // namespace Aws
