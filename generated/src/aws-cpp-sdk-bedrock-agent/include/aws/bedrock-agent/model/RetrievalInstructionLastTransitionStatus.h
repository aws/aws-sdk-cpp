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
enum class RetrievalInstructionLastTransitionStatus {
  NOT_SET,
  CREATING,
  UPDATING,
  CREATE_SUCCESSFUL,
  CREATE_FAILED,
  UPDATE_SUCCESSFUL,
  UPDATE_FAILED
};

namespace RetrievalInstructionLastTransitionStatusMapper {
AWS_BEDROCKAGENT_API RetrievalInstructionLastTransitionStatus GetRetrievalInstructionLastTransitionStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRetrievalInstructionLastTransitionStatus(RetrievalInstructionLastTransitionStatus value);
}  // namespace RetrievalInstructionLastTransitionStatusMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
