/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace GameLift {
namespace Model {
enum class GameServerHealthCheck { NOT_SET, HEALTHY };

namespace GameServerHealthCheckMapper {
AWS_GAMELIFT_API GameServerHealthCheck GetGameServerHealthCheckForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerHealthCheck(GameServerHealthCheck value);
}  // namespace GameServerHealthCheckMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
