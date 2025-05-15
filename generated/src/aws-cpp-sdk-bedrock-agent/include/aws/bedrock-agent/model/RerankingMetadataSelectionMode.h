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
  enum class RerankingMetadataSelectionMode
  {
    NOT_SET,
    SELECTIVE,
    ALL
  };

namespace RerankingMetadataSelectionModeMapper
{
AWS_BEDROCKAGENT_API RerankingMetadataSelectionMode GetRerankingMetadataSelectionModeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRerankingMetadataSelectionMode(RerankingMetadataSelectionMode value);
} // namespace RerankingMetadataSelectionModeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
