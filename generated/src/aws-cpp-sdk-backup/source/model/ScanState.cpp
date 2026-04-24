/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanState.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace ScanStateMapper {

static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int COMPLETED_WITH_ISSUES_HASH = HashingUtils::HashString("COMPLETED_WITH_ISSUES");
static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");

ScanState GetScanStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CANCELED_HASH) {
    return ScanState::CANCELED;
  } else if (hashCode == COMPLETED_HASH) {
    return ScanState::COMPLETED;
  } else if (hashCode == COMPLETED_WITH_ISSUES_HASH) {
    return ScanState::COMPLETED_WITH_ISSUES;
  } else if (hashCode == CREATED_HASH) {
    return ScanState::CREATED;
  } else if (hashCode == FAILED_HASH) {
    return ScanState::FAILED;
  } else if (hashCode == RUNNING_HASH) {
    return ScanState::RUNNING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanState>(hashCode);
  }

  return ScanState::NOT_SET;
}

Aws::String GetNameForScanState(ScanState enumValue) {
  switch (enumValue) {
    case ScanState::NOT_SET:
      return {};
    case ScanState::CANCELED:
      return "CANCELED";
    case ScanState::COMPLETED:
      return "COMPLETED";
    case ScanState::COMPLETED_WITH_ISSUES:
      return "COMPLETED_WITH_ISSUES";
    case ScanState::CREATED:
      return "CREATED";
    case ScanState::FAILED:
      return "FAILED";
    case ScanState::RUNNING:
      return "RUNNING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanStateMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
