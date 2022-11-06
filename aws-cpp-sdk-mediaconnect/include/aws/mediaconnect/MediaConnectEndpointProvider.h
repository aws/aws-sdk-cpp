/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediaconnect/MediaConnectEndpointRules.h>


namespace Aws
{
namespace MediaConnect
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MediaConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MediaConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MediaConnectBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MediaConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaConnectEndpointProviderBase =
    EndpointProviderBase<MediaConnectClientConfiguration, MediaConnectBuiltInParameters, MediaConnectClientContextParameters>;

using MediaConnectDefaultEpProviderBase =
    DefaultEndpointProvider<MediaConnectClientConfiguration, MediaConnectBuiltInParameters, MediaConnectClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIACONNECT_API MediaConnectEndpointProvider : public MediaConnectDefaultEpProviderBase
{
public:
    using MediaConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MediaConnectEndpointProvider()
      : MediaConnectDefaultEpProviderBase(Aws::MediaConnect::MediaConnectEndpointRules::Rules)
    {}

    ~MediaConnectEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MediaConnect
} // namespace Aws
