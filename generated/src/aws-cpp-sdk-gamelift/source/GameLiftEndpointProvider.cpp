/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/GameLiftEndpointProvider.h>
#include <aws/gamelift/internal/GameLiftEndpointRules.h>

namespace Aws {
namespace GameLift {
namespace Endpoint {
GameLiftEndpointProvider::GameLiftEndpointProvider()
    : GameLiftDefaultEpProviderBase(Aws::GameLift::GameLiftEndpointRules::GetRulesBlob(),
                                    Aws::GameLift::GameLiftEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace GameLift
}  // namespace Aws
