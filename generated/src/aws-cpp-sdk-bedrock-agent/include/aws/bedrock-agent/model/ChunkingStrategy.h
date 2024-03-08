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
  enum class ChunkingStrategy
  {
    NOT_SET,
    FIXED_SIZE,
    NONE
  };

namespace ChunkingStrategyMapper
{
AWS_BEDROCKAGENT_API ChunkingStrategy GetChunkingStrategyForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForChunkingStrategy(ChunkingStrategy value);
} // namespace ChunkingStrategyMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
