/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/medialive/MediaLiveEndpointRules.h>


namespace Aws
{
namespace MediaLive
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MediaLiveClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MediaLiveClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MediaLiveBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MediaLive Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaLiveEndpointProviderBase =
    EndpointProviderBase<MediaLiveClientConfiguration, MediaLiveBuiltInParameters, MediaLiveClientContextParameters>;

using MediaLiveDefaultEpProviderBase =
    DefaultEndpointProvider<MediaLiveClientConfiguration, MediaLiveBuiltInParameters, MediaLiveClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIALIVE_API MediaLiveEndpointProvider : public MediaLiveDefaultEpProviderBase
{
public:
    using MediaLiveResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MediaLiveEndpointProvider()
      : MediaLiveDefaultEpProviderBase(Aws::MediaLive::MediaLiveEndpointRules::Rules)
    {}

    ~MediaLiveEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MediaLive
} // namespace Aws
