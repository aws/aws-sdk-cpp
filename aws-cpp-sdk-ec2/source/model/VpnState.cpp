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
#include <aws/ec2/model/VpnState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int pending_HASH = HashingUtils::HashString("pending");
static const int available_HASH = HashingUtils::HashString("available");
static const int deleting_HASH = HashingUtils::HashString("deleting");
static const int deleted_HASH = HashingUtils::HashString("deleted");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace VpnStateMapper
{
VpnState GetVpnStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == pending_HASH)
  {
    return VpnState::pending;
  }
  else if (hashCode == available_HASH)
  {
    return VpnState::available;
  }
  else if (hashCode == deleting_HASH)
  {
    return VpnState::deleting;
  }
  else if (hashCode == deleted_HASH)
  {
    return VpnState::deleted;
  }

  return VpnState::NOT_SET;
}

Aws::String GetNameForVpnState(VpnState value)
{
  switch(value)
  {
  case VpnState::pending:
    return "pending";
  case VpnState::available:
    return "available";
  case VpnState::deleting:
    return "deleting";
  case VpnState::deleted:
    return "deleted";
  default:
    return "";
  }
}

} // namespace VpnStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
