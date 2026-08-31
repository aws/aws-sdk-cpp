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
enum class AutoDetectionScope { NOT_SET, ORGANIZATION };

namespace AutoDetectionScopeMapper {
AWS_AGENTREGISTRYCONTROL_API AutoDetectionScope GetAutoDetectionScopeForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForAutoDetectionScope(AutoDetectionScope value);
}  // namespace AutoDetectionScopeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
