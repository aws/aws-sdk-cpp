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
#include <aws/swf/model/CloseStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
static const int CONTINUED_AS_NEW_HASH = HashingUtils::HashString("CONTINUED_AS_NEW");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace CloseStatusMapper
{
CloseStatus GetCloseStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == COMPLETED_HASH)
  {
    return CloseStatus::COMPLETED;
  }
  else if (hashCode == FAILED_HASH)
  {
    return CloseStatus::FAILED;
  }
  else if (hashCode == CANCELED_HASH)
  {
    return CloseStatus::CANCELED;
  }
  else if (hashCode == TERMINATED_HASH)
  {
    return CloseStatus::TERMINATED;
  }
  else if (hashCode == CONTINUED_AS_NEW_HASH)
  {
    return CloseStatus::CONTINUED_AS_NEW;
  }
  else if (hashCode == TIMED_OUT_HASH)
  {
    return CloseStatus::TIMED_OUT;
  }

  return CloseStatus::NOT_SET;
}

Aws::String GetNameForCloseStatus(CloseStatus value)
{
  switch(value)
  {
  case CloseStatus::COMPLETED:
    return "COMPLETED";
  case CloseStatus::FAILED:
    return "FAILED";
  case CloseStatus::CANCELED:
    return "CANCELED";
  case CloseStatus::TERMINATED:
    return "TERMINATED";
  case CloseStatus::CONTINUED_AS_NEW:
    return "CONTINUED_AS_NEW";
  case CloseStatus::TIMED_OUT:
    return "TIMED_OUT";
  default:
    return "";
  }
}

} // namespace CloseStatusMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
