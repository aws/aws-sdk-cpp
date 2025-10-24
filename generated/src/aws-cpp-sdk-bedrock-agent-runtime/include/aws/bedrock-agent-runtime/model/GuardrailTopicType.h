﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
enum class GuardrailTopicType { NOT_SET, DENY };

namespace GuardrailTopicTypeMapper {
AWS_BEDROCKAGENTRUNTIME_API GuardrailTopicType GetGuardrailTopicTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForGuardrailTopicType(GuardrailTopicType value);
}  // namespace GuardrailTopicTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
