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
enum class ThreatConfidence { NOT_SET, VERY_HIGH, HIGH, MEDIUM, LOW };

namespace ThreatConfidenceMapper {
AWS_GUARDDUTY_API ThreatConfidence GetThreatConfidenceForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForThreatConfidence(ThreatConfidence value);
}  // namespace ThreatConfidenceMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
