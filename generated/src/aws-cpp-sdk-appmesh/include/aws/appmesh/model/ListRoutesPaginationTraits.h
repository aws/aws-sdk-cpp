/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMeshServiceClientModel.h>
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/ListRoutesRequest.h>
#include <aws/appmesh/model/ListRoutesResult.h>

namespace Aws {
namespace AppMesh {
namespace Pagination {

template <typename Client = AppMeshClient>
struct ListRoutesPaginationTraits {
  using RequestType = Model::ListRoutesRequest;
  using ResultType = Model::ListRoutesResult;
  using OutcomeType = Model::ListRoutesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRoutes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppMesh
}  // namespace Aws
