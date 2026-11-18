/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class PrivilegeMode { NOT_SET, STANDARD, PRIVILEGED };

namespace PrivilegeModeMapper {
AWS_BEDROCKAGENTCORECONTROL_API PrivilegeMode GetPrivilegeModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForPrivilegeMode(PrivilegeMode value);
}  // namespace PrivilegeModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
