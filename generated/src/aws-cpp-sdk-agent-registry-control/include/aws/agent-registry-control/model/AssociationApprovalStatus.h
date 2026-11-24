/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
enum class AssociationApprovalStatus { NOT_SET, APPROVED, REJECTED };

namespace AssociationApprovalStatusMapper {
AWS_AGENTREGISTRYCONTROL_API AssociationApprovalStatus GetAssociationApprovalStatusForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForAssociationApprovalStatus(AssociationApprovalStatus value);
}  // namespace AssociationApprovalStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
