/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CodeGenConfigurationNode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CodeGenConfigurationNode::CodeGenConfigurationNode() : 
    m_athenaConnectorSourceHasBeenSet(false),
    m_jDBCConnectorSourceHasBeenSet(false),
    m_sparkConnectorSourceHasBeenSet(false),
    m_catalogSourceHasBeenSet(false),
    m_redshiftSourceHasBeenSet(false),
    m_s3CatalogSourceHasBeenSet(false),
    m_s3CsvSourceHasBeenSet(false),
    m_s3JsonSourceHasBeenSet(false),
    m_s3ParquetSourceHasBeenSet(false),
    m_relationalCatalogSourceHasBeenSet(false),
    m_dynamoDBCatalogSourceHasBeenSet(false),
    m_jDBCConnectorTargetHasBeenSet(false),
    m_sparkConnectorTargetHasBeenSet(false),
    m_catalogTargetHasBeenSet(false),
    m_redshiftTargetHasBeenSet(false),
    m_s3CatalogTargetHasBeenSet(false),
    m_s3GlueParquetTargetHasBeenSet(false),
    m_s3DirectTargetHasBeenSet(false),
    m_applyMappingHasBeenSet(false),
    m_selectFieldsHasBeenSet(false),
    m_dropFieldsHasBeenSet(false),
    m_renameFieldHasBeenSet(false),
    m_spigotHasBeenSet(false),
    m_joinHasBeenSet(false),
    m_splitFieldsHasBeenSet(false),
    m_selectFromCollectionHasBeenSet(false),
    m_fillMissingValuesHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_customCodeHasBeenSet(false),
    m_sparkSQLHasBeenSet(false),
    m_directKinesisSourceHasBeenSet(false),
    m_directKafkaSourceHasBeenSet(false),
    m_catalogKinesisSourceHasBeenSet(false),
    m_catalogKafkaSourceHasBeenSet(false),
    m_dropNullFieldsHasBeenSet(false),
    m_mergeHasBeenSet(false),
    m_unionHasBeenSet(false),
    m_pIIDetectionHasBeenSet(false),
    m_aggregateHasBeenSet(false),
    m_dropDuplicatesHasBeenSet(false),
    m_governedCatalogTargetHasBeenSet(false),
    m_governedCatalogSourceHasBeenSet(false),
    m_microsoftSQLServerCatalogSourceHasBeenSet(false),
    m_mySQLCatalogSourceHasBeenSet(false),
    m_oracleSQLCatalogSourceHasBeenSet(false),
    m_postgreSQLCatalogSourceHasBeenSet(false),
    m_microsoftSQLServerCatalogTargetHasBeenSet(false),
    m_mySQLCatalogTargetHasBeenSet(false),
    m_oracleSQLCatalogTargetHasBeenSet(false),
    m_postgreSQLCatalogTargetHasBeenSet(false),
    m_dynamicTransformHasBeenSet(false),
    m_evaluateDataQualityHasBeenSet(false),
    m_s3CatalogHudiSourceHasBeenSet(false),
    m_catalogHudiSourceHasBeenSet(false),
    m_s3HudiSourceHasBeenSet(false),
    m_s3HudiCatalogTargetHasBeenSet(false),
    m_s3HudiDirectTargetHasBeenSet(false),
    m_directJDBCSourceHasBeenSet(false),
    m_s3CatalogDeltaSourceHasBeenSet(false),
    m_catalogDeltaSourceHasBeenSet(false),
    m_s3DeltaSourceHasBeenSet(false),
    m_s3DeltaCatalogTargetHasBeenSet(false),
    m_s3DeltaDirectTargetHasBeenSet(false),
    m_amazonRedshiftSourceHasBeenSet(false),
    m_amazonRedshiftTargetHasBeenSet(false),
    m_evaluateDataQualityMultiFrameHasBeenSet(false),
    m_recipeHasBeenSet(false),
    m_snowflakeSourceHasBeenSet(false),
    m_snowflakeTargetHasBeenSet(false),
    m_connectorDataSourceHasBeenSet(false),
    m_connectorDataTargetHasBeenSet(false)
{
}

