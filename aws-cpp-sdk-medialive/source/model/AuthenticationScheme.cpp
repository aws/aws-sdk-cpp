/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AuthenticationScheme.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace AuthenticationSchemeMapper
      {

        static const int AKAMAI_HASH = HashingUtils::HashString("AKAMAI");
        static const int COMMON_HASH = HashingUtils::HashString("COMMON");


        AuthenticationScheme GetAuthenticationSchemeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AKAMAI_HASH)
          {
            return AuthenticationScheme::AKAMAI;
          }
          else if (hashCode == COMMON_HASH)
          {
            return AuthenticationScheme::COMMON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationScheme>(hashCode);
          }

          return AuthenticationScheme::NOT_SET;
        }

        Aws::String GetNameForAuthenticationScheme(AuthenticationScheme enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationScheme::AKAMAI:
            return "AKAMAI";
          case AuthenticationScheme::COMMON:
            return "COMMON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationSchemeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
