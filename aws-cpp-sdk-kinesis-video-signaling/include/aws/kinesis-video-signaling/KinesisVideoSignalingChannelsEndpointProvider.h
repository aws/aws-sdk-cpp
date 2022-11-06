/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsEndpointRules.h>


namespace Aws
{
namespace KinesisVideoSignalingChannels
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KinesisVideoSignalingChannelsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KinesisVideoSignalingChannelsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KinesisVideoSignalingChannelsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KinesisVideoSignalingChannels Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisVideoSignalingChannelsEndpointProviderBase =
    EndpointProviderBase<KinesisVideoSignalingChannelsClientConfiguration, KinesisVideoSignalingChannelsBuiltInParameters, KinesisVideoSignalingChannelsClientContextParameters>;

using KinesisVideoSignalingChannelsDefaultEpProviderBase =
    DefaultEndpointProvider<KinesisVideoSignalingChannelsClientConfiguration, KinesisVideoSignalingChannelsBuiltInParameters, KinesisVideoSignalingChannelsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISVIDEOSIGNALINGCHANNELS_API KinesisVideoSignalingChannelsEndpointProvider : public KinesisVideoSignalingChannelsDefaultEpProviderBase
{
public:
    using KinesisVideoSignalingChannelsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KinesisVideoSignalingChannelsEndpointProvider()
      : KinesisVideoSignalingChannelsDefaultEpProviderBase(Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsEndpointRules::Rules)
    {}

    ~KinesisVideoSignalingChannelsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
