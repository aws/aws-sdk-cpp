/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/BeaconStackOperationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace BeaconStackOperationStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

BeaconStackOperationStatus GetBeaconStackOperationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return BeaconStackOperationStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return BeaconStackOperationStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return BeaconStackOperationStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BeaconStackOperationStatus>(hashCode);
  }

  return BeaconStackOperationStatus::NOT_SET;
}

Aws::String GetNameForBeaconStackOperationStatus(BeaconStackOperationStatus enumValue) {
  switch (enumValue) {
    case BeaconStackOperationStatus::NOT_SET:
      return {};
    case BeaconStackOperationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case BeaconStackOperationStatus::SUCCEEDED:
      return "SUCCEEDED";
    case BeaconStackOperationStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BeaconStackOperationStatusMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
