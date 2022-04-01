/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{
  enum class AlarmModelVersionStatus
  {
    NOT_SET,
    ACTIVE,
    ACTIVATING,
    INACTIVE,
    FAILED
  };

namespace AlarmModelVersionStatusMapper
{
AWS_IOTEVENTS_API AlarmModelVersionStatus GetAlarmModelVersionStatusForName(const Aws::String& name);

AWS_IOTEVENTS_API Aws::String GetNameForAlarmModelVersionStatus(AlarmModelVersionStatus value);
} // namespace AlarmModelVersionStatusMapper
} // namespace Model
} // namespace IoTEvents
} // namespace Aws
