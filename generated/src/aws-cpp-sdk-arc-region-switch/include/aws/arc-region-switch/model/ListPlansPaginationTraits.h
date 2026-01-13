/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitchServiceClientModel.h>
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/ListPlansRequest.h>
#include <aws/arc-region-switch/model/ListPlansResult.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Pagination {

template <typename Client = ARCRegionswitchClient>
struct ListPlansPaginationTraits {
  using RequestType = Model::ListPlansRequest;
  using ResultType = Model::ListPlansResult;
  using OutcomeType = Model::ListPlansOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPlans(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ARCRegionswitch
}  // namespace Aws
