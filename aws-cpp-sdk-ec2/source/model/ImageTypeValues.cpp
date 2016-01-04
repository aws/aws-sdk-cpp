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
#include <aws/ec2/model/ImageTypeValues.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int machine_HASH = HashingUtils::HashString("machine");
static const int kernel_HASH = HashingUtils::HashString("kernel");
static const int ramdisk_HASH = HashingUtils::HashString("ramdisk");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace ImageTypeValuesMapper
{
ImageTypeValues GetImageTypeValuesForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == machine_HASH)
  {
    return ImageTypeValues::machine;
  }
  else if (hashCode == kernel_HASH)
  {
    return ImageTypeValues::kernel;
  }
  else if (hashCode == ramdisk_HASH)
  {
    return ImageTypeValues::ramdisk;
  }

  return ImageTypeValues::NOT_SET;
}

Aws::String GetNameForImageTypeValues(ImageTypeValues value)
{
  switch(value)
  {
  case ImageTypeValues::machine:
    return "machine";
  case ImageTypeValues::kernel:
    return "kernel";
  case ImageTypeValues::ramdisk:
    return "ramdisk";
  default:
    return "";
  }
}

} // namespace ImageTypeValuesMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
