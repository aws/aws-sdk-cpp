/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ScanStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace ScanStatusMapper {

static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int WAITING_FOR_BUILD_HASH = HashingUtils::HashString("WAITING_FOR_BUILD");
static const int BUILDING_HASH = HashingUtils::HashString("BUILDING");
static const int WAITING_FOR_SCAN_HASH = HashingUtils::HashString("WAITING_FOR_SCAN");
static const int SCANNING_HASH = HashingUtils::HashString("SCANNING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ScanStatus GetScanStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBMITTED_HASH) {
    return ScanStatus::SUBMITTED;
  } else if (hashCode == WAITING_FOR_BUILD_HASH) {
    return ScanStatus::WAITING_FOR_BUILD;
  } else if (hashCode == BUILDING_HASH) {
    return ScanStatus::BUILDING;
  } else if (hashCode == WAITING_FOR_SCAN_HASH) {
    return ScanStatus::WAITING_FOR_SCAN;
  } else if (hashCode == SCANNING_HASH) {
    return ScanStatus::SCANNING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ScanStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return ScanStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanStatus>(hashCode);
  }

  return ScanStatus::NOT_SET;
}

Aws::String GetNameForScanStatus(ScanStatus enumValue) {
  switch (enumValue) {
    case ScanStatus::NOT_SET:
      return {};
    case ScanStatus::SUBMITTED:
      return "SUBMITTED";
    case ScanStatus::WAITING_FOR_BUILD:
      return "WAITING_FOR_BUILD";
    case ScanStatus::BUILDING:
      return "BUILDING";
    case ScanStatus::WAITING_FOR_SCAN:
      return "WAITING_FOR_SCAN";
    case ScanStatus::SCANNING:
      return "SCANNING";
    case ScanStatus::SUCCEEDED:
      return "SUCCEEDED";
    case ScanStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
