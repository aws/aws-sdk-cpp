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
enum class GoalType { NOT_SET, CUSTOMER_DEFINED, ONCALL_REPORT };

namespace GoalTypeMapper {
AWS_DEVOPSAGENT_API GoalType GetGoalTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForGoalType(GoalType value);
}  // namespace GoalTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
