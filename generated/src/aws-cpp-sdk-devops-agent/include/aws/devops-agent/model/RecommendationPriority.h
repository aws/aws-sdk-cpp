/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class RecommendationPriority { NOT_SET, HIGH, MEDIUM, LOW };

namespace RecommendationPriorityMapper {
AWS_DEVOPSAGENT_API RecommendationPriority GetRecommendationPriorityForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForRecommendationPriority(RecommendationPriority value);
}  // namespace RecommendationPriorityMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
