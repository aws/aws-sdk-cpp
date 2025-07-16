/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CredentialProviderVendorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace CredentialProviderVendorTypeMapper
      {

        static const int GoogleOauth2_HASH = HashingUtils::HashString("GoogleOauth2");
        static const int GithubOauth2_HASH = HashingUtils::HashString("GithubOauth2");
        static const int SlackOauth2_HASH = HashingUtils::HashString("SlackOauth2");
        static const int SalesforceOauth2_HASH = HashingUtils::HashString("SalesforceOauth2");
        static const int MicrosoftOauth2_HASH = HashingUtils::HashString("MicrosoftOauth2");
        static const int CustomOauth2_HASH = HashingUtils::HashString("CustomOauth2");


        CredentialProviderVendorType GetCredentialProviderVendorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GoogleOauth2_HASH)
          {
            return CredentialProviderVendorType::GoogleOauth2;
          }
          else if (hashCode == GithubOauth2_HASH)
          {
            return CredentialProviderVendorType::GithubOauth2;
          }
          else if (hashCode == SlackOauth2_HASH)
          {
            return CredentialProviderVendorType::SlackOauth2;
          }
          else if (hashCode == SalesforceOauth2_HASH)
          {
            return CredentialProviderVendorType::SalesforceOauth2;
          }
          else if (hashCode == MicrosoftOauth2_HASH)
          {
            return CredentialProviderVendorType::MicrosoftOauth2;
          }
          else if (hashCode == CustomOauth2_HASH)
          {
            return CredentialProviderVendorType::CustomOauth2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CredentialProviderVendorType>(hashCode);
          }

          return CredentialProviderVendorType::NOT_SET;
        }

        Aws::String GetNameForCredentialProviderVendorType(CredentialProviderVendorType enumValue)
        {
          switch(enumValue)
          {
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CredentialProviderVendorTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
