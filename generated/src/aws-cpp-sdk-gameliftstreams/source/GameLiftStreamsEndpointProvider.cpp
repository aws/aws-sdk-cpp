/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/GameLiftStreamsEndpointProvider.h>
#include <aws/gameliftstreams/internal/GameLiftStreamsEndpointRules.h>

namespace Aws {
namespace GameLiftStreams {
namespace Endpoint {
GameLiftStreamsEndpointProvider::GameLiftStreamsEndpointProvider()
    : GameLiftStreamsDefaultEpProviderBase(Aws::GameLiftStreams::GameLiftStreamsEndpointRules::GetRulesBlob(),
                                           Aws::GameLiftStreams::GameLiftStreamsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace GameLiftStreams
}  // namespace Aws
