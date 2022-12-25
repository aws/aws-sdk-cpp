/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker-geospatial/SageMakerGeospatialEndpointRules.h>


namespace Aws
{
namespace SageMakerGeospatial
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SageMakerGeospatialClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SageMakerGeospatialClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SageMakerGeospatialBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SageMakerGeospatial Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerGeospatialEndpointProviderBase =
    EndpointProviderBase<SageMakerGeospatialClientConfiguration, SageMakerGeospatialBuiltInParameters, SageMakerGeospatialClientContextParameters>;

using SageMakerGeospatialDefaultEpProviderBase =
    DefaultEndpointProvider<SageMakerGeospatialClientConfiguration, SageMakerGeospatialBuiltInParameters, SageMakerGeospatialClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERGEOSPATIAL_API SageMakerGeospatialEndpointProvider : public SageMakerGeospatialDefaultEpProviderBase
{
public:
    using SageMakerGeospatialResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SageMakerGeospatialEndpointProvider()
      : SageMakerGeospatialDefaultEpProviderBase(Aws::SageMakerGeospatial::SageMakerGeospatialEndpointRules::Rules)
    {}

    ~SageMakerGeospatialEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SageMakerGeospatial
} // namespace Aws
