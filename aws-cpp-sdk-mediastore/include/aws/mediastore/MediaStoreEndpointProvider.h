/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediastore/MediaStoreEndpointRules.h>


namespace Aws
{
namespace MediaStore
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MediaStoreClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MediaStoreClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MediaStoreBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MediaStore Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaStoreEndpointProviderBase =
    EndpointProviderBase<MediaStoreClientConfiguration, MediaStoreBuiltInParameters, MediaStoreClientContextParameters>;

using MediaStoreDefaultEpProviderBase =
    DefaultEndpointProvider<MediaStoreClientConfiguration, MediaStoreBuiltInParameters, MediaStoreClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIASTORE_API MediaStoreEndpointProvider : public MediaStoreDefaultEpProviderBase
{
public:
    using MediaStoreResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MediaStoreEndpointProvider()
      : MediaStoreDefaultEpProviderBase(Aws::MediaStore::MediaStoreEndpointRules::Rules)
    {}

    ~MediaStoreEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MediaStore
} // namespace Aws
