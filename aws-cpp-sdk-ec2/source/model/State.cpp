/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/State.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Available_HASH = HashingUtils::HashString("Available");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");
static const int Deleted_HASH = HashingUtils::HashString("Deleted");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace StateMapper
{
State GetStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Pending_HASH)
  {
    return State::Pending;
  }
  else if (hashCode == Available_HASH)
  {
    return State::Available;
  }
  else if (hashCode == Deleting_HASH)
  {
    return State::Deleting;
  }
  else if (hashCode == Deleted_HASH)
  {
    return State::Deleted;
  }

  return State::NOT_SET;
}

Aws::String GetNameForState(State value)
{
  switch(value)
  {
  case State::Pending:
    return "Pending";
  case State::Available:
    return "Available";
  case State::Deleting:
    return "Deleting";
  case State::Deleted:
    return "Deleted";
  default:
    return "";
  }
}

} // namespace StateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
