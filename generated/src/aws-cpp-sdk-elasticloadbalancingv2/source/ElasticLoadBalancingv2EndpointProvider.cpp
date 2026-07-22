/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2EndpointProvider.h>
#include <aws/elasticloadbalancingv2/internal/ElasticLoadBalancingv2EndpointRules.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Endpoint {
ElasticLoadBalancingv2EndpointProvider::ElasticLoadBalancingv2EndpointProvider()
    : ElasticLoadBalancingv2DefaultEpProviderBase(Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2EndpointRules::GetRulesBlob(),
                                                  Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
