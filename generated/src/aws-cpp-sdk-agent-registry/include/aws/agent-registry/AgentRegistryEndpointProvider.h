/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AgentRegistry {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AgentRegistryClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AgentRegistryClientConfiguration = Aws::Client::GenericClientConfiguration;
using AgentRegistryBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AgentRegistry Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AgentRegistryEndpointProviderBase =
    EndpointProviderBase<AgentRegistryClientConfiguration, AgentRegistryBuiltInParameters, AgentRegistryClientContextParameters>;

using AgentRegistryDefaultEpProviderBase =
    DefaultEndpointProvider<AgentRegistryClientConfiguration, AgentRegistryBuiltInParameters, AgentRegistryClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AGENTREGISTRY_API AgentRegistryEndpointProvider : public AgentRegistryDefaultEpProviderBase {
 public:
  using AgentRegistryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AgentRegistryEndpointProvider();

  ~AgentRegistryEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AgentRegistry
}  // namespace Aws
