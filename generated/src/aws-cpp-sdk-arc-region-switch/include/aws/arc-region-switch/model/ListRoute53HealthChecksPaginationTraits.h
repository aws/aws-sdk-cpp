/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitchServiceClientModel.h>
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksRequest.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksResult.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Pagination {

template <typename Client = ARCRegionswitchClient>
struct ListRoute53HealthChecksPaginationTraits {
  using RequestType = Model::ListRoute53HealthChecksRequest;
  using ResultType = Model::ListRoute53HealthChecksResult;
  using OutcomeType = Model::ListRoute53HealthChecksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRoute53HealthChecks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ARCRegionswitch
}  // namespace Aws
