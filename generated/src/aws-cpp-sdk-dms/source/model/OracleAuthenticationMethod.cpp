/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/OracleAuthenticationMethod.h>
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
      namespace OracleAuthenticationMethodMapper
      {

        static const int password_HASH = HashingUtils::HashString("password");
        static const int kerberos_HASH = HashingUtils::HashString("kerberos");


        OracleAuthenticationMethod GetOracleAuthenticationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == password_HASH)
          {
            return OracleAuthenticationMethod::password;
          }
          else if (hashCode == kerberos_HASH)
          {
            return OracleAuthenticationMethod::kerberos;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OracleAuthenticationMethod>(hashCode);
          }

          return OracleAuthenticationMethod::NOT_SET;
        }

        Aws::String GetNameForOracleAuthenticationMethod(OracleAuthenticationMethod enumValue)
        {
          switch(enumValue)
          {
          case OracleAuthenticationMethod::NOT_SET:
            return {};
          case OracleAuthenticationMethod::password:
            return "password";
          case OracleAuthenticationMethod::kerberos:
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

      } // namespace OracleAuthenticationMethodMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
