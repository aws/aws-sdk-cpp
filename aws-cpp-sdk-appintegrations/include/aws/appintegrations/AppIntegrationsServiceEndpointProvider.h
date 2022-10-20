/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AppIntegrationsServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AppIntegrationsServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AppIntegrationsServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AppIntegrationsServiceEndpointProvider,
                                                                        AppIntegrationsServiceBuiltInParameters,
                                                                        AppIntegrationsServiceClientContextParameters>;


class AppIntegrationsServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AppIntegrationsServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AppIntegrationsServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AppIntegrationsService::AppIntegrationsServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AppIntegrationsServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AppIntegrationsServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AppIntegrationsServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AppIntegrationsService
} // namespace Aws
