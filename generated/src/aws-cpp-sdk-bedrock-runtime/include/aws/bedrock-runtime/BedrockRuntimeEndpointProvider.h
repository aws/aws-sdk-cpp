/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bedrock-runtime/BedrockRuntimeEndpointRules.h>


namespace Aws
{
namespace BedrockRuntime
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BedrockRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BedrockRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using BedrockRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BedrockRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockRuntimeEndpointProviderBase =
    EndpointProviderBase<BedrockRuntimeClientConfiguration, BedrockRuntimeBuiltInParameters, BedrockRuntimeClientContextParameters>;

using BedrockRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockRuntimeClientConfiguration, BedrockRuntimeBuiltInParameters, BedrockRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKRUNTIME_API BedrockRuntimeEndpointProvider : public BedrockRuntimeDefaultEpProviderBase
{
public:
    using BedrockRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BedrockRuntimeEndpointProvider()
      : BedrockRuntimeDefaultEpProviderBase(Aws::BedrockRuntime::BedrockRuntimeEndpointRules::GetRulesBlob(), Aws::BedrockRuntime::BedrockRuntimeEndpointRules::RulesBlobSize)
    {}

    ~BedrockRuntimeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BedrockRuntime
} // namespace Aws
