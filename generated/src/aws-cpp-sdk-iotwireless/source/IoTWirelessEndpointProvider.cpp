/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/IoTWirelessEndpointProvider.h>
#include <aws/iotwireless/internal/IoTWirelessEndpointRules.h>

namespace Aws {
#ifndef AWS_IOTWIRELESS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoTWireless::Endpoint::IoTWirelessClientConfiguration,
                                                   IoTWireless::Endpoint::IoTWirelessBuiltInParameters,
                                                   IoTWireless::Endpoint::IoTWirelessClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoTWireless::Endpoint::IoTWirelessClientConfiguration,
                                                  IoTWireless::Endpoint::IoTWirelessBuiltInParameters,
                                                  IoTWireless::Endpoint::IoTWirelessClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoTWireless {
namespace Endpoint {
IoTWirelessEndpointProvider::IoTWirelessEndpointProvider()
    : IoTWirelessDefaultEpProviderBase(Aws::IoTWireless::IoTWirelessEndpointRules::GetRulesBlob(),
                                       Aws::IoTWireless::IoTWirelessEndpointRules::RulesBlobSize) {}

void IoTWirelessBuiltInParameters::SetFromClientConfiguration(const IoTWirelessClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTWirelessClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTWirelessBuiltInParameters::SetFromClientConfiguration(const IoTWirelessClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTWirelessClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTWirelessBuiltInParameters::SetServiceSpecificParameters(const IoTWirelessClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IoTWireless
}  // namespace Aws
