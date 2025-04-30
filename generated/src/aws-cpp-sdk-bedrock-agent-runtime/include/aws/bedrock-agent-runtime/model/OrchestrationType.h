/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
  enum class OrchestrationType
  {
    NOT_SET,
    DEFAULT,
    CUSTOM_ORCHESTRATION
  };

namespace OrchestrationTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API OrchestrationType GetOrchestrationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForOrchestrationType(OrchestrationType value);
} // namespace OrchestrationTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
