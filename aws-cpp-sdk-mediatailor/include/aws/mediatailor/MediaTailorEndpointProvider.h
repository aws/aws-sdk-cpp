/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediatailor/MediaTailorEndpointRules.h>


namespace Aws
{
namespace MediaTailor
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MediaTailorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MediaTailorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MediaTailorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MediaTailor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaTailorEndpointProviderBase =
    EndpointProviderBase<MediaTailorClientConfiguration, MediaTailorBuiltInParameters, MediaTailorClientContextParameters>;

using MediaTailorDefaultEpProviderBase =
    DefaultEndpointProvider<MediaTailorClientConfiguration, MediaTailorBuiltInParameters, MediaTailorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIATAILOR_API MediaTailorEndpointProvider : public MediaTailorDefaultEpProviderBase
{
public:
    using MediaTailorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MediaTailorEndpointProvider()
      : MediaTailorDefaultEpProviderBase(Aws::MediaTailor::MediaTailorEndpointRules::Rules)
    {}

    ~MediaTailorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MediaTailor
} // namespace Aws
