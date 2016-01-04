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
#include <aws/ec2/model/RouteState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int active_HASH = HashingUtils::HashString("active");
static const int blackhole_HASH = HashingUtils::HashString("blackhole");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace RouteStateMapper
{
RouteState GetRouteStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == active_HASH)
  {
    return RouteState::active;
  }
  else if (hashCode == blackhole_HASH)
  {
    return RouteState::blackhole;
  }

  return RouteState::NOT_SET;
}

Aws::String GetNameForRouteState(RouteState value)
{
  switch(value)
  {
  case RouteState::active:
    return "active";
  case RouteState::blackhole:
    return "blackhole";
  default:
    return "";
  }
}

} // namespace RouteStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
