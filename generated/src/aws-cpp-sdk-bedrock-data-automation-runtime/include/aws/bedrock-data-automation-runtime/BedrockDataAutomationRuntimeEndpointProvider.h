﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeEndpointRules.h>


namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BedrockDataAutomationRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BedrockDataAutomationRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
using BedrockDataAutomationRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BedrockDataAutomationRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BedrockDataAutomationRuntimeEndpointProviderBase =
    EndpointProviderBase<BedrockDataAutomationRuntimeClientConfiguration, BedrockDataAutomationRuntimeBuiltInParameters, BedrockDataAutomationRuntimeClientContextParameters>;

using BedrockDataAutomationRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<BedrockDataAutomationRuntimeClientConfiguration, BedrockDataAutomationRuntimeBuiltInParameters, BedrockDataAutomationRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BEDROCKDATAAUTOMATIONRUNTIME_API BedrockDataAutomationRuntimeEndpointProvider : public BedrockDataAutomationRuntimeDefaultEpProviderBase
{
public:
    using BedrockDataAutomationRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BedrockDataAutomationRuntimeEndpointProvider()
      : BedrockDataAutomationRuntimeDefaultEpProviderBase(Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeEndpointRules::GetRulesBlob(), Aws::BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeEndpointRules::RulesBlobSize)
    {}

    ~BedrockDataAutomationRuntimeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
