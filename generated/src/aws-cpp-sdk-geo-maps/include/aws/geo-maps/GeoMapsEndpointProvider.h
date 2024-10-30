/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/geo-maps/GeoMapsEndpointRules.h>


namespace Aws
{
namespace GeoMaps
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GeoMapsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GeoMapsClientConfiguration = Aws::Client::GenericClientConfiguration;
using GeoMapsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GeoMaps Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GeoMapsEndpointProviderBase =
    EndpointProviderBase<GeoMapsClientConfiguration, GeoMapsBuiltInParameters, GeoMapsClientContextParameters>;

using GeoMapsDefaultEpProviderBase =
    DefaultEndpointProvider<GeoMapsClientConfiguration, GeoMapsBuiltInParameters, GeoMapsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GEOMAPS_API GeoMapsEndpointProvider : public GeoMapsDefaultEpProviderBase
{
public:
    using GeoMapsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GeoMapsEndpointProvider()
      : GeoMapsDefaultEpProviderBase(Aws::GeoMaps::GeoMapsEndpointRules::GetRulesBlob(), Aws::GeoMaps::GeoMapsEndpointRules::RulesBlobSize)
    {}

    ~GeoMapsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace GeoMaps
} // namespace Aws
