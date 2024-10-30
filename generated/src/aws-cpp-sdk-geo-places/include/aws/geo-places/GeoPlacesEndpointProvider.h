/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/geo-places/GeoPlacesEndpointRules.h>


namespace Aws
{
namespace GeoPlaces
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GeoPlacesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GeoPlacesClientConfiguration = Aws::Client::GenericClientConfiguration;
using GeoPlacesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GeoPlaces Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GeoPlacesEndpointProviderBase =
    EndpointProviderBase<GeoPlacesClientConfiguration, GeoPlacesBuiltInParameters, GeoPlacesClientContextParameters>;

using GeoPlacesDefaultEpProviderBase =
    DefaultEndpointProvider<GeoPlacesClientConfiguration, GeoPlacesBuiltInParameters, GeoPlacesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GEOPLACES_API GeoPlacesEndpointProvider : public GeoPlacesDefaultEpProviderBase
{
public:
    using GeoPlacesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GeoPlacesEndpointProvider()
      : GeoPlacesDefaultEpProviderBase(Aws::GeoPlaces::GeoPlacesEndpointRules::GetRulesBlob(), Aws::GeoPlaces::GeoPlacesEndpointRules::RulesBlobSize)
    {}

    ~GeoPlacesEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace GeoPlaces
} // namespace Aws
