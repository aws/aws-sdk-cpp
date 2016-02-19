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
#include <aws/ec2/model/DatafeedSubscriptionState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Active_HASH = HashingUtils::HashString("Active");
static const int Inactive_HASH = HashingUtils::HashString("Inactive");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace DatafeedSubscriptionStateMapper
{
DatafeedSubscriptionState GetDatafeedSubscriptionStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Active_HASH)
  {
    return DatafeedSubscriptionState::Active;
  }
  else if (hashCode == Inactive_HASH)
  {
    return DatafeedSubscriptionState::Inactive;
  }

  return DatafeedSubscriptionState::NOT_SET;
}

Aws::String GetNameForDatafeedSubscriptionState(DatafeedSubscriptionState value)
{
  switch(value)
  {
  case DatafeedSubscriptionState::Active:
    return "Active";
  case DatafeedSubscriptionState::Inactive:
    return "Inactive";
  default:
    return "";
  }
}

} // namespace DatafeedSubscriptionStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
