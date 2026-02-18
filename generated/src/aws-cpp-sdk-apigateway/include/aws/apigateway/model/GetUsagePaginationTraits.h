/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGatewayServiceClientModel.h>
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/GetUsageRequest.h>
#include <aws/apigateway/model/GetUsageResult.h>

namespace Aws {
namespace APIGateway {
namespace Pagination {

template <typename Client = APIGatewayClient>
struct GetUsagePaginationTraits {
  using RequestType = Model::GetUsageRequest;
  using ResultType = Model::GetUsageResult;
  using OutcomeType = Model::GetUsageOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetUsage(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetPosition().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetPosition(result.GetPosition()); }
};

}  // namespace Pagination
}  // namespace APIGateway
}  // namespace Aws
