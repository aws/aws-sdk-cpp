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
#include <aws/codedeploy/model/StopStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
namespace StopStatusMapper
{


StopStatus GetStopStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH)
  {
     return StopStatus::Pending;
  }
  else if (hashCode == Succeeded_HASH)
  {
     return StopStatus::Succeeded;
  }
  return StopStatus::NOT_SET;
}

Aws::String GetNameForStopStatus(StopStatus enumValue)
{
  switch(value)
  {
  case StopStatus::Pending:
    return "Pending";
  case StopStatus::Succeeded:
    return "Succeeded";
  default:
    return "";
  }
}

} // namespace StopStatusMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
