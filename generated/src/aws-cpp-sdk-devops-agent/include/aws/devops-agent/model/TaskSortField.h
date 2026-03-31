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
enum class TaskSortField { NOT_SET, CREATED_AT, PRIORITY };

namespace TaskSortFieldMapper {
AWS_DEVOPSAGENT_API TaskSortField GetTaskSortFieldForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForTaskSortField(TaskSortField value);
}  // namespace TaskSortFieldMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
