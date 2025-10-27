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
enum class GameServerClaimStatus { NOT_SET, CLAIMED };

namespace GameServerClaimStatusMapper {
AWS_GAMELIFT_API GameServerClaimStatus GetGameServerClaimStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerClaimStatus(GameServerClaimStatus value);
}  // namespace GameServerClaimStatusMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
