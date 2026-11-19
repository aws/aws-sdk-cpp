/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/GameLiftEndpointProvider.h>
#include <aws/gamelift/internal/GameLiftEndpointRules.h>

namespace Aws {
#ifndef AWS_GAMELIFT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<GameLift::Endpoint::GameLiftClientConfiguration,
                                                   GameLift::Endpoint::GameLiftBuiltInParameters,
                                                   GameLift::Endpoint::GameLiftClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<GameLift::Endpoint::GameLiftClientConfiguration,
                                                  GameLift::Endpoint::GameLiftBuiltInParameters,
                                                  GameLift::Endpoint::GameLiftClientContextParameters>;
}  // namespace Endpoint
#endif

namespace GameLift {
namespace Endpoint {
GameLiftEndpointProvider::GameLiftEndpointProvider()
    : GameLiftDefaultEpProviderBase(Aws::GameLift::GameLiftEndpointRules::GetRulesBlob(),
                                    Aws::GameLift::GameLiftEndpointRules::RulesBlobSize) {}

void GameLiftBuiltInParameters::SetFromClientConfiguration(const GameLiftClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GameLiftClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GameLiftBuiltInParameters::SetFromClientConfiguration(const GameLiftClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GameLiftClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GameLiftBuiltInParameters::SetServiceSpecificParameters(const GameLiftClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace GameLift
}  // namespace Aws
