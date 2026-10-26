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
enum class IssueSeverity { NOT_SET, LOW, MEDIUM, HIGH, CRITICAL };

namespace IssueSeverityMapper {
AWS_CONTINUUM_API IssueSeverity GetIssueSeverityForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForIssueSeverity(IssueSeverity value);
}  // namespace IssueSeverityMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
