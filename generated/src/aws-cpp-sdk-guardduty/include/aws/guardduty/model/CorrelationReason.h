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
enum class CorrelationReason { NOT_SET, HIGH_SEVERITY, SAME_RESOURCE, SAME_BEHAVIOR };

namespace CorrelationReasonMapper {
AWS_GUARDDUTY_API CorrelationReason GetCorrelationReasonForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForCorrelationReason(CorrelationReason value);
}  // namespace CorrelationReasonMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
