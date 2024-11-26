/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
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
AWS_BEDROCKAGENT_API OrchestrationType GetOrchestrationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForOrchestrationType(OrchestrationType value);
} // namespace OrchestrationTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
