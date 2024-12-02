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
  enum class RerankingMetadataSelectionMode
  {
    NOT_SET,
    SELECTIVE,
    ALL
  };

namespace RerankingMetadataSelectionModeMapper
{
AWS_BEDROCKAGENTRUNTIME_API RerankingMetadataSelectionMode GetRerankingMetadataSelectionModeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForRerankingMetadataSelectionMode(RerankingMetadataSelectionMode value);
} // namespace RerankingMetadataSelectionModeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
