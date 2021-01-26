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
  enum class RobotSoftwareSuiteType
  {
    NOT_SET,
    ROS,
    ROS2
  };

namespace RobotSoftwareSuiteTypeMapper
{
AWS_ROBOMAKER_API RobotSoftwareSuiteType GetRobotSoftwareSuiteTypeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForRobotSoftwareSuiteType(RobotSoftwareSuiteType value);
} // namespace RobotSoftwareSuiteTypeMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
