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
enum class AgentSkillsRepositoryProvider { NOT_SET, GITHUB };

namespace AgentSkillsRepositoryProviderMapper {
AWS_AGENTREGISTRYCONTROL_API AgentSkillsRepositoryProvider GetAgentSkillsRepositoryProviderForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForAgentSkillsRepositoryProvider(AgentSkillsRepositoryProvider value);
}  // namespace AgentSkillsRepositoryProviderMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
