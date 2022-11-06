/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker/SageMakerEndpointRules.h>


namespace Aws
{
namespace SageMaker
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SageMakerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SageMakerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SageMakerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SageMaker Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerEndpointProviderBase =
    EndpointProviderBase<SageMakerClientConfiguration, SageMakerBuiltInParameters, SageMakerClientContextParameters>;

using SageMakerDefaultEpProviderBase =
    DefaultEndpointProvider<SageMakerClientConfiguration, SageMakerBuiltInParameters, SageMakerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKER_API SageMakerEndpointProvider : public SageMakerDefaultEpProviderBase
{
public:
    using SageMakerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SageMakerEndpointProvider()
      : SageMakerDefaultEpProviderBase(Aws::SageMaker::SageMakerEndpointRules::Rules)
    {}

    ~SageMakerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SageMaker
} // namespace Aws
