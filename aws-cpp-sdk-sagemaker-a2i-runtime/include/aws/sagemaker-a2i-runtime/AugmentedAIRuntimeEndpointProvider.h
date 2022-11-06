/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeEndpointRules.h>


namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AugmentedAIRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AugmentedAIRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AugmentedAIRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AugmentedAIRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AugmentedAIRuntimeEndpointProviderBase =
    EndpointProviderBase<AugmentedAIRuntimeClientConfiguration, AugmentedAIRuntimeBuiltInParameters, AugmentedAIRuntimeClientContextParameters>;

using AugmentedAIRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<AugmentedAIRuntimeClientConfiguration, AugmentedAIRuntimeBuiltInParameters, AugmentedAIRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AUGMENTEDAIRUNTIME_API AugmentedAIRuntimeEndpointProvider : public AugmentedAIRuntimeDefaultEpProviderBase
{
public:
    using AugmentedAIRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AugmentedAIRuntimeEndpointProvider()
      : AugmentedAIRuntimeDefaultEpProviderBase(Aws::AugmentedAIRuntime::AugmentedAIRuntimeEndpointRules::Rules)
    {}

    ~AugmentedAIRuntimeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AugmentedAIRuntime
} // namespace Aws
