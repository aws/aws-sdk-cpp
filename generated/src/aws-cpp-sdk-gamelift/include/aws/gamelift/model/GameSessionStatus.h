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
enum class GameSessionStatus { NOT_SET, ACTIVE, ACTIVATING, TERMINATED, TERMINATING, ERROR_ };

namespace GameSessionStatusMapper {
AWS_GAMELIFT_API GameSessionStatus GetGameSessionStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameSessionStatus(GameSessionStatus value);
}  // namespace GameSessionStatusMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
