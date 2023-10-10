/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/TokenType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace TokenTypeMapper
      {

        static const int REFRESH_TOKEN_HASH = HashingUtils::HashString("REFRESH_TOKEN");


        TokenType GetTokenTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REFRESH_TOKEN_HASH)
          {
            return TokenType::REFRESH_TOKEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TokenType>(hashCode);
          }

          return TokenType::NOT_SET;
        }

        Aws::String GetNameForTokenType(TokenType enumValue)
        {
          switch(enumValue)
          {
          case TokenType::NOT_SET:
            return {};
          case TokenType::REFRESH_TOKEN:
            return "REFRESH_TOKEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TokenTypeMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
