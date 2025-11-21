/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanResultStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace ScanResultStatusMapper {

static const int NO_THREATS_FOUND_HASH = HashingUtils::HashString("NO_THREATS_FOUND");
static const int THREATS_FOUND_HASH = HashingUtils::HashString("THREATS_FOUND");

ScanResultStatus GetScanResultStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NO_THREATS_FOUND_HASH) {
    return ScanResultStatus::NO_THREATS_FOUND;
  } else if (hashCode == THREATS_FOUND_HASH) {
    return ScanResultStatus::THREATS_FOUND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanResultStatus>(hashCode);
  }

  return ScanResultStatus::NOT_SET;
}

Aws::String GetNameForScanResultStatus(ScanResultStatus enumValue) {
  switch (enumValue) {
    case ScanResultStatus::NOT_SET:
      return {};
    case ScanResultStatus::NO_THREATS_FOUND:
      return "NO_THREATS_FOUND";
    case ScanResultStatus::THREATS_FOUND:
      return "THREATS_FOUND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanResultStatusMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
