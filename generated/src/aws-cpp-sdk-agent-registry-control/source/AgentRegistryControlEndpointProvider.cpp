/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/AgentRegistryControlEndpointProvider.h>
#include <aws/agent-registry-control/internal/AgentRegistryControlEndpointRules.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Endpoint {
AgentRegistryControlEndpointProvider::AgentRegistryControlEndpointProvider()
    : AgentRegistryControlDefaultEpProviderBase(Aws::AgentRegistryControl::AgentRegistryControlEndpointRules::GetRulesBlob(),
                                                Aws::AgentRegistryControl::AgentRegistryControlEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AgentRegistryControl
}  // namespace Aws
