/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/location/model/JobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {
namespace JobStatusMapper {

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Running_HASH = HashingUtils::HashString("Running");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Cancelling_HASH = HashingUtils::HashString("Cancelling");
static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");

JobStatus GetJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH) {
    return JobStatus::Pending;
  } else if (hashCode == Running_HASH) {
    return JobStatus::Running;
  } else if (hashCode == Completed_HASH) {
    return JobStatus::Completed;
  } else if (hashCode == Failed_HASH) {
    return JobStatus::Failed;
  } else if (hashCode == Cancelling_HASH) {
    return JobStatus::Cancelling;
  } else if (hashCode == Cancelled_HASH) {
    return JobStatus::Cancelled;
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
    case JobStatus::Pending:
      return "Pending";
    case JobStatus::Running:
      return "Running";
    case JobStatus::Completed:
      return "Completed";
    case JobStatus::Failed:
      return "Failed";
    case JobStatus::Cancelling:
      return "Cancelling";
    case JobStatus::Cancelled:
      return "Cancelled";
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
}  // namespace LocationService
}  // namespace Aws
