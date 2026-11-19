/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistryClientConfiguration.h>
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AgentRegistry {
namespace Endpoint {
using AgentRegistryClientConfiguration = Aws::AgentRegistry::AgentRegistryClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AgentRegistryClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AGENTREGISTRY_API AgentRegistryBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AgentRegistryBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AgentRegistryClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AgentRegistryClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the AgentRegistry Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AgentRegistryEndpointProviderBase =
    EndpointProviderBase<AgentRegistryClientConfiguration, AgentRegistryBuiltInParameters, AgentRegistryClientContextParameters>;

using AgentRegistryDefaultEpProviderBase =
    BDDEndpointProvider<AgentRegistryClientConfiguration, AgentRegistryBuiltInParameters, AgentRegistryClientContextParameters>;

}  // namespace Endpoint
}  // namespace AgentRegistry

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AGENTREGISTRY_EXTERN template class AWS_AGENTREGISTRY_API Aws::Endpoint::EndpointProviderBase<
    AgentRegistry::Endpoint::AgentRegistryClientConfiguration, AgentRegistry::Endpoint::AgentRegistryBuiltInParameters,
    AgentRegistry::Endpoint::AgentRegistryClientContextParameters>;

AWS_AGENTREGISTRY_EXTERN template class AWS_AGENTREGISTRY_API Aws::Endpoint::BDDEndpointProvider<
    AgentRegistry::Endpoint::AgentRegistryClientConfiguration, AgentRegistry::Endpoint::AgentRegistryBuiltInParameters,
    AgentRegistry::Endpoint::AgentRegistryClientContextParameters>;
}  // namespace Endpoint

namespace AgentRegistry {
namespace Endpoint {
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
