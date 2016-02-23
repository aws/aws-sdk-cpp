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
#include <aws/monitoring/model/StateValue.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int OK_HASH = HashingUtils::HashString("OK");
static const int ALARM_HASH = HashingUtils::HashString("ALARM");
static const int INSUFFICIENT_DATA_HASH = HashingUtils::HashString("INSUFFICIENT_DATA");

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
namespace StateValueMapper
{


StateValue GetStateValueForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OK_HASH)
  {
     return StateValue::OK;
  }
  else if (hashCode == ALARM_HASH)
  {
     return StateValue::ALARM;
  }
  else if (hashCode == INSUFFICIENT_DATA_HASH)
  {
     return StateValue::INSUFFICIENT_DATA;
  }
  return StateValue::NOT_SET;
}

Aws::String GetNameForStateValue(StateValue value)
{
  switch(value)
  {
  case StateValue::OK:
    return "OK";
  case StateValue::ALARM:
    return "ALARM";
  case StateValue::INSUFFICIENT_DATA:
    return "INSUFFICIENT_DATA";
  default:
    return "";
  }
}

} // namespace StateValueMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
