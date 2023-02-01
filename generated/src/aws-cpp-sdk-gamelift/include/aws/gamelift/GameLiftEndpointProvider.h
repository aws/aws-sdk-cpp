/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GameLiftClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GameLiftClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using GameLiftBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GameLift Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GameLiftEndpointProviderBase =
    EndpointProviderBase<GameLiftClientConfiguration, GameLiftBuiltInParameters, GameLiftClientContextParameters>;

using GameLiftDefaultEpProviderBase =
    DefaultEndpointProvider<GameLiftClientConfiguration, GameLiftBuiltInParameters, GameLiftClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GAMELIFT_API GameLiftEndpointProvider : public GameLiftDefaultEpProviderBase
{
public:
    using GameLiftResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GameLiftEndpointProvider()
      : GameLiftDefaultEpProviderBase(Aws::GameLift::GameLiftEndpointRules::GetRulesBlob(), Aws::GameLift::GameLiftEndpointRules::RulesBlobSize)
    {}

    ~GameLiftEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace GameLift
} // namespace Aws
