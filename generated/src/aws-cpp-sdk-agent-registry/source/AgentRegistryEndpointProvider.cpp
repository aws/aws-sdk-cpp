/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/AgentRegistryEndpointProvider.h>
#include <aws/agent-registry/internal/AgentRegistryEndpointRules.h>

namespace Aws {
#ifndef AWS_AGENTREGISTRY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AgentRegistry::Endpoint::AgentRegistryClientConfiguration,
                                                   AgentRegistry::Endpoint::AgentRegistryBuiltInParameters,
                                                   AgentRegistry::Endpoint::AgentRegistryClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AgentRegistry::Endpoint::AgentRegistryClientConfiguration,
                                                  AgentRegistry::Endpoint::AgentRegistryBuiltInParameters,
                                                  AgentRegistry::Endpoint::AgentRegistryClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AgentRegistry {
namespace Endpoint {
AgentRegistryEndpointProvider::AgentRegistryEndpointProvider()
    : AgentRegistryDefaultEpProviderBase(Aws::AgentRegistry::AgentRegistryEndpointRules::GetRulesBlob(),
                                         Aws::AgentRegistry::AgentRegistryEndpointRules::RulesBlobSize) {}

void AgentRegistryBuiltInParameters::SetFromClientConfiguration(const AgentRegistryClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AgentRegistryClientConfiguration::BaseClientConfigClass&>(config));
}

void AgentRegistryBuiltInParameters::SetFromClientConfiguration(const AgentRegistryClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AgentRegistryClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace AgentRegistry
}  // namespace Aws
