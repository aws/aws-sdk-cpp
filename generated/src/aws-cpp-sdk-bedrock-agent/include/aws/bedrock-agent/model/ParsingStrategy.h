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
  enum class ParsingStrategy
  {
    NOT_SET,
    BEDROCK_FOUNDATION_MODEL,
    BEDROCK_DATA_AUTOMATION
  };

namespace ParsingStrategyMapper
{
AWS_BEDROCKAGENT_API ParsingStrategy GetParsingStrategyForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForParsingStrategy(ParsingStrategy value);
} // namespace ParsingStrategyMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
