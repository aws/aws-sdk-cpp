/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2Client.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/DescribeSpotPriceHistoryRequest.h>
#include <aws/ec2/model/DescribeSpotPriceHistoryResponse.h>

namespace Aws {
namespace EC2 {
namespace Pagination {

struct DescribeSpotPriceHistoryPaginationTraits {
  using RequestType = Model::DescribeSpotPriceHistoryRequest;
  using ResultType = Model::DescribeSpotPriceHistoryResponse;
  using OutcomeType = Model::DescribeSpotPriceHistoryOutcome;
  using ClientType = EC2Client;

  static OutcomeType Invoke(ClientType& client, const RequestType& request) { return client.DescribeSpotPriceHistory(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EC2
}  // namespace Aws
