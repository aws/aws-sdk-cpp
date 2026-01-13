/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGatewayServiceClientModel.h>
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/GetBasePathMappingsRequest.h>
#include <aws/apigateway/model/GetBasePathMappingsResult.h>

namespace Aws {
namespace APIGateway {
namespace Pagination {

template <typename Client = APIGatewayClient>
struct GetBasePathMappingsPaginationTraits {
  using RequestType = Model::GetBasePathMappingsRequest;
  using ResultType = Model::GetBasePathMappingsResult;
  using OutcomeType = Model::GetBasePathMappingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetBasePathMappings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetPosition().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetPosition(result.GetPosition()); }
};

}  // namespace Pagination
}  // namespace APIGateway
}  // namespace Aws
