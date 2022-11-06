/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesis-video-media/KinesisVideoMediaEndpointRules.h>


namespace Aws
{
namespace KinesisVideoMedia
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KinesisVideoMediaClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KinesisVideoMediaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KinesisVideoMediaBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KinesisVideoMedia Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisVideoMediaEndpointProviderBase =
    EndpointProviderBase<KinesisVideoMediaClientConfiguration, KinesisVideoMediaBuiltInParameters, KinesisVideoMediaClientContextParameters>;

using KinesisVideoMediaDefaultEpProviderBase =
    DefaultEndpointProvider<KinesisVideoMediaClientConfiguration, KinesisVideoMediaBuiltInParameters, KinesisVideoMediaClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISVIDEOMEDIA_API KinesisVideoMediaEndpointProvider : public KinesisVideoMediaDefaultEpProviderBase
{
public:
    using KinesisVideoMediaResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KinesisVideoMediaEndpointProvider()
      : KinesisVideoMediaDefaultEpProviderBase(Aws::KinesisVideoMedia::KinesisVideoMediaEndpointRules::Rules)
    {}

    ~KinesisVideoMediaEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace KinesisVideoMedia
} // namespace Aws
