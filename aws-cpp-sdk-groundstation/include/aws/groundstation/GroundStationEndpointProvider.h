/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/groundstation/GroundStationEndpointRules.h>


namespace Aws
{
namespace GroundStation
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using GroundStationClientContextParameters = Aws::Endpoint::ClientContextParameters;
using GroundStationBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class GroundStationEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<GroundStationEndpointProvider,
                                                                        GroundStationBuiltInParameters,
                                                                        GroundStationClientContextParameters>;


class GroundStationEndpointProvider : public DefaultEndpointProviderT
{
public:
    using GroundStationResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    GroundStationEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::GroundStation::GroundStationEndpointRules::Rules),
        clientConfiguration(config)
    {}

    GroundStationResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<GroundStationEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~GroundStationEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace GroundStation
} // namespace Aws
