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
  enum class GameServerGroupAction
  {
    NOT_SET,
    REPLACE_INSTANCE_TYPES
  };

namespace GameServerGroupActionMapper
{
AWS_GAMELIFT_API GameServerGroupAction GetGameServerGroupActionForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerGroupAction(GameServerGroupAction value);
} // namespace GameServerGroupActionMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
