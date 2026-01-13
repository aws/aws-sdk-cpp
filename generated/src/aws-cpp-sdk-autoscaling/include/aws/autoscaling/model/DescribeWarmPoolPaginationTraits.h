/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScalingServiceClientModel.h>
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/DescribeWarmPoolRequest.h>
#include <aws/autoscaling/model/DescribeWarmPoolResult.h>

namespace Aws {
namespace AutoScaling {
namespace Pagination {

template <typename Client = AutoScalingClient>
struct DescribeWarmPoolPaginationTraits {
  using RequestType = Model::DescribeWarmPoolRequest;
  using ResultType = Model::DescribeWarmPoolResult;
  using OutcomeType = Model::DescribeWarmPoolOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeWarmPool(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AutoScaling
}  // namespace Aws
