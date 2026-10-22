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
enum class RetrievalInstructionStatus { NOT_SET, ACTIVE, INACTIVE };

namespace RetrievalInstructionStatusMapper {
AWS_BEDROCKAGENT_API RetrievalInstructionStatus GetRetrievalInstructionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRetrievalInstructionStatus(RetrievalInstructionStatus value);
}  // namespace RetrievalInstructionStatusMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
