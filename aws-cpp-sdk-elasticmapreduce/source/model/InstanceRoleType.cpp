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
#include <aws/elasticmapreduce/model/InstanceRoleType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int MASTER_HASH = HashingUtils::HashString("MASTER");
static const int CORE_HASH = HashingUtils::HashString("CORE");
static const int TASK_HASH = HashingUtils::HashString("TASK");

namespace Aws
{
namespace EMR
{
namespace Model
{
namespace InstanceRoleTypeMapper
{
InstanceRoleType GetInstanceRoleTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == MASTER_HASH)
  {
    return InstanceRoleType::MASTER;
  }
  else if (hashCode == CORE_HASH)
  {
    return InstanceRoleType::CORE;
  }
  else if (hashCode == TASK_HASH)
  {
    return InstanceRoleType::TASK;
  }

  return InstanceRoleType::NOT_SET;
}

Aws::String GetNameForInstanceRoleType(InstanceRoleType value)
{
  switch(value)
  {
  case InstanceRoleType::MASTER:
    return "MASTER";
  case InstanceRoleType::CORE:
    return "CORE";
  case InstanceRoleType::TASK:
    return "TASK";
  default:
    return "";
  }
}

} // namespace InstanceRoleTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
