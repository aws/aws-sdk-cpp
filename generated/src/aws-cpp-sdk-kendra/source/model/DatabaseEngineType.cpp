/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DatabaseEngineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace DatabaseEngineTypeMapper
      {

        static const int RDS_AURORA_MYSQL_HASH = HashingUtils::HashString("RDS_AURORA_MYSQL");
        static const int RDS_AURORA_POSTGRESQL_HASH = HashingUtils::HashString("RDS_AURORA_POSTGRESQL");
        static const int RDS_MYSQL_HASH = HashingUtils::HashString("RDS_MYSQL");
        static const int RDS_POSTGRESQL_HASH = HashingUtils::HashString("RDS_POSTGRESQL");


        DatabaseEngineType GetDatabaseEngineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RDS_AURORA_MYSQL_HASH)
          {
            return DatabaseEngineType::RDS_AURORA_MYSQL;
          }
          else if (hashCode == RDS_AURORA_POSTGRESQL_HASH)
          {
            return DatabaseEngineType::RDS_AURORA_POSTGRESQL;
          }
          else if (hashCode == RDS_MYSQL_HASH)
          {
            return DatabaseEngineType::RDS_MYSQL;
          }
          else if (hashCode == RDS_POSTGRESQL_HASH)
          {
            return DatabaseEngineType::RDS_POSTGRESQL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseEngineType>(hashCode);
          }

          return DatabaseEngineType::NOT_SET;
        }

        Aws::String GetNameForDatabaseEngineType(DatabaseEngineType enumValue)
        {
          switch(enumValue)
          {
          case DatabaseEngineType::RDS_AURORA_MYSQL:
            return "RDS_AURORA_MYSQL";
          case DatabaseEngineType::RDS_AURORA_POSTGRESQL:
            return "RDS_AURORA_POSTGRESQL";
          case DatabaseEngineType::RDS_MYSQL:
            return "RDS_MYSQL";
          case DatabaseEngineType::RDS_POSTGRESQL:
            return "RDS_POSTGRESQL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseEngineTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
