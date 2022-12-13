/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ClientPasswordAuthType.h>
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
      namespace ClientPasswordAuthTypeMapper
      {

        static const int MYSQL_NATIVE_PASSWORD_HASH = HashingUtils::HashString("MYSQL_NATIVE_PASSWORD");
        static const int POSTGRES_SCRAM_SHA_256_HASH = HashingUtils::HashString("POSTGRES_SCRAM_SHA_256");
        static const int POSTGRES_MD5_HASH = HashingUtils::HashString("POSTGRES_MD5");
        static const int SQL_SERVER_AUTHENTICATION_HASH = HashingUtils::HashString("SQL_SERVER_AUTHENTICATION");


        ClientPasswordAuthType GetClientPasswordAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MYSQL_NATIVE_PASSWORD_HASH)
          {
            return ClientPasswordAuthType::MYSQL_NATIVE_PASSWORD;
          }
          else if (hashCode == POSTGRES_SCRAM_SHA_256_HASH)
          {
            return ClientPasswordAuthType::POSTGRES_SCRAM_SHA_256;
          }
          else if (hashCode == POSTGRES_MD5_HASH)
          {
            return ClientPasswordAuthType::POSTGRES_MD5;
          }
          else if (hashCode == SQL_SERVER_AUTHENTICATION_HASH)
          {
            return ClientPasswordAuthType::SQL_SERVER_AUTHENTICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientPasswordAuthType>(hashCode);
          }

          return ClientPasswordAuthType::NOT_SET;
        }

        Aws::String GetNameForClientPasswordAuthType(ClientPasswordAuthType enumValue)
        {
          switch(enumValue)
          {
          case ClientPasswordAuthType::MYSQL_NATIVE_PASSWORD:
            return "MYSQL_NATIVE_PASSWORD";
          case ClientPasswordAuthType::POSTGRES_SCRAM_SHA_256:
            return "POSTGRES_SCRAM_SHA_256";
          case ClientPasswordAuthType::POSTGRES_MD5:
            return "POSTGRES_MD5";
          case ClientPasswordAuthType::SQL_SERVER_AUTHENTICATION:
            return "SQL_SERVER_AUTHENTICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientPasswordAuthTypeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
