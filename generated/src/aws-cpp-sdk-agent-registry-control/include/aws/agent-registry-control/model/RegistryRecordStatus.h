/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistryControl {
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
AWS_AGENTREGISTRYCONTROL_API RegistryRecordStatus GetRegistryRecordStatusForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForRegistryRecordStatus(RegistryRecordStatus value);
}  // namespace RegistryRecordStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
