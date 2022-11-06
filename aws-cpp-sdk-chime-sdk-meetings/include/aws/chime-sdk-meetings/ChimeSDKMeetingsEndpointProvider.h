/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsEndpointRules.h>


namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ChimeSDKMeetingsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ChimeSDKMeetingsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ChimeSDKMeetingsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ChimeSDKMeetings Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeSDKMeetingsEndpointProviderBase =
    EndpointProviderBase<ChimeSDKMeetingsClientConfiguration, ChimeSDKMeetingsBuiltInParameters, ChimeSDKMeetingsClientContextParameters>;

using ChimeSDKMeetingsDefaultEpProviderBase =
    DefaultEndpointProvider<ChimeSDKMeetingsClientConfiguration, ChimeSDKMeetingsBuiltInParameters, ChimeSDKMeetingsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CHIMESDKMEETINGS_API ChimeSDKMeetingsEndpointProvider : public ChimeSDKMeetingsDefaultEpProviderBase
{
public:
    using ChimeSDKMeetingsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ChimeSDKMeetingsEndpointProvider()
      : ChimeSDKMeetingsDefaultEpProviderBase(Aws::ChimeSDKMeetings::ChimeSDKMeetingsEndpointRules::Rules)
    {}

    ~ChimeSDKMeetingsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ChimeSDKMeetings
} // namespace Aws
