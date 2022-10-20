/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/robomaker/RoboMakerEndpointRules.h>


namespace Aws
{
namespace RoboMaker
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using RoboMakerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using RoboMakerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class RoboMakerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<RoboMakerEndpointProvider,
                                                                        RoboMakerBuiltInParameters,
                                                                        RoboMakerClientContextParameters>;


class RoboMakerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using RoboMakerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    RoboMakerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::RoboMaker::RoboMakerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    RoboMakerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<RoboMakerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~RoboMakerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace RoboMaker
} // namespace Aws
