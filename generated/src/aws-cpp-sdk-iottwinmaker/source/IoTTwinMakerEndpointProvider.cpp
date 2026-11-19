/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/IoTTwinMakerEndpointProvider.h>
#include <aws/iottwinmaker/internal/IoTTwinMakerEndpointRules.h>

namespace Aws {
#ifndef AWS_IOTTWINMAKER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoTTwinMaker::Endpoint::IoTTwinMakerClientConfiguration,
                                                   IoTTwinMaker::Endpoint::IoTTwinMakerBuiltInParameters,
                                                   IoTTwinMaker::Endpoint::IoTTwinMakerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoTTwinMaker::Endpoint::IoTTwinMakerClientConfiguration,
                                                  IoTTwinMaker::Endpoint::IoTTwinMakerBuiltInParameters,
                                                  IoTTwinMaker::Endpoint::IoTTwinMakerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoTTwinMaker {
namespace Endpoint {
IoTTwinMakerEndpointProvider::IoTTwinMakerEndpointProvider()
    : IoTTwinMakerDefaultEpProviderBase(Aws::IoTTwinMaker::IoTTwinMakerEndpointRules::GetRulesBlob(),
                                        Aws::IoTTwinMaker::IoTTwinMakerEndpointRules::RulesBlobSize) {}

void IoTTwinMakerBuiltInParameters::SetFromClientConfiguration(const IoTTwinMakerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTTwinMakerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTTwinMakerBuiltInParameters::SetFromClientConfiguration(const IoTTwinMakerClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTTwinMakerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTTwinMakerBuiltInParameters::SetServiceSpecificParameters(const IoTTwinMakerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IoTTwinMaker
}  // namespace Aws
