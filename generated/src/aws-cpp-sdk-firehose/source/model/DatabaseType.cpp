/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DatabaseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace DatabaseTypeMapper
      {

        static const int MySQL_HASH = HashingUtils::HashString("MySQL");
        static const int PostgreSQL_HASH = HashingUtils::HashString("PostgreSQL");


        DatabaseType GetDatabaseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MySQL_HASH)
          {
            return DatabaseType::MySQL;
          }
          else if (hashCode == PostgreSQL_HASH)
          {
            return DatabaseType::PostgreSQL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseType>(hashCode);
          }

          return DatabaseType::NOT_SET;
        }

        Aws::String GetNameForDatabaseType(DatabaseType enumValue)
        {
          switch(enumValue)
          {
          case DatabaseType::NOT_SET:
            return {};
          case DatabaseType::MySQL:
            return "MySQL";
          case DatabaseType::PostgreSQL:
            return "PostgreSQL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseTypeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
