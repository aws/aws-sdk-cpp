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
#include <aws/ec2/model/InstanceLifecycleType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int spot_HASH = HashingUtils::HashString("spot");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace InstanceLifecycleTypeMapper
{


InstanceLifecycleType GetInstanceLifecycleTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == spot_HASH)
  {
     return InstanceLifecycleType::spot;
  }
  return InstanceLifecycleType::NOT_SET;
}

Aws::String GetNameForInstanceLifecycleType(InstanceLifecycleType enumValue)
{
  switch(enumValue)
  {
  case InstanceLifecycleType::spot:
    return "spot";
  default:
    return "";
  }
}

} // namespace InstanceLifecycleTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
