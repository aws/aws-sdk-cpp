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
enum class EcsClusterStatus { NOT_SET, ACTIVE, PROVISIONING, DEPROVISIONING, FAILED, INACTIVE };

namespace EcsClusterStatusMapper {
AWS_GUARDDUTY_API EcsClusterStatus GetEcsClusterStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForEcsClusterStatus(EcsClusterStatus value);
}  // namespace EcsClusterStatusMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
