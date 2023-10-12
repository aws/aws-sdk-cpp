/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JDBCConnectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace JDBCConnectionTypeMapper
      {

        static constexpr uint32_t sqlserver_HASH = ConstExprHashingUtils::HashString("sqlserver");
        static constexpr uint32_t mysql_HASH = ConstExprHashingUtils::HashString("mysql");
        static constexpr uint32_t oracle_HASH = ConstExprHashingUtils::HashString("oracle");
        static constexpr uint32_t postgresql_HASH = ConstExprHashingUtils::HashString("postgresql");
        static constexpr uint32_t redshift_HASH = ConstExprHashingUtils::HashString("redshift");


        JDBCConnectionType GetJDBCConnectionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sqlserver_HASH)
          {
            return JDBCConnectionType::sqlserver;
          }
          else if (hashCode == mysql_HASH)
          {
            return JDBCConnectionType::mysql;
          }
          else if (hashCode == oracle_HASH)
          {
            return JDBCConnectionType::oracle;
          }
          else if (hashCode == postgresql_HASH)
          {
            return JDBCConnectionType::postgresql;
          }
          else if (hashCode == redshift_HASH)
          {
            return JDBCConnectionType::redshift;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JDBCConnectionType>(hashCode);
          }

          return JDBCConnectionType::NOT_SET;
        }

        Aws::String GetNameForJDBCConnectionType(JDBCConnectionType enumValue)
        {
          switch(enumValue)
          {
          case JDBCConnectionType::NOT_SET:
            return {};
          case JDBCConnectionType::sqlserver:
            return "sqlserver";
          case JDBCConnectionType::mysql:
            return "mysql";
          case JDBCConnectionType::oracle:
            return "oracle";
          case JDBCConnectionType::postgresql:
            return "postgresql";
          case JDBCConnectionType::redshift:
            return "redshift";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JDBCConnectionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
