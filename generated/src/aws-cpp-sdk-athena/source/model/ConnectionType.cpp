/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ConnectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace ConnectionTypeMapper
      {

        static const int DYNAMODB_HASH = HashingUtils::HashString("DYNAMODB");
        static const int MYSQL_HASH = HashingUtils::HashString("MYSQL");
        static const int POSTGRESQL_HASH = HashingUtils::HashString("POSTGRESQL");
        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");
        static const int ORACLE_HASH = HashingUtils::HashString("ORACLE");
        static const int SYNAPSE_HASH = HashingUtils::HashString("SYNAPSE");
        static const int SQLSERVER_HASH = HashingUtils::HashString("SQLSERVER");
        static const int DB2_HASH = HashingUtils::HashString("DB2");
        static const int OPENSEARCH_HASH = HashingUtils::HashString("OPENSEARCH");
        static const int BIGQUERY_HASH = HashingUtils::HashString("BIGQUERY");
        static const int GOOGLECLOUDSTORAGE_HASH = HashingUtils::HashString("GOOGLECLOUDSTORAGE");
        static const int HBASE_HASH = HashingUtils::HashString("HBASE");
        static const int DOCUMENTDB_HASH = HashingUtils::HashString("DOCUMENTDB");
        static const int CMDB_HASH = HashingUtils::HashString("CMDB");
        static const int TPCDS_HASH = HashingUtils::HashString("TPCDS");
        static const int TIMESTREAM_HASH = HashingUtils::HashString("TIMESTREAM");
        static const int SAPHANA_HASH = HashingUtils::HashString("SAPHANA");
        static const int SNOWFLAKE_HASH = HashingUtils::HashString("SNOWFLAKE");
        static const int DATALAKEGEN2_HASH = HashingUtils::HashString("DATALAKEGEN2");
        static const int DB2AS400_HASH = HashingUtils::HashString("DB2AS400");


        ConnectionType GetConnectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DYNAMODB_HASH)
          {
            return ConnectionType::DYNAMODB;
          }
          else if (hashCode == MYSQL_HASH)
          {
            return ConnectionType::MYSQL;
          }
          else if (hashCode == POSTGRESQL_HASH)
          {
            return ConnectionType::POSTGRESQL;
          }
          else if (hashCode == REDSHIFT_HASH)
          {
            return ConnectionType::REDSHIFT;
          }
          else if (hashCode == ORACLE_HASH)
          {
            return ConnectionType::ORACLE;
          }
          else if (hashCode == SYNAPSE_HASH)
          {
            return ConnectionType::SYNAPSE;
          }
          else if (hashCode == SQLSERVER_HASH)
          {
            return ConnectionType::SQLSERVER;
          }
          else if (hashCode == DB2_HASH)
          {
            return ConnectionType::DB2;
          }
          else if (hashCode == OPENSEARCH_HASH)
          {
            return ConnectionType::OPENSEARCH;
          }
          else if (hashCode == BIGQUERY_HASH)
          {
            return ConnectionType::BIGQUERY;
          }
          else if (hashCode == GOOGLECLOUDSTORAGE_HASH)
          {
            return ConnectionType::GOOGLECLOUDSTORAGE;
          }
          else if (hashCode == HBASE_HASH)
          {
            return ConnectionType::HBASE;
          }
          else if (hashCode == DOCUMENTDB_HASH)
          {
            return ConnectionType::DOCUMENTDB;
          }
          else if (hashCode == CMDB_HASH)
          {
            return ConnectionType::CMDB;
          }
          else if (hashCode == TPCDS_HASH)
          {
            return ConnectionType::TPCDS;
          }
          else if (hashCode == TIMESTREAM_HASH)
          {
            return ConnectionType::TIMESTREAM;
          }
          else if (hashCode == SAPHANA_HASH)
          {
            return ConnectionType::SAPHANA;
          }
          else if (hashCode == SNOWFLAKE_HASH)
          {
            return ConnectionType::SNOWFLAKE;
          }
          else if (hashCode == DATALAKEGEN2_HASH)
          {
            return ConnectionType::DATALAKEGEN2;
          }
          else if (hashCode == DB2AS400_HASH)
          {
            return ConnectionType::DB2AS400;
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
          case ConnectionType::DYNAMODB:
            return "DYNAMODB";
          case ConnectionType::MYSQL:
            return "MYSQL";
          case ConnectionType::POSTGRESQL:
            return "POSTGRESQL";
          case ConnectionType::REDSHIFT:
            return "REDSHIFT";
          case ConnectionType::ORACLE:
            return "ORACLE";
          case ConnectionType::SYNAPSE:
            return "SYNAPSE";
          case ConnectionType::SQLSERVER:
            return "SQLSERVER";
          case ConnectionType::DB2:
            return "DB2";
          case ConnectionType::OPENSEARCH:
            return "OPENSEARCH";
          case ConnectionType::BIGQUERY:
            return "BIGQUERY";
          case ConnectionType::GOOGLECLOUDSTORAGE:
            return "GOOGLECLOUDSTORAGE";
          case ConnectionType::HBASE:
            return "HBASE";
          case ConnectionType::DOCUMENTDB:
            return "DOCUMENTDB";
          case ConnectionType::CMDB:
            return "CMDB";
          case ConnectionType::TPCDS:
            return "TPCDS";
          case ConnectionType::TIMESTREAM:
            return "TIMESTREAM";
          case ConnectionType::SAPHANA:
            return "SAPHANA";
          case ConnectionType::SNOWFLAKE:
            return "SNOWFLAKE";
          case ConnectionType::DATALAKEGEN2:
            return "DATALAKEGEN2";
          case ConnectionType::DB2AS400:
            return "DB2AS400";
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
  } // namespace Athena
} // namespace Aws
