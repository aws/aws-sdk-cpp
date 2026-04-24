/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/JobStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace JobStatusMapper {

static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");

JobStatus GetJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBMITTED_HASH) {
    return JobStatus::SUBMITTED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return JobStatus::IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return JobStatus::FAILED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return JobStatus::SUCCEEDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobStatus>(hashCode);
  }

  return JobStatus::NOT_SET;
}

Aws::String GetNameForJobStatus(JobStatus enumValue) {
  switch (enumValue) {
    case JobStatus::NOT_SET:
      return {};
    case JobStatus::SUBMITTED:
      return "SUBMITTED";
    case JobStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case JobStatus::FAILED:
      return "FAILED";
    case JobStatus::SUCCEEDED:
      return "SUCCEEDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
