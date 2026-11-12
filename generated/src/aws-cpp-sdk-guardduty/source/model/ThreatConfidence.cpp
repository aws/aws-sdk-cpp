/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/ThreatConfidence.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ThreatConfidenceMapper {

static const int VERY_HIGH_HASH = HashingUtils::HashString("VERY_HIGH");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");

ThreatConfidence GetThreatConfidenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VERY_HIGH_HASH) {
    return ThreatConfidence::VERY_HIGH;
  } else if (hashCode == HIGH_HASH) {
    return ThreatConfidence::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return ThreatConfidence::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return ThreatConfidence::LOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ThreatConfidence>(hashCode);
  }

  return ThreatConfidence::NOT_SET;
}

Aws::String GetNameForThreatConfidence(ThreatConfidence enumValue) {
  switch (enumValue) {
    case ThreatConfidence::NOT_SET:
      return {};
    case ThreatConfidence::VERY_HIGH:
      return "VERY_HIGH";
    case ThreatConfidence::HIGH:
      return "HIGH";
    case ThreatConfidence::MEDIUM:
      return "MEDIUM";
    case ThreatConfidence::LOW:
      return "LOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ThreatConfidenceMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
