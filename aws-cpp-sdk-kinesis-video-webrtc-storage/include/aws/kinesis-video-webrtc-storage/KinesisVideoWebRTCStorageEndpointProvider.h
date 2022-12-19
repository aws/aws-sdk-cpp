/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorage_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageEndpointRules.h>


namespace Aws
{
namespace KinesisVideoWebRTCStorage
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KinesisVideoWebRTCStorageClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KinesisVideoWebRTCStorageClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KinesisVideoWebRTCStorageBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KinesisVideoWebRTCStorage Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisVideoWebRTCStorageEndpointProviderBase =
    EndpointProviderBase<KinesisVideoWebRTCStorageClientConfiguration, KinesisVideoWebRTCStorageBuiltInParameters, KinesisVideoWebRTCStorageClientContextParameters>;

using KinesisVideoWebRTCStorageDefaultEpProviderBase =
    DefaultEndpointProvider<KinesisVideoWebRTCStorageClientConfiguration, KinesisVideoWebRTCStorageBuiltInParameters, KinesisVideoWebRTCStorageClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISVIDEOWEBRTCSTORAGE_API KinesisVideoWebRTCStorageEndpointProvider : public KinesisVideoWebRTCStorageDefaultEpProviderBase
{
public:
    using KinesisVideoWebRTCStorageResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KinesisVideoWebRTCStorageEndpointProvider()
      : KinesisVideoWebRTCStorageDefaultEpProviderBase(Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageEndpointRules::Rules)
    {}

    ~KinesisVideoWebRTCStorageEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace KinesisVideoWebRTCStorage
} // namespace Aws
