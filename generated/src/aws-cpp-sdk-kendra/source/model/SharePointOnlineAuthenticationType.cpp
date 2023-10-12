/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SharePointOnlineAuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace SharePointOnlineAuthenticationTypeMapper
      {

        static constexpr uint32_t HTTP_BASIC_HASH = ConstExprHashingUtils::HashString("HTTP_BASIC");
        static constexpr uint32_t OAUTH2_HASH = ConstExprHashingUtils::HashString("OAUTH2");


        SharePointOnlineAuthenticationType GetSharePointOnlineAuthenticationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_BASIC_HASH)
          {
            return SharePointOnlineAuthenticationType::HTTP_BASIC;
          }
          else if (hashCode == OAUTH2_HASH)
          {
            return SharePointOnlineAuthenticationType::OAUTH2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SharePointOnlineAuthenticationType>(hashCode);
          }

          return SharePointOnlineAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForSharePointOnlineAuthenticationType(SharePointOnlineAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case SharePointOnlineAuthenticationType::NOT_SET:
            return {};
          case SharePointOnlineAuthenticationType::HTTP_BASIC:
            return "HTTP_BASIC";
          case SharePointOnlineAuthenticationType::OAUTH2:
            return "OAUTH2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SharePointOnlineAuthenticationTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
