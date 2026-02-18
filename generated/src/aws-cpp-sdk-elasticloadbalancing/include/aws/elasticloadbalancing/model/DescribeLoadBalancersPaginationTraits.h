/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancingServiceClientModel.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersResult.h>

namespace Aws {
namespace ElasticLoadBalancing {
namespace Pagination {

template <typename Client = ElasticLoadBalancingClient>
struct DescribeLoadBalancersPaginationTraits {
  using RequestType = Model::DescribeLoadBalancersRequest;
  using ResultType = Model::DescribeLoadBalancersResult;
  using OutcomeType = Model::DescribeLoadBalancersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeLoadBalancers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace ElasticLoadBalancing
}  // namespace Aws
