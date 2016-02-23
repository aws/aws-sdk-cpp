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
#include <aws/ec2/model/ShutdownBehavior.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int stop_HASH = HashingUtils::HashString("stop");
static const int terminate_HASH = HashingUtils::HashString("terminate");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace ShutdownBehaviorMapper
{


ShutdownBehavior GetShutdownBehaviorForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == stop_HASH)
  {
     return ShutdownBehavior::stop;
  }
  else if (hashCode == terminate_HASH)
  {
     return ShutdownBehavior::terminate;
  }
  return ShutdownBehavior::NOT_SET;
}

Aws::String GetNameForShutdownBehavior(ShutdownBehavior value)
{
  switch(value)
  {
  case ShutdownBehavior::stop:
    return "stop";
  case ShutdownBehavior::terminate:
    return "terminate";
  default:
    return "";
  }
}

} // namespace ShutdownBehaviorMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
