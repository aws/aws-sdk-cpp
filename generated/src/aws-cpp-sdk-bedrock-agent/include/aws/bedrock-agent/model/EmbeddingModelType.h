/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgent {
namespace Model {
enum class EmbeddingModelType { NOT_SET, CUSTOM, MANAGED };

namespace EmbeddingModelTypeMapper {
AWS_BEDROCKAGENT_API EmbeddingModelType GetEmbeddingModelTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForEmbeddingModelType(EmbeddingModelType value);
}  // namespace EmbeddingModelTypeMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
