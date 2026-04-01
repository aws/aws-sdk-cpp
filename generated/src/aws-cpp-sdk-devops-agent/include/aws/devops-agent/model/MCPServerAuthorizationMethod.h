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
enum class MCPServerAuthorizationMethod { NOT_SET, oauth_client_credentials, oauth_3lo, api_key, bearer_token };

namespace MCPServerAuthorizationMethodMapper {
AWS_DEVOPSAGENT_API MCPServerAuthorizationMethod GetMCPServerAuthorizationMethodForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForMCPServerAuthorizationMethod(MCPServerAuthorizationMethod value);
}  // namespace MCPServerAuthorizationMethodMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
