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
#include <aws/ec2/model/VpnStaticRouteSource.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Static_HASH = HashingUtils::HashString("Static");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace VpnStaticRouteSourceMapper
{
VpnStaticRouteSource GetVpnStaticRouteSourceForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Static_HASH)
  {
    return VpnStaticRouteSource::Static;
  }

  return VpnStaticRouteSource::NOT_SET;
}

Aws::String GetNameForVpnStaticRouteSource(VpnStaticRouteSource value)
{
  switch(value)
  {
  case VpnStaticRouteSource::Static:
    return "Static";
  default:
    return "";
  }
}

} // namespace VpnStaticRouteSourceMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
