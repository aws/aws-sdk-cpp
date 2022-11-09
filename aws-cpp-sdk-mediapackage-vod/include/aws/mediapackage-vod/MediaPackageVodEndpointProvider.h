/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediapackage-vod/MediaPackageVodEndpointRules.h>


namespace Aws
{
namespace MediaPackageVod
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MediaPackageVodClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MediaPackageVodClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MediaPackageVodBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MediaPackageVod Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaPackageVodEndpointProviderBase =
    EndpointProviderBase<MediaPackageVodClientConfiguration, MediaPackageVodBuiltInParameters, MediaPackageVodClientContextParameters>;

using MediaPackageVodDefaultEpProviderBase =
    DefaultEndpointProvider<MediaPackageVodClientConfiguration, MediaPackageVodBuiltInParameters, MediaPackageVodClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIAPACKAGEVOD_API MediaPackageVodEndpointProvider : public MediaPackageVodDefaultEpProviderBase
{
public:
    using MediaPackageVodResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MediaPackageVodEndpointProvider()
      : MediaPackageVodDefaultEpProviderBase(Aws::MediaPackageVod::MediaPackageVodEndpointRules::Rules)
    {}

    ~MediaPackageVodEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MediaPackageVod
} // namespace Aws
