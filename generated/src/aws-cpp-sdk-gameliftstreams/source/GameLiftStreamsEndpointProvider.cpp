/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/GameLiftStreamsEndpointProvider.h>
#include <aws/gameliftstreams/internal/GameLiftStreamsEndpointRules.h>

namespace Aws {
#ifndef AWS_GAMELIFTSTREAMS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<GameLiftStreams::Endpoint::GameLiftStreamsClientConfiguration,
                                                   GameLiftStreams::Endpoint::GameLiftStreamsBuiltInParameters,
                                                   GameLiftStreams::Endpoint::GameLiftStreamsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<GameLiftStreams::Endpoint::GameLiftStreamsClientConfiguration,
                                                  GameLiftStreams::Endpoint::GameLiftStreamsBuiltInParameters,
                                                  GameLiftStreams::Endpoint::GameLiftStreamsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace GameLiftStreams {
namespace Endpoint {
GameLiftStreamsEndpointProvider::GameLiftStreamsEndpointProvider()
    : GameLiftStreamsDefaultEpProviderBase(Aws::GameLiftStreams::GameLiftStreamsEndpointRules::GetRulesBlob(),
                                           Aws::GameLiftStreams::GameLiftStreamsEndpointRules::RulesBlobSize) {}

void GameLiftStreamsBuiltInParameters::SetFromClientConfiguration(const GameLiftStreamsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GameLiftStreamsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GameLiftStreamsBuiltInParameters::SetFromClientConfiguration(const GameLiftStreamsClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GameLiftStreamsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GameLiftStreamsBuiltInParameters::SetServiceSpecificParameters(const GameLiftStreamsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace GameLiftStreams
}  // namespace Aws
