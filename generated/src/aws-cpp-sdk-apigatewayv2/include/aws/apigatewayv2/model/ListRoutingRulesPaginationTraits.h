/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2ServiceClientModel.h>
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/ListRoutingRulesRequest.h>
#include <aws/apigatewayv2/model/ListRoutingRulesResult.h>

namespace Aws {
namespace ApiGatewayV2 {
namespace Pagination {

template <typename Client = ApiGatewayV2Client>
struct ListRoutingRulesPaginationTraits {
  using RequestType = Model::ListRoutingRulesRequest;
  using ResultType = Model::ListRoutingRulesResult;
  using OutcomeType = Model::ListRoutingRulesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRoutingRules(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApiGatewayV2
}  // namespace Aws
