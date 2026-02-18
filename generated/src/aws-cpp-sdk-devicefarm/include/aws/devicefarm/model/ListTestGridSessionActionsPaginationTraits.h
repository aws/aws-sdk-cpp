/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarmServiceClientModel.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/ListTestGridSessionActionsRequest.h>
#include <aws/devicefarm/model/ListTestGridSessionActionsResult.h>

namespace Aws {
namespace DeviceFarm {
namespace Pagination {

template <typename Client = DeviceFarmClient>
struct ListTestGridSessionActionsPaginationTraits {
  using RequestType = Model::ListTestGridSessionActionsRequest;
  using ResultType = Model::ListTestGridSessionActionsResult;
  using OutcomeType = Model::ListTestGridSessionActionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTestGridSessionActions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DeviceFarm
}  // namespace Aws
