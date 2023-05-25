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
  enum class TriggerType
  {
    NOT_SET,
    SNOOZE_TIMEOUT
  };

namespace TriggerTypeMapper
{
AWS_IOTEVENTSDATA_API TriggerType GetTriggerTypeForName(const Aws::String& name);

AWS_IOTEVENTSDATA_API Aws::String GetNameForTriggerType(TriggerType value);
} // namespace TriggerTypeMapper
} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
