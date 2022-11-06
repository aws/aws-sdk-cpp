/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker-runtime/SageMakerRuntimeEndpointRules.h>


namespace Aws
{
namespace SageMakerRuntime
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SageMakerRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SageMakerRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SageMakerRuntimeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SageMakerRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerRuntimeEndpointProviderBase =
    EndpointProviderBase<SageMakerRuntimeClientConfiguration, SageMakerRuntimeBuiltInParameters, SageMakerRuntimeClientContextParameters>;

using SageMakerRuntimeDefaultEpProviderBase =
    DefaultEndpointProvider<SageMakerRuntimeClientConfiguration, SageMakerRuntimeBuiltInParameters, SageMakerRuntimeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERRUNTIME_API SageMakerRuntimeEndpointProvider : public SageMakerRuntimeDefaultEpProviderBase
{
public:
    using SageMakerRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SageMakerRuntimeEndpointProvider()
      : SageMakerRuntimeDefaultEpProviderBase(Aws::SageMakerRuntime::SageMakerRuntimeEndpointRules::Rules)
    {}

    ~SageMakerRuntimeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SageMakerRuntime
} // namespace Aws
