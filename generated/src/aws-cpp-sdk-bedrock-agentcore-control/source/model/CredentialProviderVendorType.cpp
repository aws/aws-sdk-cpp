/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CredentialProviderVendorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace CredentialProviderVendorTypeMapper {

static const int GoogleOauth2_HASH = HashingUtils::HashString("GoogleOauth2");
static const int GithubOauth2_HASH = HashingUtils::HashString("GithubOauth2");
static const int SlackOauth2_HASH = HashingUtils::HashString("SlackOauth2");
static const int SalesforceOauth2_HASH = HashingUtils::HashString("SalesforceOauth2");
static const int MicrosoftOauth2_HASH = HashingUtils::HashString("MicrosoftOauth2");
static const int CustomOauth2_HASH = HashingUtils::HashString("CustomOauth2");
static const int AtlassianOauth2_HASH = HashingUtils::HashString("AtlassianOauth2");
static const int LinkedinOauth2_HASH = HashingUtils::HashString("LinkedinOauth2");
static const int XOauth2_HASH = HashingUtils::HashString("XOauth2");
static const int OktaOauth2_HASH = HashingUtils::HashString("OktaOauth2");
static const int OneLoginOauth2_HASH = HashingUtils::HashString("OneLoginOauth2");
static const int PingOneOauth2_HASH = HashingUtils::HashString("PingOneOauth2");
static const int FacebookOauth2_HASH = HashingUtils::HashString("FacebookOauth2");
static const int YandexOauth2_HASH = HashingUtils::HashString("YandexOauth2");
static const int RedditOauth2_HASH = HashingUtils::HashString("RedditOauth2");
static const int ZoomOauth2_HASH = HashingUtils::HashString("ZoomOauth2");
static const int TwitchOauth2_HASH = HashingUtils::HashString("TwitchOauth2");
static const int SpotifyOauth2_HASH = HashingUtils::HashString("SpotifyOauth2");
static const int DropboxOauth2_HASH = HashingUtils::HashString("DropboxOauth2");
static const int NotionOauth2_HASH = HashingUtils::HashString("NotionOauth2");
static const int HubspotOauth2_HASH = HashingUtils::HashString("HubspotOauth2");
static const int CyberArkOauth2_HASH = HashingUtils::HashString("CyberArkOauth2");
static const int FusionAuthOauth2_HASH = HashingUtils::HashString("FusionAuthOauth2");
static const int Auth0Oauth2_HASH = HashingUtils::HashString("Auth0Oauth2");
static const int CognitoOauth2_HASH = HashingUtils::HashString("CognitoOauth2");

CredentialProviderVendorType GetCredentialProviderVendorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GoogleOauth2_HASH) {
    return CredentialProviderVendorType::GoogleOauth2;
  } else if (hashCode == GithubOauth2_HASH) {
    return CredentialProviderVendorType::GithubOauth2;
  } else if (hashCode == SlackOauth2_HASH) {
    return CredentialProviderVendorType::SlackOauth2;
  } else if (hashCode == SalesforceOauth2_HASH) {
    return CredentialProviderVendorType::SalesforceOauth2;
  } else if (hashCode == MicrosoftOauth2_HASH) {
    return CredentialProviderVendorType::MicrosoftOauth2;
  } else if (hashCode == CustomOauth2_HASH) {
    return CredentialProviderVendorType::CustomOauth2;
  } else if (hashCode == AtlassianOauth2_HASH) {
    return CredentialProviderVendorType::AtlassianOauth2;
  } else if (hashCode == LinkedinOauth2_HASH) {
    return CredentialProviderVendorType::LinkedinOauth2;
  } else if (hashCode == XOauth2_HASH) {
    return CredentialProviderVendorType::XOauth2;
  } else if (hashCode == OktaOauth2_HASH) {
    return CredentialProviderVendorType::OktaOauth2;
  } else if (hashCode == OneLoginOauth2_HASH) {
    return CredentialProviderVendorType::OneLoginOauth2;
  } else if (hashCode == PingOneOauth2_HASH) {
    return CredentialProviderVendorType::PingOneOauth2;
  } else if (hashCode == FacebookOauth2_HASH) {
    return CredentialProviderVendorType::FacebookOauth2;
  } else if (hashCode == YandexOauth2_HASH) {
    return CredentialProviderVendorType::YandexOauth2;
  } else if (hashCode == RedditOauth2_HASH) {
    return CredentialProviderVendorType::RedditOauth2;
  } else if (hashCode == ZoomOauth2_HASH) {
    return CredentialProviderVendorType::ZoomOauth2;
  } else if (hashCode == TwitchOauth2_HASH) {
    return CredentialProviderVendorType::TwitchOauth2;
  } else if (hashCode == SpotifyOauth2_HASH) {
    return CredentialProviderVendorType::SpotifyOauth2;
  } else if (hashCode == DropboxOauth2_HASH) {
    return CredentialProviderVendorType::DropboxOauth2;
  } else if (hashCode == NotionOauth2_HASH) {
    return CredentialProviderVendorType::NotionOauth2;
  } else if (hashCode == HubspotOauth2_HASH) {
    return CredentialProviderVendorType::HubspotOauth2;
  } else if (hashCode == CyberArkOauth2_HASH) {
    return CredentialProviderVendorType::CyberArkOauth2;
  } else if (hashCode == FusionAuthOauth2_HASH) {
    return CredentialProviderVendorType::FusionAuthOauth2;
  } else if (hashCode == Auth0Oauth2_HASH) {
    return CredentialProviderVendorType::Auth0Oauth2;
  } else if (hashCode == CognitoOauth2_HASH) {
    return CredentialProviderVendorType::CognitoOauth2;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CredentialProviderVendorType>(hashCode);
  }

  return CredentialProviderVendorType::NOT_SET;
}

