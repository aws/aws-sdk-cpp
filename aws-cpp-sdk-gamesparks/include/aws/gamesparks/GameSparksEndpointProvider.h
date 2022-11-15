/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GameSparksClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GameSparksClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using GameSparksBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GameSparks Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GameSparksEndpointProviderBase =
    EndpointProviderBase<GameSparksClientConfiguration, GameSparksBuiltInParameters, GameSparksClientContextParameters>;

using GameSparksDefaultEpProviderBase =
    DefaultEndpointProvider<GameSparksClientConfiguration, GameSparksBuiltInParameters, GameSparksClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GAMESPARKS_API GameSparksEndpointProvider : public GameSparksDefaultEpProviderBase
{
public:
    using GameSparksResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GameSparksEndpointProvider()
      : GameSparksDefaultEpProviderBase(Aws::GameSparks::GameSparksEndpointRules::Rules)
    {}

    ~GameSparksEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace GameSparks
} // namespace Aws
