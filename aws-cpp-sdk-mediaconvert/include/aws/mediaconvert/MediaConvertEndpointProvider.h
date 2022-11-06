/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediaconvert/MediaConvertEndpointRules.h>


namespace Aws
{
namespace MediaConvert
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MediaConvertClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MediaConvertClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MediaConvertBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MediaConvert Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaConvertEndpointProviderBase =
    EndpointProviderBase<MediaConvertClientConfiguration, MediaConvertBuiltInParameters, MediaConvertClientContextParameters>;

using MediaConvertDefaultEpProviderBase =
    DefaultEndpointProvider<MediaConvertClientConfiguration, MediaConvertBuiltInParameters, MediaConvertClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIACONVERT_API MediaConvertEndpointProvider : public MediaConvertDefaultEpProviderBase
{
public:
    using MediaConvertResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MediaConvertEndpointProvider()
      : MediaConvertDefaultEpProviderBase(Aws::MediaConvert::MediaConvertEndpointRules::Rules)
    {}

    ~MediaConvertEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MediaConvert
} // namespace Aws
