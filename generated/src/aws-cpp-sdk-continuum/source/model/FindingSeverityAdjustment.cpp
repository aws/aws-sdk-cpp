/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingSeverityAdjustment.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace FindingSeverityAdjustmentMapper {

static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");
static const int UNCHANGED_HASH = HashingUtils::HashString("UNCHANGED");

FindingSeverityAdjustment GetFindingSeverityAdjustmentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRITICAL_HASH) {
    return FindingSeverityAdjustment::CRITICAL;
  } else if (hashCode == HIGH_HASH) {
    return FindingSeverityAdjustment::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return FindingSeverityAdjustment::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return FindingSeverityAdjustment::LOW;
  } else if (hashCode == INFORMATIONAL_HASH) {
    return FindingSeverityAdjustment::INFORMATIONAL;
  } else if (hashCode == UNCHANGED_HASH) {
    return FindingSeverityAdjustment::UNCHANGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingSeverityAdjustment>(hashCode);
  }

  return FindingSeverityAdjustment::NOT_SET;
}

Aws::String GetNameForFindingSeverityAdjustment(FindingSeverityAdjustment enumValue) {
  switch (enumValue) {
    case FindingSeverityAdjustment::NOT_SET:
      return {};
    case FindingSeverityAdjustment::CRITICAL:
      return "CRITICAL";
    case FindingSeverityAdjustment::HIGH:
      return "HIGH";
    case FindingSeverityAdjustment::MEDIUM:
      return "MEDIUM";
    case FindingSeverityAdjustment::LOW:
      return "LOW";
    case FindingSeverityAdjustment::INFORMATIONAL:
      return "INFORMATIONAL";
    case FindingSeverityAdjustment::UNCHANGED:
      return "UNCHANGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingSeverityAdjustmentMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
