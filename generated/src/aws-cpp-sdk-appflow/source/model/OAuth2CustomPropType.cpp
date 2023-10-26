/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/OAuth2CustomPropType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace OAuth2CustomPropTypeMapper
      {

        static const int TOKEN_URL_HASH = HashingUtils::HashString("TOKEN_URL");
        static const int AUTH_URL_HASH = HashingUtils::HashString("AUTH_URL");


        OAuth2CustomPropType GetOAuth2CustomPropTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOKEN_URL_HASH)
          {
            return OAuth2CustomPropType::TOKEN_URL;
          }
          else if (hashCode == AUTH_URL_HASH)
          {
            return OAuth2CustomPropType::AUTH_URL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OAuth2CustomPropType>(hashCode);
          }

          return OAuth2CustomPropType::NOT_SET;
        }

        Aws::String GetNameForOAuth2CustomPropType(OAuth2CustomPropType enumValue)
        {
          switch(enumValue)
          {
          case OAuth2CustomPropType::NOT_SET:
            return {};
          case OAuth2CustomPropType::TOKEN_URL:
            return "TOKEN_URL";
          case OAuth2CustomPropType::AUTH_URL:
            return "AUTH_URL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OAuth2CustomPropTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
