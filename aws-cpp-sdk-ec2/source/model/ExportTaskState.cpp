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
#include <aws/ec2/model/ExportTaskState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int active_HASH = HashingUtils::HashString("active");
static const int cancelling_HASH = HashingUtils::HashString("cancelling");
static const int cancelled_HASH = HashingUtils::HashString("cancelled");
static const int completed_HASH = HashingUtils::HashString("completed");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace ExportTaskStateMapper
{
ExportTaskState GetExportTaskStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == active_HASH)
  {
    return ExportTaskState::active;
  }
  else if (hashCode == cancelling_HASH)
  {
    return ExportTaskState::cancelling;
  }
  else if (hashCode == cancelled_HASH)
  {
    return ExportTaskState::cancelled;
  }
  else if (hashCode == completed_HASH)
  {
    return ExportTaskState::completed;
  }

  return ExportTaskState::NOT_SET;
}

Aws::String GetNameForExportTaskState(ExportTaskState value)
{
  switch(value)
  {
  case ExportTaskState::active:
    return "active";
  case ExportTaskState::cancelling:
    return "cancelling";
  case ExportTaskState::cancelled:
    return "cancelled";
  case ExportTaskState::completed:
    return "completed";
  default:
    return "";
  }
}

} // namespace ExportTaskStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
