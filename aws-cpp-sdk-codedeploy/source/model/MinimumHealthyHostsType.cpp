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
#include <aws/codedeploy/model/MinimumHealthyHostsType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int HOST_COUNT_HASH = HashingUtils::HashString("HOST_COUNT");
static const int FLEET_PERCENT_HASH = HashingUtils::HashString("FLEET_PERCENT");

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
namespace MinimumHealthyHostsTypeMapper
{
MinimumHealthyHostsType GetMinimumHealthyHostsTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == HOST_COUNT_HASH)
  {
    return MinimumHealthyHostsType::HOST_COUNT;
  }
  else if (hashCode == FLEET_PERCENT_HASH)
  {
    return MinimumHealthyHostsType::FLEET_PERCENT;
  }

  return MinimumHealthyHostsType::NOT_SET;
}

Aws::String GetNameForMinimumHealthyHostsType(MinimumHealthyHostsType value)
{
  switch(value)
  {
  case MinimumHealthyHostsType::HOST_COUNT:
    return "HOST_COUNT";
  case MinimumHealthyHostsType::FLEET_PERCENT:
    return "FLEET_PERCENT";
  default:
    return "";
  }
}

} // namespace MinimumHealthyHostsTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
