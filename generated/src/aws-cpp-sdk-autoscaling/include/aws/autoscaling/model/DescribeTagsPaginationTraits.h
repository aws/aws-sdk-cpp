/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScalingServiceClientModel.h>
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/DescribeTagsRequest.h>
#include <aws/autoscaling/model/DescribeTagsResult.h>

namespace Aws {
namespace AutoScaling {
namespace Pagination {

template <typename Client = AutoScalingClient>
struct DescribeTagsPaginationTraits {
  using RequestType = Model::DescribeTagsRequest;
  using ResultType = Model::DescribeTagsResult;
  using OutcomeType = Model::DescribeTagsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeTags(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AutoScaling
}  // namespace Aws
