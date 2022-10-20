/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/gamesparks/GameSparksEndpointRules.h>


namespace Aws
{
namespace GameSparks
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using GameSparksClientContextParameters = Aws::Endpoint::ClientContextParameters;
using GameSparksBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class GameSparksEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<GameSparksEndpointProvider,
                                                                        GameSparksBuiltInParameters,
                                                                        GameSparksClientContextParameters>;


class GameSparksEndpointProvider : public DefaultEndpointProviderT
{
public:
    using GameSparksResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    GameSparksEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::GameSparks::GameSparksEndpointRules::Rules),
        clientConfiguration(config)
    {}

    GameSparksResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<GameSparksEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~GameSparksEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace GameSparks
} // namespace Aws
