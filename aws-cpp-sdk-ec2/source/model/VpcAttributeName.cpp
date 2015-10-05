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
#include <aws/ec2/model/VpcAttributeName.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int enableDnsSupport_HASH = HashingUtils::HashString("enableDnsSupport");
static const int enableDnsHostnames_HASH = HashingUtils::HashString("enableDnsHostnames");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace VpcAttributeNameMapper
{
VpcAttributeName GetVpcAttributeNameForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == enableDnsSupport_HASH)
  {
    return VpcAttributeName::enableDnsSupport;
  }
  else if (hashCode == enableDnsHostnames_HASH)
  {
    return VpcAttributeName::enableDnsHostnames;
  }

  return VpcAttributeName::NOT_SET;
}

Aws::String GetNameForVpcAttributeName(VpcAttributeName value)
{
  switch(value)
  {
  case VpcAttributeName::enableDnsSupport:
    return "enableDnsSupport";
  case VpcAttributeName::enableDnsHostnames:
    return "enableDnsHostnames";
  default:
    return "";
  }
}

} // namespace VpcAttributeNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
