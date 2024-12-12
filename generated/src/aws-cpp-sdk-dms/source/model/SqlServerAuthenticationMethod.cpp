/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/SqlServerAuthenticationMethod.h>
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
      namespace SqlServerAuthenticationMethodMapper
      {

        static const int password_HASH = HashingUtils::HashString("password");
        static const int kerberos_HASH = HashingUtils::HashString("kerberos");


        SqlServerAuthenticationMethod GetSqlServerAuthenticationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == password_HASH)
          {
            return SqlServerAuthenticationMethod::password;
          }
          else if (hashCode == kerberos_HASH)
          {
            return SqlServerAuthenticationMethod::kerberos;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SqlServerAuthenticationMethod>(hashCode);
          }

          return SqlServerAuthenticationMethod::NOT_SET;
        }

        Aws::String GetNameForSqlServerAuthenticationMethod(SqlServerAuthenticationMethod enumValue)
        {
          switch(enumValue)
          {
          case SqlServerAuthenticationMethod::NOT_SET:
            return {};
          case SqlServerAuthenticationMethod::password:
            return "password";
          case SqlServerAuthenticationMethod::kerberos:
            return "kerberos";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SqlServerAuthenticationMethodMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
