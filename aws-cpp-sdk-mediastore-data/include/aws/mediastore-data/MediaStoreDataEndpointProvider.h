/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediastore-data/MediaStoreDataEndpointRules.h>


namespace Aws
{
namespace MediaStoreData
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MediaStoreDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MediaStoreDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MediaStoreDataBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MediaStoreData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MediaStoreDataEndpointProviderBase =
    EndpointProviderBase<MediaStoreDataClientConfiguration, MediaStoreDataBuiltInParameters, MediaStoreDataClientContextParameters>;

using MediaStoreDataDefaultEpProviderBase =
    DefaultEndpointProvider<MediaStoreDataClientConfiguration, MediaStoreDataBuiltInParameters, MediaStoreDataClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEDIASTOREDATA_API MediaStoreDataEndpointProvider : public MediaStoreDataDefaultEpProviderBase
{
public:
    using MediaStoreDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MediaStoreDataEndpointProvider()
      : MediaStoreDataDefaultEpProviderBase(Aws::MediaStoreData::MediaStoreDataEndpointRules::Rules)
    {}

    ~MediaStoreDataEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MediaStoreData
} // namespace Aws
