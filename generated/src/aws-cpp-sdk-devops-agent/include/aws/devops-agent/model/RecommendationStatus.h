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
enum class RecommendationStatus { NOT_SET, PROPOSED, ACCEPTED, REJECTED, CLOSED, COMPLETED, UPDATE_IN_PROGRESS };

namespace RecommendationStatusMapper {
AWS_DEVOPSAGENT_API RecommendationStatus GetRecommendationStatusForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForRecommendationStatus(RecommendationStatus value);
}  // namespace RecommendationStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
