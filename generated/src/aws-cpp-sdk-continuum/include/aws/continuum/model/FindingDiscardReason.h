/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class FindingDiscardReason {
  NOT_SET,
  SCANNER_VALIDATED_FALSE_POSITIVE,
  SCANNER_NEEDS_REVIEW,
  FALSE_POSITIVE_VALIDATED_AGAINST_CONTEXT,
  DUPLICATE_OF_OPEN_ISSUE,
  DUPLICATE_OF_CLOSED_ISSUE,
  COMPENSATING_CONTROL_PRESENT,
  OUT_OF_SCOPE,
  INSUFFICIENT_EVIDENCE,
  PROCESSING_FAILED,
  SOURCE_REPO_NOT_FOUND
};

namespace FindingDiscardReasonMapper {
AWS_CONTINUUM_API FindingDiscardReason GetFindingDiscardReasonForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForFindingDiscardReason(FindingDiscardReason value);
}  // namespace FindingDiscardReasonMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
