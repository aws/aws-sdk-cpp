/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/discovery/ApplicationDiscoveryServiceEndpointRules.h>


namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ApplicationDiscoveryServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ApplicationDiscoveryServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ApplicationDiscoveryServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ApplicationDiscoveryServiceEndpointProvider,
                                                                        ApplicationDiscoveryServiceBuiltInParameters,
                                                                        ApplicationDiscoveryServiceClientContextParameters>;


class ApplicationDiscoveryServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ApplicationDiscoveryServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ApplicationDiscoveryServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ApplicationDiscoveryServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ApplicationDiscoveryServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ApplicationDiscoveryServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ApplicationDiscoveryService
} // namespace Aws
