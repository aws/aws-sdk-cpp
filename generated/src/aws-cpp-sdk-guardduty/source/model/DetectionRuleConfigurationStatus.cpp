/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/DetectionRuleConfigurationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace DetectionRuleConfigurationStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DetectionRuleConfigurationStatus GetDetectionRuleConfigurationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return DetectionRuleConfigurationStatus::ACTIVE;
  } else if (hashCode == PROCESSING_HASH) {
    return DetectionRuleConfigurationStatus::PROCESSING;
  } else if (hashCode == FAILED_HASH) {
    return DetectionRuleConfigurationStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DetectionRuleConfigurationStatus>(hashCode);
  }

  return DetectionRuleConfigurationStatus::NOT_SET;
}

Aws::String GetNameForDetectionRuleConfigurationStatus(DetectionRuleConfigurationStatus enumValue) {
  switch (enumValue) {
    case DetectionRuleConfigurationStatus::NOT_SET:
      return {};
    case DetectionRuleConfigurationStatus::ACTIVE:
      return "ACTIVE";
    case DetectionRuleConfigurationStatus::PROCESSING:
      return "PROCESSING";
    case DetectionRuleConfigurationStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DetectionRuleConfigurationStatusMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
