/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScalingServiceClientModel.h>
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsRequest.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsResult.h>

namespace Aws {
namespace ApplicationAutoScaling {
namespace Pagination {

template <typename Client = ApplicationAutoScalingClient>
struct DescribeScalableTargetsPaginationTraits {
  using RequestType = Model::DescribeScalableTargetsRequest;
  using ResultType = Model::DescribeScalableTargetsResult;
  using OutcomeType = Model::DescribeScalableTargetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeScalableTargets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationAutoScaling
}  // namespace Aws
