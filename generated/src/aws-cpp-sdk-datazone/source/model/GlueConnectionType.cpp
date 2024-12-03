/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlueConnectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace GlueConnectionTypeMapper
      {

        static const int SNOWFLAKE_HASH = HashingUtils::HashString("SNOWFLAKE");
        static const int BIGQUERY_HASH = HashingUtils::HashString("BIGQUERY");
        static const int DOCUMENTDB_HASH = HashingUtils::HashString("DOCUMENTDB");
        static const int DYNAMODB_HASH = HashingUtils::HashString("DYNAMODB");
        static const int MYSQL_HASH = HashingUtils::HashString("MYSQL");
        static const int OPENSEARCH_HASH = HashingUtils::HashString("OPENSEARCH");
        static const int ORACLE_HASH = HashingUtils::HashString("ORACLE");
        static const int POSTGRESQL_HASH = HashingUtils::HashString("POSTGRESQL");
        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");
        static const int SAPHANA_HASH = HashingUtils::HashString("SAPHANA");
        static const int SQLSERVER_HASH = HashingUtils::HashString("SQLSERVER");
        static const int TERADATA_HASH = HashingUtils::HashString("TERADATA");
        static const int VERTICA_HASH = HashingUtils::HashString("VERTICA");


        GlueConnectionType GetGlueConnectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SNOWFLAKE_HASH)
          {
            return GlueConnectionType::SNOWFLAKE;
          }
          else if (hashCode == BIGQUERY_HASH)
          {
            return GlueConnectionType::BIGQUERY;
          }
          else if (hashCode == DOCUMENTDB_HASH)
          {
            return GlueConnectionType::DOCUMENTDB;
          }
          else if (hashCode == DYNAMODB_HASH)
          {
            return GlueConnectionType::DYNAMODB;
          }
          else if (hashCode == MYSQL_HASH)
          {
            return GlueConnectionType::MYSQL;
          }
          else if (hashCode == OPENSEARCH_HASH)
          {
            return GlueConnectionType::OPENSEARCH;
          }
          else if (hashCode == ORACLE_HASH)
          {
            return GlueConnectionType::ORACLE;
          }
          else if (hashCode == POSTGRESQL_HASH)
          {
            return GlueConnectionType::POSTGRESQL;
          }
          else if (hashCode == REDSHIFT_HASH)
          {
            return GlueConnectionType::REDSHIFT;
          }
          else if (hashCode == SAPHANA_HASH)
          {
            return GlueConnectionType::SAPHANA;
          }
          else if (hashCode == SQLSERVER_HASH)
          {
            return GlueConnectionType::SQLSERVER;
          }
          else if (hashCode == TERADATA_HASH)
          {
            return GlueConnectionType::TERADATA;
          }
          else if (hashCode == VERTICA_HASH)
          {
            return GlueConnectionType::VERTICA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlueConnectionType>(hashCode);
          }

          return GlueConnectionType::NOT_SET;
        }

        Aws::String GetNameForGlueConnectionType(GlueConnectionType enumValue)
        {
          switch(enumValue)
          {
          case GlueConnectionType::NOT_SET:
            return {};
          case GlueConnectionType::SNOWFLAKE:
            return "SNOWFLAKE";
          case GlueConnectionType::BIGQUERY:
            return "BIGQUERY";
          case GlueConnectionType::DOCUMENTDB:
            return "DOCUMENTDB";
          case GlueConnectionType::DYNAMODB:
            return "DYNAMODB";
          case GlueConnectionType::MYSQL:
            return "MYSQL";
          case GlueConnectionType::OPENSEARCH:
            return "OPENSEARCH";
          case GlueConnectionType::ORACLE:
            return "ORACLE";
          case GlueConnectionType::POSTGRESQL:
            return "POSTGRESQL";
          case GlueConnectionType::REDSHIFT:
            return "REDSHIFT";
          case GlueConnectionType::SAPHANA:
            return "SAPHANA";
          case GlueConnectionType::SQLSERVER:
            return "SQLSERVER";
          case GlueConnectionType::TERADATA:
            return "TERADATA";
          case GlueConnectionType::VERTICA:
            return "VERTICA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlueConnectionTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
