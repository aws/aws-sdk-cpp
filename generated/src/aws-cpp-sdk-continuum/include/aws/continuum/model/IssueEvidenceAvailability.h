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
enum class IssueEvidenceAvailability { NOT_SET, NONE, AVAILABLE };

namespace IssueEvidenceAvailabilityMapper {
AWS_CONTINUUM_API IssueEvidenceAvailability GetIssueEvidenceAvailabilityForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForIssueEvidenceAvailability(IssueEvidenceAvailability value);
}  // namespace IssueEvidenceAvailabilityMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
