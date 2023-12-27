/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bedrock/BedrockEndpointRules.h>


namespace Aws
{
namespace Bedrock
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BedrockClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BedrockClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using BedrockBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Bedrock Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockEndpointProviderBase =
    EndpointProviderBase<BedrockClientConfiguration, BedrockBuiltInParameters, BedrockClientContextParameters>;

using BedrockDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockClientConfiguration, BedrockBuiltInParameters, BedrockClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCK_API BedrockEndpointProvider : public BedrockDefaultEpProviderBase
{
public:
    using BedrockResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BedrockEndpointProvider()
      : BedrockDefaultEpProviderBase(Aws::Bedrock::BedrockEndpointRules::GetRulesBlob(), Aws::Bedrock::BedrockEndpointRules::RulesBlobSize)
    {}

    ~BedrockEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Bedrock
} // namespace Aws
