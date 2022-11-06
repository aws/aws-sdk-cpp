/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/application-insights/ApplicationInsightsEndpointRules.h>


namespace Aws
{
namespace ApplicationInsights
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ApplicationInsightsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ApplicationInsightsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ApplicationInsightsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ApplicationInsights Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApplicationInsightsEndpointProviderBase =
    EndpointProviderBase<ApplicationInsightsClientConfiguration, ApplicationInsightsBuiltInParameters, ApplicationInsightsClientContextParameters>;

using ApplicationInsightsDefaultEpProviderBase =
    DefaultEndpointProvider<ApplicationInsightsClientConfiguration, ApplicationInsightsBuiltInParameters, ApplicationInsightsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPLICATIONINSIGHTS_API ApplicationInsightsEndpointProvider : public ApplicationInsightsDefaultEpProviderBase
{
public:
    using ApplicationInsightsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ApplicationInsightsEndpointProvider()
      : ApplicationInsightsDefaultEpProviderBase(Aws::ApplicationInsights::ApplicationInsightsEndpointRules::Rules)
    {}

    ~ApplicationInsightsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ApplicationInsights
} // namespace Aws
