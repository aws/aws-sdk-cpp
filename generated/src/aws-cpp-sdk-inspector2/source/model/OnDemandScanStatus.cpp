/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/OnDemandScanStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace OnDemandScanStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

OnDemandScanStatus GetOnDemandScanStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return OnDemandScanStatus::IN_PROGRESS;
  } else if (hashCode == SUCCESSFUL_HASH) {
    return OnDemandScanStatus::SUCCESSFUL;
  } else if (hashCode == FAILED_HASH) {
    return OnDemandScanStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnDemandScanStatus>(hashCode);
  }

  return OnDemandScanStatus::NOT_SET;
}

Aws::String GetNameForOnDemandScanStatus(OnDemandScanStatus enumValue) {
  switch (enumValue) {
    case OnDemandScanStatus::NOT_SET:
      return {};
    case OnDemandScanStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case OnDemandScanStatus::SUCCESSFUL:
      return "SUCCESSFUL";
    case OnDemandScanStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnDemandScanStatusMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
