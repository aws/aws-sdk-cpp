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
enum class RegistryRecordCredentialProviderType { NOT_SET, OAUTH, IAM };

namespace RegistryRecordCredentialProviderTypeMapper {
AWS_AGENTREGISTRYCONTROL_API RegistryRecordCredentialProviderType GetRegistryRecordCredentialProviderTypeForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForRegistryRecordCredentialProviderType(RegistryRecordCredentialProviderType value);
}  // namespace RegistryRecordCredentialProviderTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
