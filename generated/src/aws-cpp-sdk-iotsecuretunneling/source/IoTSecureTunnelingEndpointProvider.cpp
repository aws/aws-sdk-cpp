/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/IoTSecureTunnelingEndpointProvider.h>
#include <aws/iotsecuretunneling/internal/IoTSecureTunnelingEndpointRules.h>

namespace Aws {
#ifndef AWS_IOTSECURETUNNELING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoTSecureTunneling::Endpoint::IoTSecureTunnelingClientConfiguration,
                                                   IoTSecureTunneling::Endpoint::IoTSecureTunnelingBuiltInParameters,
                                                   IoTSecureTunneling::Endpoint::IoTSecureTunnelingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoTSecureTunneling::Endpoint::IoTSecureTunnelingClientConfiguration,
                                                  IoTSecureTunneling::Endpoint::IoTSecureTunnelingBuiltInParameters,
                                                  IoTSecureTunneling::Endpoint::IoTSecureTunnelingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoTSecureTunneling {
namespace Endpoint {
IoTSecureTunnelingEndpointProvider::IoTSecureTunnelingEndpointProvider()
    : IoTSecureTunnelingDefaultEpProviderBase(Aws::IoTSecureTunneling::IoTSecureTunnelingEndpointRules::GetRulesBlob(),
                                              Aws::IoTSecureTunneling::IoTSecureTunnelingEndpointRules::RulesBlobSize) {}

void IoTSecureTunnelingBuiltInParameters::SetFromClientConfiguration(const IoTSecureTunnelingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTSecureTunnelingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTSecureTunnelingBuiltInParameters::SetFromClientConfiguration(const IoTSecureTunnelingClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTSecureTunnelingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTSecureTunnelingBuiltInParameters::SetServiceSpecificParameters(const IoTSecureTunnelingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IoTSecureTunneling
}  // namespace Aws
