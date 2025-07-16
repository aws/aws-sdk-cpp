/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CredentialProviderType.h>
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
      namespace CredentialProviderTypeMapper
      {

        static const int GATEWAY_IAM_ROLE_HASH = HashingUtils::HashString("GATEWAY_IAM_ROLE");
        static const int OAUTH_HASH = HashingUtils::HashString("OAUTH");
        static const int API_KEY_HASH = HashingUtils::HashString("API_KEY");


        CredentialProviderType GetCredentialProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GATEWAY_IAM_ROLE_HASH)
          {
            return CredentialProviderType::GATEWAY_IAM_ROLE;
          }
          else if (hashCode == OAUTH_HASH)
          {
            return CredentialProviderType::OAUTH;
          }
          else if (hashCode == API_KEY_HASH)
          {
            return CredentialProviderType::API_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CredentialProviderType>(hashCode);
          }

          return CredentialProviderType::NOT_SET;
        }

        Aws::String GetNameForCredentialProviderType(CredentialProviderType enumValue)
        {
          switch(enumValue)
          {
          case CredentialProviderType::NOT_SET:
            return {};
          case CredentialProviderType::GATEWAY_IAM_ROLE:
            return "GATEWAY_IAM_ROLE";
          case CredentialProviderType::OAUTH:
            return "OAUTH";
          case CredentialProviderType::API_KEY:
            return "API_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CredentialProviderTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
