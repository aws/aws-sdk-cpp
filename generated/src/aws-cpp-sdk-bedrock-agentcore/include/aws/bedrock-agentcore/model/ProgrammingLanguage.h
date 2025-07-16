/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{
  enum class ProgrammingLanguage
  {
    NOT_SET,
    python,
    javascript,
    typescript
  };

namespace ProgrammingLanguageMapper
{
AWS_BEDROCKAGENTCORE_API ProgrammingLanguage GetProgrammingLanguageForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForProgrammingLanguage(ProgrammingLanguage value);
} // namespace ProgrammingLanguageMapper
} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
