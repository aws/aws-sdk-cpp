/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/DeviceFarmEndpointProvider.h>
#include <aws/devicefarm/internal/DeviceFarmEndpointRules.h>

namespace Aws {
#ifndef AWS_DEVICEFARM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DeviceFarm::Endpoint::DeviceFarmClientConfiguration,
                                                   DeviceFarm::Endpoint::DeviceFarmBuiltInParameters,
                                                   DeviceFarm::Endpoint::DeviceFarmClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DeviceFarm::Endpoint::DeviceFarmClientConfiguration,
                                                  DeviceFarm::Endpoint::DeviceFarmBuiltInParameters,
                                                  DeviceFarm::Endpoint::DeviceFarmClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DeviceFarm {
namespace Endpoint {
DeviceFarmEndpointProvider::DeviceFarmEndpointProvider()
    : DeviceFarmDefaultEpProviderBase(Aws::DeviceFarm::DeviceFarmEndpointRules::GetRulesBlob(),
                                      Aws::DeviceFarm::DeviceFarmEndpointRules::RulesBlobSize) {}

void DeviceFarmBuiltInParameters::SetFromClientConfiguration(const DeviceFarmClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DeviceFarmClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DeviceFarmBuiltInParameters::SetFromClientConfiguration(const DeviceFarmClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DeviceFarmClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DeviceFarmBuiltInParameters::SetServiceSpecificParameters(const DeviceFarmClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DeviceFarm
}  // namespace Aws
