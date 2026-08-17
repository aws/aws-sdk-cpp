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
enum class RecoveryPlanStatus { NOT_SET, ACTIVE, INVALID };

namespace RecoveryPlanStatusMapper {
AWS_DRS_API RecoveryPlanStatus GetRecoveryPlanStatusForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoveryPlanStatus(RecoveryPlanStatus value);
}  // namespace RecoveryPlanStatusMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
