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
#include <aws/email/model/StopTarget.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Rule_HASH = HashingUtils::HashString("Rule");
static const int RuleSet_HASH = HashingUtils::HashString("RuleSet");

namespace Aws
{
namespace SES
{
namespace Model
{
namespace StopTargetMapper
{
StopTarget GetStopTargetForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Rule_HASH)
  {
    return StopTarget::Rule;
  }
  else if (hashCode == RuleSet_HASH)
  {
    return StopTarget::RuleSet;
  }

  return StopTarget::NOT_SET;
}

Aws::String GetNameForStopTarget(StopTarget value)
{
  switch(value)
  {
  case StopTarget::Rule:
    return "Rule";
  case StopTarget::RuleSet:
    return "RuleSet";
  default:
    return "";
  }
}

} // namespace StopTargetMapper
} // namespace Model
} // namespace SES
} // namespace Aws
