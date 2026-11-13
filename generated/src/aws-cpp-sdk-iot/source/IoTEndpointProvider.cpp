/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/IoTEndpointProvider.h>
#include <aws/iot/internal/IoTEndpointRules.h>

namespace Aws {
#ifndef AWS_IOT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoT::Endpoint::IoTClientConfiguration, IoT::Endpoint::IoTBuiltInParameters,
                                                   IoT::Endpoint::IoTClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoT::Endpoint::IoTClientConfiguration, IoT::Endpoint::IoTBuiltInParameters,
                                                  IoT::Endpoint::IoTClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoT {
namespace Endpoint {
IoTEndpointProvider::IoTEndpointProvider()
    : IoTDefaultEpProviderBase(Aws::IoT::IoTEndpointRules::GetRulesBlob(), Aws::IoT::IoTEndpointRules::RulesBlobSize) {}

void IoTBuiltInParameters::SetFromClientConfiguration(const IoTClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTBuiltInParameters::SetFromClientConfiguration(const IoTClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTBuiltInParameters::SetServiceSpecificParameters(const IoTClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IoT
}  // namespace Aws
