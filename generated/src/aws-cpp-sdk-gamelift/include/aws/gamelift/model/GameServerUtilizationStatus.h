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
  enum class GameServerUtilizationStatus
  {
    NOT_SET,
    AVAILABLE,
    UTILIZED
  };

namespace GameServerUtilizationStatusMapper
{
AWS_GAMELIFT_API GameServerUtilizationStatus GetGameServerUtilizationStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForGameServerUtilizationStatus(GameServerUtilizationStatus value);
} // namespace GameServerUtilizationStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
