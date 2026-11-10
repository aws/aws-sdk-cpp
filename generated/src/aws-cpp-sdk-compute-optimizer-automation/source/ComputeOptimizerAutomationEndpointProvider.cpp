/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationEndpointProvider.h>
#include <aws/compute-optimizer-automation/internal/ComputeOptimizerAutomationEndpointRules.h>

namespace Aws {
#ifndef AWS_COMPUTEOPTIMIZERAUTOMATION_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationClientConfiguration,
                                                   ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationBuiltInParameters,
                                                   ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationClientConfiguration,
                                                  ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationBuiltInParameters,
                                                  ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ComputeOptimizerAutomation {
namespace Endpoint {
ComputeOptimizerAutomationEndpointProvider::ComputeOptimizerAutomationEndpointProvider()
    : ComputeOptimizerAutomationDefaultEpProviderBase(
          Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationEndpointRules::GetRulesBlob(),
          Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationEndpointRules::RulesBlobSize) {}

void ComputeOptimizerAutomationBuiltInParameters::SetFromClientConfiguration(const ComputeOptimizerAutomationClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ComputeOptimizerAutomationClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ComputeOptimizerAutomationBuiltInParameters::SetFromClientConfiguration(const ComputeOptimizerAutomationClientConfiguration& config,
                                                                             const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ComputeOptimizerAutomationClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ComputeOptimizerAutomationBuiltInParameters::SetServiceSpecificParameters(
    const ComputeOptimizerAutomationClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
