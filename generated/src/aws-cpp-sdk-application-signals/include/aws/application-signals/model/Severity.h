/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ApplicationSignals {
namespace Model {
enum class Severity { NOT_SET, CRITICAL, HIGH, MEDIUM, LOW, NONE };

namespace SeverityMapper {
AWS_APPLICATIONSIGNALS_API Severity GetSeverityForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForSeverity(Severity value);
}  // namespace SeverityMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
