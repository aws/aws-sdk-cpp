/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScalingServiceClientModel.h>
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesRequest.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesResult.h>

namespace Aws {
namespace ApplicationAutoScaling {
namespace Pagination {

template <typename Client = ApplicationAutoScalingClient>
struct DescribeScalingPoliciesPaginationTraits {
  using RequestType = Model::DescribeScalingPoliciesRequest;
  using ResultType = Model::DescribeScalingPoliciesResult;
  using OutcomeType = Model::DescribeScalingPoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeScalingPolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationAutoScaling
}  // namespace Aws
