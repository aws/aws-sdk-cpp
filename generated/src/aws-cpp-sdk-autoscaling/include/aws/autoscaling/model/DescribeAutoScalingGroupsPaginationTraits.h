/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScalingServiceClientModel.h>
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsResult.h>

namespace Aws {
namespace AutoScaling {
namespace Pagination {

template <typename Client = AutoScalingClient>
struct DescribeAutoScalingGroupsPaginationTraits {
  using RequestType = Model::DescribeAutoScalingGroupsRequest;
  using ResultType = Model::DescribeAutoScalingGroupsResult;
  using OutcomeType = Model::DescribeAutoScalingGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeAutoScalingGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AutoScaling
}  // namespace Aws
