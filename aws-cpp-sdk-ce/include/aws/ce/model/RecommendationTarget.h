/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class RecommendationTarget
  {
    NOT_SET,
    SAME_INSTANCE_FAMILY,
    CROSS_INSTANCE_FAMILY
  };

namespace RecommendationTargetMapper
{
AWS_COSTEXPLORER_API RecommendationTarget GetRecommendationTargetForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForRecommendationTarget(RecommendationTarget value);
} // namespace RecommendationTargetMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
