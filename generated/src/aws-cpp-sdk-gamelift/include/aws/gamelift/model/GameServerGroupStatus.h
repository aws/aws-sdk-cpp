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
  enum class GameServerGroupStatus
  {
    NOT_SET,
    NEW_,
    ACTIVATING,
    ACTIVE,
    DELETE_SCHEDULED,
    DELETING,
    DELETED,
    ERROR_
  };

namespace GameServerGroupStatusMapper
{
AWS_GAMELIFT_API GameServerGroupStatus GetGameServerGroupStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerGroupStatus(GameServerGroupStatus value);
} // namespace GameServerGroupStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
