/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/model/ReportSubmissionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AbuseSignal {
namespace Model {
namespace ReportSubmissionStatusMapper {

static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");

ReportSubmissionStatus GetReportSubmissionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUEUED_HASH) {
    return ReportSubmissionStatus::QUEUED;
  } else if (hashCode == PROCESSING_HASH) {
    return ReportSubmissionStatus::PROCESSING;
  } else if (hashCode == COMPLETED_HASH) {
    return ReportSubmissionStatus::COMPLETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReportSubmissionStatus>(hashCode);
  }

  return ReportSubmissionStatus::NOT_SET;
}

Aws::String GetNameForReportSubmissionStatus(ReportSubmissionStatus enumValue) {
  switch (enumValue) {
    case ReportSubmissionStatus::NOT_SET:
      return {};
    case ReportSubmissionStatus::QUEUED:
      return "QUEUED";
    case ReportSubmissionStatus::PROCESSING:
      return "PROCESSING";
    case ReportSubmissionStatus::COMPLETED:
      return "COMPLETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReportSubmissionStatusMapper
}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
