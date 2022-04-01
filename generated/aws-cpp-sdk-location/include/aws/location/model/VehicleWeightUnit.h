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
  enum class VehicleWeightUnit
  {
    NOT_SET,
    Kilograms,
    Pounds
  };

namespace VehicleWeightUnitMapper
{
AWS_LOCATIONSERVICE_API VehicleWeightUnit GetVehicleWeightUnitForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForVehicleWeightUnit(VehicleWeightUnit value);
} // namespace VehicleWeightUnitMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
