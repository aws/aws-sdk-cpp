/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/AmiScanMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace AmiScanModeMapper {

static const int SCAN_ALL_HASH = HashingUtils::HashString("SCAN_ALL");
static const int TARGET_SCANNING_HASH = HashingUtils::HashString("TARGET_SCANNING");

AmiScanMode GetAmiScanModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SCAN_ALL_HASH) {
    return AmiScanMode::SCAN_ALL;
  } else if (hashCode == TARGET_SCANNING_HASH) {
    return AmiScanMode::TARGET_SCANNING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AmiScanMode>(hashCode);
  }

  return AmiScanMode::NOT_SET;
}

Aws::String GetNameForAmiScanMode(AmiScanMode enumValue) {
  switch (enumValue) {
    case AmiScanMode::NOT_SET:
      return {};
    case AmiScanMode::SCAN_ALL:
      return "SCAN_ALL";
    case AmiScanMode::TARGET_SCANNING:
      return "TARGET_SCANNING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AmiScanModeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
