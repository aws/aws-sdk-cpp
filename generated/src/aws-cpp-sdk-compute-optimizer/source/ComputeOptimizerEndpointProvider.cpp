/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/ComputeOptimizerEndpointProvider.h>
#include <aws/compute-optimizer/internal/ComputeOptimizerEndpointRules.h>

namespace Aws {
namespace ComputeOptimizer {
namespace Endpoint {
ComputeOptimizerEndpointProvider::ComputeOptimizerEndpointProvider()
    : ComputeOptimizerDefaultEpProviderBase(Aws::ComputeOptimizer::ComputeOptimizerEndpointRules::GetRulesBlob(),
                                            Aws::ComputeOptimizer::ComputeOptimizerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ComputeOptimizer
}  // namespace Aws
