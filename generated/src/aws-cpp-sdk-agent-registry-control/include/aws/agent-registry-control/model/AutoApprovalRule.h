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
enum class AutoApprovalRule { NOT_SET, APPROVE_ALL };

namespace AutoApprovalRuleMapper {
AWS_AGENTREGISTRYCONTROL_API AutoApprovalRule GetAutoApprovalRuleForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForAutoApprovalRule(AutoApprovalRule value);
}  // namespace AutoApprovalRuleMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
