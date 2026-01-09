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
enum class MemoryView { NOT_SET, full, without_decryption };

namespace MemoryViewMapper {
AWS_BEDROCKAGENTCORECONTROL_API MemoryView GetMemoryViewForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForMemoryView(MemoryView value);
}  // namespace MemoryViewMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
