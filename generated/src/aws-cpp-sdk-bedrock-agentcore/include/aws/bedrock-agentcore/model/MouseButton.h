/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class MouseButton { NOT_SET, LEFT, RIGHT, MIDDLE };

namespace MouseButtonMapper {
AWS_BEDROCKAGENTCORE_API MouseButton GetMouseButtonForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForMouseButton(MouseButton value);
}  // namespace MouseButtonMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
