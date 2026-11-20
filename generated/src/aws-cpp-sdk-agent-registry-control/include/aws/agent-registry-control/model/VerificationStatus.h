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
enum class VerificationStatus { NOT_SET, ACTION_REQUIRED, ACTIVE, FAILED, SUSPENDED, DELETING };

namespace VerificationStatusMapper {
AWS_AGENTREGISTRYCONTROL_API VerificationStatus GetVerificationStatusForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForVerificationStatus(VerificationStatus value);
}  // namespace VerificationStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
