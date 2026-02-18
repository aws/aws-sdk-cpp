/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ServiceClientModel.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/DescribeRulesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeRulesResult.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Pagination {

template <typename Client = ElasticLoadBalancingv2Client>
struct DescribeRulesPaginationTraits {
  using RequestType = Model::DescribeRulesRequest;
  using ResultType = Model::DescribeRulesResult;
  using OutcomeType = Model::DescribeRulesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeRules(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
