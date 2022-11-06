/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaEndpointRules.h>


namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KinesisVideoArchivedMediaClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KinesisVideoArchivedMediaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KinesisVideoArchivedMediaBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KinesisVideoArchivedMedia Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisVideoArchivedMediaEndpointProviderBase =
    EndpointProviderBase<KinesisVideoArchivedMediaClientConfiguration, KinesisVideoArchivedMediaBuiltInParameters, KinesisVideoArchivedMediaClientContextParameters>;

using KinesisVideoArchivedMediaDefaultEpProviderBase =
    DefaultEndpointProvider<KinesisVideoArchivedMediaClientConfiguration, KinesisVideoArchivedMediaBuiltInParameters, KinesisVideoArchivedMediaClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISVIDEOARCHIVEDMEDIA_API KinesisVideoArchivedMediaEndpointProvider : public KinesisVideoArchivedMediaDefaultEpProviderBase
{
public:
    using KinesisVideoArchivedMediaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KinesisVideoArchivedMediaEndpointProvider()
      : KinesisVideoArchivedMediaDefaultEpProviderBase(Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaEndpointRules::Rules)
    {}

    ~KinesisVideoArchivedMediaEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
