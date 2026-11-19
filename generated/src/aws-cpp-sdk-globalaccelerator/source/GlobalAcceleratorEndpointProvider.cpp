/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/GlobalAcceleratorEndpointProvider.h>
#include <aws/globalaccelerator/internal/GlobalAcceleratorEndpointRules.h>

namespace Aws {
#ifndef AWS_GLOBALACCELERATOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<GlobalAccelerator::Endpoint::GlobalAcceleratorClientConfiguration,
                                                   GlobalAccelerator::Endpoint::GlobalAcceleratorBuiltInParameters,
                                                   GlobalAccelerator::Endpoint::GlobalAcceleratorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<GlobalAccelerator::Endpoint::GlobalAcceleratorClientConfiguration,
                                                  GlobalAccelerator::Endpoint::GlobalAcceleratorBuiltInParameters,
                                                  GlobalAccelerator::Endpoint::GlobalAcceleratorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace GlobalAccelerator {
namespace Endpoint {
GlobalAcceleratorEndpointProvider::GlobalAcceleratorEndpointProvider()
    : GlobalAcceleratorDefaultEpProviderBase(Aws::GlobalAccelerator::GlobalAcceleratorEndpointRules::GetRulesBlob(),
                                             Aws::GlobalAccelerator::GlobalAcceleratorEndpointRules::RulesBlobSize) {}

void GlobalAcceleratorBuiltInParameters::SetFromClientConfiguration(const GlobalAcceleratorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GlobalAcceleratorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GlobalAcceleratorBuiltInParameters::SetFromClientConfiguration(const GlobalAcceleratorClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GlobalAcceleratorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GlobalAcceleratorBuiltInParameters::SetServiceSpecificParameters(const GlobalAcceleratorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace GlobalAccelerator
}  // namespace Aws
