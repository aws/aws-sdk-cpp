/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appintegrations/AppIntegrationsServiceEndpointRules.h>


namespace Aws
{
namespace AppIntegrationsService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppIntegrationsServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppIntegrationsServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AppIntegrationsServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AppIntegrationsService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppIntegrationsServiceEndpointProviderBase =
    EndpointProviderBase<AppIntegrationsServiceClientConfiguration, AppIntegrationsServiceBuiltInParameters, AppIntegrationsServiceClientContextParameters>;

using AppIntegrationsServiceDefaultEpProviderBase =
    DefaultEndpointProvider<AppIntegrationsServiceClientConfiguration, AppIntegrationsServiceBuiltInParameters, AppIntegrationsServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPINTEGRATIONSSERVICE_API AppIntegrationsServiceEndpointProvider : public AppIntegrationsServiceDefaultEpProviderBase
{
public:
    using AppIntegrationsServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppIntegrationsServiceEndpointProvider()
      : AppIntegrationsServiceDefaultEpProviderBase(Aws::AppIntegrationsService::AppIntegrationsServiceEndpointRules::Rules)
    {}

    ~AppIntegrationsServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AppIntegrationsService
} // namespace Aws
