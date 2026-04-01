/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class PrivateConnectionType { NOT_SET, SELF_MANAGED, SERVICE_MANAGED };

namespace PrivateConnectionTypeMapper {
AWS_DEVOPSAGENT_API PrivateConnectionType GetPrivateConnectionTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForPrivateConnectionType(PrivateConnectionType value);
}  // namespace PrivateConnectionTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
