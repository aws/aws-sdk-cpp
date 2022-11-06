/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/location/LocationServiceEndpointRules.h>


namespace Aws
{
namespace LocationService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LocationServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LocationServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LocationServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LocationService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LocationServiceEndpointProviderBase =
    EndpointProviderBase<LocationServiceClientConfiguration, LocationServiceBuiltInParameters, LocationServiceClientContextParameters>;

using LocationServiceDefaultEpProviderBase =
    DefaultEndpointProvider<LocationServiceClientConfiguration, LocationServiceBuiltInParameters, LocationServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LOCATIONSERVICE_API LocationServiceEndpointProvider : public LocationServiceDefaultEpProviderBase
{
public:
    using LocationServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LocationServiceEndpointProvider()
      : LocationServiceDefaultEpProviderBase(Aws::LocationService::LocationServiceEndpointRules::Rules)
    {}

    ~LocationServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LocationService
} // namespace Aws
