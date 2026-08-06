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
enum class RegistryStatus { NOT_SET, CREATING, READY, UPDATING, CREATE_FAILED, UPDATE_FAILED, DELETING, DELETE_FAILED };

namespace RegistryStatusMapper {
AWS_AGENTREGISTRYCONTROL_API RegistryStatus GetRegistryStatusForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForRegistryStatus(RegistryStatus value);
}  // namespace RegistryStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
