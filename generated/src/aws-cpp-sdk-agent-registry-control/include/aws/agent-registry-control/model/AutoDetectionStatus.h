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
enum class AutoDetectionStatus { NOT_SET, ACTIVE, INACTIVE };

namespace AutoDetectionStatusMapper {
AWS_AGENTREGISTRYCONTROL_API AutoDetectionStatus GetAutoDetectionStatusForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForAutoDetectionStatus(AutoDetectionStatus value);
}  // namespace AutoDetectionStatusMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
