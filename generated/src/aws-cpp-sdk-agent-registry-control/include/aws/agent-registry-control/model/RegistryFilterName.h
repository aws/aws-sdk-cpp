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
enum class RegistryFilterName { NOT_SET, status, discoveryConfiguration_authorizerType };

namespace RegistryFilterNameMapper {
AWS_AGENTREGISTRYCONTROL_API RegistryFilterName GetRegistryFilterNameForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForRegistryFilterName(RegistryFilterName value);
}  // namespace RegistryFilterNameMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
