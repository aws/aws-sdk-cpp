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
enum class ApprovalStatus { NOT_SET, PENDING, APPROVED, REJECTED, REVOKED, REDEEMED };

namespace ApprovalStatusMapper {
AWS_DEVOPSAGENT_API ApprovalStatus GetApprovalStatusForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForApprovalStatus(ApprovalStatus value);
}  // namespace ApprovalStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
