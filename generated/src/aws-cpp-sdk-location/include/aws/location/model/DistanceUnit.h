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
  enum class DistanceUnit
  {
    NOT_SET,
    Kilometers,
    Miles
  };

namespace DistanceUnitMapper
{
AWS_LOCATIONSERVICE_API DistanceUnit GetDistanceUnitForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForDistanceUnit(DistanceUnit value);
} // namespace DistanceUnitMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
