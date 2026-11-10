/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/IoTThingsGraphEndpointProvider.h>
#include <aws/iotthingsgraph/internal/IoTThingsGraphEndpointRules.h>

namespace Aws {
#ifndef AWS_IOTTHINGSGRAPH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoTThingsGraph::Endpoint::IoTThingsGraphClientConfiguration,
                                                   IoTThingsGraph::Endpoint::IoTThingsGraphBuiltInParameters,
                                                   IoTThingsGraph::Endpoint::IoTThingsGraphClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoTThingsGraph::Endpoint::IoTThingsGraphClientConfiguration,
                                                  IoTThingsGraph::Endpoint::IoTThingsGraphBuiltInParameters,
                                                  IoTThingsGraph::Endpoint::IoTThingsGraphClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoTThingsGraph {
namespace Endpoint {
IoTThingsGraphEndpointProvider::IoTThingsGraphEndpointProvider()
    : IoTThingsGraphDefaultEpProviderBase(Aws::IoTThingsGraph::IoTThingsGraphEndpointRules::GetRulesBlob(),
                                          Aws::IoTThingsGraph::IoTThingsGraphEndpointRules::RulesBlobSize) {}

void IoTThingsGraphBuiltInParameters::SetFromClientConfiguration(const IoTThingsGraphClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTThingsGraphClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTThingsGraphBuiltInParameters::SetFromClientConfiguration(const IoTThingsGraphClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTThingsGraphClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTThingsGraphBuiltInParameters::SetServiceSpecificParameters(const IoTThingsGraphClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IoTThingsGraph
}  // namespace Aws
