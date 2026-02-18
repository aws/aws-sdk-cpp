/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2ServiceClientModel.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/DescribeTransitGatewayPeeringAttachmentsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayPeeringAttachmentsResponse.h>

namespace Aws {
namespace EC2 {
namespace Pagination {

template <typename Client = EC2Client>
struct DescribeTransitGatewayPeeringAttachmentsPaginationTraits {
  using RequestType = Model::DescribeTransitGatewayPeeringAttachmentsRequest;
  using ResultType = Model::DescribeTransitGatewayPeeringAttachmentsResponse;
  using OutcomeType = Model::DescribeTransitGatewayPeeringAttachmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->DescribeTransitGatewayPeeringAttachments(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EC2
}  // namespace Aws
