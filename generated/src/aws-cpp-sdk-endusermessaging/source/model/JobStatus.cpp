/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/endusermessaging/model/JobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {
namespace JobStatusMapper {

static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

JobStatus GetJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCESS_HASH) {
    return JobStatus::SUCCESS;
  } else if (hashCode == PROCESSING_HASH) {
    return JobStatus::PROCESSING;
  } else if (hashCode == FAILED_HASH) {
    return JobStatus::FAILED;
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
    case JobStatus::SUCCESS:
      return "SUCCESS";
    case JobStatus::PROCESSING:
      return "PROCESSING";
    case JobStatus::FAILED:
      return "FAILED";
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
}  // namespace EndUserMessaging
}  // namespace Aws
