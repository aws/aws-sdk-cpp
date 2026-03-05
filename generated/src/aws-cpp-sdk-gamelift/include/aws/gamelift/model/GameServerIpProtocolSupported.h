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
enum class GameServerIpProtocolSupported { NOT_SET, IPv4, DUAL_STACK };

namespace GameServerIpProtocolSupportedMapper {
AWS_GAMELIFT_API GameServerIpProtocolSupported GetGameServerIpProtocolSupportedForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerIpProtocolSupported(GameServerIpProtocolSupported value);
}  // namespace GameServerIpProtocolSupportedMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
