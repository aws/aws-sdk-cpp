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
  enum class ForecastedGeofenceEventType
  {
    NOT_SET,
    ENTER,
    EXIT,
    IDLE
  };

namespace ForecastedGeofenceEventTypeMapper
{
AWS_LOCATIONSERVICE_API ForecastedGeofenceEventType GetForecastedGeofenceEventTypeForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForForecastedGeofenceEventType(ForecastedGeofenceEventType value);
} // namespace ForecastedGeofenceEventTypeMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
