/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
enum class FoundationModelType { NOT_SET, CUSTOM, MANAGED };

namespace FoundationModelTypeMapper {
AWS_BEDROCKAGENTRUNTIME_API FoundationModelType GetFoundationModelTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForFoundationModelType(FoundationModelType value);
}  // namespace FoundationModelTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
