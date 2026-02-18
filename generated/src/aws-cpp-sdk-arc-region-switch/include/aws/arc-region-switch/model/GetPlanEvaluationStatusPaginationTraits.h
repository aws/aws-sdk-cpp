/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitchServiceClientModel.h>
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/GetPlanEvaluationStatusRequest.h>
#include <aws/arc-region-switch/model/GetPlanEvaluationStatusResult.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Pagination {

template <typename Client = ARCRegionswitchClient>
struct GetPlanEvaluationStatusPaginationTraits {
  using RequestType = Model::GetPlanEvaluationStatusRequest;
  using ResultType = Model::GetPlanEvaluationStatusResult;
  using OutcomeType = Model::GetPlanEvaluationStatusOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetPlanEvaluationStatus(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ARCRegionswitch
}  // namespace Aws
