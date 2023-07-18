/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class MaintenanceDay
  {
    NOT_SET,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
  };

namespace MaintenanceDayMapper
{
AWS_MEDIALIVE_API MaintenanceDay GetMaintenanceDayForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMaintenanceDay(MaintenanceDay value);
} // namespace MaintenanceDayMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
