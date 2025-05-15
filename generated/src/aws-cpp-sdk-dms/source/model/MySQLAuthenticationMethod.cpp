/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/MySQLAuthenticationMethod.h>
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
      namespace MySQLAuthenticationMethodMapper
      {

        static const int password_HASH = HashingUtils::HashString("password");
        static const int iam_HASH = HashingUtils::HashString("iam");


        MySQLAuthenticationMethod GetMySQLAuthenticationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == password_HASH)
          {
            return MySQLAuthenticationMethod::password;
          }
          else if (hashCode == iam_HASH)
          {
            return MySQLAuthenticationMethod::iam;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MySQLAuthenticationMethod>(hashCode);
          }

          return MySQLAuthenticationMethod::NOT_SET;
        }

        Aws::String GetNameForMySQLAuthenticationMethod(MySQLAuthenticationMethod enumValue)
        {
          switch(enumValue)
          {
          case MySQLAuthenticationMethod::NOT_SET:
            return {};
          case MySQLAuthenticationMethod::password:
            return "password";
          case MySQLAuthenticationMethod::iam:
            return "iam";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MySQLAuthenticationMethodMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
