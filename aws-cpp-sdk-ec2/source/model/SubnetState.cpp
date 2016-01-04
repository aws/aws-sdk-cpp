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
#include <aws/ec2/model/SubnetState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int pending_HASH = HashingUtils::HashString("pending");
static const int available_HASH = HashingUtils::HashString("available");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace SubnetStateMapper
{
SubnetState GetSubnetStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == pending_HASH)
  {
    return SubnetState::pending;
  }
  else if (hashCode == available_HASH)
  {
    return SubnetState::available;
  }

  return SubnetState::NOT_SET;
}

Aws::String GetNameForSubnetState(SubnetState value)
{
  switch(value)
  {
  case SubnetState::pending:
    return "pending";
  case SubnetState::available:
    return "available";
  default:
    return "";
  }
}

} // namespace SubnetStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
