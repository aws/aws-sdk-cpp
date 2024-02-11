/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/AuthResources.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace AuthResourcesMapper
      {

        static const int USER_POOL_ONLY_HASH = HashingUtils::HashString("USER_POOL_ONLY");
        static const int IDENTITY_POOL_AND_USER_POOL_HASH = HashingUtils::HashString("IDENTITY_POOL_AND_USER_POOL");


        AuthResources GetAuthResourcesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_POOL_ONLY_HASH)
          {
            return AuthResources::USER_POOL_ONLY;
          }
          else if (hashCode == IDENTITY_POOL_AND_USER_POOL_HASH)
          {
            return AuthResources::IDENTITY_POOL_AND_USER_POOL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthResources>(hashCode);
          }

          return AuthResources::NOT_SET;
        }

        Aws::String GetNameForAuthResources(AuthResources enumValue)
        {
          switch(enumValue)
          {
          case AuthResources::NOT_SET:
            return {};
          case AuthResources::USER_POOL_ONLY:
            return "USER_POOL_ONLY";
          case AuthResources::IDENTITY_POOL_AND_USER_POOL:
            return "IDENTITY_POOL_AND_USER_POOL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthResourcesMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
