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
  enum class EmbeddingDataType
  {
    NOT_SET,
    FLOAT32,
    BINARY
  };

namespace EmbeddingDataTypeMapper
{
AWS_BEDROCKAGENT_API EmbeddingDataType GetEmbeddingDataTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForEmbeddingDataType(EmbeddingDataType value);
} // namespace EmbeddingDataTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
