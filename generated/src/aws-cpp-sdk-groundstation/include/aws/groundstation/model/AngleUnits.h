/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GroundStation
{
namespace Model
{
  enum class AngleUnits
  {
    NOT_SET,
    DEGREE_ANGLE,
    RADIAN
  };

namespace AngleUnitsMapper
{
AWS_GROUNDSTATION_API AngleUnits GetAngleUnitsForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForAngleUnits(AngleUnits value);
} // namespace AngleUnitsMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
