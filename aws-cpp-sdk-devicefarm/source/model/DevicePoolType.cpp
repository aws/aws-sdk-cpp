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
#include <aws/devicefarm/model/DevicePoolType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int CURATED_HASH = HashingUtils::HashString("CURATED");
static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
namespace DevicePoolTypeMapper
{
DevicePoolType GetDevicePoolTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == CURATED_HASH)
  {
    return DevicePoolType::CURATED;
  }
  else if (hashCode == PRIVATE__HASH)
  {
    return DevicePoolType::PRIVATE_;
  }

  return DevicePoolType::NOT_SET;
}

Aws::String GetNameForDevicePoolType(DevicePoolType value)
{
  switch(value)
  {
  case DevicePoolType::CURATED:
    return "CURATED";
  case DevicePoolType::PRIVATE_:
    return "PRIVATE";
  default:
    return "";
  }
}

} // namespace DevicePoolTypeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
