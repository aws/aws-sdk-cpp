/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/connectcampaigns/ConnectCampaignsEndpointRules.h>


namespace Aws
{
namespace ConnectCampaigns
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ConnectCampaignsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ConnectCampaignsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ConnectCampaignsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ConnectCampaignsEndpointProvider,
                                                                        ConnectCampaignsBuiltInParameters,
                                                                        ConnectCampaignsClientContextParameters>;


class ConnectCampaignsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ConnectCampaignsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ConnectCampaignsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ConnectCampaigns::ConnectCampaignsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ConnectCampaignsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ConnectCampaignsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ConnectCampaignsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ConnectCampaigns
} // namespace Aws
