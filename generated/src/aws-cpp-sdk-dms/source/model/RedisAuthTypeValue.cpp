/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/RedisAuthTypeValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace RedisAuthTypeValueMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int auth_role_HASH = HashingUtils::HashString("auth-role");
        static const int auth_token_HASH = HashingUtils::HashString("auth-token");


        RedisAuthTypeValue GetRedisAuthTypeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return RedisAuthTypeValue::none;
          }
          else if (hashCode == auth_role_HASH)
          {
            return RedisAuthTypeValue::auth_role;
          }
          else if (hashCode == auth_token_HASH)
          {
            return RedisAuthTypeValue::auth_token;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedisAuthTypeValue>(hashCode);
          }

          return RedisAuthTypeValue::NOT_SET;
        }

        Aws::String GetNameForRedisAuthTypeValue(RedisAuthTypeValue enumValue)
        {
          switch(enumValue)
          {
          case RedisAuthTypeValue::NOT_SET:
            return {};
          case RedisAuthTypeValue::none:
            return "none";
          case RedisAuthTypeValue::auth_role:
            return "auth-role";
          case RedisAuthTypeValue::auth_token:
            return "auth-token";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RedisAuthTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
