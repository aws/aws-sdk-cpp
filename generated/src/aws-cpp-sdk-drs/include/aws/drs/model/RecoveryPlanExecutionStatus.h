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
enum class RecoveryPlanExecutionStatus { NOT_SET, CREATED, IN_PROGRESS, COMPLETED, FAILED, CANCELLING, CANCELLED };

namespace RecoveryPlanExecutionStatusMapper {
AWS_DRS_API RecoveryPlanExecutionStatus GetRecoveryPlanExecutionStatusForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoveryPlanExecutionStatus(RecoveryPlanExecutionStatus value);
}  // namespace RecoveryPlanExecutionStatusMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
