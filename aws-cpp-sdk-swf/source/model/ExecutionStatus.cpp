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
#include <aws/swf/model/ExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int OPEN_HASH = HashingUtils::HashString("OPEN");
static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace ExecutionStatusMapper
{
ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == OPEN_HASH)
  {
    return ExecutionStatus::OPEN;
  }
  else if (hashCode == CLOSED_HASH)
  {
    return ExecutionStatus::CLOSED;
  }

  return ExecutionStatus::NOT_SET;
}

Aws::String GetNameForExecutionStatus(ExecutionStatus value)
{
  switch(value)
  {
  case ExecutionStatus::OPEN:
    return "OPEN";
  case ExecutionStatus::CLOSED:
    return "CLOSED";
  default:
    return "";
  }
}

} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
