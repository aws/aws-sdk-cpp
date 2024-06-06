/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LocationService
{
namespace Model
{
  enum class SpeedUnit
  {
    NOT_SET,
    KilometersPerHour,
    MilesPerHour
  };

namespace SpeedUnitMapper
{
AWS_LOCATIONSERVICE_API SpeedUnit GetSpeedUnitForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForSpeedUnit(SpeedUnit value);
} // namespace SpeedUnitMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
