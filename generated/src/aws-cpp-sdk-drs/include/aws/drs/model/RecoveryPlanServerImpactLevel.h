/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>

namespace Aws {
namespace drs {
namespace Model {
enum class RecoveryPlanServerImpactLevel { NOT_SET, CRITICAL, OPTIONAL };

namespace RecoveryPlanServerImpactLevelMapper {
AWS_DRS_API RecoveryPlanServerImpactLevel GetRecoveryPlanServerImpactLevelForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoveryPlanServerImpactLevel(RecoveryPlanServerImpactLevel value);
}  // namespace RecoveryPlanServerImpactLevelMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
