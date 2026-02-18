/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboardsServiceClientModel.h>
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/ListDashboardsRequest.h>
#include <aws/bcm-dashboards/model/ListDashboardsResult.h>

namespace Aws {
namespace BCMDashboards {
namespace Pagination {

template <typename Client = BCMDashboardsClient>
struct ListDashboardsPaginationTraits {
  using RequestType = Model::ListDashboardsRequest;
  using ResultType = Model::ListDashboardsResult;
  using OutcomeType = Model::ListDashboardsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDashboards(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BCMDashboards
}  // namespace Aws
