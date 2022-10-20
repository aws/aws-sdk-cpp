/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/privatenetworks/PrivateNetworksEndpointRules.h>


namespace Aws
{
namespace PrivateNetworks
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PrivateNetworksClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PrivateNetworksBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PrivateNetworksEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PrivateNetworksEndpointProvider,
                                                                        PrivateNetworksBuiltInParameters,
                                                                        PrivateNetworksClientContextParameters>;


class PrivateNetworksEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PrivateNetworksResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PrivateNetworksEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::PrivateNetworks::PrivateNetworksEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PrivateNetworksResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PrivateNetworksEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PrivateNetworksEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace PrivateNetworks
} // namespace Aws
