/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogsServiceClientModel.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/GetLogEventsRequest.h>
#include <aws/logs/model/GetLogEventsResult.h>

namespace Aws {
namespace CloudWatchLogs {
namespace Pagination {

template <typename Client = CloudWatchLogsClient>
struct GetLogEventsPaginationTraits {
  using RequestType = Model::GetLogEventsRequest;
  using ResultType = Model::GetLogEventsResult;
  using OutcomeType = Model::GetLogEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetLogEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextForwardToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextForwardToken()); }
};

}  // namespace Pagination
}  // namespace CloudWatchLogs
}  // namespace Aws
