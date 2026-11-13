/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreClientConfiguration.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Endpoint {
using BedrockAgentCoreClientConfiguration = Aws::BedrockAgentCore::BedrockAgentCoreClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BedrockAgentCoreClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BEDROCKAGENTCORE_API BedrockAgentCoreBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BedrockAgentCoreBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BedrockAgentCoreClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BedrockAgentCoreClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BedrockAgentCoreClientConfiguration& config);
};

/**
 * The type for the BedrockAgentCore Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockAgentCoreEndpointProviderBase =
    EndpointProviderBase<BedrockAgentCoreClientConfiguration, BedrockAgentCoreBuiltInParameters, BedrockAgentCoreClientContextParameters>;

using BedrockAgentCoreDefaultEpProviderBase =
    BDDEndpointProvider<BedrockAgentCoreClientConfiguration, BedrockAgentCoreBuiltInParameters, BedrockAgentCoreClientContextParameters>;

}  // namespace Endpoint
}  // namespace BedrockAgentCore

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BEDROCKAGENTCORE_EXTERN template class AWS_BEDROCKAGENTCORE_API Aws::Endpoint::EndpointProviderBase<
    BedrockAgentCore::Endpoint::BedrockAgentCoreClientConfiguration, BedrockAgentCore::Endpoint::BedrockAgentCoreBuiltInParameters,
    BedrockAgentCore::Endpoint::BedrockAgentCoreClientContextParameters>;

AWS_BEDROCKAGENTCORE_EXTERN template class AWS_BEDROCKAGENTCORE_API Aws::Endpoint::BDDEndpointProvider<
    BedrockAgentCore::Endpoint::BedrockAgentCoreClientConfiguration, BedrockAgentCore::Endpoint::BedrockAgentCoreBuiltInParameters,
    BedrockAgentCore::Endpoint::BedrockAgentCoreClientContextParameters>;
}  // namespace Endpoint

namespace BedrockAgentCore {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKAGENTCORE_API BedrockAgentCoreEndpointProvider : public BedrockAgentCoreDefaultEpProviderBase {
 public:
  using BedrockAgentCoreResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BedrockAgentCoreEndpointProvider();

  ~BedrockAgentCoreEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BedrockAgentCore
}  // namespace Aws
