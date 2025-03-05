/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/gameliftstreams/GameLiftStreamsEndpointRules.h>


namespace Aws
{
namespace GameLiftStreams
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GameLiftStreamsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GameLiftStreamsClientConfiguration = Aws::Client::GenericClientConfiguration;
using GameLiftStreamsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GameLiftStreams Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GameLiftStreamsEndpointProviderBase =
    EndpointProviderBase<GameLiftStreamsClientConfiguration, GameLiftStreamsBuiltInParameters, GameLiftStreamsClientContextParameters>;

using GameLiftStreamsDefaultEpProviderBase =
    DefaultEndpointProvider<GameLiftStreamsClientConfiguration, GameLiftStreamsBuiltInParameters, GameLiftStreamsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GAMELIFTSTREAMS_API GameLiftStreamsEndpointProvider : public GameLiftStreamsDefaultEpProviderBase
{
public:
    using GameLiftStreamsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GameLiftStreamsEndpointProvider()
      : GameLiftStreamsDefaultEpProviderBase(Aws::GameLiftStreams::GameLiftStreamsEndpointRules::GetRulesBlob(), Aws::GameLiftStreams::GameLiftStreamsEndpointRules::RulesBlobSize)
    {}

    ~GameLiftStreamsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace GameLiftStreams
} // namespace Aws
