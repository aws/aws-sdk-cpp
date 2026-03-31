/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/Priority.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace PriorityMapper {

static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
static const int LOW_HASH = HashingUtils::HashString("LOW");
static const int MINIMAL_HASH = HashingUtils::HashString("MINIMAL");

Priority GetPriorityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRITICAL_HASH) {
    return Priority::CRITICAL;
  } else if (hashCode == HIGH_HASH) {
    return Priority::HIGH;
  } else if (hashCode == MEDIUM_HASH) {
    return Priority::MEDIUM;
  } else if (hashCode == LOW_HASH) {
    return Priority::LOW;
  } else if (hashCode == MINIMAL_HASH) {
    return Priority::MINIMAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Priority>(hashCode);
  }

  return Priority::NOT_SET;
}

Aws::String GetNameForPriority(Priority enumValue) {
  switch (enumValue) {
    case Priority::NOT_SET:
      return {};
    case Priority::CRITICAL:
      return "CRITICAL";
    case Priority::HIGH:
      return "HIGH";
    case Priority::MEDIUM:
      return "MEDIUM";
    case Priority::LOW:
      return "LOW";
    case Priority::MINIMAL:
      return "MINIMAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PriorityMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
