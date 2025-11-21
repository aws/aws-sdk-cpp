/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
enum class RecommendedActionType { NOT_SET, SnapshotAndDeleteUnattachedEbsVolume, UpgradeEbsVolumeType };

namespace RecommendedActionTypeMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionType GetRecommendedActionTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForRecommendedActionType(RecommendedActionType value);
}  // namespace RecommendedActionTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
