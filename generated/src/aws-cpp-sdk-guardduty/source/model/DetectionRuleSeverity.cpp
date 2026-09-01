/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/DetectionRuleSeverity.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace DetectionRuleSeverityMapper {

static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");

DetectionRuleSeverity GetDetectionRuleSeverityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRITICAL_HASH) {
    return DetectionRuleSeverity::CRITICAL;
  } else if (hashCode == HIGH_HASH) {
    return DetectionRuleSeverity::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return DetectionRuleSeverity::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return DetectionRuleSeverity::LOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DetectionRuleSeverity>(hashCode);
  }

  return DetectionRuleSeverity::NOT_SET;
}

Aws::String GetNameForDetectionRuleSeverity(DetectionRuleSeverity enumValue) {
  switch (enumValue) {
    case DetectionRuleSeverity::NOT_SET:
      return {};
    case DetectionRuleSeverity::CRITICAL:
      return "CRITICAL";
    case DetectionRuleSeverity::HIGH:
      return "HIGH";
    case DetectionRuleSeverity::MEDIUM:
      return "MEDIUM";
    case DetectionRuleSeverity::LOW:
      return "LOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DetectionRuleSeverityMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
