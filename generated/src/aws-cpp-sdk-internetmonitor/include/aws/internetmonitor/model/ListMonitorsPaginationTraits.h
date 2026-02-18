/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitorServiceClientModel.h>
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/ListMonitorsRequest.h>
#include <aws/internetmonitor/model/ListMonitorsResult.h>

namespace Aws {
namespace InternetMonitor {
namespace Pagination {

template <typename Client = InternetMonitorClient>
struct ListMonitorsPaginationTraits {
  using RequestType = Model::ListMonitorsRequest;
  using ResultType = Model::ListMonitorsResult;
  using OutcomeType = Model::ListMonitorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMonitors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace InternetMonitor
}  // namespace Aws
