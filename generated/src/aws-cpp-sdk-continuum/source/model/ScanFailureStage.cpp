/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ScanFailureStage.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace ScanFailureStageMapper {

static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int WAITING_FOR_BUILD_HASH = HashingUtils::HashString("WAITING_FOR_BUILD");
static const int BUILDING_HASH = HashingUtils::HashString("BUILDING");
static const int WAITING_FOR_SCAN_HASH = HashingUtils::HashString("WAITING_FOR_SCAN");
static const int SCANNING_HASH = HashingUtils::HashString("SCANNING");

ScanFailureStage GetScanFailureStageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBMITTED_HASH) {
    return ScanFailureStage::SUBMITTED;
  } else if (hashCode == WAITING_FOR_BUILD_HASH) {
    return ScanFailureStage::WAITING_FOR_BUILD;
  } else if (hashCode == BUILDING_HASH) {
    return ScanFailureStage::BUILDING;
  } else if (hashCode == WAITING_FOR_SCAN_HASH) {
    return ScanFailureStage::WAITING_FOR_SCAN;
  } else if (hashCode == SCANNING_HASH) {
    return ScanFailureStage::SCANNING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanFailureStage>(hashCode);
  }

  return ScanFailureStage::NOT_SET;
}

Aws::String GetNameForScanFailureStage(ScanFailureStage enumValue) {
  switch (enumValue) {
    case ScanFailureStage::NOT_SET:
      return {};
    case ScanFailureStage::SUBMITTED:
      return "SUBMITTED";
    case ScanFailureStage::WAITING_FOR_BUILD:
      return "WAITING_FOR_BUILD";
    case ScanFailureStage::BUILDING:
      return "BUILDING";
    case ScanFailureStage::WAITING_FOR_SCAN:
      return "WAITING_FOR_SCAN";
    case ScanFailureStage::SCANNING:
      return "SCANNING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanFailureStageMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
