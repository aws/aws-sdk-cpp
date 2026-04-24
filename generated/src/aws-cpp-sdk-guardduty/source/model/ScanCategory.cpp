/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/ScanCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ScanCategoryMapper {

static const int FULL_SCAN_HASH = HashingUtils::HashString("FULL_SCAN");
static const int INCREMENTAL_SCAN_HASH = HashingUtils::HashString("INCREMENTAL_SCAN");

ScanCategory GetScanCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FULL_SCAN_HASH) {
    return ScanCategory::FULL_SCAN;
  } else if (hashCode == INCREMENTAL_SCAN_HASH) {
    return ScanCategory::INCREMENTAL_SCAN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanCategory>(hashCode);
  }

  return ScanCategory::NOT_SET;
}

Aws::String GetNameForScanCategory(ScanCategory enumValue) {
  switch (enumValue) {
    case ScanCategory::NOT_SET:
      return {};
    case ScanCategory::FULL_SCAN:
      return "FULL_SCAN";
    case ScanCategory::INCREMENTAL_SCAN:
      return "INCREMENTAL_SCAN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanCategoryMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
