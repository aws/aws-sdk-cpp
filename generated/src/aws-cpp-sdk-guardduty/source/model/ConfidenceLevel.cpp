/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/ConfidenceLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ConfidenceLevelMapper {

static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int NONE_HASH = HashingUtils::HashString("NONE");

ConfidenceLevel GetConfidenceLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HIGH_HASH) {
    return ConfidenceLevel::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return ConfidenceLevel::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return ConfidenceLevel::LOW;
  } else if (hashCode == NONE_HASH) {
    return ConfidenceLevel::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConfidenceLevel>(hashCode);
  }

  return ConfidenceLevel::NOT_SET;
}

Aws::String GetNameForConfidenceLevel(ConfidenceLevel enumValue) {
  switch (enumValue) {
    case ConfidenceLevel::NOT_SET:
      return {};
    case ConfidenceLevel::HIGH:
      return "HIGH";
    case ConfidenceLevel::MEDIUM:
      return "MEDIUM";
    case ConfidenceLevel::LOW:
      return "LOW";
    case ConfidenceLevel::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfidenceLevelMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
