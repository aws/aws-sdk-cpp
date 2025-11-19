/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanJobState.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace ScanJobStateMapper {

static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int COMPLETED_WITH_ISSUES_HASH = HashingUtils::HashString("COMPLETED_WITH_ISSUES");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");

ScanJobState GetScanJobStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETED_HASH) {
    return ScanJobState::COMPLETED;
  } else if (hashCode == COMPLETED_WITH_ISSUES_HASH) {
    return ScanJobState::COMPLETED_WITH_ISSUES;
  } else if (hashCode == FAILED_HASH) {
    return ScanJobState::FAILED;
  } else if (hashCode == CANCELED_HASH) {
    return ScanJobState::CANCELED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanJobState>(hashCode);
  }

  return ScanJobState::NOT_SET;
}

Aws::String GetNameForScanJobState(ScanJobState enumValue) {
  switch (enumValue) {
    case ScanJobState::NOT_SET:
      return {};
    case ScanJobState::COMPLETED:
      return "COMPLETED";
    case ScanJobState::COMPLETED_WITH_ISSUES:
      return "COMPLETED_WITH_ISSUES";
    case ScanJobState::FAILED:
      return "FAILED";
    case ScanJobState::CANCELED:
      return "CANCELED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanJobStateMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
