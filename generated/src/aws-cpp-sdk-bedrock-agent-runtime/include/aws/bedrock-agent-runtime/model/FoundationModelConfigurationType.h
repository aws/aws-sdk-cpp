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
enum class FoundationModelConfigurationType { NOT_SET, BEDROCK_FOUNDATION_MODEL };

namespace FoundationModelConfigurationTypeMapper {
AWS_BEDROCKAGENTRUNTIME_API FoundationModelConfigurationType GetFoundationModelConfigurationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForFoundationModelConfigurationType(FoundationModelConfigurationType value);
}  // namespace FoundationModelConfigurationTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
