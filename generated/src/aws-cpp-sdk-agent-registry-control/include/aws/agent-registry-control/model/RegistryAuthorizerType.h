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
enum class RegistryAuthorizerType { NOT_SET, CUSTOM_JWT, AWS_IAM };

namespace RegistryAuthorizerTypeMapper {
AWS_AGENTREGISTRYCONTROL_API RegistryAuthorizerType GetRegistryAuthorizerTypeForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForRegistryAuthorizerType(RegistryAuthorizerType value);
}  // namespace RegistryAuthorizerTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
