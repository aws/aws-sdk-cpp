/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesisvideo/KinesisVideoEndpointRules.h>


namespace Aws
{
namespace KinesisVideo
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KinesisVideoClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KinesisVideoClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KinesisVideoBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KinesisVideo Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisVideoEndpointProviderBase =
    EndpointProviderBase<KinesisVideoClientConfiguration, KinesisVideoBuiltInParameters, KinesisVideoClientContextParameters>;

using KinesisVideoDefaultEpProviderBase =
    DefaultEndpointProvider<KinesisVideoClientConfiguration, KinesisVideoBuiltInParameters, KinesisVideoClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISVIDEO_API KinesisVideoEndpointProvider : public KinesisVideoDefaultEpProviderBase
{
public:
    using KinesisVideoResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KinesisVideoEndpointProvider()
      : KinesisVideoDefaultEpProviderBase(Aws::KinesisVideo::KinesisVideoEndpointRules::Rules)
    {}

    ~KinesisVideoEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace KinesisVideo
} // namespace Aws
