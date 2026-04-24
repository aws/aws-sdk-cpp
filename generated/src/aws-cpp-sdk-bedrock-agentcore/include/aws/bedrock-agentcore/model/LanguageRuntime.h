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
enum class LanguageRuntime { NOT_SET, nodejs, deno, python };

namespace LanguageRuntimeMapper {
AWS_BEDROCKAGENTCORE_API LanguageRuntime GetLanguageRuntimeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForLanguageRuntime(LanguageRuntime value);
}  // namespace LanguageRuntimeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
