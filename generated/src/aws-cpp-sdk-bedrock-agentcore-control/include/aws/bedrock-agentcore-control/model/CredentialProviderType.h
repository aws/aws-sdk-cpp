/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{
  enum class CredentialProviderType
  {
    NOT_SET,
    GATEWAY_IAM_ROLE,
    OAUTH,
    API_KEY
  };

namespace CredentialProviderTypeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API CredentialProviderType GetCredentialProviderTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForCredentialProviderType(CredentialProviderType value);
} // namespace CredentialProviderTypeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
