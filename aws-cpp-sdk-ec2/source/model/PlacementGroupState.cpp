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
#include <aws/ec2/model/PlacementGroupState.h>
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
namespace PlacementGroupStateMapper
{
PlacementGroupState GetPlacementGroupStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == pending_HASH)
  {
    return PlacementGroupState::pending;
  }
  else if (hashCode == available_HASH)
  {
    return PlacementGroupState::available;
  }
  else if (hashCode == deleting_HASH)
  {
    return PlacementGroupState::deleting;
  }
  else if (hashCode == deleted_HASH)
  {
    return PlacementGroupState::deleted;
  }

  return PlacementGroupState::NOT_SET;
}

Aws::String GetNameForPlacementGroupState(PlacementGroupState value)
{
  switch(value)
  {
  case PlacementGroupState::pending:
    return "pending";
  case PlacementGroupState::available:
    return "available";
  case PlacementGroupState::deleting:
    return "deleting";
  case PlacementGroupState::deleted:
    return "deleted";
  default:
    return "";
  }
}

} // namespace PlacementGroupStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
