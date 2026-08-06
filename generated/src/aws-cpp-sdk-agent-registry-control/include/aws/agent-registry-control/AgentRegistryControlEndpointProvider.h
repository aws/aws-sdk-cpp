/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AgentRegistryControlClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AgentRegistryControlClientConfiguration = Aws::Client::GenericClientConfiguration;
using AgentRegistryControlBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AgentRegistryControl Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AgentRegistryControlEndpointProviderBase =
    EndpointProviderBase<AgentRegistryControlClientConfiguration, AgentRegistryControlBuiltInParameters,
                         AgentRegistryControlClientContextParameters>;

using AgentRegistryControlDefaultEpProviderBase =
    DefaultEndpointProvider<AgentRegistryControlClientConfiguration, AgentRegistryControlBuiltInParameters,
                            AgentRegistryControlClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AGENTREGISTRYCONTROL_API AgentRegistryControlEndpointProvider : public AgentRegistryControlDefaultEpProviderBase {
 public:
  using AgentRegistryControlResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AgentRegistryControlEndpointProvider();

  ~AgentRegistryControlEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AgentRegistryControl
}  // namespace Aws
