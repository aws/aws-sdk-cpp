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
  enum class SimulationSoftwareSuiteType
  {
    NOT_SET,
    Gazebo,
    RosbagPlay
  };

namespace SimulationSoftwareSuiteTypeMapper
{
AWS_ROBOMAKER_API SimulationSoftwareSuiteType GetSimulationSoftwareSuiteTypeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForSimulationSoftwareSuiteType(SimulationSoftwareSuiteType value);
} // namespace SimulationSoftwareSuiteTypeMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
