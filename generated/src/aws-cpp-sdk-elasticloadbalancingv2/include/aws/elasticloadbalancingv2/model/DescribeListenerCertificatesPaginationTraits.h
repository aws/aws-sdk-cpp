/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ServiceClientModel.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenerCertificatesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenerCertificatesResult.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Pagination {

template <typename Client = ElasticLoadBalancingv2Client>
struct DescribeListenerCertificatesPaginationTraits {
  using RequestType = Model::DescribeListenerCertificatesRequest;
  using ResultType = Model::DescribeListenerCertificatesResult;
  using OutcomeType = Model::DescribeListenerCertificatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeListenerCertificates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
