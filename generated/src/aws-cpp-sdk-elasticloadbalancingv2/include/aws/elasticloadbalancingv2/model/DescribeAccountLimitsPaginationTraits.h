/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ServiceClientModel.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/DescribeAccountLimitsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeAccountLimitsResult.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Pagination {

template <typename Client = ElasticLoadBalancingv2Client>
struct DescribeAccountLimitsPaginationTraits {
  using RequestType = Model::DescribeAccountLimitsRequest;
  using ResultType = Model::DescribeAccountLimitsResult;
  using OutcomeType = Model::DescribeAccountLimitsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeAccountLimits(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
