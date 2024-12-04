/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bedrock-data-automation/BedrockDataAutomationEndpointRules.h>


namespace Aws
{
namespace BedrockDataAutomation
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BedrockDataAutomationClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BedrockDataAutomationClientConfiguration = Aws::Client::GenericClientConfiguration;
using BedrockDataAutomationBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BedrockDataAutomation Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockDataAutomationEndpointProviderBase =
    EndpointProviderBase<BedrockDataAutomationClientConfiguration, BedrockDataAutomationBuiltInParameters, BedrockDataAutomationClientContextParameters>;

using BedrockDataAutomationDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockDataAutomationClientConfiguration, BedrockDataAutomationBuiltInParameters, BedrockDataAutomationClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKDATAAUTOMATION_API BedrockDataAutomationEndpointProvider : public BedrockDataAutomationDefaultEpProviderBase
{
public:
    using BedrockDataAutomationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BedrockDataAutomationEndpointProvider()
      : BedrockDataAutomationDefaultEpProviderBase(Aws::BedrockDataAutomation::BedrockDataAutomationEndpointRules::GetRulesBlob(), Aws::BedrockDataAutomation::BedrockDataAutomationEndpointRules::RulesBlobSize)
    {}

    ~BedrockDataAutomationEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BedrockDataAutomation
} // namespace Aws