Aws::String GetNameForCredentialProviderVendorType(CredentialProviderVendorType enumValue) {
  switch (enumValue) {
    case CredentialProviderVendorType::NOT_SET:
      return {};
    case CredentialProviderVendorType::GoogleOauth2:
      return "GoogleOauth2";
    case CredentialProviderVendorType::GithubOauth2:
      return "GithubOauth2";
    case CredentialProviderVendorType::SlackOauth2:
      return "SlackOauth2";
    case CredentialProviderVendorType::SalesforceOauth2:
      return "SalesforceOauth2";
    case CredentialProviderVendorType::MicrosoftOauth2:
      return "MicrosoftOauth2";
    case CredentialProviderVendorType::CustomOauth2:
      return "CustomOauth2";
    case CredentialProviderVendorType::AtlassianOauth2:
      return "AtlassianOauth2";
    case CredentialProviderVendorType::LinkedinOauth2:
      return "LinkedinOauth2";
    case CredentialProviderVendorType::XOauth2:
      return "XOauth2";
    case CredentialProviderVendorType::OktaOauth2:
      return "OktaOauth2";
    case CredentialProviderVendorType::OneLoginOauth2:
      return "OneLoginOauth2";
    case CredentialProviderVendorType::PingOneOauth2:
      return "PingOneOauth2";
    case CredentialProviderVendorType::FacebookOauth2:
      return "FacebookOauth2";
    case CredentialProviderVendorType::YandexOauth2:
      return "YandexOauth2";
    case CredentialProviderVendorType::RedditOauth2:
      return "RedditOauth2";
    case CredentialProviderVendorType::ZoomOauth2:
      return "ZoomOauth2";
    case CredentialProviderVendorType::TwitchOauth2:
      return "TwitchOauth2";
    case CredentialProviderVendorType::SpotifyOauth2:
      return "SpotifyOauth2";
    case CredentialProviderVendorType::DropboxOauth2:
      return "DropboxOauth2";
    case CredentialProviderVendorType::NotionOauth2:
      return "NotionOauth2";
    case CredentialProviderVendorType::HubspotOauth2:
      return "HubspotOauth2";
    case CredentialProviderVendorType::CyberArkOauth2:
      return "CyberArkOauth2";
    case CredentialProviderVendorType::FusionAuthOauth2:
      return "FusionAuthOauth2";
    case CredentialProviderVendorType::Auth0Oauth2:
      return "Auth0Oauth2";
    case CredentialProviderVendorType::CognitoOauth2:
      return "CognitoOauth2";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CredentialProviderVendorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
