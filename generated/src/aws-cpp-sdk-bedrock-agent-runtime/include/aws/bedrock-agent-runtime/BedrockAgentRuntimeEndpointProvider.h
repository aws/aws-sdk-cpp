/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeEndpointRules.h>


namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BedrockAgentRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BedrockAgentRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using BedrockAgentRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BedrockAgentRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockAgentRuntimeEndpointProviderBase =
    EndpointProviderBase<BedrockAgentRuntimeClientConfiguration, BedrockAgentRuntimeBuiltInParameters, BedrockAgentRuntimeClientContextParameters>;

using BedrockAgentRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockAgentRuntimeClientConfiguration, BedrockAgentRuntimeBuiltInParameters, BedrockAgentRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKAGENTRUNTIME_API BedrockAgentRuntimeEndpointProvider : public BedrockAgentRuntimeDefaultEpProviderBase
{
public:
    using BedrockAgentRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BedrockAgentRuntimeEndpointProvider()
      : BedrockAgentRuntimeDefaultEpProviderBase(Aws::BedrockAgentRuntime::BedrockAgentRuntimeEndpointRules::GetRulesBlob(), Aws::BedrockAgentRuntime::BedrockAgentRuntimeEndpointRules::RulesBlobSize)
    {}

    ~BedrockAgentRuntimeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BedrockAgentRuntime
} // namespace Aws
