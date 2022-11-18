/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSourceParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DataSourceParameters::DataSourceParameters() : 
    m_amazonElasticsearchParametersHasBeenSet(false),
    m_athenaParametersHasBeenSet(false),
    m_auroraParametersHasBeenSet(false),
    m_auroraPostgreSqlParametersHasBeenSet(false),
    m_awsIotAnalyticsParametersHasBeenSet(false),
    m_jiraParametersHasBeenSet(false),
    m_mariaDbParametersHasBeenSet(false),
    m_mySqlParametersHasBeenSet(false),
    m_oracleParametersHasBeenSet(false),
    m_postgreSqlParametersHasBeenSet(false),
    m_prestoParametersHasBeenSet(false),
    m_rdsParametersHasBeenSet(false),
    m_redshiftParametersHasBeenSet(false),
    m_s3ParametersHasBeenSet(false),
    m_serviceNowParametersHasBeenSet(false),
    m_snowflakeParametersHasBeenSet(false),
    m_sparkParametersHasBeenSet(false),
    m_sqlServerParametersHasBeenSet(false),
    m_teradataParametersHasBeenSet(false),
    m_twitterParametersHasBeenSet(false),
    m_amazonOpenSearchParametersHasBeenSet(false),
    m_exasolParametersHasBeenSet(false),
    m_databricksParametersHasBeenSet(false)
{
}

