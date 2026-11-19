/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/ComputeOptimizerEndpointProvider.h>
#include <aws/compute-optimizer/internal/ComputeOptimizerEndpointRules.h>

namespace Aws {
#ifndef AWS_COMPUTEOPTIMIZER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ComputeOptimizer::Endpoint::ComputeOptimizerClientConfiguration,
                                                   ComputeOptimizer::Endpoint::ComputeOptimizerBuiltInParameters,
                                                   ComputeOptimizer::Endpoint::ComputeOptimizerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ComputeOptimizer::Endpoint::ComputeOptimizerClientConfiguration,
                                                  ComputeOptimizer::Endpoint::ComputeOptimizerBuiltInParameters,
                                                  ComputeOptimizer::Endpoint::ComputeOptimizerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ComputeOptimizer {
namespace Endpoint {
ComputeOptimizerEndpointProvider::ComputeOptimizerEndpointProvider()
    : ComputeOptimizerDefaultEpProviderBase(Aws::ComputeOptimizer::ComputeOptimizerEndpointRules::GetRulesBlob(),
                                            Aws::ComputeOptimizer::ComputeOptimizerEndpointRules::RulesBlobSize) {}

void ComputeOptimizerBuiltInParameters::SetFromClientConfiguration(const ComputeOptimizerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ComputeOptimizerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ComputeOptimizerBuiltInParameters::SetFromClientConfiguration(const ComputeOptimizerClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ComputeOptimizerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ComputeOptimizerBuiltInParameters::SetServiceSpecificParameters(const ComputeOptimizerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ComputeOptimizer
}  // namespace Aws
