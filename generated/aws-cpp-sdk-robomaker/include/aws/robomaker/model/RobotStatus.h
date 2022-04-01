/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class RobotStatus
  {
    NOT_SET,
    Available,
    Registered,
    PendingNewDeployment,
    Deploying,
    Failed,
    InSync,
    NoResponse
  };

namespace RobotStatusMapper
{
AWS_ROBOMAKER_API RobotStatus GetRobotStatusForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForRobotStatus(RobotStatus value);
} // namespace RobotStatusMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
