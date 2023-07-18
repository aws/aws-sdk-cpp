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
  enum class EventType
  {
    NOT_SET,
    STATE_CHANGE
  };

namespace EventTypeMapper
{
AWS_IOTEVENTSDATA_API EventType GetEventTypeForName(const Aws::String& name);

AWS_IOTEVENTSDATA_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
