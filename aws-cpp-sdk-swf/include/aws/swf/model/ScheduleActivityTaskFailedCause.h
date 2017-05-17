/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
