/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace ScanModeMapper {

static const int FULL_SCAN_HASH = HashingUtils::HashString("FULL_SCAN");
static const int INCREMENTAL_SCAN_HASH = HashingUtils::HashString("INCREMENTAL_SCAN");

ScanMode GetScanModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FULL_SCAN_HASH) {
    return ScanMode::FULL_SCAN;
  } else if (hashCode == INCREMENTAL_SCAN_HASH) {
    return ScanMode::INCREMENTAL_SCAN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanMode>(hashCode);
  }

  return ScanMode::NOT_SET;
}

Aws::String GetNameForScanMode(ScanMode enumValue) {
  switch (enumValue) {
    case ScanMode::NOT_SET:
      return {};
    case ScanMode::FULL_SCAN:
      return "FULL_SCAN";
    case ScanMode::INCREMENTAL_SCAN:
      return "INCREMENTAL_SCAN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanModeMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
