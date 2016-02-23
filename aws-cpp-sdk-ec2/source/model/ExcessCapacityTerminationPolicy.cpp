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
#include <aws/ec2/model/ExcessCapacityTerminationPolicy.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int noTermination_HASH = HashingUtils::HashString("noTermination");
static const int default__HASH = HashingUtils::HashString("default");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace ExcessCapacityTerminationPolicyMapper
{


ExcessCapacityTerminationPolicy GetExcessCapacityTerminationPolicyForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == noTermination_HASH)
  {
     return ExcessCapacityTerminationPolicy::noTermination;
  }
  else if (hashCode == default__HASH)
  {
     return ExcessCapacityTerminationPolicy::default_;
  }
  return ExcessCapacityTerminationPolicy::NOT_SET;
}

Aws::String GetNameForExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy enumValue)
{
  switch(value)
  {
  case ExcessCapacityTerminationPolicy::noTermination:
    return "noTermination";
  case ExcessCapacityTerminationPolicy::default_:
    return "default";
  default:
    return "";
  }
}

} // namespace ExcessCapacityTerminationPolicyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
