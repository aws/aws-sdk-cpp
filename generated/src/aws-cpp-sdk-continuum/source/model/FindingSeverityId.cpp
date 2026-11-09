/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingSeverityId.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace FindingSeverityIdMapper {

static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");
static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int FATAL_HASH = HashingUtils::HashString("FATAL");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

FindingSeverityId GetFindingSeverityIdForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UNKNOWN_HASH) {
    return FindingSeverityId::UNKNOWN;
  } else if (hashCode == INFORMATIONAL_HASH) {
    return FindingSeverityId::INFORMATIONAL;
  } else if (hashCode == LOW_HASH) {
    return FindingSeverityId::LOW;
  } else if (hashCode == MEDIUM_HASH) {
    return FindingSeverityId::MEDIUM;
  } else if (hashCode == HIGH_HASH) {
    return FindingSeverityId::HIGH;
  } else if (hashCode == CRITICAL_HASH) {
    return FindingSeverityId::CRITICAL;
  } else if (hashCode == FATAL_HASH) {
    return FindingSeverityId::FATAL;
  } else if (hashCode == OTHER_HASH) {
    return FindingSeverityId::OTHER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingSeverityId>(hashCode);
  }

  return FindingSeverityId::NOT_SET;
}

Aws::String GetNameForFindingSeverityId(FindingSeverityId enumValue) {
  switch (enumValue) {
    case FindingSeverityId::NOT_SET:
      return {};
    case FindingSeverityId::UNKNOWN:
      return "UNKNOWN";
    case FindingSeverityId::INFORMATIONAL:
      return "INFORMATIONAL";
    case FindingSeverityId::LOW:
      return "LOW";
    case FindingSeverityId::MEDIUM:
      return "MEDIUM";
    case FindingSeverityId::HIGH:
      return "HIGH";
    case FindingSeverityId::CRITICAL:
      return "CRITICAL";
    case FindingSeverityId::FATAL:
      return "FATAL";
    case FindingSeverityId::OTHER:
      return "OTHER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingSeverityIdMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
