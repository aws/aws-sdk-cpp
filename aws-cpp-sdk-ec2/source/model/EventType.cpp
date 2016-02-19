/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int instanceChange_HASH = HashingUtils::HashString("instanceChange");
static const int fleetRequestChange_HASH = HashingUtils::HashString("fleetRequestChange");
static const int error_HASH = HashingUtils::HashString("error");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace EventTypeMapper
{
EventType GetEventTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == instanceChange_HASH)
  {
    return EventType::instanceChange;
  }
  else if (hashCode == fleetRequestChange_HASH)
  {
    return EventType::fleetRequestChange;
  }
  else if (hashCode == error_HASH)
  {
    return EventType::error;
  }

  return EventType::NOT_SET;
}

Aws::String GetNameForEventType(EventType value)
{
  switch(value)
  {
  case EventType::instanceChange:
    return "instanceChange";
  case EventType::fleetRequestChange:
    return "fleetRequestChange";
  case EventType::error:
    return "error";
  default:
    return "";
  }
}

} // namespace EventTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
