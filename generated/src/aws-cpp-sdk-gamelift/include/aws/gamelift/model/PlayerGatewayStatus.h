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
enum class PlayerGatewayStatus { NOT_SET, DISABLED, ENABLED };

namespace PlayerGatewayStatusMapper {
AWS_GAMELIFT_API PlayerGatewayStatus GetPlayerGatewayStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForPlayerGatewayStatus(PlayerGatewayStatus value);
}  // namespace PlayerGatewayStatusMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
