/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniServiceClientModel.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/ListOmniDashboardsRequest.h>
#include <aws/cloudwatchomni/model/ListOmniDashboardsResult.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Pagination {

template <typename Client = CloudWatchOmniClient>
struct ListOmniDashboardsPaginationTraits {
  using RequestType = Model::ListOmniDashboardsRequest;
  using ResultType = Model::ListOmniDashboardsResult;
  using OutcomeType = Model::ListOmniDashboardsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOmniDashboards(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudWatchOmni
}  // namespace Aws
