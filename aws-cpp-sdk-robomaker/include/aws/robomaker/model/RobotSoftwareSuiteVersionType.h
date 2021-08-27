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
  enum class RobotSoftwareSuiteVersionType
  {
    NOT_SET,
    Kinetic,
    Melodic,
    Dashing
  };

namespace RobotSoftwareSuiteVersionTypeMapper
{
AWS_ROBOMAKER_API RobotSoftwareSuiteVersionType GetRobotSoftwareSuiteVersionTypeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForRobotSoftwareSuiteVersionType(RobotSoftwareSuiteVersionType value);
} // namespace RobotSoftwareSuiteVersionTypeMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
