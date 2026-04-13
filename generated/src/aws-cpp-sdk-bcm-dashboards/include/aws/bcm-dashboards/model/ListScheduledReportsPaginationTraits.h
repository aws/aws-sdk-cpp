/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboardsServiceClientModel.h>
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/ListScheduledReportsRequest.h>
#include <aws/bcm-dashboards/model/ListScheduledReportsResult.h>

namespace Aws {
namespace BCMDashboards {
namespace Pagination {

template <typename Client = BCMDashboardsClient>
struct ListScheduledReportsPaginationTraits {
  using RequestType = Model::ListScheduledReportsRequest;
  using ResultType = Model::ListScheduledReportsResult;
  using OutcomeType = Model::ListScheduledReportsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListScheduledReports(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BCMDashboards
}  // namespace Aws
