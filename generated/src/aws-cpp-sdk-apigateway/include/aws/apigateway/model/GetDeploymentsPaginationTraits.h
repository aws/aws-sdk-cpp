/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGatewayServiceClientModel.h>
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/GetDeploymentsRequest.h>
#include <aws/apigateway/model/GetDeploymentsResult.h>

namespace Aws {
namespace APIGateway {
namespace Pagination {

template <typename Client = APIGatewayClient>
struct GetDeploymentsPaginationTraits {
  using RequestType = Model::GetDeploymentsRequest;
  using ResultType = Model::GetDeploymentsResult;
  using OutcomeType = Model::GetDeploymentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetDeployments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetPosition().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetPosition(result.GetPosition()); }
};

}  // namespace Pagination
}  // namespace APIGateway
}  // namespace Aws
