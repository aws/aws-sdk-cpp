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
#include <aws/ec2/model/VolumeStatusName.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int io_enabled_HASH = HashingUtils::HashString("io-enabled");
static const int io_performance_HASH = HashingUtils::HashString("io-performance");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace VolumeStatusNameMapper
{
VolumeStatusName GetVolumeStatusNameForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == io_enabled_HASH)
  {
    return VolumeStatusName::io_enabled;
  }
  else if (hashCode == io_performance_HASH)
  {
    return VolumeStatusName::io_performance;
  }

  return VolumeStatusName::NOT_SET;
}

Aws::String GetNameForVolumeStatusName(VolumeStatusName value)
{
  switch(value)
  {
  case VolumeStatusName::io_enabled:
    return "io-enabled";
  case VolumeStatusName::io_performance:
    return "io-performance";
  default:
    return "";
  }
}

} // namespace VolumeStatusNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
