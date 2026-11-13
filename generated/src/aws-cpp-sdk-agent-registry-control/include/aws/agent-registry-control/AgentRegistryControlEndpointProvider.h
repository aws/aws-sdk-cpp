/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlClientConfiguration.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Endpoint {
using AgentRegistryControlClientConfiguration = Aws::AgentRegistryControl::AgentRegistryControlClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AgentRegistryControlClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AGENTREGISTRYCONTROL_API AgentRegistryControlBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AgentRegistryControlBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AgentRegistryControlClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AgentRegistryControlClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the AgentRegistryControl Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AgentRegistryControlEndpointProviderBase =
    EndpointProviderBase<AgentRegistryControlClientConfiguration, AgentRegistryControlBuiltInParameters,
                         AgentRegistryControlClientContextParameters>;

using AgentRegistryControlDefaultEpProviderBase =
    BDDEndpointProvider<AgentRegistryControlClientConfiguration, AgentRegistryControlBuiltInParameters,
                        AgentRegistryControlClientContextParameters>;

}  // namespace Endpoint
}  // namespace AgentRegistryControl

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AGENTREGISTRYCONTROL_EXTERN template class AWS_AGENTREGISTRYCONTROL_API
    Aws::Endpoint::EndpointProviderBase<AgentRegistryControl::Endpoint::AgentRegistryControlClientConfiguration,
                                        AgentRegistryControl::Endpoint::AgentRegistryControlBuiltInParameters,
                                        AgentRegistryControl::Endpoint::AgentRegistryControlClientContextParameters>;

AWS_AGENTREGISTRYCONTROL_EXTERN template class AWS_AGENTREGISTRYCONTROL_API
    Aws::Endpoint::BDDEndpointProvider<AgentRegistryControl::Endpoint::AgentRegistryControlClientConfiguration,
                                       AgentRegistryControl::Endpoint::AgentRegistryControlBuiltInParameters,
                                       AgentRegistryControl::Endpoint::AgentRegistryControlClientContextParameters>;
}  // namespace Endpoint

namespace AgentRegistryControl {
namespace Endpoint {
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
