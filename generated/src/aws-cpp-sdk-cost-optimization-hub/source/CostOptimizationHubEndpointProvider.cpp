/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/CostOptimizationHubEndpointProvider.h>
#include <aws/cost-optimization-hub/internal/CostOptimizationHubEndpointRules.h>

namespace Aws {
#ifndef AWS_COSTOPTIMIZATIONHUB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CostOptimizationHub::Endpoint::CostOptimizationHubClientConfiguration,
                                                   CostOptimizationHub::Endpoint::CostOptimizationHubBuiltInParameters,
                                                   CostOptimizationHub::Endpoint::CostOptimizationHubClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CostOptimizationHub::Endpoint::CostOptimizationHubClientConfiguration,
                                                  CostOptimizationHub::Endpoint::CostOptimizationHubBuiltInParameters,
                                                  CostOptimizationHub::Endpoint::CostOptimizationHubClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CostOptimizationHub {
namespace Endpoint {
CostOptimizationHubEndpointProvider::CostOptimizationHubEndpointProvider()
    : CostOptimizationHubDefaultEpProviderBase(Aws::CostOptimizationHub::CostOptimizationHubEndpointRules::GetRulesBlob(),
                                               Aws::CostOptimizationHub::CostOptimizationHubEndpointRules::RulesBlobSize) {}

void CostOptimizationHubBuiltInParameters::SetFromClientConfiguration(const CostOptimizationHubClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CostOptimizationHubClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CostOptimizationHubBuiltInParameters::SetFromClientConfiguration(const CostOptimizationHubClientConfiguration& config,
                                                                      const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CostOptimizationHubClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CostOptimizationHubBuiltInParameters::SetServiceSpecificParameters(const CostOptimizationHubClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CostOptimizationHub
}  // namespace Aws
