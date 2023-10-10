/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/TokenProviders.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyUIBuilder
  {
    namespace Model
    {
      namespace TokenProvidersMapper
      {

        static const int figma_HASH = HashingUtils::HashString("figma");


        TokenProviders GetTokenProvidersForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == figma_HASH)
          {
            return TokenProviders::figma;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TokenProviders>(hashCode);
          }

          return TokenProviders::NOT_SET;
        }

        Aws::String GetNameForTokenProviders(TokenProviders enumValue)
        {
          switch(enumValue)
          {
          case TokenProviders::NOT_SET:
            return {};
          case TokenProviders::figma:
            return "figma";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TokenProvidersMapper
    } // namespace Model
  } // namespace AmplifyUIBuilder
} // namespace Aws
