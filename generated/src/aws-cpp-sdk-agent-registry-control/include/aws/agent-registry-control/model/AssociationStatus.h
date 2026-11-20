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
enum class AssociationStatus { NOT_SET, PENDING_APPROVAL, APPROVED, REJECTED, SUSPENDED };

namespace AssociationStatusMapper {
AWS_AGENTREGISTRYCONTROL_API AssociationStatus GetAssociationStatusForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForAssociationStatus(AssociationStatus value);
}  // namespace AssociationStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
