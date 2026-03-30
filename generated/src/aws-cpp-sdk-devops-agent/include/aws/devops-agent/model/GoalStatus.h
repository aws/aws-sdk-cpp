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
enum class GoalStatus { NOT_SET, ACTIVE, PAUSED, COMPLETE };

namespace GoalStatusMapper {
AWS_DEVOPSAGENT_API GoalStatus GetGoalStatusForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForGoalStatus(GoalStatus value);
}  // namespace GoalStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
