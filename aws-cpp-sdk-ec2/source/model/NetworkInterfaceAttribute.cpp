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
#include <aws/ec2/model/NetworkInterfaceAttribute.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int description_HASH = HashingUtils::HashString("description");
static const int groupSet_HASH = HashingUtils::HashString("groupSet");
static const int sourceDestCheck_HASH = HashingUtils::HashString("sourceDestCheck");
static const int attachment_HASH = HashingUtils::HashString("attachment");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace NetworkInterfaceAttributeMapper
{
NetworkInterfaceAttribute GetNetworkInterfaceAttributeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == description_HASH)
  {
    return NetworkInterfaceAttribute::description;
  }
  else if (hashCode == groupSet_HASH)
  {
    return NetworkInterfaceAttribute::groupSet;
  }
  else if (hashCode == sourceDestCheck_HASH)
  {
    return NetworkInterfaceAttribute::sourceDestCheck;
  }
  else if (hashCode == attachment_HASH)
  {
    return NetworkInterfaceAttribute::attachment;
  }

  return NetworkInterfaceAttribute::NOT_SET;
}

Aws::String GetNameForNetworkInterfaceAttribute(NetworkInterfaceAttribute value)
{
  switch(value)
  {
  case NetworkInterfaceAttribute::description:
    return "description";
  case NetworkInterfaceAttribute::groupSet:
    return "groupSet";
  case NetworkInterfaceAttribute::sourceDestCheck:
    return "sourceDestCheck";
  case NetworkInterfaceAttribute::attachment:
    return "attachment";
  default:
    return "";
  }
}

} // namespace NetworkInterfaceAttributeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
