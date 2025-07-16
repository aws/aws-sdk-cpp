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
  enum class CredentialProviderVendorType
  {
    NOT_SET,
    GoogleOauth2,
    GithubOauth2,
    SlackOauth2,
    SalesforceOauth2,
    MicrosoftOauth2,
    CustomOauth2
  };

namespace CredentialProviderVendorTypeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API CredentialProviderVendorType GetCredentialProviderVendorTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForCredentialProviderVendorType(CredentialProviderVendorType value);
} // namespace CredentialProviderVendorTypeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
