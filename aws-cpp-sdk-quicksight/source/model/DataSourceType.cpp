/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace DataSourceTypeMapper
      {

        static const int ADOBE_ANALYTICS_HASH = HashingUtils::HashString("ADOBE_ANALYTICS");
        static const int AMAZON_ELASTICSEARCH_HASH = HashingUtils::HashString("AMAZON_ELASTICSEARCH");
        static const int ATHENA_HASH = HashingUtils::HashString("ATHENA");
        static const int AURORA_HASH = HashingUtils::HashString("AURORA");
        static const int AURORA_POSTGRESQL_HASH = HashingUtils::HashString("AURORA_POSTGRESQL");
        static const int AWS_IOT_ANALYTICS_HASH = HashingUtils::HashString("AWS_IOT_ANALYTICS");
        static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");
        static const int JIRA_HASH = HashingUtils::HashString("JIRA");
        static const int MARIADB_HASH = HashingUtils::HashString("MARIADB");
        static const int MYSQL_HASH = HashingUtils::HashString("MYSQL");
        static const int ORACLE_HASH = HashingUtils::HashString("ORACLE");
        static const int POSTGRESQL_HASH = HashingUtils::HashString("POSTGRESQL");
        static const int PRESTO_HASH = HashingUtils::HashString("PRESTO");
        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");
        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int SALESFORCE_HASH = HashingUtils::HashString("SALESFORCE");
        static const int SERVICENOW_HASH = HashingUtils::HashString("SERVICENOW");
        static const int SNOWFLAKE_HASH = HashingUtils::HashString("SNOWFLAKE");
        static const int SPARK_HASH = HashingUtils::HashString("SPARK");
        static const int SQLSERVER_HASH = HashingUtils::HashString("SQLSERVER");
        static const int TERADATA_HASH = HashingUtils::HashString("TERADATA");
        static const int TWITTER_HASH = HashingUtils::HashString("TWITTER");
        static const int TIMESTREAM_HASH = HashingUtils::HashString("TIMESTREAM");
        static const int AMAZON_OPENSEARCH_HASH = HashingUtils::HashString("AMAZON_OPENSEARCH");
        static const int EXASOL_HASH = HashingUtils::HashString("EXASOL");
        static const int DATABRICKS_HASH = HashingUtils::HashString("DATABRICKS");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADOBE_ANALYTICS_HASH)
          {
            return DataSourceType::ADOBE_ANALYTICS;
          }
          else if (hashCode == AMAZON_ELASTICSEARCH_HASH)
          {
            return DataSourceType::AMAZON_ELASTICSEARCH;
          }
          else if (hashCode == ATHENA_HASH)
          {
            return DataSourceType::ATHENA;
          }
          else if (hashCode == AURORA_HASH)
          {
            return DataSourceType::AURORA;
          }
          else if (hashCode == AURORA_POSTGRESQL_HASH)
          {
            return DataSourceType::AURORA_POSTGRESQL;
          }
          else if (hashCode == AWS_IOT_ANALYTICS_HASH)
          {
            return DataSourceType::AWS_IOT_ANALYTICS;
          }
          else if (hashCode == GITHUB_HASH)
          {
            return DataSourceType::GITHUB;
          }
          else if (hashCode == JIRA_HASH)
          {
            return DataSourceType::JIRA;
          }
          else if (hashCode == MARIADB_HASH)
          {
            return DataSourceType::MARIADB;
          }
          else if (hashCode == MYSQL_HASH)
          {
            return DataSourceType::MYSQL;
          }
          else if (hashCode == ORACLE_HASH)
          {
            return DataSourceType::ORACLE;
          }
          else if (hashCode == POSTGRESQL_HASH)
          {
            return DataSourceType::POSTGRESQL;
          }
          else if (hashCode == PRESTO_HASH)
          {
            return DataSourceType::PRESTO;
          }
          else if (hashCode == REDSHIFT_HASH)
          {
            return DataSourceType::REDSHIFT;
          }
          else if (hashCode == S3_HASH)
          {
            return DataSourceType::S3;
          }
          else if (hashCode == SALESFORCE_HASH)
          {
            return DataSourceType::SALESFORCE;
          }
          else if (hashCode == SERVICENOW_HASH)
          {
            return DataSourceType::SERVICENOW;
          }
          else if (hashCode == SNOWFLAKE_HASH)
          {
            return DataSourceType::SNOWFLAKE;
          }
          else if (hashCode == SPARK_HASH)
          {
            return DataSourceType::SPARK;
          }
          else if (hashCode == SQLSERVER_HASH)
          {
            return DataSourceType::SQLSERVER;
          }
          else if (hashCode == TERADATA_HASH)
          {
            return DataSourceType::TERADATA;
          }
          else if (hashCode == TWITTER_HASH)
          {
            return DataSourceType::TWITTER;
          }
          else if (hashCode == TIMESTREAM_HASH)
          {
            return DataSourceType::TIMESTREAM;
          }
          else if (hashCode == AMAZON_OPENSEARCH_HASH)
          {
            return DataSourceType::AMAZON_OPENSEARCH;
          }
          else if (hashCode == EXASOL_HASH)
          {
            return DataSourceType::EXASOL;
          }
          else if (hashCode == DATABRICKS_HASH)
          {
            return DataSourceType::DATABRICKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceType>(hashCode);
          }

          return DataSourceType::NOT_SET;
        }

        Aws::String GetNameForDataSourceType(DataSourceType enumValue)
        {
          switch(enumValue)
          {
          case DataSourceType::ADOBE_ANALYTICS:
            return "ADOBE_ANALYTICS";
          case DataSourceType::AMAZON_ELASTICSEARCH:
            return "AMAZON_ELASTICSEARCH";
          case DataSourceType::ATHENA:
            return "ATHENA";
          case DataSourceType::AURORA:
            return "AURORA";
          case DataSourceType::AURORA_POSTGRESQL:
            return "AURORA_POSTGRESQL";
          case DataSourceType::AWS_IOT_ANALYTICS:
            return "AWS_IOT_ANALYTICS";
          case DataSourceType::GITHUB:
            return "GITHUB";
          case DataSourceType::JIRA:
            return "JIRA";
          case DataSourceType::MARIADB:
            return "MARIADB";
          case DataSourceType::MYSQL:
            return "MYSQL";
          case DataSourceType::ORACLE:
            return "ORACLE";
          case DataSourceType::POSTGRESQL:
            return "POSTGRESQL";
          case DataSourceType::PRESTO:
            return "PRESTO";
          case DataSourceType::REDSHIFT:
            return "REDSHIFT";
          case DataSourceType::S3:
            return "S3";
          case DataSourceType::SALESFORCE:
            return "SALESFORCE";
          case DataSourceType::SERVICENOW:
            return "SERVICENOW";
          case DataSourceType::SNOWFLAKE:
            return "SNOWFLAKE";
          case DataSourceType::SPARK:
            return "SPARK";
          case DataSourceType::SQLSERVER:
            return "SQLSERVER";
          case DataSourceType::TERADATA:
            return "TERADATA";
          case DataSourceType::TWITTER:
            return "TWITTER";
          case DataSourceType::TIMESTREAM:
            return "TIMESTREAM";
          case DataSourceType::AMAZON_OPENSEARCH:
            return "AMAZON_OPENSEARCH";
          case DataSourceType::EXASOL:
            return "EXASOL";
          case DataSourceType::DATABRICKS:
            return "DATABRICKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
