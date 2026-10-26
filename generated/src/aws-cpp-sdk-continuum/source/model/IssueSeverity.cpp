/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssueSeverity.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace IssueSeverityMapper {

static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");

IssueSeverity GetIssueSeverityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOW_HASH) {
    return IssueSeverity::LOW;
  } else if (hashCode == MEDIUM_HASH) {
    return IssueSeverity::MEDIUM;
  } else if (hashCode == HIGH_HASH) {
    return IssueSeverity::HIGH;
  } else if (hashCode == CRITICAL_HASH) {
    return IssueSeverity::CRITICAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IssueSeverity>(hashCode);
  }

  return IssueSeverity::NOT_SET;
}

Aws::String GetNameForIssueSeverity(IssueSeverity enumValue) {
  switch (enumValue) {
    case IssueSeverity::NOT_SET:
      return {};
    case IssueSeverity::LOW:
      return "LOW";
    case IssueSeverity::MEDIUM:
      return "MEDIUM";
    case IssueSeverity::HIGH:
      return "HIGH";
    case IssueSeverity::CRITICAL:
      return "CRITICAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IssueSeverityMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
