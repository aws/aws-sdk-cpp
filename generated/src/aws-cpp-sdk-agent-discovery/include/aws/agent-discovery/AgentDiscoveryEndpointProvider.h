/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AgentDiscovery {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AgentDiscoveryClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AgentDiscoveryClientConfiguration = Aws::Client::GenericClientConfiguration;
using AgentDiscoveryBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AgentDiscovery Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AgentDiscoveryEndpointProviderBase =
    EndpointProviderBase<AgentDiscoveryClientConfiguration, AgentDiscoveryBuiltInParameters, AgentDiscoveryClientContextParameters>;

using AgentDiscoveryDefaultEpProviderBase =
    BDDEndpointProvider<AgentDiscoveryClientConfiguration, AgentDiscoveryBuiltInParameters, AgentDiscoveryClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AGENTDISCOVERY_API AgentDiscoveryEndpointProvider : public AgentDiscoveryDefaultEpProviderBase {
 public:
  using AgentDiscoveryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AgentDiscoveryEndpointProvider();

  ~AgentDiscoveryEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AgentDiscovery
}  // namespace Aws
