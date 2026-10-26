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
enum class FindingBlockingReason { NOT_SET, UNREACHABLE, PROTECTED, MISCLASSIFIED, EXCLUDED, NOT_FEASIBLE, RISK_MITIGATED, NONE };

namespace FindingBlockingReasonMapper {
AWS_CONTINUUM_API FindingBlockingReason GetFindingBlockingReasonForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForFindingBlockingReason(FindingBlockingReason value);
}  // namespace FindingBlockingReasonMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
