/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentClientConfiguration.h>
#include <aws/bedrock-agent/BedrockAgentEndpointRules.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BedrockAgent {
namespace Endpoint {
using BedrockAgentClientConfiguration = Aws::BedrockAgent::BedrockAgentClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BedrockAgentClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BEDROCKAGENT_API BedrockAgentBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BedrockAgentBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BedrockAgentClientConfiguration& config);
};

/**
 * The type for the BedrockAgent Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockAgentEndpointProviderBase =
    EndpointProviderBase<BedrockAgentClientConfiguration, BedrockAgentBuiltInParameters, BedrockAgentClientContextParameters>;

using BedrockAgentDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockAgentClientConfiguration, BedrockAgentBuiltInParameters, BedrockAgentClientContextParameters>;

}  // namespace Endpoint
}  // namespace BedrockAgent

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BEDROCKAGENT_EXTERN template class AWS_BEDROCKAGENT_API Aws::Endpoint::EndpointProviderBase<
    BedrockAgent::Endpoint::BedrockAgentClientConfiguration, BedrockAgent::Endpoint::BedrockAgentBuiltInParameters,
    BedrockAgent::Endpoint::BedrockAgentClientContextParameters>;

AWS_BEDROCKAGENT_EXTERN template class AWS_BEDROCKAGENT_API Aws::Endpoint::DefaultEndpointProvider<
    BedrockAgent::Endpoint::BedrockAgentClientConfiguration, BedrockAgent::Endpoint::BedrockAgentBuiltInParameters,
    BedrockAgent::Endpoint::BedrockAgentClientContextParameters>;
}  // namespace Endpoint

namespace BedrockAgent {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKAGENT_API BedrockAgentEndpointProvider : public BedrockAgentDefaultEpProviderBase {
 public:
  using BedrockAgentResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BedrockAgentEndpointProvider()
      : BedrockAgentDefaultEpProviderBase(Aws::BedrockAgent::BedrockAgentEndpointRules::GetRulesBlob(),
                                          Aws::BedrockAgent::BedrockAgentEndpointRules::RulesBlobSize) {}

  ~BedrockAgentEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BedrockAgent
}  // namespace Aws
