/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2ServiceClientModel.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/DescribeTransitGatewayMulticastDomainsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayMulticastDomainsResponse.h>

namespace Aws {
namespace EC2 {
namespace Pagination {

template <typename Client = EC2Client>
struct DescribeTransitGatewayMulticastDomainsPaginationTraits {
  using RequestType = Model::DescribeTransitGatewayMulticastDomainsRequest;
  using ResultType = Model::DescribeTransitGatewayMulticastDomainsResponse;
  using OutcomeType = Model::DescribeTransitGatewayMulticastDomainsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeTransitGatewayMulticastDomains(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EC2
}  // namespace Aws
