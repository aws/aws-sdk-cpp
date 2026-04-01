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
enum class TaskSortOrder { NOT_SET, ASC, DESC };

namespace TaskSortOrderMapper {
AWS_DEVOPSAGENT_API TaskSortOrder GetTaskSortOrderForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForTaskSortOrder(TaskSortOrder value);
}  // namespace TaskSortOrderMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
