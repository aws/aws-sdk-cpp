/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bedrock-agentcore/BedrockAgentCoreEndpointRules.h>


namespace Aws
{
namespace BedrockAgentCore
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BedrockAgentCoreClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BedrockAgentCoreClientConfiguration = Aws::Client::GenericClientConfiguration;
using BedrockAgentCoreBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BedrockAgentCore Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockAgentCoreEndpointProviderBase =
    EndpointProviderBase<BedrockAgentCoreClientConfiguration, BedrockAgentCoreBuiltInParameters, BedrockAgentCoreClientContextParameters>;

using BedrockAgentCoreDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockAgentCoreClientConfiguration, BedrockAgentCoreBuiltInParameters, BedrockAgentCoreClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKAGENTCORE_API BedrockAgentCoreEndpointProvider : public BedrockAgentCoreDefaultEpProviderBase
{
public:
    using BedrockAgentCoreResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BedrockAgentCoreEndpointProvider()
      : BedrockAgentCoreDefaultEpProviderBase(Aws::BedrockAgentCore::BedrockAgentCoreEndpointRules::GetRulesBlob(), Aws::BedrockAgentCore::BedrockAgentCoreEndpointRules::RulesBlobSize)
    {}

    ~BedrockAgentCoreEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BedrockAgentCore
} // namespace Aws
