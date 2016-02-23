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
#include <aws/ec2/model/SpotInstanceType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int one_time_HASH = HashingUtils::HashString("one-time");
static const int persistent_HASH = HashingUtils::HashString("persistent");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace SpotInstanceTypeMapper
{


SpotInstanceType GetSpotInstanceTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == one_time_HASH)
  {
     return SpotInstanceType::one_time;
  }
  else if (hashCode == persistent_HASH)
  {
     return SpotInstanceType::persistent;
  }
  return SpotInstanceType::NOT_SET;
}

Aws::String GetNameForSpotInstanceType(SpotInstanceType value)
{
  switch(value)
  {
  case SpotInstanceType::one_time:
    return "one-time";
  case SpotInstanceType::persistent:
    return "persistent";
  default:
    return "";
  }
}

} // namespace SpotInstanceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
