/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingDiscardReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace FindingDiscardReasonMapper {

static const int SCANNER_VALIDATED_FALSE_POSITIVE_HASH = HashingUtils::HashString("SCANNER_VALIDATED_FALSE_POSITIVE");
static const int SCANNER_NEEDS_REVIEW_HASH = HashingUtils::HashString("SCANNER_NEEDS_REVIEW");
static const int FALSE_POSITIVE_VALIDATED_AGAINST_CONTEXT_HASH = HashingUtils::HashString("FALSE_POSITIVE_VALIDATED_AGAINST_CONTEXT");
static const int DUPLICATE_OF_OPEN_ISSUE_HASH = HashingUtils::HashString("DUPLICATE_OF_OPEN_ISSUE");
static const int DUPLICATE_OF_CLOSED_ISSUE_HASH = HashingUtils::HashString("DUPLICATE_OF_CLOSED_ISSUE");
static const int COMPENSATING_CONTROL_PRESENT_HASH = HashingUtils::HashString("COMPENSATING_CONTROL_PRESENT");
static const int OUT_OF_SCOPE_HASH = HashingUtils::HashString("OUT_OF_SCOPE");
static const int INSUFFICIENT_EVIDENCE_HASH = HashingUtils::HashString("INSUFFICIENT_EVIDENCE");
static const int PROCESSING_FAILED_HASH = HashingUtils::HashString("PROCESSING_FAILED");
static const int SOURCE_REPO_NOT_FOUND_HASH = HashingUtils::HashString("SOURCE_REPO_NOT_FOUND");

FindingDiscardReason GetFindingDiscardReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SCANNER_VALIDATED_FALSE_POSITIVE_HASH) {
    return FindingDiscardReason::SCANNER_VALIDATED_FALSE_POSITIVE;
  } else if (hashCode == SCANNER_NEEDS_REVIEW_HASH) {
    return FindingDiscardReason::SCANNER_NEEDS_REVIEW;
  } else if (hashCode == FALSE_POSITIVE_VALIDATED_AGAINST_CONTEXT_HASH) {
    return FindingDiscardReason::FALSE_POSITIVE_VALIDATED_AGAINST_CONTEXT;
  } else if (hashCode == DUPLICATE_OF_OPEN_ISSUE_HASH) {
    return FindingDiscardReason::DUPLICATE_OF_OPEN_ISSUE;
  } else if (hashCode == DUPLICATE_OF_CLOSED_ISSUE_HASH) {
    return FindingDiscardReason::DUPLICATE_OF_CLOSED_ISSUE;
  } else if (hashCode == COMPENSATING_CONTROL_PRESENT_HASH) {
    return FindingDiscardReason::COMPENSATING_CONTROL_PRESENT;
  } else if (hashCode == OUT_OF_SCOPE_HASH) {
    return FindingDiscardReason::OUT_OF_SCOPE;
  } else if (hashCode == INSUFFICIENT_EVIDENCE_HASH) {
    return FindingDiscardReason::INSUFFICIENT_EVIDENCE;
  } else if (hashCode == PROCESSING_FAILED_HASH) {
    return FindingDiscardReason::PROCESSING_FAILED;
  } else if (hashCode == SOURCE_REPO_NOT_FOUND_HASH) {
    return FindingDiscardReason::SOURCE_REPO_NOT_FOUND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingDiscardReason>(hashCode);
  }

  return FindingDiscardReason::NOT_SET;
}

Aws::String GetNameForFindingDiscardReason(FindingDiscardReason enumValue) {
  switch (enumValue) {
    case FindingDiscardReason::NOT_SET:
      return {};
    case FindingDiscardReason::SCANNER_VALIDATED_FALSE_POSITIVE:
      return "SCANNER_VALIDATED_FALSE_POSITIVE";
    case FindingDiscardReason::SCANNER_NEEDS_REVIEW:
      return "SCANNER_NEEDS_REVIEW";
    case FindingDiscardReason::FALSE_POSITIVE_VALIDATED_AGAINST_CONTEXT:
      return "FALSE_POSITIVE_VALIDATED_AGAINST_CONTEXT";
    case FindingDiscardReason::DUPLICATE_OF_OPEN_ISSUE:
      return "DUPLICATE_OF_OPEN_ISSUE";
    case FindingDiscardReason::DUPLICATE_OF_CLOSED_ISSUE:
      return "DUPLICATE_OF_CLOSED_ISSUE";
    case FindingDiscardReason::COMPENSATING_CONTROL_PRESENT:
      return "COMPENSATING_CONTROL_PRESENT";
    case FindingDiscardReason::OUT_OF_SCOPE:
      return "OUT_OF_SCOPE";
    case FindingDiscardReason::INSUFFICIENT_EVIDENCE:
      return "INSUFFICIENT_EVIDENCE";
    case FindingDiscardReason::PROCESSING_FAILED:
      return "PROCESSING_FAILED";
    case FindingDiscardReason::SOURCE_REPO_NOT_FOUND:
      return "SOURCE_REPO_NOT_FOUND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingDiscardReasonMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
