/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/forecastquery/ForecastQueryServiceEndpointRules.h>


namespace Aws
{
namespace ForecastQueryService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ForecastQueryServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ForecastQueryServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ForecastQueryServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ForecastQueryService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ForecastQueryServiceEndpointProviderBase =
    EndpointProviderBase<ForecastQueryServiceClientConfiguration, ForecastQueryServiceBuiltInParameters, ForecastQueryServiceClientContextParameters>;

using ForecastQueryServiceDefaultEpProviderBase =
    DefaultEndpointProvider<ForecastQueryServiceClientConfiguration, ForecastQueryServiceBuiltInParameters, ForecastQueryServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_FORECASTQUERYSERVICE_API ForecastQueryServiceEndpointProvider : public ForecastQueryServiceDefaultEpProviderBase
{
public:
    using ForecastQueryServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ForecastQueryServiceEndpointProvider()
      : ForecastQueryServiceDefaultEpProviderBase(Aws::ForecastQueryService::ForecastQueryServiceEndpointRules::Rules)
    {}

    ~ForecastQueryServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ForecastQueryService
} // namespace Aws
