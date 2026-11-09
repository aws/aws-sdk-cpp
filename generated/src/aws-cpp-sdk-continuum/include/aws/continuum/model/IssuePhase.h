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
enum class IssuePhase { NOT_SET, VALIDATION, PRIORITIZATION, REMEDIATION };

namespace IssuePhaseMapper {
AWS_CONTINUUM_API IssuePhase GetIssuePhaseForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForIssuePhase(IssuePhase value);
}  // namespace IssuePhaseMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
