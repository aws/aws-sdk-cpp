/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediapackage/MediaPackageEndpointRules.h>


namespace Aws
{
namespace MediaPackage
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MediaPackageClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MediaPackageClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MediaPackageBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MediaPackage Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaPackageEndpointProviderBase =
    EndpointProviderBase<MediaPackageClientConfiguration, MediaPackageBuiltInParameters, MediaPackageClientContextParameters>;

using MediaPackageDefaultEpProviderBase =
    DefaultEndpointProvider<MediaPackageClientConfiguration, MediaPackageBuiltInParameters, MediaPackageClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIAPACKAGE_API MediaPackageEndpointProvider : public MediaPackageDefaultEpProviderBase
{
public:
    using MediaPackageResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MediaPackageEndpointProvider()
      : MediaPackageDefaultEpProviderBase(Aws::MediaPackage::MediaPackageEndpointRules::Rules)
    {}

    ~MediaPackageEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MediaPackage
} // namespace Aws
