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
enum class OperatingSystem { NOT_SET, LINUX_X86_64, LINUX_ARM64 };

namespace OperatingSystemMapper {
AWS_BEDROCKAGENTCORECONTROL_API OperatingSystem GetOperatingSystemForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForOperatingSystem(OperatingSystem value);
}  // namespace OperatingSystemMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
