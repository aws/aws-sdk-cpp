/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devicefarm/model/ReportStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {
namespace ReportStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");
static const int ERRORED_HASH = HashingUtils::HashString("ERRORED");

ReportStatus GetReportStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ReportStatus::PENDING;
  } else if (hashCode == RUNNING_HASH) {
    return ReportStatus::RUNNING;
  } else if (hashCode == COMPLETED_HASH) {
    return ReportStatus::COMPLETED;
  } else if (hashCode == SKIPPED_HASH) {
    return ReportStatus::SKIPPED;
  } else if (hashCode == ERRORED_HASH) {
    return ReportStatus::ERRORED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReportStatus>(hashCode);
  }

  return ReportStatus::NOT_SET;
}

Aws::String GetNameForReportStatus(ReportStatus enumValue) {
  switch (enumValue) {
    case ReportStatus::NOT_SET:
      return {};
    case ReportStatus::PENDING:
      return "PENDING";
    case ReportStatus::RUNNING:
      return "RUNNING";
    case ReportStatus::COMPLETED:
      return "COMPLETED";
    case ReportStatus::SKIPPED:
      return "SKIPPED";
    case ReportStatus::ERRORED:
      return "ERRORED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReportStatusMapper
}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
