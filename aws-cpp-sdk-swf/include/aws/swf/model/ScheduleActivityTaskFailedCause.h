/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class ScheduleActivityTaskFailedCause
  {
    NOT_SET,
    ACTIVITY_TYPE_DEPRECATED,
    ACTIVITY_TYPE_DOES_NOT_EXIST,
    ACTIVITY_ID_ALREADY_IN_USE,
    OPEN_ACTIVITIES_LIMIT_EXCEEDED,
    ACTIVITY_CREATION_RATE_EXCEEDED,
    DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED,
    DEFAULT_TASK_LIST_UNDEFINED,
    DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED,
    DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED,
    DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED,
    OPERATION_NOT_PERMITTED
  };

namespace ScheduleActivityTaskFailedCauseMapper
{
AWS_SWF_API ScheduleActivityTaskFailedCause GetScheduleActivityTaskFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForScheduleActivityTaskFailedCause(ScheduleActivityTaskFailedCause value);
} // namespace ScheduleActivityTaskFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
