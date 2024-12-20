/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SharePointAuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace SharePointAuthTypeMapper
      {

        static const int OAUTH2_CLIENT_CREDENTIALS_HASH = HashingUtils::HashString("OAUTH2_CLIENT_CREDENTIALS");
        static const int OAUTH2_SHAREPOINT_APP_ONLY_CLIENT_CREDENTIALS_HASH = HashingUtils::HashString("OAUTH2_SHAREPOINT_APP_ONLY_CLIENT_CREDENTIALS");


        SharePointAuthType GetSharePointAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OAUTH2_CLIENT_CREDENTIALS_HASH)
          {
            return SharePointAuthType::OAUTH2_CLIENT_CREDENTIALS;
          }
          else if (hashCode == OAUTH2_SHAREPOINT_APP_ONLY_CLIENT_CREDENTIALS_HASH)
          {
            return SharePointAuthType::OAUTH2_SHAREPOINT_APP_ONLY_CLIENT_CREDENTIALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SharePointAuthType>(hashCode);
          }

          return SharePointAuthType::NOT_SET;
        }

        Aws::String GetNameForSharePointAuthType(SharePointAuthType enumValue)
        {
          switch(enumValue)
          {
          case SharePointAuthType::NOT_SET:
            return {};
          case SharePointAuthType::OAUTH2_CLIENT_CREDENTIALS:
            return "OAUTH2_CLIENT_CREDENTIALS";
          case SharePointAuthType::OAUTH2_SHAREPOINT_APP_ONLY_CLIENT_CREDENTIALS:
            return "OAUTH2_SHAREPOINT_APP_ONLY_CLIENT_CREDENTIALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SharePointAuthTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