DataSourceParameters::DataSourceParameters(JsonView jsonValue) : 
    m_amazonElasticsearchParametersHasBeenSet(false),
    m_athenaParametersHasBeenSet(false),
    m_auroraParametersHasBeenSet(false),
    m_auroraPostgreSqlParametersHasBeenSet(false),
    m_awsIotAnalyticsParametersHasBeenSet(false),
    m_jiraParametersHasBeenSet(false),
    m_mariaDbParametersHasBeenSet(false),
    m_mySqlParametersHasBeenSet(false),
    m_oracleParametersHasBeenSet(false),
    m_postgreSqlParametersHasBeenSet(false),
    m_prestoParametersHasBeenSet(false),
    m_rdsParametersHasBeenSet(false),
    m_redshiftParametersHasBeenSet(false),
    m_s3ParametersHasBeenSet(false),
    m_serviceNowParametersHasBeenSet(false),
    m_snowflakeParametersHasBeenSet(false),
    m_sparkParametersHasBeenSet(false),
    m_sqlServerParametersHasBeenSet(false),
    m_teradataParametersHasBeenSet(false),
    m_twitterParametersHasBeenSet(false),
    m_amazonOpenSearchParametersHasBeenSet(false),
    m_exasolParametersHasBeenSet(false),
    m_databricksParametersHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceParameters& DataSourceParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmazonElasticsearchParameters"))
  {
    m_amazonElasticsearchParameters = jsonValue.GetObject("AmazonElasticsearchParameters");

    m_amazonElasticsearchParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AthenaParameters"))
  {
    m_athenaParameters = jsonValue.GetObject("AthenaParameters");

    m_athenaParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuroraParameters"))
  {
    m_auroraParameters = jsonValue.GetObject("AuroraParameters");

    m_auroraParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuroraPostgreSqlParameters"))
  {
    m_auroraPostgreSqlParameters = jsonValue.GetObject("AuroraPostgreSqlParameters");

    m_auroraPostgreSqlParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsIotAnalyticsParameters"))
  {
    m_awsIotAnalyticsParameters = jsonValue.GetObject("AwsIotAnalyticsParameters");

    m_awsIotAnalyticsParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JiraParameters"))
  {
    m_jiraParameters = jsonValue.GetObject("JiraParameters");

    m_jiraParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MariaDbParameters"))
  {
    m_mariaDbParameters = jsonValue.GetObject("MariaDbParameters");

    m_mariaDbParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MySqlParameters"))
  {
    m_mySqlParameters = jsonValue.GetObject("MySqlParameters");

    m_mySqlParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OracleParameters"))
  {
    m_oracleParameters = jsonValue.GetObject("OracleParameters");

    m_oracleParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostgreSqlParameters"))
  {
    m_postgreSqlParameters = jsonValue.GetObject("PostgreSqlParameters");

    m_postgreSqlParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrestoParameters"))
  {
    m_prestoParameters = jsonValue.GetObject("PrestoParameters");

    m_prestoParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RdsParameters"))
  {
    m_rdsParameters = jsonValue.GetObject("RdsParameters");

    m_rdsParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftParameters"))
  {
    m_redshiftParameters = jsonValue.GetObject("RedshiftParameters");

    m_redshiftParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Parameters"))
  {
    m_s3Parameters = jsonValue.GetObject("S3Parameters");

    m_s3ParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceNowParameters"))
  {
    m_serviceNowParameters = jsonValue.GetObject("ServiceNowParameters");

    m_serviceNowParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowflakeParameters"))
  {
    m_snowflakeParameters = jsonValue.GetObject("SnowflakeParameters");

    m_snowflakeParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SparkParameters"))
  {
    m_sparkParameters = jsonValue.GetObject("SparkParameters");

    m_sparkParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqlServerParameters"))
  {
    m_sqlServerParameters = jsonValue.GetObject("SqlServerParameters");

    m_sqlServerParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TeradataParameters"))
  {
    m_teradataParameters = jsonValue.GetObject("TeradataParameters");

    m_teradataParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TwitterParameters"))
  {
    m_twitterParameters = jsonValue.GetObject("TwitterParameters");

    m_twitterParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmazonOpenSearchParameters"))
  {
    m_amazonOpenSearchParameters = jsonValue.GetObject("AmazonOpenSearchParameters");

    m_amazonOpenSearchParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExasolParameters"))
  {
    m_exasolParameters = jsonValue.GetObject("ExasolParameters");

    m_exasolParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabricksParameters"))
  {
    m_databricksParameters = jsonValue.GetObject("DatabricksParameters");

    m_databricksParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceParameters::Jsonize() const
{
  JsonValue payload;

  if(m_amazonElasticsearchParametersHasBeenSet)
  {
   payload.WithObject("AmazonElasticsearchParameters", m_amazonElasticsearchParameters.Jsonize());

  }

  if(m_athenaParametersHasBeenSet)
  {
   payload.WithObject("AthenaParameters", m_athenaParameters.Jsonize());

  }

  if(m_auroraParametersHasBeenSet)
  {
   payload.WithObject("AuroraParameters", m_auroraParameters.Jsonize());

  }

  if(m_auroraPostgreSqlParametersHasBeenSet)
  {
   payload.WithObject("AuroraPostgreSqlParameters", m_auroraPostgreSqlParameters.Jsonize());

  }

  if(m_awsIotAnalyticsParametersHasBeenSet)
  {
   payload.WithObject("AwsIotAnalyticsParameters", m_awsIotAnalyticsParameters.Jsonize());

  }

  if(m_jiraParametersHasBeenSet)
  {
   payload.WithObject("JiraParameters", m_jiraParameters.Jsonize());

  }

  if(m_mariaDbParametersHasBeenSet)
  {
   payload.WithObject("MariaDbParameters", m_mariaDbParameters.Jsonize());

  }

  if(m_mySqlParametersHasBeenSet)
  {
   payload.WithObject("MySqlParameters", m_mySqlParameters.Jsonize());

  }

  if(m_oracleParametersHasBeenSet)
  {
   payload.WithObject("OracleParameters", m_oracleParameters.Jsonize());

  }

  if(m_postgreSqlParametersHasBeenSet)
  {
   payload.WithObject("PostgreSqlParameters", m_postgreSqlParameters.Jsonize());

  }

  if(m_prestoParametersHasBeenSet)
  {
   payload.WithObject("PrestoParameters", m_prestoParameters.Jsonize());

  }

  if(m_rdsParametersHasBeenSet)
  {
   payload.WithObject("RdsParameters", m_rdsParameters.Jsonize());

  }

  if(m_redshiftParametersHasBeenSet)
  {
   payload.WithObject("RedshiftParameters", m_redshiftParameters.Jsonize());

  }

  if(m_s3ParametersHasBeenSet)
  {
   payload.WithObject("S3Parameters", m_s3Parameters.Jsonize());

  }

  if(m_serviceNowParametersHasBeenSet)
  {
   payload.WithObject("ServiceNowParameters", m_serviceNowParameters.Jsonize());

  }

  if(m_snowflakeParametersHasBeenSet)
  {
   payload.WithObject("SnowflakeParameters", m_snowflakeParameters.Jsonize());

  }

  if(m_sparkParametersHasBeenSet)
  {
   payload.WithObject("SparkParameters", m_sparkParameters.Jsonize());

  }

  if(m_sqlServerParametersHasBeenSet)
  {
   payload.WithObject("SqlServerParameters", m_sqlServerParameters.Jsonize());

  }

  if(m_teradataParametersHasBeenSet)
  {
   payload.WithObject("TeradataParameters", m_teradataParameters.Jsonize());

  }

  if(m_twitterParametersHasBeenSet)
  {
   payload.WithObject("TwitterParameters", m_twitterParameters.Jsonize());

  }

  if(m_amazonOpenSearchParametersHasBeenSet)
  {
   payload.WithObject("AmazonOpenSearchParameters", m_amazonOpenSearchParameters.Jsonize());

  }

  if(m_exasolParametersHasBeenSet)
  {
   payload.WithObject("ExasolParameters", m_exasolParameters.Jsonize());

  }

  if(m_databricksParametersHasBeenSet)
  {
   payload.WithObject("DatabricksParameters", m_databricksParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
