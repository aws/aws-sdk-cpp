/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpointProvider.h>
#include <aws/elasticloadbalancing/internal/ElasticLoadBalancingEndpointRules.h>

namespace Aws {
namespace ElasticLoadBalancing {
namespace Endpoint {
ElasticLoadBalancingEndpointProvider::ElasticLoadBalancingEndpointProvider()
    : ElasticLoadBalancingDefaultEpProviderBase(Aws::ElasticLoadBalancing::ElasticLoadBalancingEndpointRules::GetRulesBlob(),
                                                Aws::ElasticLoadBalancing::ElasticLoadBalancingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ElasticLoadBalancing
}  // namespace Aws
