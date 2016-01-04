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
#include <aws/ec2/model/VolumeAttributeName.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int autoEnableIO_HASH = HashingUtils::HashString("autoEnableIO");
static const int productCodes_HASH = HashingUtils::HashString("productCodes");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace VolumeAttributeNameMapper
{
VolumeAttributeName GetVolumeAttributeNameForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == autoEnableIO_HASH)
  {
    return VolumeAttributeName::autoEnableIO;
  }
  else if (hashCode == productCodes_HASH)
  {
    return VolumeAttributeName::productCodes;
  }

  return VolumeAttributeName::NOT_SET;
}

Aws::String GetNameForVolumeAttributeName(VolumeAttributeName value)
{
  switch(value)
  {
  case VolumeAttributeName::autoEnableIO:
    return "autoEnableIO";
  case VolumeAttributeName::productCodes:
    return "productCodes";
  default:
    return "";
  }
}

} // namespace VolumeAttributeNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
