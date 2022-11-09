/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/panorama/PanoramaEndpointRules.h>


namespace Aws
{
namespace Panorama
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PanoramaClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PanoramaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PanoramaBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Panorama Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PanoramaEndpointProviderBase =
    EndpointProviderBase<PanoramaClientConfiguration, PanoramaBuiltInParameters, PanoramaClientContextParameters>;

using PanoramaDefaultEpProviderBase =
    DefaultEndpointProvider<PanoramaClientConfiguration, PanoramaBuiltInParameters, PanoramaClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PANORAMA_API PanoramaEndpointProvider : public PanoramaDefaultEpProviderBase
{
public:
    using PanoramaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PanoramaEndpointProvider()
      : PanoramaDefaultEpProviderBase(Aws::Panorama::PanoramaEndpointRules::Rules)
    {}

    ~PanoramaEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Panorama
} // namespace Aws
