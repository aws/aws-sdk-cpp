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
#include <aws/swf/model/ActivityTaskTimeoutType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int START_TO_CLOSE_HASH = HashingUtils::HashString("START_TO_CLOSE");
static const int SCHEDULE_TO_START_HASH = HashingUtils::HashString("SCHEDULE_TO_START");
static const int SCHEDULE_TO_CLOSE_HASH = HashingUtils::HashString("SCHEDULE_TO_CLOSE");
static const int HEARTBEAT_HASH = HashingUtils::HashString("HEARTBEAT");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace ActivityTaskTimeoutTypeMapper
{
ActivityTaskTimeoutType GetActivityTaskTimeoutTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == START_TO_CLOSE_HASH)
  {
    return ActivityTaskTimeoutType::START_TO_CLOSE;
  }
  else if (hashCode == SCHEDULE_TO_START_HASH)
  {
    return ActivityTaskTimeoutType::SCHEDULE_TO_START;
  }
  else if (hashCode == SCHEDULE_TO_CLOSE_HASH)
  {
    return ActivityTaskTimeoutType::SCHEDULE_TO_CLOSE;
  }
  else if (hashCode == HEARTBEAT_HASH)
  {
    return ActivityTaskTimeoutType::HEARTBEAT;
  }

  return ActivityTaskTimeoutType::NOT_SET;
}

Aws::String GetNameForActivityTaskTimeoutType(ActivityTaskTimeoutType value)
{
  switch(value)
  {
  case ActivityTaskTimeoutType::START_TO_CLOSE:
    return "START_TO_CLOSE";
  case ActivityTaskTimeoutType::SCHEDULE_TO_START:
    return "SCHEDULE_TO_START";
  case ActivityTaskTimeoutType::SCHEDULE_TO_CLOSE:
    return "SCHEDULE_TO_CLOSE";
  case ActivityTaskTimeoutType::HEARTBEAT:
    return "HEARTBEAT";
  default:
    return "";
  }
}

} // namespace ActivityTaskTimeoutTypeMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
