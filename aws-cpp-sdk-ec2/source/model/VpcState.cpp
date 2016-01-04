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
#include <aws/ec2/model/VpcState.h>
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
namespace VpcStateMapper
{
VpcState GetVpcStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == pending_HASH)
  {
    return VpcState::pending;
  }
  else if (hashCode == available_HASH)
  {
    return VpcState::available;
  }

  return VpcState::NOT_SET;
}

Aws::String GetNameForVpcState(VpcState value)
{
  switch(value)
  {
  case VpcState::pending:
    return "pending";
  case VpcState::available:
    return "available";
  default:
    return "";
  }
}

} // namespace VpcStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
