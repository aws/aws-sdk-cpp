/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class GameServerInstanceStatus
  {
    NOT_SET,
    ACTIVE,
    DRAINING,
    SPOT_TERMINATING
  };

namespace GameServerInstanceStatusMapper
{
AWS_GAMELIFT_API GameServerInstanceStatus GetGameServerInstanceStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerInstanceStatus(GameServerInstanceStatus value);
} // namespace GameServerInstanceStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
