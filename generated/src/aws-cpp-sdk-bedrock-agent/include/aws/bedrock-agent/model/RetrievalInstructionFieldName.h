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
enum class RetrievalInstructionFieldName { NOT_SET, RETRIEVAL_GUIDANCE, PERSONA, ANSWER_FORMAT, ANSWER_POLICY };

namespace RetrievalInstructionFieldNameMapper {
AWS_BEDROCKAGENT_API RetrievalInstructionFieldName GetRetrievalInstructionFieldNameForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRetrievalInstructionFieldName(RetrievalInstructionFieldName value);
}  // namespace RetrievalInstructionFieldNameMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
