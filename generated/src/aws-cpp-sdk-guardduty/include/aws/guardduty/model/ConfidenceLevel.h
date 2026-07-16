/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class ConfidenceLevel { NOT_SET, HIGH, MEDIUM, LOW, NONE };

namespace ConfidenceLevelMapper {
AWS_GUARDDUTY_API ConfidenceLevel GetConfidenceLevelForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForConfidenceLevel(ConfidenceLevel value);
}  // namespace ConfidenceLevelMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
