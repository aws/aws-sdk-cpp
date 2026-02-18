/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ServiceClientModel.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreAssociationsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreAssociationsResult.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Pagination {

template <typename Client = ElasticLoadBalancingv2Client>
struct DescribeTrustStoreAssociationsPaginationTraits {
  using RequestType = Model::DescribeTrustStoreAssociationsRequest;
  using ResultType = Model::DescribeTrustStoreAssociationsResult;
  using OutcomeType = Model::DescribeTrustStoreAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeTrustStoreAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
