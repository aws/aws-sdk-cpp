/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/AuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppFabric
  {
    namespace Model
    {
      namespace AuthTypeMapper
      {

        static const int oauth2_HASH = HashingUtils::HashString("oauth2");
        static const int apiKey_HASH = HashingUtils::HashString("apiKey");


        AuthType GetAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == oauth2_HASH)
          {
            return AuthType::oauth2;
          }
          else if (hashCode == apiKey_HASH)
          {
            return AuthType::apiKey;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthType>(hashCode);
          }

          return AuthType::NOT_SET;
        }

        Aws::String GetNameForAuthType(AuthType enumValue)
        {
          switch(enumValue)
          {
          case AuthType::NOT_SET:
            return {};
          case AuthType::oauth2:
            return "oauth2";
          case AuthType::apiKey:
            return "apiKey";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthTypeMapper
    } // namespace Model
  } // namespace AppFabric
} // namespace Aws
