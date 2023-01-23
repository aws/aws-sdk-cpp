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
  enum class GameServerGroupDeleteOption
  {
    NOT_SET,
    SAFE_DELETE,
    FORCE_DELETE,
    RETAIN
  };

namespace GameServerGroupDeleteOptionMapper
{
AWS_GAMELIFT_API GameServerGroupDeleteOption GetGameServerGroupDeleteOptionForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerGroupDeleteOption(GameServerGroupDeleteOption value);
} // namespace GameServerGroupDeleteOptionMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
