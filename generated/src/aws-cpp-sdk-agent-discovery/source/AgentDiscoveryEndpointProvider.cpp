/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/AgentDiscoveryEndpointProvider.h>
#include <aws/agent-discovery/internal/AgentDiscoveryEndpointRules.h>

namespace Aws {
namespace AgentDiscovery {
namespace Endpoint {
AgentDiscoveryEndpointProvider::AgentDiscoveryEndpointProvider()
    : AgentDiscoveryDefaultEpProviderBase(Aws::AgentDiscovery::AgentDiscoveryEndpointRules::GetRulesBlob(),
                                          Aws::AgentDiscovery::AgentDiscoveryEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AgentDiscovery
}  // namespace Aws
