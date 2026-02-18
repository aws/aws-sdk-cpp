/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogsServiceClientModel.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ListSourcesForS3TableIntegrationRequest.h>
#include <aws/logs/model/ListSourcesForS3TableIntegrationResult.h>

namespace Aws {
namespace CloudWatchLogs {
namespace Pagination {

template <typename Client = CloudWatchLogsClient>
struct ListSourcesForS3TableIntegrationPaginationTraits {
  using RequestType = Model::ListSourcesForS3TableIntegrationRequest;
  using ResultType = Model::ListSourcesForS3TableIntegrationResult;
  using OutcomeType = Model::ListSourcesForS3TableIntegrationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSourcesForS3TableIntegration(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudWatchLogs
}  // namespace Aws
