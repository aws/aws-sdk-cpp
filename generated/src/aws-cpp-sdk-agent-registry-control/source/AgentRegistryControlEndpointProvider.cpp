/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/AgentRegistryControlEndpointProvider.h>
#include <aws/agent-registry-control/internal/AgentRegistryControlEndpointRules.h>

namespace Aws {
#ifndef AWS_AGENTREGISTRYCONTROL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AgentRegistryControl::Endpoint::AgentRegistryControlClientConfiguration,
                                                   AgentRegistryControl::Endpoint::AgentRegistryControlBuiltInParameters,
                                                   AgentRegistryControl::Endpoint::AgentRegistryControlClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AgentRegistryControl::Endpoint::AgentRegistryControlClientConfiguration,
                                                  AgentRegistryControl::Endpoint::AgentRegistryControlBuiltInParameters,
                                                  AgentRegistryControl::Endpoint::AgentRegistryControlClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AgentRegistryControl {
namespace Endpoint {
AgentRegistryControlEndpointProvider::AgentRegistryControlEndpointProvider()
    : AgentRegistryControlDefaultEpProviderBase(Aws::AgentRegistryControl::AgentRegistryControlEndpointRules::GetRulesBlob(),
                                                Aws::AgentRegistryControl::AgentRegistryControlEndpointRules::RulesBlobSize) {}

void AgentRegistryControlBuiltInParameters::SetFromClientConfiguration(const AgentRegistryControlClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AgentRegistryControlClientConfiguration::BaseClientConfigClass&>(config));
}

void AgentRegistryControlBuiltInParameters::SetFromClientConfiguration(const AgentRegistryControlClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AgentRegistryControlClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace AgentRegistryControl
}  // namespace Aws
