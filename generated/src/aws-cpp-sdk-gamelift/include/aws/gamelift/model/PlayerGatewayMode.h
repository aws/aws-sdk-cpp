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
enum class PlayerGatewayMode { NOT_SET, DISABLED, ENABLED, REQUIRED };

namespace PlayerGatewayModeMapper {
AWS_GAMELIFT_API PlayerGatewayMode GetPlayerGatewayModeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForPlayerGatewayMode(PlayerGatewayMode value);
}  // namespace PlayerGatewayModeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
