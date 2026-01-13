/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGatewayServiceClientModel.h>
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/GetResourcesRequest.h>
#include <aws/apigateway/model/GetResourcesResult.h>

namespace Aws {
namespace APIGateway {
namespace Pagination {

template <typename Client = APIGatewayClient>
struct GetResourcesPaginationTraits {
  using RequestType = Model::GetResourcesRequest;
  using ResultType = Model::GetResourcesResult;
  using OutcomeType = Model::GetResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetPosition().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetPosition(result.GetPosition()); }
};

}  // namespace Pagination
}  // namespace APIGateway
}  // namespace Aws
