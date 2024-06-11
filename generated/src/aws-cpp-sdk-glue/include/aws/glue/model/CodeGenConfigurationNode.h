/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AthenaConnectorSource.h>
#include <aws/glue/model/JDBCConnectorSource.h>
#include <aws/glue/model/SparkConnectorSource.h>
#include <aws/glue/model/CatalogSource.h>
#include <aws/glue/model/RedshiftSource.h>
#include <aws/glue/model/S3CatalogSource.h>
#include <aws/glue/model/S3CsvSource.h>
#include <aws/glue/model/S3JsonSource.h>
#include <aws/glue/model/S3ParquetSource.h>
#include <aws/glue/model/RelationalCatalogSource.h>
#include <aws/glue/model/DynamoDBCatalogSource.h>
#include <aws/glue/model/JDBCConnectorTarget.h>
#include <aws/glue/model/SparkConnectorTarget.h>
#include <aws/glue/model/BasicCatalogTarget.h>
#include <aws/glue/model/RedshiftTarget.h>
#include <aws/glue/model/S3CatalogTarget.h>
#include <aws/glue/model/S3GlueParquetTarget.h>
#include <aws/glue/model/S3DirectTarget.h>
#include <aws/glue/model/ApplyMapping.h>
#include <aws/glue/model/SelectFields.h>
#include <aws/glue/model/DropFields.h>
#include <aws/glue/model/RenameField.h>
#include <aws/glue/model/Spigot.h>
#include <aws/glue/model/Join.h>
#include <aws/glue/model/SplitFields.h>
#include <aws/glue/model/SelectFromCollection.h>
#include <aws/glue/model/FillMissingValues.h>
#include <aws/glue/model/Filter.h>
#include <aws/glue/model/CustomCode.h>
#include <aws/glue/model/SparkSQL.h>
#include <aws/glue/model/DirectKinesisSource.h>
#include <aws/glue/model/DirectKafkaSource.h>
#include <aws/glue/model/CatalogKinesisSource.h>
#include <aws/glue/model/CatalogKafkaSource.h>
#include <aws/glue/model/DropNullFields.h>
#include <aws/glue/model/Merge.h>
#include <aws/glue/model/Union.h>
#include <aws/glue/model/PIIDetection.h>
#include <aws/glue/model/Aggregate.h>
#include <aws/glue/model/DropDuplicates.h>
#include <aws/glue/model/GovernedCatalogTarget.h>
#include <aws/glue/model/GovernedCatalogSource.h>
#include <aws/glue/model/MicrosoftSQLServerCatalogSource.h>
#include <aws/glue/model/MySQLCatalogSource.h>
#include <aws/glue/model/OracleSQLCatalogSource.h>
#include <aws/glue/model/PostgreSQLCatalogSource.h>
#include <aws/glue/model/MicrosoftSQLServerCatalogTarget.h>
#include <aws/glue/model/MySQLCatalogTarget.h>
#include <aws/glue/model/OracleSQLCatalogTarget.h>
#include <aws/glue/model/PostgreSQLCatalogTarget.h>
#include <aws/glue/model/DynamicTransform.h>
#include <aws/glue/model/EvaluateDataQuality.h>
#include <aws/glue/model/S3CatalogHudiSource.h>
#include <aws/glue/model/CatalogHudiSource.h>
#include <aws/glue/model/S3HudiSource.h>
#include <aws/glue/model/S3HudiCatalogTarget.h>
#include <aws/glue/model/S3HudiDirectTarget.h>
#include <aws/glue/model/DirectJDBCSource.h>
#include <aws/glue/model/S3CatalogDeltaSource.h>
#include <aws/glue/model/CatalogDeltaSource.h>
#include <aws/glue/model/S3DeltaSource.h>
#include <aws/glue/model/S3DeltaCatalogTarget.h>
#include <aws/glue/model/S3DeltaDirectTarget.h>
#include <aws/glue/model/AmazonRedshiftSource.h>
#include <aws/glue/model/AmazonRedshiftTarget.h>
#include <aws/glue/model/EvaluateDataQualityMultiFrame.h>
#include <aws/glue/model/Recipe.h>
#include <aws/glue/model/SnowflakeSource.h>
#include <aws/glue/model/SnowflakeTarget.h>
#include <aws/glue/model/ConnectorDataSource.h>
#include <aws/glue/model/ConnectorDataTarget.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p> <code>CodeGenConfigurationNode</code> enumerates all valid Node types. One
   * and only one of its member variables can be populated.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CodeGenConfigurationNode">AWS
   * API Reference</a></p>
   */
  class CodeGenConfigurationNode
  {
  public:
    AWS_GLUE_API CodeGenConfigurationNode();
    AWS_GLUE_API CodeGenConfigurationNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CodeGenConfigurationNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a connector to an Amazon Athena data source.</p>
     */
    inline const AthenaConnectorSource& GetAthenaConnectorSource() const{ return m_athenaConnectorSource; }
    inline bool AthenaConnectorSourceHasBeenSet() const { return m_athenaConnectorSourceHasBeenSet; }
    inline void SetAthenaConnectorSource(const AthenaConnectorSource& value) { m_athenaConnectorSourceHasBeenSet = true; m_athenaConnectorSource = value; }
    inline void SetAthenaConnectorSource(AthenaConnectorSource&& value) { m_athenaConnectorSourceHasBeenSet = true; m_athenaConnectorSource = std::move(value); }
    inline CodeGenConfigurationNode& WithAthenaConnectorSource(const AthenaConnectorSource& value) { SetAthenaConnectorSource(value); return *this;}
    inline CodeGenConfigurationNode& WithAthenaConnectorSource(AthenaConnectorSource&& value) { SetAthenaConnectorSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a connector to a JDBC data source.</p>
     */
    inline const JDBCConnectorSource& GetJDBCConnectorSource() const{ return m_jDBCConnectorSource; }
    inline bool JDBCConnectorSourceHasBeenSet() const { return m_jDBCConnectorSourceHasBeenSet; }
    inline void SetJDBCConnectorSource(const JDBCConnectorSource& value) { m_jDBCConnectorSourceHasBeenSet = true; m_jDBCConnectorSource = value; }
    inline void SetJDBCConnectorSource(JDBCConnectorSource&& value) { m_jDBCConnectorSourceHasBeenSet = true; m_jDBCConnectorSource = std::move(value); }
    inline CodeGenConfigurationNode& WithJDBCConnectorSource(const JDBCConnectorSource& value) { SetJDBCConnectorSource(value); return *this;}
    inline CodeGenConfigurationNode& WithJDBCConnectorSource(JDBCConnectorSource&& value) { SetJDBCConnectorSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a connector to an Apache Spark data source.</p>
     */
    inline const SparkConnectorSource& GetSparkConnectorSource() const{ return m_sparkConnectorSource; }
    inline bool SparkConnectorSourceHasBeenSet() const { return m_sparkConnectorSourceHasBeenSet; }
    inline void SetSparkConnectorSource(const SparkConnectorSource& value) { m_sparkConnectorSourceHasBeenSet = true; m_sparkConnectorSource = value; }
    inline void SetSparkConnectorSource(SparkConnectorSource&& value) { m_sparkConnectorSourceHasBeenSet = true; m_sparkConnectorSource = std::move(value); }
    inline CodeGenConfigurationNode& WithSparkConnectorSource(const SparkConnectorSource& value) { SetSparkConnectorSource(value); return *this;}
    inline CodeGenConfigurationNode& WithSparkConnectorSource(SparkConnectorSource&& value) { SetSparkConnectorSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data store in the Glue Data Catalog.</p>
     */
    inline const CatalogSource& GetCatalogSource() const{ return m_catalogSource; }
    inline bool CatalogSourceHasBeenSet() const { return m_catalogSourceHasBeenSet; }
    inline void SetCatalogSource(const CatalogSource& value) { m_catalogSourceHasBeenSet = true; m_catalogSource = value; }
    inline void SetCatalogSource(CatalogSource&& value) { m_catalogSourceHasBeenSet = true; m_catalogSource = std::move(value); }
    inline CodeGenConfigurationNode& WithCatalogSource(const CatalogSource& value) { SetCatalogSource(value); return *this;}
    inline CodeGenConfigurationNode& WithCatalogSource(CatalogSource&& value) { SetCatalogSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Amazon Redshift data store.</p>
     */
    inline const RedshiftSource& GetRedshiftSource() const{ return m_redshiftSource; }
    inline bool RedshiftSourceHasBeenSet() const { return m_redshiftSourceHasBeenSet; }
    inline void SetRedshiftSource(const RedshiftSource& value) { m_redshiftSourceHasBeenSet = true; m_redshiftSource = value; }
    inline void SetRedshiftSource(RedshiftSource&& value) { m_redshiftSourceHasBeenSet = true; m_redshiftSource = std::move(value); }
    inline CodeGenConfigurationNode& WithRedshiftSource(const RedshiftSource& value) { SetRedshiftSource(value); return *this;}
    inline CodeGenConfigurationNode& WithRedshiftSource(RedshiftSource&& value) { SetRedshiftSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Amazon S3 data store in the Glue Data Catalog.</p>
     */
    inline const S3CatalogSource& GetS3CatalogSource() const{ return m_s3CatalogSource; }
    inline bool S3CatalogSourceHasBeenSet() const { return m_s3CatalogSourceHasBeenSet; }
    inline void SetS3CatalogSource(const S3CatalogSource& value) { m_s3CatalogSourceHasBeenSet = true; m_s3CatalogSource = value; }
    inline void SetS3CatalogSource(S3CatalogSource&& value) { m_s3CatalogSourceHasBeenSet = true; m_s3CatalogSource = std::move(value); }
    inline CodeGenConfigurationNode& WithS3CatalogSource(const S3CatalogSource& value) { SetS3CatalogSource(value); return *this;}
    inline CodeGenConfigurationNode& WithS3CatalogSource(S3CatalogSource&& value) { SetS3CatalogSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a command-separated value (CSV) data store stored in Amazon S3.</p>
     */
    inline const S3CsvSource& GetS3CsvSource() const{ return m_s3CsvSource; }
    inline bool S3CsvSourceHasBeenSet() const { return m_s3CsvSourceHasBeenSet; }
    inline void SetS3CsvSource(const S3CsvSource& value) { m_s3CsvSourceHasBeenSet = true; m_s3CsvSource = value; }
    inline void SetS3CsvSource(S3CsvSource&& value) { m_s3CsvSourceHasBeenSet = true; m_s3CsvSource = std::move(value); }
    inline CodeGenConfigurationNode& WithS3CsvSource(const S3CsvSource& value) { SetS3CsvSource(value); return *this;}
    inline CodeGenConfigurationNode& WithS3CsvSource(S3CsvSource&& value) { SetS3CsvSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a JSON data store stored in Amazon S3.</p>
     */
    inline const S3JsonSource& GetS3JsonSource() const{ return m_s3JsonSource; }
    inline bool S3JsonSourceHasBeenSet() const { return m_s3JsonSourceHasBeenSet; }
    inline void SetS3JsonSource(const S3JsonSource& value) { m_s3JsonSourceHasBeenSet = true; m_s3JsonSource = value; }
    inline void SetS3JsonSource(S3JsonSource&& value) { m_s3JsonSourceHasBeenSet = true; m_s3JsonSource = std::move(value); }
    inline CodeGenConfigurationNode& WithS3JsonSource(const S3JsonSource& value) { SetS3JsonSource(value); return *this;}
    inline CodeGenConfigurationNode& WithS3JsonSource(S3JsonSource&& value) { SetS3JsonSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Apache Parquet data store stored in Amazon S3.</p>
     */
    inline const S3ParquetSource& GetS3ParquetSource() const{ return m_s3ParquetSource; }
    inline bool S3ParquetSourceHasBeenSet() const { return m_s3ParquetSourceHasBeenSet; }
    inline void SetS3ParquetSource(const S3ParquetSource& value) { m_s3ParquetSourceHasBeenSet = true; m_s3ParquetSource = value; }
    inline void SetS3ParquetSource(S3ParquetSource&& value) { m_s3ParquetSourceHasBeenSet = true; m_s3ParquetSource = std::move(value); }
    inline CodeGenConfigurationNode& WithS3ParquetSource(const S3ParquetSource& value) { SetS3ParquetSource(value); return *this;}
    inline CodeGenConfigurationNode& WithS3ParquetSource(S3ParquetSource&& value) { SetS3ParquetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a relational catalog data store in the Glue Data Catalog.</p>
     */
    inline const RelationalCatalogSource& GetRelationalCatalogSource() const{ return m_relationalCatalogSource; }
    inline bool RelationalCatalogSourceHasBeenSet() const { return m_relationalCatalogSourceHasBeenSet; }
    inline void SetRelationalCatalogSource(const RelationalCatalogSource& value) { m_relationalCatalogSourceHasBeenSet = true; m_relationalCatalogSource = value; }
    inline void SetRelationalCatalogSource(RelationalCatalogSource&& value) { m_relationalCatalogSourceHasBeenSet = true; m_relationalCatalogSource = std::move(value); }
    inline CodeGenConfigurationNode& WithRelationalCatalogSource(const RelationalCatalogSource& value) { SetRelationalCatalogSource(value); return *this;}
    inline CodeGenConfigurationNode& WithRelationalCatalogSource(RelationalCatalogSource&& value) { SetRelationalCatalogSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a DynamoDBC Catalog data store in the Glue Data Catalog.</p>
     */
    inline const DynamoDBCatalogSource& GetDynamoDBCatalogSource() const{ return m_dynamoDBCatalogSource; }
    inline bool DynamoDBCatalogSourceHasBeenSet() const { return m_dynamoDBCatalogSourceHasBeenSet; }
    inline void SetDynamoDBCatalogSource(const DynamoDBCatalogSource& value) { m_dynamoDBCatalogSourceHasBeenSet = true; m_dynamoDBCatalogSource = value; }
    inline void SetDynamoDBCatalogSource(DynamoDBCatalogSource&& value) { m_dynamoDBCatalogSourceHasBeenSet = true; m_dynamoDBCatalogSource = std::move(value); }
    inline CodeGenConfigurationNode& WithDynamoDBCatalogSource(const DynamoDBCatalogSource& value) { SetDynamoDBCatalogSource(value); return *this;}
    inline CodeGenConfigurationNode& WithDynamoDBCatalogSource(DynamoDBCatalogSource&& value) { SetDynamoDBCatalogSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data target that writes to Amazon S3 in Apache Parquet columnar
     * storage.</p>
     */
    inline const JDBCConnectorTarget& GetJDBCConnectorTarget() const{ return m_jDBCConnectorTarget; }
    inline bool JDBCConnectorTargetHasBeenSet() const { return m_jDBCConnectorTargetHasBeenSet; }
    inline void SetJDBCConnectorTarget(const JDBCConnectorTarget& value) { m_jDBCConnectorTargetHasBeenSet = true; m_jDBCConnectorTarget = value; }
    inline void SetJDBCConnectorTarget(JDBCConnectorTarget&& value) { m_jDBCConnectorTargetHasBeenSet = true; m_jDBCConnectorTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithJDBCConnectorTarget(const JDBCConnectorTarget& value) { SetJDBCConnectorTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithJDBCConnectorTarget(JDBCConnectorTarget&& value) { SetJDBCConnectorTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses an Apache Spark connector.</p>
     */
    inline const SparkConnectorTarget& GetSparkConnectorTarget() const{ return m_sparkConnectorTarget; }
    inline bool SparkConnectorTargetHasBeenSet() const { return m_sparkConnectorTargetHasBeenSet; }
    inline void SetSparkConnectorTarget(const SparkConnectorTarget& value) { m_sparkConnectorTargetHasBeenSet = true; m_sparkConnectorTarget = value; }
    inline void SetSparkConnectorTarget(SparkConnectorTarget&& value) { m_sparkConnectorTargetHasBeenSet = true; m_sparkConnectorTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithSparkConnectorTarget(const SparkConnectorTarget& value) { SetSparkConnectorTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithSparkConnectorTarget(SparkConnectorTarget&& value) { SetSparkConnectorTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses a Glue Data Catalog table.</p>
     */
    inline const BasicCatalogTarget& GetCatalogTarget() const{ return m_catalogTarget; }
    inline bool CatalogTargetHasBeenSet() const { return m_catalogTargetHasBeenSet; }
    inline void SetCatalogTarget(const BasicCatalogTarget& value) { m_catalogTargetHasBeenSet = true; m_catalogTarget = value; }
    inline void SetCatalogTarget(BasicCatalogTarget&& value) { m_catalogTargetHasBeenSet = true; m_catalogTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithCatalogTarget(const BasicCatalogTarget& value) { SetCatalogTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithCatalogTarget(BasicCatalogTarget&& value) { SetCatalogTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses Amazon Redshift.</p>
     */
    inline const RedshiftTarget& GetRedshiftTarget() const{ return m_redshiftTarget; }
    inline bool RedshiftTargetHasBeenSet() const { return m_redshiftTargetHasBeenSet; }
    inline void SetRedshiftTarget(const RedshiftTarget& value) { m_redshiftTargetHasBeenSet = true; m_redshiftTarget = value; }
    inline void SetRedshiftTarget(RedshiftTarget&& value) { m_redshiftTargetHasBeenSet = true; m_redshiftTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithRedshiftTarget(const RedshiftTarget& value) { SetRedshiftTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithRedshiftTarget(RedshiftTarget&& value) { SetRedshiftTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data target that writes to Amazon S3 using the Glue Data
     * Catalog.</p>
     */
    inline const S3CatalogTarget& GetS3CatalogTarget() const{ return m_s3CatalogTarget; }
    inline bool S3CatalogTargetHasBeenSet() const { return m_s3CatalogTargetHasBeenSet; }
    inline void SetS3CatalogTarget(const S3CatalogTarget& value) { m_s3CatalogTargetHasBeenSet = true; m_s3CatalogTarget = value; }
    inline void SetS3CatalogTarget(S3CatalogTarget&& value) { m_s3CatalogTargetHasBeenSet = true; m_s3CatalogTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithS3CatalogTarget(const S3CatalogTarget& value) { SetS3CatalogTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithS3CatalogTarget(S3CatalogTarget&& value) { SetS3CatalogTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data target that writes to Amazon S3 in Apache Parquet columnar
     * storage.</p>
     */
    inline const S3GlueParquetTarget& GetS3GlueParquetTarget() const{ return m_s3GlueParquetTarget; }
    inline bool S3GlueParquetTargetHasBeenSet() const { return m_s3GlueParquetTargetHasBeenSet; }
    inline void SetS3GlueParquetTarget(const S3GlueParquetTarget& value) { m_s3GlueParquetTargetHasBeenSet = true; m_s3GlueParquetTarget = value; }
    inline void SetS3GlueParquetTarget(S3GlueParquetTarget&& value) { m_s3GlueParquetTargetHasBeenSet = true; m_s3GlueParquetTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithS3GlueParquetTarget(const S3GlueParquetTarget& value) { SetS3GlueParquetTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithS3GlueParquetTarget(S3GlueParquetTarget&& value) { SetS3GlueParquetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data target that writes to Amazon S3.</p>
     */
    inline const S3DirectTarget& GetS3DirectTarget() const{ return m_s3DirectTarget; }
    inline bool S3DirectTargetHasBeenSet() const { return m_s3DirectTargetHasBeenSet; }
    inline void SetS3DirectTarget(const S3DirectTarget& value) { m_s3DirectTargetHasBeenSet = true; m_s3DirectTarget = value; }
    inline void SetS3DirectTarget(S3DirectTarget&& value) { m_s3DirectTargetHasBeenSet = true; m_s3DirectTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithS3DirectTarget(const S3DirectTarget& value) { SetS3DirectTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithS3DirectTarget(S3DirectTarget&& value) { SetS3DirectTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that maps data property keys in the data source to data
     * property keys in the data target. You can rename keys, modify the data types for
     * keys, and choose which keys to drop from the dataset.</p>
     */
    inline const ApplyMapping& GetApplyMapping() const{ return m_applyMapping; }
    inline bool ApplyMappingHasBeenSet() const { return m_applyMappingHasBeenSet; }
    inline void SetApplyMapping(const ApplyMapping& value) { m_applyMappingHasBeenSet = true; m_applyMapping = value; }
    inline void SetApplyMapping(ApplyMapping&& value) { m_applyMappingHasBeenSet = true; m_applyMapping = std::move(value); }
    inline CodeGenConfigurationNode& WithApplyMapping(const ApplyMapping& value) { SetApplyMapping(value); return *this;}
    inline CodeGenConfigurationNode& WithApplyMapping(ApplyMapping&& value) { SetApplyMapping(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that chooses the data property keys that you want to
     * keep.</p>
     */
    inline const SelectFields& GetSelectFields() const{ return m_selectFields; }
    inline bool SelectFieldsHasBeenSet() const { return m_selectFieldsHasBeenSet; }
    inline void SetSelectFields(const SelectFields& value) { m_selectFieldsHasBeenSet = true; m_selectFields = value; }
    inline void SetSelectFields(SelectFields&& value) { m_selectFieldsHasBeenSet = true; m_selectFields = std::move(value); }
    inline CodeGenConfigurationNode& WithSelectFields(const SelectFields& value) { SetSelectFields(value); return *this;}
    inline CodeGenConfigurationNode& WithSelectFields(SelectFields&& value) { SetSelectFields(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that chooses the data property keys that you want to
     * drop.</p>
     */
    inline const DropFields& GetDropFields() const{ return m_dropFields; }
    inline bool DropFieldsHasBeenSet() const { return m_dropFieldsHasBeenSet; }
    inline void SetDropFields(const DropFields& value) { m_dropFieldsHasBeenSet = true; m_dropFields = value; }
    inline void SetDropFields(DropFields&& value) { m_dropFieldsHasBeenSet = true; m_dropFields = std::move(value); }
    inline CodeGenConfigurationNode& WithDropFields(const DropFields& value) { SetDropFields(value); return *this;}
    inline CodeGenConfigurationNode& WithDropFields(DropFields&& value) { SetDropFields(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that renames a single data property key.</p>
     */
    inline const RenameField& GetRenameField() const{ return m_renameField; }
    inline bool RenameFieldHasBeenSet() const { return m_renameFieldHasBeenSet; }
    inline void SetRenameField(const RenameField& value) { m_renameFieldHasBeenSet = true; m_renameField = value; }
    inline void SetRenameField(RenameField&& value) { m_renameFieldHasBeenSet = true; m_renameField = std::move(value); }
    inline CodeGenConfigurationNode& WithRenameField(const RenameField& value) { SetRenameField(value); return *this;}
    inline CodeGenConfigurationNode& WithRenameField(RenameField&& value) { SetRenameField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that writes samples of the data to an Amazon S3
     * bucket.</p>
     */
    inline const Spigot& GetSpigot() const{ return m_spigot; }
    inline bool SpigotHasBeenSet() const { return m_spigotHasBeenSet; }
    inline void SetSpigot(const Spigot& value) { m_spigotHasBeenSet = true; m_spigot = value; }
    inline void SetSpigot(Spigot&& value) { m_spigotHasBeenSet = true; m_spigot = std::move(value); }
    inline CodeGenConfigurationNode& WithSpigot(const Spigot& value) { SetSpigot(value); return *this;}
    inline CodeGenConfigurationNode& WithSpigot(Spigot&& value) { SetSpigot(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that joins two datasets into one dataset using a
     * comparison phrase on the specified data property keys. You can use inner, outer,
     * left, right, left semi, and left anti joins.</p>
     */
    inline const Join& GetJoin() const{ return m_join; }
    inline bool JoinHasBeenSet() const { return m_joinHasBeenSet; }
    inline void SetJoin(const Join& value) { m_joinHasBeenSet = true; m_join = value; }
    inline void SetJoin(Join&& value) { m_joinHasBeenSet = true; m_join = std::move(value); }
    inline CodeGenConfigurationNode& WithJoin(const Join& value) { SetJoin(value); return *this;}
    inline CodeGenConfigurationNode& WithJoin(Join&& value) { SetJoin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that splits data property keys into two
     * <code>DynamicFrames</code>. The output is a collection of
     * <code>DynamicFrames</code>: one with selected data property keys, and one with
     * the remaining data property keys.</p>
     */
    inline const SplitFields& GetSplitFields() const{ return m_splitFields; }
    inline bool SplitFieldsHasBeenSet() const { return m_splitFieldsHasBeenSet; }
    inline void SetSplitFields(const SplitFields& value) { m_splitFieldsHasBeenSet = true; m_splitFields = value; }
    inline void SetSplitFields(SplitFields&& value) { m_splitFieldsHasBeenSet = true; m_splitFields = std::move(value); }
    inline CodeGenConfigurationNode& WithSplitFields(const SplitFields& value) { SetSplitFields(value); return *this;}
    inline CodeGenConfigurationNode& WithSplitFields(SplitFields&& value) { SetSplitFields(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that chooses one <code>DynamicFrame</code> from a
     * collection of <code>DynamicFrames</code>. The output is the selected
     * <code>DynamicFrame</code> </p>
     */
    inline const SelectFromCollection& GetSelectFromCollection() const{ return m_selectFromCollection; }
    inline bool SelectFromCollectionHasBeenSet() const { return m_selectFromCollectionHasBeenSet; }
    inline void SetSelectFromCollection(const SelectFromCollection& value) { m_selectFromCollectionHasBeenSet = true; m_selectFromCollection = value; }
    inline void SetSelectFromCollection(SelectFromCollection&& value) { m_selectFromCollectionHasBeenSet = true; m_selectFromCollection = std::move(value); }
    inline CodeGenConfigurationNode& WithSelectFromCollection(const SelectFromCollection& value) { SetSelectFromCollection(value); return *this;}
    inline CodeGenConfigurationNode& WithSelectFromCollection(SelectFromCollection&& value) { SetSelectFromCollection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that locates records in the dataset that have missing
     * values and adds a new field with a value determined by imputation. The input
     * data set is used to train the machine learning model that determines what the
     * missing value should be.</p>
     */
    inline const FillMissingValues& GetFillMissingValues() const{ return m_fillMissingValues; }
    inline bool FillMissingValuesHasBeenSet() const { return m_fillMissingValuesHasBeenSet; }
    inline void SetFillMissingValues(const FillMissingValues& value) { m_fillMissingValuesHasBeenSet = true; m_fillMissingValues = value; }
    inline void SetFillMissingValues(FillMissingValues&& value) { m_fillMissingValuesHasBeenSet = true; m_fillMissingValues = std::move(value); }
    inline CodeGenConfigurationNode& WithFillMissingValues(const FillMissingValues& value) { SetFillMissingValues(value); return *this;}
    inline CodeGenConfigurationNode& WithFillMissingValues(FillMissingValues&& value) { SetFillMissingValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that splits a dataset into two, based on a filter
     * condition.</p>
     */
    inline const Filter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline CodeGenConfigurationNode& WithFilter(const Filter& value) { SetFilter(value); return *this;}
    inline CodeGenConfigurationNode& WithFilter(Filter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that uses custom code you provide to perform the data
     * transformation. The output is a collection of DynamicFrames.</p>
     */
    inline const CustomCode& GetCustomCode() const{ return m_customCode; }
    inline bool CustomCodeHasBeenSet() const { return m_customCodeHasBeenSet; }
    inline void SetCustomCode(const CustomCode& value) { m_customCodeHasBeenSet = true; m_customCode = value; }
    inline void SetCustomCode(CustomCode&& value) { m_customCodeHasBeenSet = true; m_customCode = std::move(value); }
    inline CodeGenConfigurationNode& WithCustomCode(const CustomCode& value) { SetCustomCode(value); return *this;}
    inline CodeGenConfigurationNode& WithCustomCode(CustomCode&& value) { SetCustomCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform where you enter a SQL query using Spark SQL syntax to
     * transform the data. The output is a single <code>DynamicFrame</code>.</p>
     */
    inline const SparkSQL& GetSparkSQL() const{ return m_sparkSQL; }
    inline bool SparkSQLHasBeenSet() const { return m_sparkSQLHasBeenSet; }
    inline void SetSparkSQL(const SparkSQL& value) { m_sparkSQLHasBeenSet = true; m_sparkSQL = value; }
    inline void SetSparkSQL(SparkSQL&& value) { m_sparkSQLHasBeenSet = true; m_sparkSQL = std::move(value); }
    inline CodeGenConfigurationNode& WithSparkSQL(const SparkSQL& value) { SetSparkSQL(value); return *this;}
    inline CodeGenConfigurationNode& WithSparkSQL(SparkSQL&& value) { SetSparkSQL(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a direct Amazon Kinesis data source.</p>
     */
    inline const DirectKinesisSource& GetDirectKinesisSource() const{ return m_directKinesisSource; }
    inline bool DirectKinesisSourceHasBeenSet() const { return m_directKinesisSourceHasBeenSet; }
    inline void SetDirectKinesisSource(const DirectKinesisSource& value) { m_directKinesisSourceHasBeenSet = true; m_directKinesisSource = value; }
    inline void SetDirectKinesisSource(DirectKinesisSource&& value) { m_directKinesisSourceHasBeenSet = true; m_directKinesisSource = std::move(value); }
    inline CodeGenConfigurationNode& WithDirectKinesisSource(const DirectKinesisSource& value) { SetDirectKinesisSource(value); return *this;}
    inline CodeGenConfigurationNode& WithDirectKinesisSource(DirectKinesisSource&& value) { SetDirectKinesisSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Apache Kafka data store.</p>
     */
    inline const DirectKafkaSource& GetDirectKafkaSource() const{ return m_directKafkaSource; }
    inline bool DirectKafkaSourceHasBeenSet() const { return m_directKafkaSourceHasBeenSet; }
    inline void SetDirectKafkaSource(const DirectKafkaSource& value) { m_directKafkaSourceHasBeenSet = true; m_directKafkaSource = value; }
    inline void SetDirectKafkaSource(DirectKafkaSource&& value) { m_directKafkaSourceHasBeenSet = true; m_directKafkaSource = std::move(value); }
    inline CodeGenConfigurationNode& WithDirectKafkaSource(const DirectKafkaSource& value) { SetDirectKafkaSource(value); return *this;}
    inline CodeGenConfigurationNode& WithDirectKafkaSource(DirectKafkaSource&& value) { SetDirectKafkaSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Kinesis data source in the Glue Data Catalog.</p>
     */
    inline const CatalogKinesisSource& GetCatalogKinesisSource() const{ return m_catalogKinesisSource; }
    inline bool CatalogKinesisSourceHasBeenSet() const { return m_catalogKinesisSourceHasBeenSet; }
    inline void SetCatalogKinesisSource(const CatalogKinesisSource& value) { m_catalogKinesisSourceHasBeenSet = true; m_catalogKinesisSource = value; }
    inline void SetCatalogKinesisSource(CatalogKinesisSource&& value) { m_catalogKinesisSourceHasBeenSet = true; m_catalogKinesisSource = std::move(value); }
    inline CodeGenConfigurationNode& WithCatalogKinesisSource(const CatalogKinesisSource& value) { SetCatalogKinesisSource(value); return *this;}
    inline CodeGenConfigurationNode& WithCatalogKinesisSource(CatalogKinesisSource&& value) { SetCatalogKinesisSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Apache Kafka data store in the Data Catalog.</p>
     */
    inline const CatalogKafkaSource& GetCatalogKafkaSource() const{ return m_catalogKafkaSource; }
    inline bool CatalogKafkaSourceHasBeenSet() const { return m_catalogKafkaSourceHasBeenSet; }
    inline void SetCatalogKafkaSource(const CatalogKafkaSource& value) { m_catalogKafkaSourceHasBeenSet = true; m_catalogKafkaSource = value; }
    inline void SetCatalogKafkaSource(CatalogKafkaSource&& value) { m_catalogKafkaSourceHasBeenSet = true; m_catalogKafkaSource = std::move(value); }
    inline CodeGenConfigurationNode& WithCatalogKafkaSource(const CatalogKafkaSource& value) { SetCatalogKafkaSource(value); return *this;}
    inline CodeGenConfigurationNode& WithCatalogKafkaSource(CatalogKafkaSource&& value) { SetCatalogKafkaSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that removes columns from the dataset if all values in
     * the column are 'null'. By default, Glue Studio will recognize null objects, but
     * some values such as empty strings, strings that are "null", -1 integers or other
     * placeholders such as zeros, are not automatically recognized as nulls.</p>
     */
    inline const DropNullFields& GetDropNullFields() const{ return m_dropNullFields; }
    inline bool DropNullFieldsHasBeenSet() const { return m_dropNullFieldsHasBeenSet; }
    inline void SetDropNullFields(const DropNullFields& value) { m_dropNullFieldsHasBeenSet = true; m_dropNullFields = value; }
    inline void SetDropNullFields(DropNullFields&& value) { m_dropNullFieldsHasBeenSet = true; m_dropNullFields = std::move(value); }
    inline CodeGenConfigurationNode& WithDropNullFields(const DropNullFields& value) { SetDropNullFields(value); return *this;}
    inline CodeGenConfigurationNode& WithDropNullFields(DropNullFields&& value) { SetDropNullFields(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that merges a <code>DynamicFrame</code> with a staging
     * <code>DynamicFrame</code> based on the specified primary keys to identify
     * records. Duplicate records (records with the same primary keys) are not
     * de-duplicated. </p>
     */
    inline const Merge& GetMerge() const{ return m_merge; }
    inline bool MergeHasBeenSet() const { return m_mergeHasBeenSet; }
    inline void SetMerge(const Merge& value) { m_mergeHasBeenSet = true; m_merge = value; }
    inline void SetMerge(Merge&& value) { m_mergeHasBeenSet = true; m_merge = std::move(value); }
    inline CodeGenConfigurationNode& WithMerge(const Merge& value) { SetMerge(value); return *this;}
    inline CodeGenConfigurationNode& WithMerge(Merge&& value) { SetMerge(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that combines the rows from two or more datasets into a
     * single result.</p>
     */
    inline const Union& GetUnion() const{ return m_union; }
    inline bool UnionHasBeenSet() const { return m_unionHasBeenSet; }
    inline void SetUnion(const Union& value) { m_unionHasBeenSet = true; m_union = value; }
    inline void SetUnion(Union&& value) { m_unionHasBeenSet = true; m_union = std::move(value); }
    inline CodeGenConfigurationNode& WithUnion(const Union& value) { SetUnion(value); return *this;}
    inline CodeGenConfigurationNode& WithUnion(Union&& value) { SetUnion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that identifies, removes or masks PII data.</p>
     */
    inline const PIIDetection& GetPIIDetection() const{ return m_pIIDetection; }
    inline bool PIIDetectionHasBeenSet() const { return m_pIIDetectionHasBeenSet; }
    inline void SetPIIDetection(const PIIDetection& value) { m_pIIDetectionHasBeenSet = true; m_pIIDetection = value; }
    inline void SetPIIDetection(PIIDetection&& value) { m_pIIDetectionHasBeenSet = true; m_pIIDetection = std::move(value); }
    inline CodeGenConfigurationNode& WithPIIDetection(const PIIDetection& value) { SetPIIDetection(value); return *this;}
    inline CodeGenConfigurationNode& WithPIIDetection(PIIDetection&& value) { SetPIIDetection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that groups rows by chosen fields and computes the
     * aggregated value by specified function.</p>
     */
    inline const Aggregate& GetAggregate() const{ return m_aggregate; }
    inline bool AggregateHasBeenSet() const { return m_aggregateHasBeenSet; }
    inline void SetAggregate(const Aggregate& value) { m_aggregateHasBeenSet = true; m_aggregate = value; }
    inline void SetAggregate(Aggregate&& value) { m_aggregateHasBeenSet = true; m_aggregate = std::move(value); }
    inline CodeGenConfigurationNode& WithAggregate(const Aggregate& value) { SetAggregate(value); return *this;}
    inline CodeGenConfigurationNode& WithAggregate(Aggregate&& value) { SetAggregate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that removes rows of repeating data from a data
     * set.</p>
     */
    inline const DropDuplicates& GetDropDuplicates() const{ return m_dropDuplicates; }
    inline bool DropDuplicatesHasBeenSet() const { return m_dropDuplicatesHasBeenSet; }
    inline void SetDropDuplicates(const DropDuplicates& value) { m_dropDuplicatesHasBeenSet = true; m_dropDuplicates = value; }
    inline void SetDropDuplicates(DropDuplicates&& value) { m_dropDuplicatesHasBeenSet = true; m_dropDuplicates = std::move(value); }
    inline CodeGenConfigurationNode& WithDropDuplicates(const DropDuplicates& value) { SetDropDuplicates(value); return *this;}
    inline CodeGenConfigurationNode& WithDropDuplicates(DropDuplicates&& value) { SetDropDuplicates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data target that writes to a goverened catalog.</p>
     */
    inline const GovernedCatalogTarget& GetGovernedCatalogTarget() const{ return m_governedCatalogTarget; }
    inline bool GovernedCatalogTargetHasBeenSet() const { return m_governedCatalogTargetHasBeenSet; }
    inline void SetGovernedCatalogTarget(const GovernedCatalogTarget& value) { m_governedCatalogTargetHasBeenSet = true; m_governedCatalogTarget = value; }
    inline void SetGovernedCatalogTarget(GovernedCatalogTarget&& value) { m_governedCatalogTargetHasBeenSet = true; m_governedCatalogTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithGovernedCatalogTarget(const GovernedCatalogTarget& value) { SetGovernedCatalogTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithGovernedCatalogTarget(GovernedCatalogTarget&& value) { SetGovernedCatalogTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data source in a goverened Data Catalog.</p>
     */
    inline const GovernedCatalogSource& GetGovernedCatalogSource() const{ return m_governedCatalogSource; }
    inline bool GovernedCatalogSourceHasBeenSet() const { return m_governedCatalogSourceHasBeenSet; }
    inline void SetGovernedCatalogSource(const GovernedCatalogSource& value) { m_governedCatalogSourceHasBeenSet = true; m_governedCatalogSource = value; }
    inline void SetGovernedCatalogSource(GovernedCatalogSource&& value) { m_governedCatalogSourceHasBeenSet = true; m_governedCatalogSource = std::move(value); }
    inline CodeGenConfigurationNode& WithGovernedCatalogSource(const GovernedCatalogSource& value) { SetGovernedCatalogSource(value); return *this;}
    inline CodeGenConfigurationNode& WithGovernedCatalogSource(GovernedCatalogSource&& value) { SetGovernedCatalogSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Microsoft SQL server data source in the Glue Data Catalog.</p>
     */
    inline const MicrosoftSQLServerCatalogSource& GetMicrosoftSQLServerCatalogSource() const{ return m_microsoftSQLServerCatalogSource; }
    inline bool MicrosoftSQLServerCatalogSourceHasBeenSet() const { return m_microsoftSQLServerCatalogSourceHasBeenSet; }
    inline void SetMicrosoftSQLServerCatalogSource(const MicrosoftSQLServerCatalogSource& value) { m_microsoftSQLServerCatalogSourceHasBeenSet = true; m_microsoftSQLServerCatalogSource = value; }
    inline void SetMicrosoftSQLServerCatalogSource(MicrosoftSQLServerCatalogSource&& value) { m_microsoftSQLServerCatalogSourceHasBeenSet = true; m_microsoftSQLServerCatalogSource = std::move(value); }
    inline CodeGenConfigurationNode& WithMicrosoftSQLServerCatalogSource(const MicrosoftSQLServerCatalogSource& value) { SetMicrosoftSQLServerCatalogSource(value); return *this;}
    inline CodeGenConfigurationNode& WithMicrosoftSQLServerCatalogSource(MicrosoftSQLServerCatalogSource&& value) { SetMicrosoftSQLServerCatalogSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a MySQL data source in the Glue Data Catalog.</p>
     */
    inline const MySQLCatalogSource& GetMySQLCatalogSource() const{ return m_mySQLCatalogSource; }
    inline bool MySQLCatalogSourceHasBeenSet() const { return m_mySQLCatalogSourceHasBeenSet; }
    inline void SetMySQLCatalogSource(const MySQLCatalogSource& value) { m_mySQLCatalogSourceHasBeenSet = true; m_mySQLCatalogSource = value; }
    inline void SetMySQLCatalogSource(MySQLCatalogSource&& value) { m_mySQLCatalogSourceHasBeenSet = true; m_mySQLCatalogSource = std::move(value); }
    inline CodeGenConfigurationNode& WithMySQLCatalogSource(const MySQLCatalogSource& value) { SetMySQLCatalogSource(value); return *this;}
    inline CodeGenConfigurationNode& WithMySQLCatalogSource(MySQLCatalogSource&& value) { SetMySQLCatalogSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Oracle data source in the Glue Data Catalog.</p>
     */
    inline const OracleSQLCatalogSource& GetOracleSQLCatalogSource() const{ return m_oracleSQLCatalogSource; }
    inline bool OracleSQLCatalogSourceHasBeenSet() const { return m_oracleSQLCatalogSourceHasBeenSet; }
    inline void SetOracleSQLCatalogSource(const OracleSQLCatalogSource& value) { m_oracleSQLCatalogSourceHasBeenSet = true; m_oracleSQLCatalogSource = value; }
    inline void SetOracleSQLCatalogSource(OracleSQLCatalogSource&& value) { m_oracleSQLCatalogSourceHasBeenSet = true; m_oracleSQLCatalogSource = std::move(value); }
    inline CodeGenConfigurationNode& WithOracleSQLCatalogSource(const OracleSQLCatalogSource& value) { SetOracleSQLCatalogSource(value); return *this;}
    inline CodeGenConfigurationNode& WithOracleSQLCatalogSource(OracleSQLCatalogSource&& value) { SetOracleSQLCatalogSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a PostgresSQL data source in the Glue Data Catalog.</p>
     */
    inline const PostgreSQLCatalogSource& GetPostgreSQLCatalogSource() const{ return m_postgreSQLCatalogSource; }
    inline bool PostgreSQLCatalogSourceHasBeenSet() const { return m_postgreSQLCatalogSourceHasBeenSet; }
    inline void SetPostgreSQLCatalogSource(const PostgreSQLCatalogSource& value) { m_postgreSQLCatalogSourceHasBeenSet = true; m_postgreSQLCatalogSource = value; }
    inline void SetPostgreSQLCatalogSource(PostgreSQLCatalogSource&& value) { m_postgreSQLCatalogSourceHasBeenSet = true; m_postgreSQLCatalogSource = std::move(value); }
    inline CodeGenConfigurationNode& WithPostgreSQLCatalogSource(const PostgreSQLCatalogSource& value) { SetPostgreSQLCatalogSource(value); return *this;}
    inline CodeGenConfigurationNode& WithPostgreSQLCatalogSource(PostgreSQLCatalogSource&& value) { SetPostgreSQLCatalogSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses Microsoft SQL.</p>
     */
    inline const MicrosoftSQLServerCatalogTarget& GetMicrosoftSQLServerCatalogTarget() const{ return m_microsoftSQLServerCatalogTarget; }
    inline bool MicrosoftSQLServerCatalogTargetHasBeenSet() const { return m_microsoftSQLServerCatalogTargetHasBeenSet; }
    inline void SetMicrosoftSQLServerCatalogTarget(const MicrosoftSQLServerCatalogTarget& value) { m_microsoftSQLServerCatalogTargetHasBeenSet = true; m_microsoftSQLServerCatalogTarget = value; }
    inline void SetMicrosoftSQLServerCatalogTarget(MicrosoftSQLServerCatalogTarget&& value) { m_microsoftSQLServerCatalogTargetHasBeenSet = true; m_microsoftSQLServerCatalogTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithMicrosoftSQLServerCatalogTarget(const MicrosoftSQLServerCatalogTarget& value) { SetMicrosoftSQLServerCatalogTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithMicrosoftSQLServerCatalogTarget(MicrosoftSQLServerCatalogTarget&& value) { SetMicrosoftSQLServerCatalogTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses MySQL.</p>
     */
    inline const MySQLCatalogTarget& GetMySQLCatalogTarget() const{ return m_mySQLCatalogTarget; }
    inline bool MySQLCatalogTargetHasBeenSet() const { return m_mySQLCatalogTargetHasBeenSet; }
    inline void SetMySQLCatalogTarget(const MySQLCatalogTarget& value) { m_mySQLCatalogTargetHasBeenSet = true; m_mySQLCatalogTarget = value; }
    inline void SetMySQLCatalogTarget(MySQLCatalogTarget&& value) { m_mySQLCatalogTargetHasBeenSet = true; m_mySQLCatalogTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithMySQLCatalogTarget(const MySQLCatalogTarget& value) { SetMySQLCatalogTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithMySQLCatalogTarget(MySQLCatalogTarget&& value) { SetMySQLCatalogTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses Oracle SQL.</p>
     */
    inline const OracleSQLCatalogTarget& GetOracleSQLCatalogTarget() const{ return m_oracleSQLCatalogTarget; }
    inline bool OracleSQLCatalogTargetHasBeenSet() const { return m_oracleSQLCatalogTargetHasBeenSet; }
    inline void SetOracleSQLCatalogTarget(const OracleSQLCatalogTarget& value) { m_oracleSQLCatalogTargetHasBeenSet = true; m_oracleSQLCatalogTarget = value; }
    inline void SetOracleSQLCatalogTarget(OracleSQLCatalogTarget&& value) { m_oracleSQLCatalogTargetHasBeenSet = true; m_oracleSQLCatalogTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithOracleSQLCatalogTarget(const OracleSQLCatalogTarget& value) { SetOracleSQLCatalogTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithOracleSQLCatalogTarget(OracleSQLCatalogTarget&& value) { SetOracleSQLCatalogTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses Postgres SQL.</p>
     */
    inline const PostgreSQLCatalogTarget& GetPostgreSQLCatalogTarget() const{ return m_postgreSQLCatalogTarget; }
    inline bool PostgreSQLCatalogTargetHasBeenSet() const { return m_postgreSQLCatalogTargetHasBeenSet; }
    inline void SetPostgreSQLCatalogTarget(const PostgreSQLCatalogTarget& value) { m_postgreSQLCatalogTargetHasBeenSet = true; m_postgreSQLCatalogTarget = value; }
    inline void SetPostgreSQLCatalogTarget(PostgreSQLCatalogTarget&& value) { m_postgreSQLCatalogTargetHasBeenSet = true; m_postgreSQLCatalogTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithPostgreSQLCatalogTarget(const PostgreSQLCatalogTarget& value) { SetPostgreSQLCatalogTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithPostgreSQLCatalogTarget(PostgreSQLCatalogTarget&& value) { SetPostgreSQLCatalogTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a custom visual transform created by a user.</p>
     */
    inline const DynamicTransform& GetDynamicTransform() const{ return m_dynamicTransform; }
    inline bool DynamicTransformHasBeenSet() const { return m_dynamicTransformHasBeenSet; }
    inline void SetDynamicTransform(const DynamicTransform& value) { m_dynamicTransformHasBeenSet = true; m_dynamicTransform = value; }
    inline void SetDynamicTransform(DynamicTransform&& value) { m_dynamicTransformHasBeenSet = true; m_dynamicTransform = std::move(value); }
    inline CodeGenConfigurationNode& WithDynamicTransform(const DynamicTransform& value) { SetDynamicTransform(value); return *this;}
    inline CodeGenConfigurationNode& WithDynamicTransform(DynamicTransform&& value) { SetDynamicTransform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies your data quality evaluation criteria.</p>
     */
    inline const EvaluateDataQuality& GetEvaluateDataQuality() const{ return m_evaluateDataQuality; }
    inline bool EvaluateDataQualityHasBeenSet() const { return m_evaluateDataQualityHasBeenSet; }
    inline void SetEvaluateDataQuality(const EvaluateDataQuality& value) { m_evaluateDataQualityHasBeenSet = true; m_evaluateDataQuality = value; }
    inline void SetEvaluateDataQuality(EvaluateDataQuality&& value) { m_evaluateDataQualityHasBeenSet = true; m_evaluateDataQuality = std::move(value); }
    inline CodeGenConfigurationNode& WithEvaluateDataQuality(const EvaluateDataQuality& value) { SetEvaluateDataQuality(value); return *this;}
    inline CodeGenConfigurationNode& WithEvaluateDataQuality(EvaluateDataQuality&& value) { SetEvaluateDataQuality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Hudi data source that is registered in the Glue Data Catalog. The
     * data source must be stored in Amazon S3.</p>
     */
    inline const S3CatalogHudiSource& GetS3CatalogHudiSource() const{ return m_s3CatalogHudiSource; }
    inline bool S3CatalogHudiSourceHasBeenSet() const { return m_s3CatalogHudiSourceHasBeenSet; }
    inline void SetS3CatalogHudiSource(const S3CatalogHudiSource& value) { m_s3CatalogHudiSourceHasBeenSet = true; m_s3CatalogHudiSource = value; }
    inline void SetS3CatalogHudiSource(S3CatalogHudiSource&& value) { m_s3CatalogHudiSourceHasBeenSet = true; m_s3CatalogHudiSource = std::move(value); }
    inline CodeGenConfigurationNode& WithS3CatalogHudiSource(const S3CatalogHudiSource& value) { SetS3CatalogHudiSource(value); return *this;}
    inline CodeGenConfigurationNode& WithS3CatalogHudiSource(S3CatalogHudiSource&& value) { SetS3CatalogHudiSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Hudi data source that is registered in the Glue Data Catalog.</p>
     */
    inline const CatalogHudiSource& GetCatalogHudiSource() const{ return m_catalogHudiSource; }
    inline bool CatalogHudiSourceHasBeenSet() const { return m_catalogHudiSourceHasBeenSet; }
    inline void SetCatalogHudiSource(const CatalogHudiSource& value) { m_catalogHudiSourceHasBeenSet = true; m_catalogHudiSource = value; }
    inline void SetCatalogHudiSource(CatalogHudiSource&& value) { m_catalogHudiSourceHasBeenSet = true; m_catalogHudiSource = std::move(value); }
    inline CodeGenConfigurationNode& WithCatalogHudiSource(const CatalogHudiSource& value) { SetCatalogHudiSource(value); return *this;}
    inline CodeGenConfigurationNode& WithCatalogHudiSource(CatalogHudiSource&& value) { SetCatalogHudiSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Hudi data source stored in Amazon S3.</p>
     */
    inline const S3HudiSource& GetS3HudiSource() const{ return m_s3HudiSource; }
    inline bool S3HudiSourceHasBeenSet() const { return m_s3HudiSourceHasBeenSet; }
    inline void SetS3HudiSource(const S3HudiSource& value) { m_s3HudiSourceHasBeenSet = true; m_s3HudiSource = value; }
    inline void SetS3HudiSource(S3HudiSource&& value) { m_s3HudiSourceHasBeenSet = true; m_s3HudiSource = std::move(value); }
    inline CodeGenConfigurationNode& WithS3HudiSource(const S3HudiSource& value) { SetS3HudiSource(value); return *this;}
    inline CodeGenConfigurationNode& WithS3HudiSource(S3HudiSource&& value) { SetS3HudiSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a Hudi data source in the Glue Data
     * Catalog.</p>
     */
    inline const S3HudiCatalogTarget& GetS3HudiCatalogTarget() const{ return m_s3HudiCatalogTarget; }
    inline bool S3HudiCatalogTargetHasBeenSet() const { return m_s3HudiCatalogTargetHasBeenSet; }
    inline void SetS3HudiCatalogTarget(const S3HudiCatalogTarget& value) { m_s3HudiCatalogTargetHasBeenSet = true; m_s3HudiCatalogTarget = value; }
    inline void SetS3HudiCatalogTarget(S3HudiCatalogTarget&& value) { m_s3HudiCatalogTargetHasBeenSet = true; m_s3HudiCatalogTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithS3HudiCatalogTarget(const S3HudiCatalogTarget& value) { SetS3HudiCatalogTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithS3HudiCatalogTarget(S3HudiCatalogTarget&& value) { SetS3HudiCatalogTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a Hudi data source in Amazon S3.</p>
     */
    inline const S3HudiDirectTarget& GetS3HudiDirectTarget() const{ return m_s3HudiDirectTarget; }
    inline bool S3HudiDirectTargetHasBeenSet() const { return m_s3HudiDirectTargetHasBeenSet; }
    inline void SetS3HudiDirectTarget(const S3HudiDirectTarget& value) { m_s3HudiDirectTargetHasBeenSet = true; m_s3HudiDirectTarget = value; }
    inline void SetS3HudiDirectTarget(S3HudiDirectTarget&& value) { m_s3HudiDirectTargetHasBeenSet = true; m_s3HudiDirectTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithS3HudiDirectTarget(const S3HudiDirectTarget& value) { SetS3HudiDirectTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithS3HudiDirectTarget(S3HudiDirectTarget&& value) { SetS3HudiDirectTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DirectJDBCSource& GetDirectJDBCSource() const{ return m_directJDBCSource; }
    inline bool DirectJDBCSourceHasBeenSet() const { return m_directJDBCSourceHasBeenSet; }
    inline void SetDirectJDBCSource(const DirectJDBCSource& value) { m_directJDBCSourceHasBeenSet = true; m_directJDBCSource = value; }
    inline void SetDirectJDBCSource(DirectJDBCSource&& value) { m_directJDBCSourceHasBeenSet = true; m_directJDBCSource = std::move(value); }
    inline CodeGenConfigurationNode& WithDirectJDBCSource(const DirectJDBCSource& value) { SetDirectJDBCSource(value); return *this;}
    inline CodeGenConfigurationNode& WithDirectJDBCSource(DirectJDBCSource&& value) { SetDirectJDBCSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Delta Lake data source that is registered in the Glue Data
     * Catalog. The data source must be stored in Amazon S3.</p>
     */
    inline const S3CatalogDeltaSource& GetS3CatalogDeltaSource() const{ return m_s3CatalogDeltaSource; }
    inline bool S3CatalogDeltaSourceHasBeenSet() const { return m_s3CatalogDeltaSourceHasBeenSet; }
    inline void SetS3CatalogDeltaSource(const S3CatalogDeltaSource& value) { m_s3CatalogDeltaSourceHasBeenSet = true; m_s3CatalogDeltaSource = value; }
    inline void SetS3CatalogDeltaSource(S3CatalogDeltaSource&& value) { m_s3CatalogDeltaSourceHasBeenSet = true; m_s3CatalogDeltaSource = std::move(value); }
    inline CodeGenConfigurationNode& WithS3CatalogDeltaSource(const S3CatalogDeltaSource& value) { SetS3CatalogDeltaSource(value); return *this;}
    inline CodeGenConfigurationNode& WithS3CatalogDeltaSource(S3CatalogDeltaSource&& value) { SetS3CatalogDeltaSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Delta Lake data source that is registered in the Glue Data
     * Catalog.</p>
     */
    inline const CatalogDeltaSource& GetCatalogDeltaSource() const{ return m_catalogDeltaSource; }
    inline bool CatalogDeltaSourceHasBeenSet() const { return m_catalogDeltaSourceHasBeenSet; }
    inline void SetCatalogDeltaSource(const CatalogDeltaSource& value) { m_catalogDeltaSourceHasBeenSet = true; m_catalogDeltaSource = value; }
    inline void SetCatalogDeltaSource(CatalogDeltaSource&& value) { m_catalogDeltaSourceHasBeenSet = true; m_catalogDeltaSource = std::move(value); }
    inline CodeGenConfigurationNode& WithCatalogDeltaSource(const CatalogDeltaSource& value) { SetCatalogDeltaSource(value); return *this;}
    inline CodeGenConfigurationNode& WithCatalogDeltaSource(CatalogDeltaSource&& value) { SetCatalogDeltaSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Delta Lake data source stored in Amazon S3.</p>
     */
    inline const S3DeltaSource& GetS3DeltaSource() const{ return m_s3DeltaSource; }
    inline bool S3DeltaSourceHasBeenSet() const { return m_s3DeltaSourceHasBeenSet; }
    inline void SetS3DeltaSource(const S3DeltaSource& value) { m_s3DeltaSourceHasBeenSet = true; m_s3DeltaSource = value; }
    inline void SetS3DeltaSource(S3DeltaSource&& value) { m_s3DeltaSourceHasBeenSet = true; m_s3DeltaSource = std::move(value); }
    inline CodeGenConfigurationNode& WithS3DeltaSource(const S3DeltaSource& value) { SetS3DeltaSource(value); return *this;}
    inline CodeGenConfigurationNode& WithS3DeltaSource(S3DeltaSource&& value) { SetS3DeltaSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a Delta Lake data source in the Glue Data
     * Catalog.</p>
     */
    inline const S3DeltaCatalogTarget& GetS3DeltaCatalogTarget() const{ return m_s3DeltaCatalogTarget; }
    inline bool S3DeltaCatalogTargetHasBeenSet() const { return m_s3DeltaCatalogTargetHasBeenSet; }
    inline void SetS3DeltaCatalogTarget(const S3DeltaCatalogTarget& value) { m_s3DeltaCatalogTargetHasBeenSet = true; m_s3DeltaCatalogTarget = value; }
    inline void SetS3DeltaCatalogTarget(S3DeltaCatalogTarget&& value) { m_s3DeltaCatalogTargetHasBeenSet = true; m_s3DeltaCatalogTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithS3DeltaCatalogTarget(const S3DeltaCatalogTarget& value) { SetS3DeltaCatalogTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithS3DeltaCatalogTarget(S3DeltaCatalogTarget&& value) { SetS3DeltaCatalogTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a Delta Lake data source in Amazon S3.</p>
     */
    inline const S3DeltaDirectTarget& GetS3DeltaDirectTarget() const{ return m_s3DeltaDirectTarget; }
    inline bool S3DeltaDirectTargetHasBeenSet() const { return m_s3DeltaDirectTargetHasBeenSet; }
    inline void SetS3DeltaDirectTarget(const S3DeltaDirectTarget& value) { m_s3DeltaDirectTargetHasBeenSet = true; m_s3DeltaDirectTarget = value; }
    inline void SetS3DeltaDirectTarget(S3DeltaDirectTarget&& value) { m_s3DeltaDirectTargetHasBeenSet = true; m_s3DeltaDirectTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithS3DeltaDirectTarget(const S3DeltaDirectTarget& value) { SetS3DeltaDirectTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithS3DeltaDirectTarget(S3DeltaDirectTarget&& value) { SetS3DeltaDirectTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a data source in Amazon Redshift.</p>
     */
    inline const AmazonRedshiftSource& GetAmazonRedshiftSource() const{ return m_amazonRedshiftSource; }
    inline bool AmazonRedshiftSourceHasBeenSet() const { return m_amazonRedshiftSourceHasBeenSet; }
    inline void SetAmazonRedshiftSource(const AmazonRedshiftSource& value) { m_amazonRedshiftSourceHasBeenSet = true; m_amazonRedshiftSource = value; }
    inline void SetAmazonRedshiftSource(AmazonRedshiftSource&& value) { m_amazonRedshiftSourceHasBeenSet = true; m_amazonRedshiftSource = std::move(value); }
    inline CodeGenConfigurationNode& WithAmazonRedshiftSource(const AmazonRedshiftSource& value) { SetAmazonRedshiftSource(value); return *this;}
    inline CodeGenConfigurationNode& WithAmazonRedshiftSource(AmazonRedshiftSource&& value) { SetAmazonRedshiftSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a data target in Amazon Redshift.</p>
     */
    inline const AmazonRedshiftTarget& GetAmazonRedshiftTarget() const{ return m_amazonRedshiftTarget; }
    inline bool AmazonRedshiftTargetHasBeenSet() const { return m_amazonRedshiftTargetHasBeenSet; }
    inline void SetAmazonRedshiftTarget(const AmazonRedshiftTarget& value) { m_amazonRedshiftTargetHasBeenSet = true; m_amazonRedshiftTarget = value; }
    inline void SetAmazonRedshiftTarget(AmazonRedshiftTarget&& value) { m_amazonRedshiftTargetHasBeenSet = true; m_amazonRedshiftTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithAmazonRedshiftTarget(const AmazonRedshiftTarget& value) { SetAmazonRedshiftTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithAmazonRedshiftTarget(AmazonRedshiftTarget&& value) { SetAmazonRedshiftTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies your data quality evaluation criteria. Allows multiple input data
     * and returns a collection of Dynamic Frames.</p>
     */
    inline const EvaluateDataQualityMultiFrame& GetEvaluateDataQualityMultiFrame() const{ return m_evaluateDataQualityMultiFrame; }
    inline bool EvaluateDataQualityMultiFrameHasBeenSet() const { return m_evaluateDataQualityMultiFrameHasBeenSet; }
    inline void SetEvaluateDataQualityMultiFrame(const EvaluateDataQualityMultiFrame& value) { m_evaluateDataQualityMultiFrameHasBeenSet = true; m_evaluateDataQualityMultiFrame = value; }
    inline void SetEvaluateDataQualityMultiFrame(EvaluateDataQualityMultiFrame&& value) { m_evaluateDataQualityMultiFrameHasBeenSet = true; m_evaluateDataQualityMultiFrame = std::move(value); }
    inline CodeGenConfigurationNode& WithEvaluateDataQualityMultiFrame(const EvaluateDataQualityMultiFrame& value) { SetEvaluateDataQualityMultiFrame(value); return *this;}
    inline CodeGenConfigurationNode& WithEvaluateDataQualityMultiFrame(EvaluateDataQualityMultiFrame&& value) { SetEvaluateDataQualityMultiFrame(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Glue DataBrew recipe node.</p>
     */
    inline const Recipe& GetRecipe() const{ return m_recipe; }
    inline bool RecipeHasBeenSet() const { return m_recipeHasBeenSet; }
    inline void SetRecipe(const Recipe& value) { m_recipeHasBeenSet = true; m_recipe = value; }
    inline void SetRecipe(Recipe&& value) { m_recipeHasBeenSet = true; m_recipe = std::move(value); }
    inline CodeGenConfigurationNode& WithRecipe(const Recipe& value) { SetRecipe(value); return *this;}
    inline CodeGenConfigurationNode& WithRecipe(Recipe&& value) { SetRecipe(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Snowflake data source.</p>
     */
    inline const SnowflakeSource& GetSnowflakeSource() const{ return m_snowflakeSource; }
    inline bool SnowflakeSourceHasBeenSet() const { return m_snowflakeSourceHasBeenSet; }
    inline void SetSnowflakeSource(const SnowflakeSource& value) { m_snowflakeSourceHasBeenSet = true; m_snowflakeSource = value; }
    inline void SetSnowflakeSource(SnowflakeSource&& value) { m_snowflakeSourceHasBeenSet = true; m_snowflakeSource = std::move(value); }
    inline CodeGenConfigurationNode& WithSnowflakeSource(const SnowflakeSource& value) { SetSnowflakeSource(value); return *this;}
    inline CodeGenConfigurationNode& WithSnowflakeSource(SnowflakeSource&& value) { SetSnowflakeSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a Snowflake data source.</p>
     */
    inline const SnowflakeTarget& GetSnowflakeTarget() const{ return m_snowflakeTarget; }
    inline bool SnowflakeTargetHasBeenSet() const { return m_snowflakeTargetHasBeenSet; }
    inline void SetSnowflakeTarget(const SnowflakeTarget& value) { m_snowflakeTargetHasBeenSet = true; m_snowflakeTarget = value; }
    inline void SetSnowflakeTarget(SnowflakeTarget&& value) { m_snowflakeTargetHasBeenSet = true; m_snowflakeTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithSnowflakeTarget(const SnowflakeTarget& value) { SetSnowflakeTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithSnowflakeTarget(SnowflakeTarget&& value) { SetSnowflakeTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a source generated with standard connection options.</p>
     */
    inline const ConnectorDataSource& GetConnectorDataSource() const{ return m_connectorDataSource; }
    inline bool ConnectorDataSourceHasBeenSet() const { return m_connectorDataSourceHasBeenSet; }
    inline void SetConnectorDataSource(const ConnectorDataSource& value) { m_connectorDataSourceHasBeenSet = true; m_connectorDataSource = value; }
    inline void SetConnectorDataSource(ConnectorDataSource&& value) { m_connectorDataSourceHasBeenSet = true; m_connectorDataSource = std::move(value); }
    inline CodeGenConfigurationNode& WithConnectorDataSource(const ConnectorDataSource& value) { SetConnectorDataSource(value); return *this;}
    inline CodeGenConfigurationNode& WithConnectorDataSource(ConnectorDataSource&& value) { SetConnectorDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target generated with standard connection options.</p>
     */
    inline const ConnectorDataTarget& GetConnectorDataTarget() const{ return m_connectorDataTarget; }
    inline bool ConnectorDataTargetHasBeenSet() const { return m_connectorDataTargetHasBeenSet; }
    inline void SetConnectorDataTarget(const ConnectorDataTarget& value) { m_connectorDataTargetHasBeenSet = true; m_connectorDataTarget = value; }
    inline void SetConnectorDataTarget(ConnectorDataTarget&& value) { m_connectorDataTargetHasBeenSet = true; m_connectorDataTarget = std::move(value); }
    inline CodeGenConfigurationNode& WithConnectorDataTarget(const ConnectorDataTarget& value) { SetConnectorDataTarget(value); return *this;}
    inline CodeGenConfigurationNode& WithConnectorDataTarget(ConnectorDataTarget&& value) { SetConnectorDataTarget(std::move(value)); return *this;}
    ///@}
  private:

    AthenaConnectorSource m_athenaConnectorSource;
    bool m_athenaConnectorSourceHasBeenSet = false;

    JDBCConnectorSource m_jDBCConnectorSource;
    bool m_jDBCConnectorSourceHasBeenSet = false;

    SparkConnectorSource m_sparkConnectorSource;
    bool m_sparkConnectorSourceHasBeenSet = false;

    CatalogSource m_catalogSource;
    bool m_catalogSourceHasBeenSet = false;

    RedshiftSource m_redshiftSource;
    bool m_redshiftSourceHasBeenSet = false;

    S3CatalogSource m_s3CatalogSource;
    bool m_s3CatalogSourceHasBeenSet = false;

    S3CsvSource m_s3CsvSource;
    bool m_s3CsvSourceHasBeenSet = false;

    S3JsonSource m_s3JsonSource;
    bool m_s3JsonSourceHasBeenSet = false;

    S3ParquetSource m_s3ParquetSource;
    bool m_s3ParquetSourceHasBeenSet = false;

    RelationalCatalogSource m_relationalCatalogSource;
    bool m_relationalCatalogSourceHasBeenSet = false;

    DynamoDBCatalogSource m_dynamoDBCatalogSource;
    bool m_dynamoDBCatalogSourceHasBeenSet = false;

    JDBCConnectorTarget m_jDBCConnectorTarget;
    bool m_jDBCConnectorTargetHasBeenSet = false;

    SparkConnectorTarget m_sparkConnectorTarget;
    bool m_sparkConnectorTargetHasBeenSet = false;

    BasicCatalogTarget m_catalogTarget;
    bool m_catalogTargetHasBeenSet = false;

    RedshiftTarget m_redshiftTarget;
    bool m_redshiftTargetHasBeenSet = false;

    S3CatalogTarget m_s3CatalogTarget;
    bool m_s3CatalogTargetHasBeenSet = false;

    S3GlueParquetTarget m_s3GlueParquetTarget;
    bool m_s3GlueParquetTargetHasBeenSet = false;

    S3DirectTarget m_s3DirectTarget;
    bool m_s3DirectTargetHasBeenSet = false;

    ApplyMapping m_applyMapping;
    bool m_applyMappingHasBeenSet = false;

    SelectFields m_selectFields;
    bool m_selectFieldsHasBeenSet = false;

    DropFields m_dropFields;
    bool m_dropFieldsHasBeenSet = false;

    RenameField m_renameField;
    bool m_renameFieldHasBeenSet = false;

    Spigot m_spigot;
    bool m_spigotHasBeenSet = false;

    Join m_join;
    bool m_joinHasBeenSet = false;

    SplitFields m_splitFields;
    bool m_splitFieldsHasBeenSet = false;

    SelectFromCollection m_selectFromCollection;
    bool m_selectFromCollectionHasBeenSet = false;

    FillMissingValues m_fillMissingValues;
    bool m_fillMissingValuesHasBeenSet = false;

    Filter m_filter;
    bool m_filterHasBeenSet = false;

    CustomCode m_customCode;
    bool m_customCodeHasBeenSet = false;

    SparkSQL m_sparkSQL;
    bool m_sparkSQLHasBeenSet = false;

    DirectKinesisSource m_directKinesisSource;
    bool m_directKinesisSourceHasBeenSet = false;

    DirectKafkaSource m_directKafkaSource;
    bool m_directKafkaSourceHasBeenSet = false;

    CatalogKinesisSource m_catalogKinesisSource;
    bool m_catalogKinesisSourceHasBeenSet = false;

    CatalogKafkaSource m_catalogKafkaSource;
    bool m_catalogKafkaSourceHasBeenSet = false;

    DropNullFields m_dropNullFields;
    bool m_dropNullFieldsHasBeenSet = false;

    Merge m_merge;
    bool m_mergeHasBeenSet = false;

    Union m_union;
    bool m_unionHasBeenSet = false;

    PIIDetection m_pIIDetection;
    bool m_pIIDetectionHasBeenSet = false;

    Aggregate m_aggregate;
    bool m_aggregateHasBeenSet = false;

    DropDuplicates m_dropDuplicates;
    bool m_dropDuplicatesHasBeenSet = false;

    GovernedCatalogTarget m_governedCatalogTarget;
    bool m_governedCatalogTargetHasBeenSet = false;

    GovernedCatalogSource m_governedCatalogSource;
    bool m_governedCatalogSourceHasBeenSet = false;

    MicrosoftSQLServerCatalogSource m_microsoftSQLServerCatalogSource;
    bool m_microsoftSQLServerCatalogSourceHasBeenSet = false;

    MySQLCatalogSource m_mySQLCatalogSource;
    bool m_mySQLCatalogSourceHasBeenSet = false;

    OracleSQLCatalogSource m_oracleSQLCatalogSource;
    bool m_oracleSQLCatalogSourceHasBeenSet = false;

    PostgreSQLCatalogSource m_postgreSQLCatalogSource;
    bool m_postgreSQLCatalogSourceHasBeenSet = false;

    MicrosoftSQLServerCatalogTarget m_microsoftSQLServerCatalogTarget;
    bool m_microsoftSQLServerCatalogTargetHasBeenSet = false;

    MySQLCatalogTarget m_mySQLCatalogTarget;
    bool m_mySQLCatalogTargetHasBeenSet = false;

    OracleSQLCatalogTarget m_oracleSQLCatalogTarget;
    bool m_oracleSQLCatalogTargetHasBeenSet = false;

    PostgreSQLCatalogTarget m_postgreSQLCatalogTarget;
    bool m_postgreSQLCatalogTargetHasBeenSet = false;

    DynamicTransform m_dynamicTransform;
    bool m_dynamicTransformHasBeenSet = false;

    EvaluateDataQuality m_evaluateDataQuality;
    bool m_evaluateDataQualityHasBeenSet = false;

    S3CatalogHudiSource m_s3CatalogHudiSource;
    bool m_s3CatalogHudiSourceHasBeenSet = false;

    CatalogHudiSource m_catalogHudiSource;
    bool m_catalogHudiSourceHasBeenSet = false;

    S3HudiSource m_s3HudiSource;
    bool m_s3HudiSourceHasBeenSet = false;

    S3HudiCatalogTarget m_s3HudiCatalogTarget;
    bool m_s3HudiCatalogTargetHasBeenSet = false;

    S3HudiDirectTarget m_s3HudiDirectTarget;
    bool m_s3HudiDirectTargetHasBeenSet = false;

    DirectJDBCSource m_directJDBCSource;
    bool m_directJDBCSourceHasBeenSet = false;

    S3CatalogDeltaSource m_s3CatalogDeltaSource;
    bool m_s3CatalogDeltaSourceHasBeenSet = false;

    CatalogDeltaSource m_catalogDeltaSource;
    bool m_catalogDeltaSourceHasBeenSet = false;

    S3DeltaSource m_s3DeltaSource;
    bool m_s3DeltaSourceHasBeenSet = false;

    S3DeltaCatalogTarget m_s3DeltaCatalogTarget;
    bool m_s3DeltaCatalogTargetHasBeenSet = false;

    S3DeltaDirectTarget m_s3DeltaDirectTarget;
    bool m_s3DeltaDirectTargetHasBeenSet = false;

    AmazonRedshiftSource m_amazonRedshiftSource;
    bool m_amazonRedshiftSourceHasBeenSet = false;

    AmazonRedshiftTarget m_amazonRedshiftTarget;
    bool m_amazonRedshiftTargetHasBeenSet = false;

    EvaluateDataQualityMultiFrame m_evaluateDataQualityMultiFrame;
    bool m_evaluateDataQualityMultiFrameHasBeenSet = false;

    Recipe m_recipe;
    bool m_recipeHasBeenSet = false;

    SnowflakeSource m_snowflakeSource;
    bool m_snowflakeSourceHasBeenSet = false;

    SnowflakeTarget m_snowflakeTarget;
    bool m_snowflakeTargetHasBeenSet = false;

    ConnectorDataSource m_connectorDataSource;
    bool m_connectorDataSourceHasBeenSet = false;

    ConnectorDataTarget m_connectorDataTarget;
    bool m_connectorDataTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
