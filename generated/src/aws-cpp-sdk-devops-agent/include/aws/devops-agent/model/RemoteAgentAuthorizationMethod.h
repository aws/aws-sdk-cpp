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
enum class RemoteAgentAuthorizationMethod { NOT_SET, oauth_client_credentials, api_key, bearer_token };

namespace RemoteAgentAuthorizationMethodMapper {
AWS_DEVOPSAGENT_API RemoteAgentAuthorizationMethod GetRemoteAgentAuthorizationMethodForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForRemoteAgentAuthorizationMethod(RemoteAgentAuthorizationMethod value);
}  // namespace RemoteAgentAuthorizationMethodMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
