/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanJobStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace ScanJobStatusMapper {

static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int COMPLETED_WITH_ISSUES_HASH = HashingUtils::HashString("COMPLETED_WITH_ISSUES");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
static const int AGGREGATE_ALL_HASH = HashingUtils::HashString("AGGREGATE_ALL");
static const int ANY_HASH = HashingUtils::HashString("ANY");

ScanJobStatus GetScanJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_HASH) {
    return ScanJobStatus::CREATED;
  } else if (hashCode == COMPLETED_HASH) {
    return ScanJobStatus::COMPLETED;
  } else if (hashCode == COMPLETED_WITH_ISSUES_HASH) {
    return ScanJobStatus::COMPLETED_WITH_ISSUES;
  } else if (hashCode == RUNNING_HASH) {
    return ScanJobStatus::RUNNING;
  } else if (hashCode == FAILED_HASH) {
    return ScanJobStatus::FAILED;
  } else if (hashCode == CANCELED_HASH) {
    return ScanJobStatus::CANCELED;
  } else if (hashCode == AGGREGATE_ALL_HASH) {
    return ScanJobStatus::AGGREGATE_ALL;
  } else if (hashCode == ANY_HASH) {
    return ScanJobStatus::ANY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanJobStatus>(hashCode);
  }

  return ScanJobStatus::NOT_SET;
}

Aws::String GetNameForScanJobStatus(ScanJobStatus enumValue) {
  switch (enumValue) {
    case ScanJobStatus::NOT_SET:
      return {};
    case ScanJobStatus::CREATED:
      return "CREATED";
    case ScanJobStatus::COMPLETED:
      return "COMPLETED";
    case ScanJobStatus::COMPLETED_WITH_ISSUES:
      return "COMPLETED_WITH_ISSUES";
    case ScanJobStatus::RUNNING:
      return "RUNNING";
    case ScanJobStatus::FAILED:
      return "FAILED";
    case ScanJobStatus::CANCELED:
      return "CANCELED";
    case ScanJobStatus::AGGREGATE_ALL:
      return "AGGREGATE_ALL";
    case ScanJobStatus::ANY:
      return "ANY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanJobStatusMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
