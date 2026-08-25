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
enum class ApprovalActionType { NOT_SET, APPROVED, REJECTED };

namespace ApprovalActionTypeMapper {
AWS_DEVOPSAGENT_API ApprovalActionType GetApprovalActionTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForApprovalActionType(ApprovalActionType value);
}  // namespace ApprovalActionTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