CodeGenConfigurationNode::CodeGenConfigurationNode(JsonView jsonValue) : 
    m_athenaConnectorSourceHasBeenSet(false),
    m_jDBCConnectorSourceHasBeenSet(false),
    m_sparkConnectorSourceHasBeenSet(false),
    m_catalogSourceHasBeenSet(false),
    m_redshiftSourceHasBeenSet(false),
    m_s3CatalogSourceHasBeenSet(false),
    m_s3CsvSourceHasBeenSet(false),
    m_s3JsonSourceHasBeenSet(false),
    m_s3ParquetSourceHasBeenSet(false),
    m_relationalCatalogSourceHasBeenSet(false),
    m_dynamoDBCatalogSourceHasBeenSet(false),
    m_jDBCConnectorTargetHasBeenSet(false),
    m_sparkConnectorTargetHasBeenSet(false),
    m_catalogTargetHasBeenSet(false),
    m_redshiftTargetHasBeenSet(false),
    m_s3CatalogTargetHasBeenSet(false),
    m_s3GlueParquetTargetHasBeenSet(false),
    m_s3DirectTargetHasBeenSet(false),
    m_applyMappingHasBeenSet(false),
    m_selectFieldsHasBeenSet(false),
    m_dropFieldsHasBeenSet(false),
    m_renameFieldHasBeenSet(false),
    m_spigotHasBeenSet(false),
    m_joinHasBeenSet(false),
    m_splitFieldsHasBeenSet(false),
    m_selectFromCollectionHasBeenSet(false),
    m_fillMissingValuesHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_customCodeHasBeenSet(false),
    m_sparkSQLHasBeenSet(false),
    m_directKinesisSourceHasBeenSet(false),
    m_directKafkaSourceHasBeenSet(false),
    m_catalogKinesisSourceHasBeenSet(false),
    m_catalogKafkaSourceHasBeenSet(false),
    m_dropNullFieldsHasBeenSet(false),
    m_mergeHasBeenSet(false),
    m_unionHasBeenSet(false),
    m_pIIDetectionHasBeenSet(false),
    m_aggregateHasBeenSet(false),
    m_dropDuplicatesHasBeenSet(false),
    m_governedCatalogTargetHasBeenSet(false),
    m_governedCatalogSourceHasBeenSet(false),
    m_microsoftSQLServerCatalogSourceHasBeenSet(false),
    m_mySQLCatalogSourceHasBeenSet(false),
    m_oracleSQLCatalogSourceHasBeenSet(false),
    m_postgreSQLCatalogSourceHasBeenSet(false),
    m_microsoftSQLServerCatalogTargetHasBeenSet(false),
    m_mySQLCatalogTargetHasBeenSet(false),
    m_oracleSQLCatalogTargetHasBeenSet(false),
    m_postgreSQLCatalogTargetHasBeenSet(false),
    m_dynamicTransformHasBeenSet(false),
    m_evaluateDataQualityHasBeenSet(false),
    m_s3CatalogHudiSourceHasBeenSet(false),
    m_catalogHudiSourceHasBeenSet(false),
    m_s3HudiSourceHasBeenSet(false),
    m_s3HudiCatalogTargetHasBeenSet(false),
    m_s3HudiDirectTargetHasBeenSet(false),
    m_directJDBCSourceHasBeenSet(false),
    m_s3CatalogDeltaSourceHasBeenSet(false),
    m_catalogDeltaSourceHasBeenSet(false),
    m_s3DeltaSourceHasBeenSet(false),
    m_s3DeltaCatalogTargetHasBeenSet(false),
    m_s3DeltaDirectTargetHasBeenSet(false),
    m_amazonRedshiftSourceHasBeenSet(false),
    m_amazonRedshiftTargetHasBeenSet(false),
    m_evaluateDataQualityMultiFrameHasBeenSet(false),
    m_recipeHasBeenSet(false),
    m_snowflakeSourceHasBeenSet(false),
    m_snowflakeTargetHasBeenSet(false),
    m_connectorDataSourceHasBeenSet(false),
    m_connectorDataTargetHasBeenSet(false)
{
  *this = jsonValue;
}

