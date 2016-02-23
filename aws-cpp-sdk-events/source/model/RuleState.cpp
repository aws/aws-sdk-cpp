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
#include <aws/events/model/RuleState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{
namespace RuleStateMapper
{


RuleState GetRuleStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH)
  {
     return RuleState::ENABLED;
  }
  else if (hashCode == DISABLED_HASH)
  {
     return RuleState::DISABLED;
  }
  return RuleState::NOT_SET;
}

Aws::String GetNameForRuleState(RuleState enumValue)
{
  switch(value)
  {
  case RuleState::ENABLED:
    return "ENABLED";
  case RuleState::DISABLED:
    return "DISABLED";
  default:
    return "";
  }
}

} // namespace RuleStateMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
