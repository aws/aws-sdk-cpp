/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingBlockingReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace FindingBlockingReasonMapper {

static const int UNREACHABLE_HASH = HashingUtils::HashString("UNREACHABLE");
static const int PROTECTED_HASH = HashingUtils::HashString("PROTECTED");
static const int MISCLASSIFIED_HASH = HashingUtils::HashString("MISCLASSIFIED");
static const int EXCLUDED_HASH = HashingUtils::HashString("EXCLUDED");
static const int NOT_FEASIBLE_HASH = HashingUtils::HashString("NOT_FEASIBLE");
static const int RISK_MITIGATED_HASH = HashingUtils::HashString("RISK_MITIGATED");
static const int NONE_HASH = HashingUtils::HashString("NONE");

FindingBlockingReason GetFindingBlockingReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UNREACHABLE_HASH) {
    return FindingBlockingReason::UNREACHABLE;
  } else if (hashCode == PROTECTED_HASH) {
    return FindingBlockingReason::PROTECTED;
  } else if (hashCode == MISCLASSIFIED_HASH) {
    return FindingBlockingReason::MISCLASSIFIED;
  } else if (hashCode == EXCLUDED_HASH) {
    return FindingBlockingReason::EXCLUDED;
  } else if (hashCode == NOT_FEASIBLE_HASH) {
    return FindingBlockingReason::NOT_FEASIBLE;
  } else if (hashCode == RISK_MITIGATED_HASH) {
    return FindingBlockingReason::RISK_MITIGATED;
  } else if (hashCode == NONE_HASH) {
    return FindingBlockingReason::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingBlockingReason>(hashCode);
  }

  return FindingBlockingReason::NOT_SET;
}

Aws::String GetNameForFindingBlockingReason(FindingBlockingReason enumValue) {
  switch (enumValue) {
    case FindingBlockingReason::NOT_SET:
      return {};
    case FindingBlockingReason::UNREACHABLE:
      return "UNREACHABLE";
    case FindingBlockingReason::PROTECTED:
      return "PROTECTED";
    case FindingBlockingReason::MISCLASSIFIED:
      return "MISCLASSIFIED";
    case FindingBlockingReason::EXCLUDED:
      return "EXCLUDED";
    case FindingBlockingReason::NOT_FEASIBLE:
      return "NOT_FEASIBLE";
    case FindingBlockingReason::RISK_MITIGATED:
      return "RISK_MITIGATED";
    case FindingBlockingReason::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingBlockingReasonMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
