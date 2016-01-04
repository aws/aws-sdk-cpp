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
#include <aws/ec2/model/AvailabilityZoneState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int available_HASH = HashingUtils::HashString("available");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace AvailabilityZoneStateMapper
{
AvailabilityZoneState GetAvailabilityZoneStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == available_HASH)
  {
    return AvailabilityZoneState::available;
  }

  return AvailabilityZoneState::NOT_SET;
}

Aws::String GetNameForAvailabilityZoneState(AvailabilityZoneState value)
{
  switch(value)
  {
  case AvailabilityZoneState::available:
    return "available";
  default:
    return "";
  }
}

} // namespace AvailabilityZoneStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
