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
enum class TaskType { NOT_SET, INVESTIGATION, EVALUATION };

namespace TaskTypeMapper {
AWS_DEVOPSAGENT_API TaskType GetTaskTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForTaskType(TaskType value);
}  // namespace TaskTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
