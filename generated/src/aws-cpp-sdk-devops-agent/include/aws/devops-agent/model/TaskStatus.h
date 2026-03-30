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
enum class TaskStatus {
  NOT_SET,
  PENDING_TRIAGE,
  LINKED,
  PENDING_START,
  IN_PROGRESS,
  PENDING_CUSTOMER_APPROVAL,
  COMPLETED,
  FAILED,
  TIMED_OUT,
  CANCELED
};

namespace TaskStatusMapper {
AWS_DEVOPSAGENT_API TaskStatus GetTaskStatusForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForTaskStatus(TaskStatus value);
}  // namespace TaskStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
