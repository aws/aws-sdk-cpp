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
enum class RecoveryPlanExecutionMode { NOT_SET, DRILL, RECOVERY };

namespace RecoveryPlanExecutionModeMapper {
AWS_DRS_API RecoveryPlanExecutionMode GetRecoveryPlanExecutionModeForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoveryPlanExecutionMode(RecoveryPlanExecutionMode value);
}  // namespace RecoveryPlanExecutionModeMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
