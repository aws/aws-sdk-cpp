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
enum class RecommendedActionFilterName {
  NOT_SET,
  ResourceType,
  RecommendedActionType,
  ResourceId,
  LookBackPeriodInDays,
  CurrentResourceDetailsEbsVolumeType,
  ResourceTagsKey,
  ResourceTagsValue,
  AccountId,
  RestartNeeded
};

namespace RecommendedActionFilterNameMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API RecommendedActionFilterName GetRecommendedActionFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForRecommendedActionFilterName(RecommendedActionFilterName value);
}  // namespace RecommendedActionFilterNameMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
