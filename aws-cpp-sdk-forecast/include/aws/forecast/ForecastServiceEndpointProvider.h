/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/forecast/ForecastServiceEndpointRules.h>


namespace Aws
{
namespace ForecastService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ForecastServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ForecastServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ForecastServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ForecastService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ForecastServiceEndpointProviderBase =
    EndpointProviderBase<ForecastServiceClientConfiguration, ForecastServiceBuiltInParameters, ForecastServiceClientContextParameters>;

using ForecastServiceDefaultEpProviderBase =
    DefaultEndpointProvider<ForecastServiceClientConfiguration, ForecastServiceBuiltInParameters, ForecastServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_FORECASTSERVICE_API ForecastServiceEndpointProvider : public ForecastServiceDefaultEpProviderBase
{
public:
    using ForecastServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ForecastServiceEndpointProvider()
      : ForecastServiceDefaultEpProviderBase(Aws::ForecastService::ForecastServiceEndpointRules::Rules)
    {}

    ~ForecastServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ForecastService
} // namespace Aws
