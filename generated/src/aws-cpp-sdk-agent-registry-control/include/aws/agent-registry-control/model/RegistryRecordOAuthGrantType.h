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
enum class RegistryRecordOAuthGrantType { NOT_SET, CLIENT_CREDENTIALS };

namespace RegistryRecordOAuthGrantTypeMapper {
AWS_AGENTREGISTRYCONTROL_API RegistryRecordOAuthGrantType GetRegistryRecordOAuthGrantTypeForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForRegistryRecordOAuthGrantType(RegistryRecordOAuthGrantType value);
}  // namespace RegistryRecordOAuthGrantTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
