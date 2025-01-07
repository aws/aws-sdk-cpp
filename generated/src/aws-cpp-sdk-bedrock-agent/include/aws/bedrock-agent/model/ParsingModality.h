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
  enum class ParsingModality
  {
    NOT_SET,
    MULTIMODAL
  };

namespace ParsingModalityMapper
{
AWS_BEDROCKAGENT_API ParsingModality GetParsingModalityForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForParsingModality(ParsingModality value);
} // namespace ParsingModalityMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
