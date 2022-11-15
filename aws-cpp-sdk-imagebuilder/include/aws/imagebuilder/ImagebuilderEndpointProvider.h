/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/imagebuilder/ImagebuilderEndpointRules.h>


namespace Aws
{
namespace imagebuilder
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ImagebuilderClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ImagebuilderClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ImagebuilderBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the imagebuilder Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ImagebuilderEndpointProviderBase =
    EndpointProviderBase<ImagebuilderClientConfiguration, ImagebuilderBuiltInParameters, ImagebuilderClientContextParameters>;

using ImagebuilderDefaultEpProviderBase =
    DefaultEndpointProvider<ImagebuilderClientConfiguration, ImagebuilderBuiltInParameters, ImagebuilderClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IMAGEBUILDER_API ImagebuilderEndpointProvider : public ImagebuilderDefaultEpProviderBase
{
public:
    using ImagebuilderResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ImagebuilderEndpointProvider()
      : ImagebuilderDefaultEpProviderBase(Aws::imagebuilder::ImagebuilderEndpointRules::Rules)
    {}

    ~ImagebuilderEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace imagebuilder
} // namespace Aws
