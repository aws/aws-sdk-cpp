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
    CustomOauth2,
    AtlassianOauth2,
    LinkedinOauth2,
    XOauth2,
    OktaOauth2,
    OneLoginOauth2,
    PingOneOauth2,
    FacebookOauth2,
    YandexOauth2,
    RedditOauth2,
    ZoomOauth2,
    TwitchOauth2,
    SpotifyOauth2,
    DropboxOauth2,
    NotionOauth2,
    HubspotOauth2,
    CyberArkOauth2,
    FusionAuthOauth2,
    Auth0Oauth2,
    CognitoOauth2
  };

namespace CredentialProviderVendorTypeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API CredentialProviderVendorType GetCredentialProviderVendorTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForCredentialProviderVendorType(CredentialProviderVendorType value);
} // namespace CredentialProviderVendorTypeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
