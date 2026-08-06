/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/AgentRegistryEndpointProvider.h>
#include <aws/agent-registry/internal/AgentRegistryEndpointRules.h>

namespace Aws {
namespace AgentRegistry {
namespace Endpoint {
AgentRegistryEndpointProvider::AgentRegistryEndpointProvider()
    : AgentRegistryDefaultEpProviderBase(Aws::AgentRegistry::AgentRegistryEndpointRules::GetRulesBlob(),
                                         Aws::AgentRegistry::AgentRegistryEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AgentRegistry
}  // namespace Aws
