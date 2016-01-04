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
#include <aws/ec2/model/SpotInstanceState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int open_HASH = HashingUtils::HashString("open");
static const int active_HASH = HashingUtils::HashString("active");
static const int closed_HASH = HashingUtils::HashString("closed");
static const int cancelled_HASH = HashingUtils::HashString("cancelled");
static const int failed_HASH = HashingUtils::HashString("failed");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace SpotInstanceStateMapper
{
SpotInstanceState GetSpotInstanceStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == open_HASH)
  {
    return SpotInstanceState::open;
  }
  else if (hashCode == active_HASH)
  {
    return SpotInstanceState::active;
  }
  else if (hashCode == closed_HASH)
  {
    return SpotInstanceState::closed;
  }
  else if (hashCode == cancelled_HASH)
  {
    return SpotInstanceState::cancelled;
  }
  else if (hashCode == failed_HASH)
  {
    return SpotInstanceState::failed;
  }

  return SpotInstanceState::NOT_SET;
}

Aws::String GetNameForSpotInstanceState(SpotInstanceState value)
{
  switch(value)
  {
  case SpotInstanceState::open:
    return "open";
  case SpotInstanceState::active:
    return "active";
  case SpotInstanceState::closed:
    return "closed";
  case SpotInstanceState::cancelled:
    return "cancelled";
  case SpotInstanceState::failed:
    return "failed";
  default:
    return "";
  }
}

} // namespace SpotInstanceStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
