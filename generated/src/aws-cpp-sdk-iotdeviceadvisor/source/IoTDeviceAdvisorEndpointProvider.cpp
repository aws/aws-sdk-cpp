/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/IoTDeviceAdvisorEndpointProvider.h>
#include <aws/iotdeviceadvisor/internal/IoTDeviceAdvisorEndpointRules.h>

namespace Aws {
#ifndef AWS_IOTDEVICEADVISOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorClientConfiguration,
                                                   IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorBuiltInParameters,
                                                   IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorClientConfiguration,
                                                  IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorBuiltInParameters,
                                                  IoTDeviceAdvisor::Endpoint::IoTDeviceAdvisorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoTDeviceAdvisor {
namespace Endpoint {
IoTDeviceAdvisorEndpointProvider::IoTDeviceAdvisorEndpointProvider()
    : IoTDeviceAdvisorDefaultEpProviderBase(Aws::IoTDeviceAdvisor::IoTDeviceAdvisorEndpointRules::GetRulesBlob(),
                                            Aws::IoTDeviceAdvisor::IoTDeviceAdvisorEndpointRules::RulesBlobSize) {}

void IoTDeviceAdvisorBuiltInParameters::SetFromClientConfiguration(const IoTDeviceAdvisorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTDeviceAdvisorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTDeviceAdvisorBuiltInParameters::SetFromClientConfiguration(const IoTDeviceAdvisorClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTDeviceAdvisorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTDeviceAdvisorBuiltInParameters::SetServiceSpecificParameters(const IoTDeviceAdvisorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IoTDeviceAdvisor
}  // namespace Aws
