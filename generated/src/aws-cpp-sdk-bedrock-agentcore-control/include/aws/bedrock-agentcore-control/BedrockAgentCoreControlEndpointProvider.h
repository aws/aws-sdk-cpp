/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlEndpointRules.h>


namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BedrockAgentCoreControlClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BedrockAgentCoreControlClientConfiguration = Aws::Client::GenericClientConfiguration;
using BedrockAgentCoreControlBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BedrockAgentCoreControl Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockAgentCoreControlEndpointProviderBase =
    EndpointProviderBase<BedrockAgentCoreControlClientConfiguration, BedrockAgentCoreControlBuiltInParameters, BedrockAgentCoreControlClientContextParameters>;

using BedrockAgentCoreControlDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockAgentCoreControlClientConfiguration, BedrockAgentCoreControlBuiltInParameters, BedrockAgentCoreControlClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKAGENTCORECONTROL_API BedrockAgentCoreControlEndpointProvider : public BedrockAgentCoreControlDefaultEpProviderBase
{
public:
    using BedrockAgentCoreControlResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BedrockAgentCoreControlEndpointProvider()
      : BedrockAgentCoreControlDefaultEpProviderBase(Aws::BedrockAgentCoreControl::BedrockAgentCoreControlEndpointRules::GetRulesBlob(), Aws::BedrockAgentCoreControl::BedrockAgentCoreControlEndpointRules::RulesBlobSize)
    {}

    ~BedrockAgentCoreControlEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BedrockAgentCoreControl
} // namespace Aws
