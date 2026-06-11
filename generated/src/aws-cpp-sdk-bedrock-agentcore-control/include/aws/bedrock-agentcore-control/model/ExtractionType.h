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
enum class ExtractionType { NOT_SET, LLM_INFERRED, STRICTLY_CONSISTENT };

namespace ExtractionTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API ExtractionType GetExtractionTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForExtractionType(ExtractionType value);
}  // namespace ExtractionTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
