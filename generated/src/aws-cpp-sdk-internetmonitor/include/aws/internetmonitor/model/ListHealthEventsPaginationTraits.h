/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitorServiceClientModel.h>
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/ListHealthEventsRequest.h>
#include <aws/internetmonitor/model/ListHealthEventsResult.h>

namespace Aws {
namespace InternetMonitor {
namespace Pagination {

template <typename Client = InternetMonitorClient>
struct ListHealthEventsPaginationTraits {
  using RequestType = Model::ListHealthEventsRequest;
  using ResultType = Model::ListHealthEventsResult;
  using OutcomeType = Model::ListHealthEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHealthEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace InternetMonitor
}  // namespace Aws
