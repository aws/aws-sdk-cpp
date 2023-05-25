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
  enum class TravelMode
  {
    NOT_SET,
    Car,
    Truck,
    Walking,
    Bicycle,
    Motorcycle
  };

namespace TravelModeMapper
{
AWS_LOCATIONSERVICE_API TravelMode GetTravelModeForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForTravelMode(TravelMode value);
} // namespace TravelModeMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
