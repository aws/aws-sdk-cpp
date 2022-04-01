/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{
  enum class AlarmStateName
  {
    NOT_SET,
    DISABLED,
    NORMAL,
    ACTIVE,
    ACKNOWLEDGED,
    SNOOZE_DISABLED,
    LATCHED
  };

namespace AlarmStateNameMapper
{
AWS_IOTEVENTSDATA_API AlarmStateName GetAlarmStateNameForName(const Aws::String& name);

AWS_IOTEVENTSDATA_API Aws::String GetNameForAlarmStateName(AlarmStateName value);
} // namespace AlarmStateNameMapper
} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
