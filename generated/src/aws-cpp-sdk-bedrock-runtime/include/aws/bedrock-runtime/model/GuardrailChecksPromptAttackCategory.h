/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockRuntime {
namespace Model {
enum class GuardrailChecksPromptAttackCategory { NOT_SET, JAILBREAK, PROMPT_INJECTION, PROMPT_LEAKAGE };

namespace GuardrailChecksPromptAttackCategoryMapper {
AWS_BEDROCKRUNTIME_API GuardrailChecksPromptAttackCategory GetGuardrailChecksPromptAttackCategoryForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailChecksPromptAttackCategory(GuardrailChecksPromptAttackCategory value);
}  // namespace GuardrailChecksPromptAttackCategoryMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
