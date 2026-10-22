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
enum class RetrievalInstructionFailureReasonCode { NOT_SET, CONTENT_REJECTED, CLIENT_ERROR, INTERNAL_ERROR };

namespace RetrievalInstructionFailureReasonCodeMapper {
AWS_BEDROCKAGENT_API RetrievalInstructionFailureReasonCode GetRetrievalInstructionFailureReasonCodeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRetrievalInstructionFailureReasonCode(RetrievalInstructionFailureReasonCode value);
}  // namespace RetrievalInstructionFailureReasonCodeMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
