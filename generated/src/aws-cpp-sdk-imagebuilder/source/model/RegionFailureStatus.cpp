/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/imagebuilder/model/RegionFailureStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {
namespace RegionFailureStatusMapper {

static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");

RegionFailureStatus GetRegionFailureStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAILED_HASH) {
    return RegionFailureStatus::FAILED;
  } else if (hashCode == CANCELLED_HASH) {
    return RegionFailureStatus::CANCELLED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return RegionFailureStatus::TIMED_OUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegionFailureStatus>(hashCode);
  }

  return RegionFailureStatus::NOT_SET;
}

Aws::String GetNameForRegionFailureStatus(RegionFailureStatus enumValue) {
  switch (enumValue) {
    case RegionFailureStatus::NOT_SET:
      return {};
    case RegionFailureStatus::FAILED:
      return "FAILED";
    case RegionFailureStatus::CANCELLED:
      return "CANCELLED";
    case RegionFailureStatus::TIMED_OUT:
      return "TIMED_OUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegionFailureStatusMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
