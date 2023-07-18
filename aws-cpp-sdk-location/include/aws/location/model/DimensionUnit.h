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
  enum class DimensionUnit
  {
    NOT_SET,
    Meters,
    Feet
  };

namespace DimensionUnitMapper
{
AWS_LOCATIONSERVICE_API DimensionUnit GetDimensionUnitForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForDimensionUnit(DimensionUnit value);
} // namespace DimensionUnitMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
