/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/AuthScheme.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace AuthSchemeMapper
      {

        static const int SECRETS_HASH = HashingUtils::HashString("SECRETS");


        AuthScheme GetAuthSchemeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECRETS_HASH)
          {
            return AuthScheme::SECRETS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthScheme>(hashCode);
          }

          return AuthScheme::NOT_SET;
        }

        Aws::String GetNameForAuthScheme(AuthScheme enumValue)
        {
          switch(enumValue)
          {
          case AuthScheme::SECRETS:
            return "SECRETS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthSchemeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
