/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeClientConfiguration.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeEndpointRules.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Endpoint {
using BedrockAgentRuntimeClientConfiguration = Aws::BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BedrockAgentRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BEDROCKAGENTRUNTIME_API BedrockAgentRuntimeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BedrockAgentRuntimeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BedrockAgentRuntimeClientConfiguration& config);
};

/**
 * The type for the BedrockAgentRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockAgentRuntimeEndpointProviderBase =
    EndpointProviderBase<BedrockAgentRuntimeClientConfiguration, BedrockAgentRuntimeBuiltInParameters,
                         BedrockAgentRuntimeClientContextParameters>;

using BedrockAgentRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockAgentRuntimeClientConfiguration, BedrockAgentRuntimeBuiltInParameters,
                            BedrockAgentRuntimeClientContextParameters>;

}  // namespace Endpoint
}  // namespace BedrockAgentRuntime

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BEDROCKAGENTRUNTIME_EXTERN template class AWS_BEDROCKAGENTRUNTIME_API
    Aws::Endpoint::EndpointProviderBase<BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeClientConfiguration,
                                        BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeBuiltInParameters,
                                        BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeClientContextParameters>;

AWS_BEDROCKAGENTRUNTIME_EXTERN template class AWS_BEDROCKAGENTRUNTIME_API
    Aws::Endpoint::DefaultEndpointProvider<BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeClientConfiguration,
                                           BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeBuiltInParameters,
                                           BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeClientContextParameters>;
}  // namespace Endpoint

namespace BedrockAgentRuntime {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKAGENTRUNTIME_API BedrockAgentRuntimeEndpointProvider : public BedrockAgentRuntimeDefaultEpProviderBase {
 public:
  using BedrockAgentRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BedrockAgentRuntimeEndpointProvider()
      : BedrockAgentRuntimeDefaultEpProviderBase(Aws::BedrockAgentRuntime::BedrockAgentRuntimeEndpointRules::GetRulesBlob(),
                                                 Aws::BedrockAgentRuntime::BedrockAgentRuntimeEndpointRules::RulesBlobSize) {}

  ~BedrockAgentRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BedrockAgentRuntime
}  // namespace Aws
