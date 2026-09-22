/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniServiceClientModel.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/ListAlertsRequest.h>
#include <aws/cloudwatchomni/model/ListAlertsResult.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Pagination {

template <typename Client = CloudWatchOmniClient>
struct ListAlertsPaginationTraits {
  using RequestType = Model::ListAlertsRequest;
  using ResultType = Model::ListAlertsResult;
  using OutcomeType = Model::ListAlertsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAlerts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudWatchOmni
}  // namespace Aws
