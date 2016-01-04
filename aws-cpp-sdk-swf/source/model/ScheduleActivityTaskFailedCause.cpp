/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/ScheduleActivityTaskFailedCause.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ACTIVITY_TYPE_DEPRECATED_HASH = HashingUtils::HashString("ACTIVITY_TYPE_DEPRECATED");
static const int ACTIVITY_TYPE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("ACTIVITY_TYPE_DOES_NOT_EXIST");
static const int ACTIVITY_ID_ALREADY_IN_USE_HASH = HashingUtils::HashString("ACTIVITY_ID_ALREADY_IN_USE");
static const int OPEN_ACTIVITIES_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OPEN_ACTIVITIES_LIMIT_EXCEEDED");
static const int ACTIVITY_CREATION_RATE_EXCEEDED_HASH = HashingUtils::HashString("ACTIVITY_CREATION_RATE_EXCEEDED");
static const int DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED_HASH = HashingUtils::HashString("DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED");
static const int DEFAULT_TASK_LIST_UNDEFINED_HASH = HashingUtils::HashString("DEFAULT_TASK_LIST_UNDEFINED");
static const int DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED_HASH = HashingUtils::HashString("DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED");
static const int DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH = HashingUtils::HashString("DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED");
static const int DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED_HASH = HashingUtils::HashString("DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OPERATION_NOT_PERMITTED");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace ScheduleActivityTaskFailedCauseMapper
{
ScheduleActivityTaskFailedCause GetScheduleActivityTaskFailedCauseForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == ACTIVITY_TYPE_DEPRECATED_HASH)
  {
    return ScheduleActivityTaskFailedCause::ACTIVITY_TYPE_DEPRECATED;
  }
  else if (hashCode == ACTIVITY_TYPE_DOES_NOT_EXIST_HASH)
  {
    return ScheduleActivityTaskFailedCause::ACTIVITY_TYPE_DOES_NOT_EXIST;
  }
  else if (hashCode == ACTIVITY_ID_ALREADY_IN_USE_HASH)
  {
    return ScheduleActivityTaskFailedCause::ACTIVITY_ID_ALREADY_IN_USE;
  }
  else if (hashCode == OPEN_ACTIVITIES_LIMIT_EXCEEDED_HASH)
  {
    return ScheduleActivityTaskFailedCause::OPEN_ACTIVITIES_LIMIT_EXCEEDED;
  }
  else if (hashCode == ACTIVITY_CREATION_RATE_EXCEEDED_HASH)
  {
    return ScheduleActivityTaskFailedCause::ACTIVITY_CREATION_RATE_EXCEEDED;
  }
  else if (hashCode == DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED_HASH)
  {
    return ScheduleActivityTaskFailedCause::DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED;
  }
  else if (hashCode == DEFAULT_TASK_LIST_UNDEFINED_HASH)
  {
    return ScheduleActivityTaskFailedCause::DEFAULT_TASK_LIST_UNDEFINED;
  }
  else if (hashCode == DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED_HASH)
  {
    return ScheduleActivityTaskFailedCause::DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED;
  }
  else if (hashCode == DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH)
  {
    return ScheduleActivityTaskFailedCause::DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED;
  }
  else if (hashCode == DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED_HASH)
  {
    return ScheduleActivityTaskFailedCause::DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED;
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return ScheduleActivityTaskFailedCause::OPERATION_NOT_PERMITTED;
  }

  return ScheduleActivityTaskFailedCause::NOT_SET;
}

Aws::String GetNameForScheduleActivityTaskFailedCause(ScheduleActivityTaskFailedCause value)
{
  switch(value)
  {
  case ScheduleActivityTaskFailedCause::ACTIVITY_TYPE_DEPRECATED:
    return "ACTIVITY_TYPE_DEPRECATED";
  case ScheduleActivityTaskFailedCause::ACTIVITY_TYPE_DOES_NOT_EXIST:
    return "ACTIVITY_TYPE_DOES_NOT_EXIST";
  case ScheduleActivityTaskFailedCause::ACTIVITY_ID_ALREADY_IN_USE:
    return "ACTIVITY_ID_ALREADY_IN_USE";
  case ScheduleActivityTaskFailedCause::OPEN_ACTIVITIES_LIMIT_EXCEEDED:
    return "OPEN_ACTIVITIES_LIMIT_EXCEEDED";
  case ScheduleActivityTaskFailedCause::ACTIVITY_CREATION_RATE_EXCEEDED:
    return "ACTIVITY_CREATION_RATE_EXCEEDED";
  case ScheduleActivityTaskFailedCause::DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED:
    return "DEFAULT_SCHEDULE_TO_CLOSE_TIMEOUT_UNDEFINED";
  case ScheduleActivityTaskFailedCause::DEFAULT_TASK_LIST_UNDEFINED:
    return "DEFAULT_TASK_LIST_UNDEFINED";
  case ScheduleActivityTaskFailedCause::DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED:
    return "DEFAULT_SCHEDULE_TO_START_TIMEOUT_UNDEFINED";
  case ScheduleActivityTaskFailedCause::DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED:
    return "DEFAULT_START_TO_CLOSE_TIMEOUT_UNDEFINED";
  case ScheduleActivityTaskFailedCause::DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED:
    return "DEFAULT_HEARTBEAT_TIMEOUT_UNDEFINED";
  case ScheduleActivityTaskFailedCause::OPERATION_NOT_PERMITTED:
    return "OPERATION_NOT_PERMITTED";
  default:
    return "";
  }
}

} // namespace ScheduleActivityTaskFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
