/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTowerServiceClientModel.h>
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/ListBaselinesRequest.h>
#include <aws/controltower/model/ListBaselinesResult.h>

namespace Aws {
namespace ControlTower {
namespace Pagination {

template <typename Client = ControlTowerClient>
struct ListBaselinesPaginationTraits {
  using RequestType = Model::ListBaselinesRequest;
  using ResultType = Model::ListBaselinesResult;
  using OutcomeType = Model::ListBaselinesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBaselines(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ControlTower
}  // namespace Aws
