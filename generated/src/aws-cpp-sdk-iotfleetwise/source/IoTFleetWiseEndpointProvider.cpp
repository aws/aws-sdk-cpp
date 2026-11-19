/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/IoTFleetWiseEndpointProvider.h>
#include <aws/iotfleetwise/internal/IoTFleetWiseEndpointRules.h>

namespace Aws {
#ifndef AWS_IOTFLEETWISE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoTFleetWise::Endpoint::IoTFleetWiseClientConfiguration,
                                                   IoTFleetWise::Endpoint::IoTFleetWiseBuiltInParameters,
                                                   IoTFleetWise::Endpoint::IoTFleetWiseClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoTFleetWise::Endpoint::IoTFleetWiseClientConfiguration,
                                                  IoTFleetWise::Endpoint::IoTFleetWiseBuiltInParameters,
                                                  IoTFleetWise::Endpoint::IoTFleetWiseClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoTFleetWise {
namespace Endpoint {
IoTFleetWiseEndpointProvider::IoTFleetWiseEndpointProvider()
    : IoTFleetWiseDefaultEpProviderBase(Aws::IoTFleetWise::IoTFleetWiseEndpointRules::GetRulesBlob(),
                                        Aws::IoTFleetWise::IoTFleetWiseEndpointRules::RulesBlobSize) {}

void IoTFleetWiseBuiltInParameters::SetFromClientConfiguration(const IoTFleetWiseClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTFleetWiseClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTFleetWiseBuiltInParameters::SetFromClientConfiguration(const IoTFleetWiseClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTFleetWiseClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTFleetWiseBuiltInParameters::SetServiceSpecificParameters(const IoTFleetWiseClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IoTFleetWise
}  // namespace Aws
