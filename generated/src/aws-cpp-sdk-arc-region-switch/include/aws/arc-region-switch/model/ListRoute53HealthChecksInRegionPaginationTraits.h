/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitchServiceClientModel.h>
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksInRegionRequest.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksInRegionResult.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Pagination {

template <typename Client = ARCRegionswitchClient>
struct ListRoute53HealthChecksInRegionPaginationTraits {
  using RequestType = Model::ListRoute53HealthChecksInRegionRequest;
  using ResultType = Model::ListRoute53HealthChecksInRegionResult;
  using OutcomeType = Model::ListRoute53HealthChecksInRegionOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRoute53HealthChecksInRegion(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ARCRegionswitch
}  // namespace Aws
