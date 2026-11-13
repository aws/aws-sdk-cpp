/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlClientConfiguration.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Endpoint {
using BedrockAgentCoreControlClientConfiguration = Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BedrockAgentCoreControlClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BEDROCKAGENTCORECONTROL_API BedrockAgentCoreControlBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BedrockAgentCoreControlBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BedrockAgentCoreControlClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BedrockAgentCoreControlClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BedrockAgentCoreControlClientConfiguration& config);
};

/**
 * The type for the BedrockAgentCoreControl Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockAgentCoreControlEndpointProviderBase =
    EndpointProviderBase<BedrockAgentCoreControlClientConfiguration, BedrockAgentCoreControlBuiltInParameters,
                         BedrockAgentCoreControlClientContextParameters>;

using BedrockAgentCoreControlDefaultEpProviderBase =
    BDDEndpointProvider<BedrockAgentCoreControlClientConfiguration, BedrockAgentCoreControlBuiltInParameters,
                        BedrockAgentCoreControlClientContextParameters>;

}  // namespace Endpoint
}  // namespace BedrockAgentCoreControl

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BEDROCKAGENTCORECONTROL_EXTERN template class AWS_BEDROCKAGENTCORECONTROL_API
    Aws::Endpoint::EndpointProviderBase<BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlClientConfiguration,
                                        BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlBuiltInParameters,
                                        BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlClientContextParameters>;

AWS_BEDROCKAGENTCORECONTROL_EXTERN template class AWS_BEDROCKAGENTCORECONTROL_API
    Aws::Endpoint::BDDEndpointProvider<BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlClientConfiguration,
                                       BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlBuiltInParameters,
                                       BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlClientContextParameters>;
}  // namespace Endpoint

namespace BedrockAgentCoreControl {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKAGENTCORECONTROL_API BedrockAgentCoreControlEndpointProvider : public BedrockAgentCoreControlDefaultEpProviderBase {
 public:
  using BedrockAgentCoreControlResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BedrockAgentCoreControlEndpointProvider();

  ~BedrockAgentCoreControlEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
