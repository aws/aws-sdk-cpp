/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/PostgreSQLAuthenticationMethod.h>
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
      namespace PostgreSQLAuthenticationMethodMapper
      {

        static const int password_HASH = HashingUtils::HashString("password");
        static const int iam_HASH = HashingUtils::HashString("iam");


        PostgreSQLAuthenticationMethod GetPostgreSQLAuthenticationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == password_HASH)
          {
            return PostgreSQLAuthenticationMethod::password;
          }
          else if (hashCode == iam_HASH)
          {
            return PostgreSQLAuthenticationMethod::iam;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PostgreSQLAuthenticationMethod>(hashCode);
          }

          return PostgreSQLAuthenticationMethod::NOT_SET;
        }

        Aws::String GetNameForPostgreSQLAuthenticationMethod(PostgreSQLAuthenticationMethod enumValue)
        {
          switch(enumValue)
          {
          case PostgreSQLAuthenticationMethod::NOT_SET:
            return {};
          case PostgreSQLAuthenticationMethod::password:
            return "password";
          case PostgreSQLAuthenticationMethod::iam:
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

      } // namespace PostgreSQLAuthenticationMethodMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
