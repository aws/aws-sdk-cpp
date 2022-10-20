/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/gamelift/GameLiftEndpointRules.h>


namespace Aws
{
namespace GameLift
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using GameLiftClientContextParameters = Aws::Endpoint::ClientContextParameters;
using GameLiftBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class GameLiftEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<GameLiftEndpointProvider,
                                                                        GameLiftBuiltInParameters,
                                                                        GameLiftClientContextParameters>;


class GameLiftEndpointProvider : public DefaultEndpointProviderT
{
public:
    using GameLiftResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    GameLiftEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::GameLift::GameLiftEndpointRules::Rules),
        clientConfiguration(config)
    {}

    GameLiftResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<GameLiftEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~GameLiftEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace GameLift
} // namespace Aws
