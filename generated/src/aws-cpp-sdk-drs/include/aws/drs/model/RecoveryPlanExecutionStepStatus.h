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
enum class RecoveryPlanExecutionStepStatus { NOT_SET, NOT_STARTED, EXECUTING, WAITING, COMPLETED, FAILED, TIMED_OUT, SKIPPED };

namespace RecoveryPlanExecutionStepStatusMapper {
AWS_DRS_API RecoveryPlanExecutionStepStatus GetRecoveryPlanExecutionStepStatusForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoveryPlanExecutionStepStatus(RecoveryPlanExecutionStepStatus value);
}  // namespace RecoveryPlanExecutionStepStatusMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
