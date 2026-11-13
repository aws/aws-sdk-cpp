/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/CorrelationReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace CorrelationReasonMapper {

static const int HIGH_SEVERITY_HASH = HashingUtils::HashString("HIGH_SEVERITY");
static const int SAME_RESOURCE_HASH = HashingUtils::HashString("SAME_RESOURCE");
static const int SAME_BEHAVIOR_HASH = HashingUtils::HashString("SAME_BEHAVIOR");

CorrelationReason GetCorrelationReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HIGH_SEVERITY_HASH) {
    return CorrelationReason::HIGH_SEVERITY;
  } else if (hashCode == SAME_RESOURCE_HASH) {
    return CorrelationReason::SAME_RESOURCE;
  } else if (hashCode == SAME_BEHAVIOR_HASH) {
    return CorrelationReason::SAME_BEHAVIOR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CorrelationReason>(hashCode);
  }

  return CorrelationReason::NOT_SET;
}

Aws::String GetNameForCorrelationReason(CorrelationReason enumValue) {
  switch (enumValue) {
    case CorrelationReason::NOT_SET:
      return {};
    case CorrelationReason::HIGH_SEVERITY:
      return "HIGH_SEVERITY";
    case CorrelationReason::SAME_RESOURCE:
      return "SAME_RESOURCE";
    case CorrelationReason::SAME_BEHAVIOR:
      return "SAME_BEHAVIOR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CorrelationReasonMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
