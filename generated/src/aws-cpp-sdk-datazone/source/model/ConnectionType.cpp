/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ConnectionType.h>
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
      namespace ConnectionTypeMapper
      {

        static const int ATHENA_HASH = HashingUtils::HashString("ATHENA");
        static const int BIGQUERY_HASH = HashingUtils::HashString("BIGQUERY");
        static const int DATABRICKS_HASH = HashingUtils::HashString("DATABRICKS");
        static const int DOCUMENTDB_HASH = HashingUtils::HashString("DOCUMENTDB");
        static const int DYNAMODB_HASH = HashingUtils::HashString("DYNAMODB");
        static const int HYPERPOD_HASH = HashingUtils::HashString("HYPERPOD");
        static const int IAM_HASH = HashingUtils::HashString("IAM");
        static const int MYSQL_HASH = HashingUtils::HashString("MYSQL");
        static const int OPENSEARCH_HASH = HashingUtils::HashString("OPENSEARCH");
        static const int ORACLE_HASH = HashingUtils::HashString("ORACLE");
        static const int POSTGRESQL_HASH = HashingUtils::HashString("POSTGRESQL");
        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");
        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int SAPHANA_HASH = HashingUtils::HashString("SAPHANA");
        static const int SNOWFLAKE_HASH = HashingUtils::HashString("SNOWFLAKE");
        static const int SPARK_HASH = HashingUtils::HashString("SPARK");
        static const int SQLSERVER_HASH = HashingUtils::HashString("SQLSERVER");
        static const int TERADATA_HASH = HashingUtils::HashString("TERADATA");
        static const int VERTICA_HASH = HashingUtils::HashString("VERTICA");
        static const int WORKFLOWS_MWAA_HASH = HashingUtils::HashString("WORKFLOWS_MWAA");


        ConnectionType GetConnectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATHENA_HASH)
          {
            return ConnectionType::ATHENA;
          }
          else if (hashCode == BIGQUERY_HASH)
          {
            return ConnectionType::BIGQUERY;
          }
          else if (hashCode == DATABRICKS_HASH)
          {
            return ConnectionType::DATABRICKS;
          }
          else if (hashCode == DOCUMENTDB_HASH)
          {
            return ConnectionType::DOCUMENTDB;
          }
          else if (hashCode == DYNAMODB_HASH)
          {
            return ConnectionType::DYNAMODB;
          }
          else if (hashCode == HYPERPOD_HASH)
          {
            return ConnectionType::HYPERPOD;
          }
          else if (hashCode == IAM_HASH)
          {
            return ConnectionType::IAM;
          }
          else if (hashCode == MYSQL_HASH)
          {
            return ConnectionType::MYSQL;
          }
          else if (hashCode == OPENSEARCH_HASH)
          {
            return ConnectionType::OPENSEARCH;
          }
          else if (hashCode == ORACLE_HASH)
          {
            return ConnectionType::ORACLE;
          }
          else if (hashCode == POSTGRESQL_HASH)
          {
            return ConnectionType::POSTGRESQL;
          }
          else if (hashCode == REDSHIFT_HASH)
          {
            return ConnectionType::REDSHIFT;
          }
          else if (hashCode == S3_HASH)
          {
            return ConnectionType::S3;
          }
          else if (hashCode == SAPHANA_HASH)
          {
            return ConnectionType::SAPHANA;
          }
          else if (hashCode == SNOWFLAKE_HASH)
          {
            return ConnectionType::SNOWFLAKE;
          }
          else if (hashCode == SPARK_HASH)
          {
            return ConnectionType::SPARK;
          }
          else if (hashCode == SQLSERVER_HASH)
          {
            return ConnectionType::SQLSERVER;
          }
          else if (hashCode == TERADATA_HASH)
          {
            return ConnectionType::TERADATA;
          }
          else if (hashCode == VERTICA_HASH)
          {
            return ConnectionType::VERTICA;
          }
          else if (hashCode == WORKFLOWS_MWAA_HASH)
          {
            return ConnectionType::WORKFLOWS_MWAA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionType>(hashCode);
          }

          return ConnectionType::NOT_SET;
        }

        Aws::String GetNameForConnectionType(ConnectionType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionType::NOT_SET:
            return {};
          case ConnectionType::ATHENA:
            return "ATHENA";
          case ConnectionType::BIGQUERY:
            return "BIGQUERY";
          case ConnectionType::DATABRICKS:
            return "DATABRICKS";
          case ConnectionType::DOCUMENTDB:
            return "DOCUMENTDB";
          case ConnectionType::DYNAMODB:
            return "DYNAMODB";
          case ConnectionType::HYPERPOD:
            return "HYPERPOD";
          case ConnectionType::IAM:
            return "IAM";
          case ConnectionType::MYSQL:
            return "MYSQL";
          case ConnectionType::OPENSEARCH:
            return "OPENSEARCH";
          case ConnectionType::ORACLE:
            return "ORACLE";
          case ConnectionType::POSTGRESQL:
            return "POSTGRESQL";
          case ConnectionType::REDSHIFT:
            return "REDSHIFT";
          case ConnectionType::S3:
            return "S3";
          case ConnectionType::SAPHANA:
            return "SAPHANA";
          case ConnectionType::SNOWFLAKE:
            return "SNOWFLAKE";
          case ConnectionType::SPARK:
            return "SPARK";
          case ConnectionType::SQLSERVER:
            return "SQLSERVER";
          case ConnectionType::TERADATA:
            return "TERADATA";
          case ConnectionType::VERTICA:
            return "VERTICA";
          case ConnectionType::WORKFLOWS_MWAA:
            return "WORKFLOWS_MWAA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