CodeGenConfigurationNode& CodeGenConfigurationNode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AthenaConnectorSource"))
  {
    m_athenaConnectorSource = jsonValue.GetObject("AthenaConnectorSource");

    m_athenaConnectorSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JDBCConnectorSource"))
  {
    m_jDBCConnectorSource = jsonValue.GetObject("JDBCConnectorSource");

    m_jDBCConnectorSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SparkConnectorSource"))
  {
    m_sparkConnectorSource = jsonValue.GetObject("SparkConnectorSource");

    m_sparkConnectorSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogSource"))
  {
    m_catalogSource = jsonValue.GetObject("CatalogSource");

    m_catalogSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftSource"))
  {
    m_redshiftSource = jsonValue.GetObject("RedshiftSource");

    m_redshiftSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3CatalogSource"))
  {
    m_s3CatalogSource = jsonValue.GetObject("S3CatalogSource");

    m_s3CatalogSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3CsvSource"))
  {
    m_s3CsvSource = jsonValue.GetObject("S3CsvSource");

    m_s3CsvSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3JsonSource"))
  {
    m_s3JsonSource = jsonValue.GetObject("S3JsonSource");

    m_s3JsonSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ParquetSource"))
  {
    m_s3ParquetSource = jsonValue.GetObject("S3ParquetSource");

    m_s3ParquetSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelationalCatalogSource"))
  {
    m_relationalCatalogSource = jsonValue.GetObject("RelationalCatalogSource");

    m_relationalCatalogSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DynamoDBCatalogSource"))
  {
    m_dynamoDBCatalogSource = jsonValue.GetObject("DynamoDBCatalogSource");

    m_dynamoDBCatalogSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JDBCConnectorTarget"))
  {
    m_jDBCConnectorTarget = jsonValue.GetObject("JDBCConnectorTarget");

    m_jDBCConnectorTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SparkConnectorTarget"))
  {
    m_sparkConnectorTarget = jsonValue.GetObject("SparkConnectorTarget");

    m_sparkConnectorTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogTarget"))
  {
    m_catalogTarget = jsonValue.GetObject("CatalogTarget");

    m_catalogTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftTarget"))
  {
    m_redshiftTarget = jsonValue.GetObject("RedshiftTarget");

    m_redshiftTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3CatalogTarget"))
  {
    m_s3CatalogTarget = jsonValue.GetObject("S3CatalogTarget");

    m_s3CatalogTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3GlueParquetTarget"))
  {
    m_s3GlueParquetTarget = jsonValue.GetObject("S3GlueParquetTarget");

    m_s3GlueParquetTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DirectTarget"))
  {
    m_s3DirectTarget = jsonValue.GetObject("S3DirectTarget");

    m_s3DirectTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplyMapping"))
  {
    m_applyMapping = jsonValue.GetObject("ApplyMapping");

    m_applyMappingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectFields"))
  {
    m_selectFields = jsonValue.GetObject("SelectFields");

    m_selectFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DropFields"))
  {
    m_dropFields = jsonValue.GetObject("DropFields");

    m_dropFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RenameField"))
  {
    m_renameField = jsonValue.GetObject("RenameField");

    m_renameFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Spigot"))
  {
    m_spigot = jsonValue.GetObject("Spigot");

    m_spigotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Join"))
  {
    m_join = jsonValue.GetObject("Join");

    m_joinHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SplitFields"))
  {
    m_splitFields = jsonValue.GetObject("SplitFields");

    m_splitFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectFromCollection"))
  {
    m_selectFromCollection = jsonValue.GetObject("SelectFromCollection");

    m_selectFromCollectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FillMissingValues"))
  {
    m_fillMissingValues = jsonValue.GetObject("FillMissingValues");

    m_fillMissingValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filter"))
  {
    m_filter = jsonValue.GetObject("Filter");

    m_filterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomCode"))
  {
    m_customCode = jsonValue.GetObject("CustomCode");

    m_customCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SparkSQL"))
  {
    m_sparkSQL = jsonValue.GetObject("SparkSQL");

    m_sparkSQLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectKinesisSource"))
  {
    m_directKinesisSource = jsonValue.GetObject("DirectKinesisSource");

    m_directKinesisSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectKafkaSource"))
  {
    m_directKafkaSource = jsonValue.GetObject("DirectKafkaSource");

    m_directKafkaSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogKinesisSource"))
  {
    m_catalogKinesisSource = jsonValue.GetObject("CatalogKinesisSource");

    m_catalogKinesisSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogKafkaSource"))
  {
    m_catalogKafkaSource = jsonValue.GetObject("CatalogKafkaSource");

    m_catalogKafkaSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DropNullFields"))
  {
    m_dropNullFields = jsonValue.GetObject("DropNullFields");

    m_dropNullFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Merge"))
  {
    m_merge = jsonValue.GetObject("Merge");

    m_mergeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Union"))
  {
    m_union = jsonValue.GetObject("Union");

    m_unionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PIIDetection"))
  {
    m_pIIDetection = jsonValue.GetObject("PIIDetection");

    m_pIIDetectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aggregate"))
  {
    m_aggregate = jsonValue.GetObject("Aggregate");

    m_aggregateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DropDuplicates"))
  {
    m_dropDuplicates = jsonValue.GetObject("DropDuplicates");

    m_dropDuplicatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GovernedCatalogTarget"))
  {
    m_governedCatalogTarget = jsonValue.GetObject("GovernedCatalogTarget");

    m_governedCatalogTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GovernedCatalogSource"))
  {
    m_governedCatalogSource = jsonValue.GetObject("GovernedCatalogSource");

    m_governedCatalogSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MicrosoftSQLServerCatalogSource"))
  {
    m_microsoftSQLServerCatalogSource = jsonValue.GetObject("MicrosoftSQLServerCatalogSource");

    m_microsoftSQLServerCatalogSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MySQLCatalogSource"))
  {
    m_mySQLCatalogSource = jsonValue.GetObject("MySQLCatalogSource");

    m_mySQLCatalogSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OracleSQLCatalogSource"))
  {
    m_oracleSQLCatalogSource = jsonValue.GetObject("OracleSQLCatalogSource");

    m_oracleSQLCatalogSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostgreSQLCatalogSource"))
  {
    m_postgreSQLCatalogSource = jsonValue.GetObject("PostgreSQLCatalogSource");

    m_postgreSQLCatalogSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MicrosoftSQLServerCatalogTarget"))
  {
    m_microsoftSQLServerCatalogTarget = jsonValue.GetObject("MicrosoftSQLServerCatalogTarget");

    m_microsoftSQLServerCatalogTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MySQLCatalogTarget"))
  {
    m_mySQLCatalogTarget = jsonValue.GetObject("MySQLCatalogTarget");

    m_mySQLCatalogTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OracleSQLCatalogTarget"))
  {
    m_oracleSQLCatalogTarget = jsonValue.GetObject("OracleSQLCatalogTarget");

    m_oracleSQLCatalogTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostgreSQLCatalogTarget"))
  {
    m_postgreSQLCatalogTarget = jsonValue.GetObject("PostgreSQLCatalogTarget");

    m_postgreSQLCatalogTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DynamicTransform"))
  {
    m_dynamicTransform = jsonValue.GetObject("DynamicTransform");

    m_dynamicTransformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluateDataQuality"))
  {
    m_evaluateDataQuality = jsonValue.GetObject("EvaluateDataQuality");

    m_evaluateDataQualityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3CatalogHudiSource"))
  {
    m_s3CatalogHudiSource = jsonValue.GetObject("S3CatalogHudiSource");

    m_s3CatalogHudiSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogHudiSource"))
  {
    m_catalogHudiSource = jsonValue.GetObject("CatalogHudiSource");

    m_catalogHudiSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3HudiSource"))
  {
    m_s3HudiSource = jsonValue.GetObject("S3HudiSource");

    m_s3HudiSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3HudiCatalogTarget"))
  {
    m_s3HudiCatalogTarget = jsonValue.GetObject("S3HudiCatalogTarget");

    m_s3HudiCatalogTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3HudiDirectTarget"))
  {
    m_s3HudiDirectTarget = jsonValue.GetObject("S3HudiDirectTarget");

    m_s3HudiDirectTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectJDBCSource"))
  {
    m_directJDBCSource = jsonValue.GetObject("DirectJDBCSource");

    m_directJDBCSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3CatalogDeltaSource"))
  {
    m_s3CatalogDeltaSource = jsonValue.GetObject("S3CatalogDeltaSource");

    m_s3CatalogDeltaSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogDeltaSource"))
  {
    m_catalogDeltaSource = jsonValue.GetObject("CatalogDeltaSource");

    m_catalogDeltaSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DeltaSource"))
  {
    m_s3DeltaSource = jsonValue.GetObject("S3DeltaSource");

    m_s3DeltaSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DeltaCatalogTarget"))
  {
    m_s3DeltaCatalogTarget = jsonValue.GetObject("S3DeltaCatalogTarget");

    m_s3DeltaCatalogTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DeltaDirectTarget"))
  {
    m_s3DeltaDirectTarget = jsonValue.GetObject("S3DeltaDirectTarget");

    m_s3DeltaDirectTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmazonRedshiftSource"))
  {
    m_amazonRedshiftSource = jsonValue.GetObject("AmazonRedshiftSource");

    m_amazonRedshiftSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmazonRedshiftTarget"))
  {
    m_amazonRedshiftTarget = jsonValue.GetObject("AmazonRedshiftTarget");

    m_amazonRedshiftTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluateDataQualityMultiFrame"))
  {
    m_evaluateDataQualityMultiFrame = jsonValue.GetObject("EvaluateDataQualityMultiFrame");

    m_evaluateDataQualityMultiFrameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recipe"))
  {
    m_recipe = jsonValue.GetObject("Recipe");

    m_recipeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowflakeSource"))
  {
    m_snowflakeSource = jsonValue.GetObject("SnowflakeSource");

    m_snowflakeSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowflakeTarget"))
  {
    m_snowflakeTarget = jsonValue.GetObject("SnowflakeTarget");

    m_snowflakeTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectorDataSource"))
  {
    m_connectorDataSource = jsonValue.GetObject("ConnectorDataSource");

    m_connectorDataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectorDataTarget"))
  {
    m_connectorDataTarget = jsonValue.GetObject("ConnectorDataTarget");

    m_connectorDataTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeGenConfigurationNode::Jsonize() const
{
  JsonValue payload;

  if(m_athenaConnectorSourceHasBeenSet)
  {
   payload.WithObject("AthenaConnectorSource", m_athenaConnectorSource.Jsonize());

  }

  if(m_jDBCConnectorSourceHasBeenSet)
  {
   payload.WithObject("JDBCConnectorSource", m_jDBCConnectorSource.Jsonize());

  }

  if(m_sparkConnectorSourceHasBeenSet)
  {
   payload.WithObject("SparkConnectorSource", m_sparkConnectorSource.Jsonize());

  }

  if(m_catalogSourceHasBeenSet)
  {
   payload.WithObject("CatalogSource", m_catalogSource.Jsonize());

  }

  if(m_redshiftSourceHasBeenSet)
  {
   payload.WithObject("RedshiftSource", m_redshiftSource.Jsonize());

  }

  if(m_s3CatalogSourceHasBeenSet)
  {
   payload.WithObject("S3CatalogSource", m_s3CatalogSource.Jsonize());

  }

  if(m_s3CsvSourceHasBeenSet)
  {
   payload.WithObject("S3CsvSource", m_s3CsvSource.Jsonize());

  }

  if(m_s3JsonSourceHasBeenSet)
  {
   payload.WithObject("S3JsonSource", m_s3JsonSource.Jsonize());

  }

  if(m_s3ParquetSourceHasBeenSet)
  {
   payload.WithObject("S3ParquetSource", m_s3ParquetSource.Jsonize());

  }

  if(m_relationalCatalogSourceHasBeenSet)
  {
   payload.WithObject("RelationalCatalogSource", m_relationalCatalogSource.Jsonize());

  }

  if(m_dynamoDBCatalogSourceHasBeenSet)
  {
   payload.WithObject("DynamoDBCatalogSource", m_dynamoDBCatalogSource.Jsonize());

  }

  if(m_jDBCConnectorTargetHasBeenSet)
  {
   payload.WithObject("JDBCConnectorTarget", m_jDBCConnectorTarget.Jsonize());

  }

  if(m_sparkConnectorTargetHasBeenSet)
  {
   payload.WithObject("SparkConnectorTarget", m_sparkConnectorTarget.Jsonize());

  }

  if(m_catalogTargetHasBeenSet)
  {
   payload.WithObject("CatalogTarget", m_catalogTarget.Jsonize());

  }

  if(m_redshiftTargetHasBeenSet)
  {
   payload.WithObject("RedshiftTarget", m_redshiftTarget.Jsonize());

  }

  if(m_s3CatalogTargetHasBeenSet)
  {
   payload.WithObject("S3CatalogTarget", m_s3CatalogTarget.Jsonize());

  }

  if(m_s3GlueParquetTargetHasBeenSet)
  {
   payload.WithObject("S3GlueParquetTarget", m_s3GlueParquetTarget.Jsonize());

  }

  if(m_s3DirectTargetHasBeenSet)
  {
   payload.WithObject("S3DirectTarget", m_s3DirectTarget.Jsonize());

  }

  if(m_applyMappingHasBeenSet)
  {
   payload.WithObject("ApplyMapping", m_applyMapping.Jsonize());

  }

  if(m_selectFieldsHasBeenSet)
  {
   payload.WithObject("SelectFields", m_selectFields.Jsonize());

  }

  if(m_dropFieldsHasBeenSet)
  {
   payload.WithObject("DropFields", m_dropFields.Jsonize());

  }

  if(m_renameFieldHasBeenSet)
  {
   payload.WithObject("RenameField", m_renameField.Jsonize());

  }

  if(m_spigotHasBeenSet)
  {
   payload.WithObject("Spigot", m_spigot.Jsonize());

  }

  if(m_joinHasBeenSet)
  {
   payload.WithObject("Join", m_join.Jsonize());

  }

  if(m_splitFieldsHasBeenSet)
  {
   payload.WithObject("SplitFields", m_splitFields.Jsonize());

  }

  if(m_selectFromCollectionHasBeenSet)
  {
   payload.WithObject("SelectFromCollection", m_selectFromCollection.Jsonize());

  }

  if(m_fillMissingValuesHasBeenSet)
  {
   payload.WithObject("FillMissingValues", m_fillMissingValues.Jsonize());

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_customCodeHasBeenSet)
  {
   payload.WithObject("CustomCode", m_customCode.Jsonize());

  }

  if(m_sparkSQLHasBeenSet)
  {
   payload.WithObject("SparkSQL", m_sparkSQL.Jsonize());

  }

  if(m_directKinesisSourceHasBeenSet)
  {
   payload.WithObject("DirectKinesisSource", m_directKinesisSource.Jsonize());

  }

  if(m_directKafkaSourceHasBeenSet)
  {
   payload.WithObject("DirectKafkaSource", m_directKafkaSource.Jsonize());

  }

  if(m_catalogKinesisSourceHasBeenSet)
  {
   payload.WithObject("CatalogKinesisSource", m_catalogKinesisSource.Jsonize());

  }

  if(m_catalogKafkaSourceHasBeenSet)
  {
   payload.WithObject("CatalogKafkaSource", m_catalogKafkaSource.Jsonize());

  }

  if(m_dropNullFieldsHasBeenSet)
  {
   payload.WithObject("DropNullFields", m_dropNullFields.Jsonize());

  }

  if(m_mergeHasBeenSet)
  {
   payload.WithObject("Merge", m_merge.Jsonize());

  }

  if(m_unionHasBeenSet)
  {
   payload.WithObject("Union", m_union.Jsonize());

  }

  if(m_pIIDetectionHasBeenSet)
  {
   payload.WithObject("PIIDetection", m_pIIDetection.Jsonize());

  }

  if(m_aggregateHasBeenSet)
  {
   payload.WithObject("Aggregate", m_aggregate.Jsonize());

  }

  if(m_dropDuplicatesHasBeenSet)
  {
   payload.WithObject("DropDuplicates", m_dropDuplicates.Jsonize());

  }

  if(m_governedCatalogTargetHasBeenSet)
  {
   payload.WithObject("GovernedCatalogTarget", m_governedCatalogTarget.Jsonize());

  }

  if(m_governedCatalogSourceHasBeenSet)
  {
   payload.WithObject("GovernedCatalogSource", m_governedCatalogSource.Jsonize());

  }

  if(m_microsoftSQLServerCatalogSourceHasBeenSet)
  {
   payload.WithObject("MicrosoftSQLServerCatalogSource", m_microsoftSQLServerCatalogSource.Jsonize());

  }

  if(m_mySQLCatalogSourceHasBeenSet)
  {
   payload.WithObject("MySQLCatalogSource", m_mySQLCatalogSource.Jsonize());

  }

  if(m_oracleSQLCatalogSourceHasBeenSet)
  {
   payload.WithObject("OracleSQLCatalogSource", m_oracleSQLCatalogSource.Jsonize());

  }

  if(m_postgreSQLCatalogSourceHasBeenSet)
  {
   payload.WithObject("PostgreSQLCatalogSource", m_postgreSQLCatalogSource.Jsonize());

  }

  if(m_microsoftSQLServerCatalogTargetHasBeenSet)
  {
   payload.WithObject("MicrosoftSQLServerCatalogTarget", m_microsoftSQLServerCatalogTarget.Jsonize());

  }

  if(m_mySQLCatalogTargetHasBeenSet)
  {
   payload.WithObject("MySQLCatalogTarget", m_mySQLCatalogTarget.Jsonize());

  }

  if(m_oracleSQLCatalogTargetHasBeenSet)
  {
   payload.WithObject("OracleSQLCatalogTarget", m_oracleSQLCatalogTarget.Jsonize());

  }

  if(m_postgreSQLCatalogTargetHasBeenSet)
  {
   payload.WithObject("PostgreSQLCatalogTarget", m_postgreSQLCatalogTarget.Jsonize());

  }

  if(m_dynamicTransformHasBeenSet)
  {
   payload.WithObject("DynamicTransform", m_dynamicTransform.Jsonize());

  }

  if(m_evaluateDataQualityHasBeenSet)
  {
   payload.WithObject("EvaluateDataQuality", m_evaluateDataQuality.Jsonize());

  }

  if(m_s3CatalogHudiSourceHasBeenSet)
  {
   payload.WithObject("S3CatalogHudiSource", m_s3CatalogHudiSource.Jsonize());

  }

  if(m_catalogHudiSourceHasBeenSet)
  {
   payload.WithObject("CatalogHudiSource", m_catalogHudiSource.Jsonize());

  }

  if(m_s3HudiSourceHasBeenSet)
  {
   payload.WithObject("S3HudiSource", m_s3HudiSource.Jsonize());

  }

  if(m_s3HudiCatalogTargetHasBeenSet)
  {
   payload.WithObject("S3HudiCatalogTarget", m_s3HudiCatalogTarget.Jsonize());

  }

  if(m_s3HudiDirectTargetHasBeenSet)
  {
   payload.WithObject("S3HudiDirectTarget", m_s3HudiDirectTarget.Jsonize());

  }

  if(m_directJDBCSourceHasBeenSet)
  {
   payload.WithObject("DirectJDBCSource", m_directJDBCSource.Jsonize());

  }

  if(m_s3CatalogDeltaSourceHasBeenSet)
  {
   payload.WithObject("S3CatalogDeltaSource", m_s3CatalogDeltaSource.Jsonize());

  }

  if(m_catalogDeltaSourceHasBeenSet)
  {
   payload.WithObject("CatalogDeltaSource", m_catalogDeltaSource.Jsonize());

  }

  if(m_s3DeltaSourceHasBeenSet)
  {
   payload.WithObject("S3DeltaSource", m_s3DeltaSource.Jsonize());

  }

  if(m_s3DeltaCatalogTargetHasBeenSet)
  {
   payload.WithObject("S3DeltaCatalogTarget", m_s3DeltaCatalogTarget.Jsonize());

  }

  if(m_s3DeltaDirectTargetHasBeenSet)
  {
   payload.WithObject("S3DeltaDirectTarget", m_s3DeltaDirectTarget.Jsonize());

  }

  if(m_amazonRedshiftSourceHasBeenSet)
  {
   payload.WithObject("AmazonRedshiftSource", m_amazonRedshiftSource.Jsonize());

  }

  if(m_amazonRedshiftTargetHasBeenSet)
  {
   payload.WithObject("AmazonRedshiftTarget", m_amazonRedshiftTarget.Jsonize());

  }

  if(m_evaluateDataQualityMultiFrameHasBeenSet)
  {
   payload.WithObject("EvaluateDataQualityMultiFrame", m_evaluateDataQualityMultiFrame.Jsonize());

  }

  if(m_recipeHasBeenSet)
  {
   payload.WithObject("Recipe", m_recipe.Jsonize());

  }

  if(m_snowflakeSourceHasBeenSet)
  {
   payload.WithObject("SnowflakeSource", m_snowflakeSource.Jsonize());

  }

  if(m_snowflakeTargetHasBeenSet)
  {
   payload.WithObject("SnowflakeTarget", m_snowflakeTarget.Jsonize());

  }

  if(m_connectorDataSourceHasBeenSet)
  {
   payload.WithObject("ConnectorDataSource", m_connectorDataSource.Jsonize());

  }

  if(m_connectorDataTargetHasBeenSet)
  {
   payload.WithObject("ConnectorDataTarget", m_connectorDataTarget.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
