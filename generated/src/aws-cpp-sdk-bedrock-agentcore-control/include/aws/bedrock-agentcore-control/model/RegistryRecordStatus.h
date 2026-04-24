/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class RegistryRecordStatus {
  NOT_SET,
  DRAFT,
  PENDING_APPROVAL,
  APPROVED,
  REJECTED,
  DEPRECATED,
  CREATING,
  UPDATING,
  CREATE_FAILED,
  UPDATE_FAILED
};

namespace RegistryRecordStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordStatus GetRegistryRecordStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForRegistryRecordStatus(RegistryRecordStatus value);
}  // namespace RegistryRecordStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
