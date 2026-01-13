/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2ServiceClientModel.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SearchTransitGatewayRoutesRequest.h>
#include <aws/ec2/model/SearchTransitGatewayRoutesResponse.h>

namespace Aws {
namespace EC2 {
namespace Pagination {

template <typename Client = EC2Client>
struct SearchTransitGatewayRoutesPaginationTraits {
  using RequestType = Model::SearchTransitGatewayRoutesRequest;
  using ResultType = Model::SearchTransitGatewayRoutesResponse;
  using OutcomeType = Model::SearchTransitGatewayRoutesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchTransitGatewayRoutes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EC2
}  // namespace Aws
