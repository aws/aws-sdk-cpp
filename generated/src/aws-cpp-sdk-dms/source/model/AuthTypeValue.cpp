/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/AuthTypeValue.h>
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
      namespace AuthTypeValueMapper
      {

        static const int no_HASH = HashingUtils::HashString("no");
        static const int password_HASH = HashingUtils::HashString("password");


        AuthTypeValue GetAuthTypeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == no_HASH)
          {
            return AuthTypeValue::no;
          }
          else if (hashCode == password_HASH)
          {
            return AuthTypeValue::password;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthTypeValue>(hashCode);
          }

          return AuthTypeValue::NOT_SET;
        }

        Aws::String GetNameForAuthTypeValue(AuthTypeValue enumValue)
        {
          switch(enumValue)
          {
          case AuthTypeValue::no:
            return "no";
          case AuthTypeValue::password:
            return "password";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
