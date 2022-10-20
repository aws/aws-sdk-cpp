/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/servicediscovery/ServiceDiscoveryEndpointRules.h>


namespace Aws
{
namespace ServiceDiscovery
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ServiceDiscoveryClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ServiceDiscoveryBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ServiceDiscoveryEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ServiceDiscoveryEndpointProvider,
                                                                        ServiceDiscoveryBuiltInParameters,
                                                                        ServiceDiscoveryClientContextParameters>;


class ServiceDiscoveryEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ServiceDiscoveryResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ServiceDiscoveryEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ServiceDiscovery::ServiceDiscoveryEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ServiceDiscoveryResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ServiceDiscoveryEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ServiceDiscoveryEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ServiceDiscovery
} // namespace Aws
