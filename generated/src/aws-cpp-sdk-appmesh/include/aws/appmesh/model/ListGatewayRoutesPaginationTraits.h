/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMeshServiceClientModel.h>
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/ListGatewayRoutesRequest.h>
#include <aws/appmesh/model/ListGatewayRoutesResult.h>

namespace Aws {
namespace AppMesh {
namespace Pagination {

template <typename Client = AppMeshClient>
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
}  // namespace AppMesh
}  // namespace Aws
