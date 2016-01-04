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
#include <aws/ec2/model/TrafficType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ACCEPT_HASH = HashingUtils::HashString("ACCEPT");
static const int REJECT_HASH = HashingUtils::HashString("REJECT");
static const int ALL_HASH = HashingUtils::HashString("ALL");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace TrafficTypeMapper
{
TrafficType GetTrafficTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == ACCEPT_HASH)
  {
    return TrafficType::ACCEPT;
  }
  else if (hashCode == REJECT_HASH)
  {
    return TrafficType::REJECT;
  }
  else if (hashCode == ALL_HASH)
  {
    return TrafficType::ALL;
  }

  return TrafficType::NOT_SET;
}

Aws::String GetNameForTrafficType(TrafficType value)
{
  switch(value)
  {
  case TrafficType::ACCEPT:
    return "ACCEPT";
  case TrafficType::REJECT:
    return "REJECT";
  case TrafficType::ALL:
    return "ALL";
  default:
    return "";
  }
}

} // namespace TrafficTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
