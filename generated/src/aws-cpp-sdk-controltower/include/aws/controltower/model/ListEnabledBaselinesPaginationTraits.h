/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTowerServiceClientModel.h>
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/ListEnabledBaselinesRequest.h>
#include <aws/controltower/model/ListEnabledBaselinesResult.h>

namespace Aws {
namespace ControlTower {
namespace Pagination {

template <typename Client = ControlTowerClient>
struct ListEnabledBaselinesPaginationTraits {
  using RequestType = Model::ListEnabledBaselinesRequest;
  using ResultType = Model::ListEnabledBaselinesResult;
  using OutcomeType = Model::ListEnabledBaselinesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEnabledBaselines(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ControlTower
}  // namespace Aws
