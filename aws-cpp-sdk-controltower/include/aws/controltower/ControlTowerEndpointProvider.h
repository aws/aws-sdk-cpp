/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/controltower/ControlTowerEndpointRules.h>


namespace Aws
{
namespace ControlTower
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ControlTowerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ControlTowerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ControlTowerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ControlTowerEndpointProvider,
                                                                        ControlTowerBuiltInParameters,
                                                                        ControlTowerClientContextParameters>;


class ControlTowerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ControlTowerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ControlTowerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ControlTower::ControlTowerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ControlTowerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ControlTowerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ControlTowerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ControlTower
} // namespace Aws
