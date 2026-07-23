/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/CostOptimizationHubEndpointProvider.h>
#include <aws/cost-optimization-hub/internal/CostOptimizationHubEndpointRules.h>

namespace Aws {
namespace CostOptimizationHub {
namespace Endpoint {
CostOptimizationHubEndpointProvider::CostOptimizationHubEndpointProvider()
    : CostOptimizationHubDefaultEpProviderBase(Aws::CostOptimizationHub::CostOptimizationHubEndpointRules::GetRulesBlob(),
                                               Aws::CostOptimizationHub::CostOptimizationHubEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CostOptimizationHub
}  // namespace Aws
