/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECSServiceClientModel.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ListGatewayRoutesRequest.h>
#include <aws/ecs/model/ListGatewayRoutesResult.h>

namespace Aws {
namespace ECS {
namespace Pagination {

template <typename Client = ECSClient>
struct ListGatewayRoutesPaginationTraits {
  using RequestType = Model::ListGatewayRoutesRequest;
  using ResultType = Model::ListGatewayRoutesResult;
  using OutcomeType = Model::ListGatewayRoutesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGatewayRoutes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECS
}  // namespace Aws
