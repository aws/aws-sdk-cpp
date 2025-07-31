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
#include <aws/glue/model/Route.h>
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
#include <aws/glue/model/S3CatalogIcebergSource.h>
#include <aws/glue/model/CatalogIcebergSource.h>
#include <aws/glue/model/S3IcebergCatalogTarget.h>
#include <aws/glue/model/S3IcebergDirectTarget.h>
#include <aws/glue/model/S3ExcelSource.h>
#include <aws/glue/model/S3HyperDirectTarget.h>
#include <aws/glue/model/DynamoDBELTConnectorSource.h>
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
    AWS_GLUE_API CodeGenConfigurationNode() = default;
    AWS_GLUE_API CodeGenConfigurationNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CodeGenConfigurationNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a connector to an Amazon Athena data source.</p>
     */
    inline const AthenaConnectorSource& GetAthenaConnectorSource() const { return m_athenaConnectorSource; }
    inline bool AthenaConnectorSourceHasBeenSet() const { return m_athenaConnectorSourceHasBeenSet; }
    template<typename AthenaConnectorSourceT = AthenaConnectorSource>
    void SetAthenaConnectorSource(AthenaConnectorSourceT&& value) { m_athenaConnectorSourceHasBeenSet = true; m_athenaConnectorSource = std::forward<AthenaConnectorSourceT>(value); }
    template<typename AthenaConnectorSourceT = AthenaConnectorSource>
    CodeGenConfigurationNode& WithAthenaConnectorSource(AthenaConnectorSourceT&& value) { SetAthenaConnectorSource(std::forward<AthenaConnectorSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a connector to a JDBC data source.</p>
     */
    inline const JDBCConnectorSource& GetJDBCConnectorSource() const { return m_jDBCConnectorSource; }
    inline bool JDBCConnectorSourceHasBeenSet() const { return m_jDBCConnectorSourceHasBeenSet; }
    template<typename JDBCConnectorSourceT = JDBCConnectorSource>
    void SetJDBCConnectorSource(JDBCConnectorSourceT&& value) { m_jDBCConnectorSourceHasBeenSet = true; m_jDBCConnectorSource = std::forward<JDBCConnectorSourceT>(value); }
    template<typename JDBCConnectorSourceT = JDBCConnectorSource>
    CodeGenConfigurationNode& WithJDBCConnectorSource(JDBCConnectorSourceT&& value) { SetJDBCConnectorSource(std::forward<JDBCConnectorSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a connector to an Apache Spark data source.</p>
     */
    inline const SparkConnectorSource& GetSparkConnectorSource() const { return m_sparkConnectorSource; }
    inline bool SparkConnectorSourceHasBeenSet() const { return m_sparkConnectorSourceHasBeenSet; }
    template<typename SparkConnectorSourceT = SparkConnectorSource>
    void SetSparkConnectorSource(SparkConnectorSourceT&& value) { m_sparkConnectorSourceHasBeenSet = true; m_sparkConnectorSource = std::forward<SparkConnectorSourceT>(value); }
    template<typename SparkConnectorSourceT = SparkConnectorSource>
    CodeGenConfigurationNode& WithSparkConnectorSource(SparkConnectorSourceT&& value) { SetSparkConnectorSource(std::forward<SparkConnectorSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data store in the Glue Data Catalog.</p>
     */
    inline const CatalogSource& GetCatalogSource() const { return m_catalogSource; }
    inline bool CatalogSourceHasBeenSet() const { return m_catalogSourceHasBeenSet; }
    template<typename CatalogSourceT = CatalogSource>
    void SetCatalogSource(CatalogSourceT&& value) { m_catalogSourceHasBeenSet = true; m_catalogSource = std::forward<CatalogSourceT>(value); }
    template<typename CatalogSourceT = CatalogSource>
    CodeGenConfigurationNode& WithCatalogSource(CatalogSourceT&& value) { SetCatalogSource(std::forward<CatalogSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Amazon Redshift data store.</p>
     */
    inline const RedshiftSource& GetRedshiftSource() const { return m_redshiftSource; }
    inline bool RedshiftSourceHasBeenSet() const { return m_redshiftSourceHasBeenSet; }
    template<typename RedshiftSourceT = RedshiftSource>
    void SetRedshiftSource(RedshiftSourceT&& value) { m_redshiftSourceHasBeenSet = true; m_redshiftSource = std::forward<RedshiftSourceT>(value); }
    template<typename RedshiftSourceT = RedshiftSource>
    CodeGenConfigurationNode& WithRedshiftSource(RedshiftSourceT&& value) { SetRedshiftSource(std::forward<RedshiftSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Amazon S3 data store in the Glue Data Catalog.</p>
     */
    inline const S3CatalogSource& GetS3CatalogSource() const { return m_s3CatalogSource; }
    inline bool S3CatalogSourceHasBeenSet() const { return m_s3CatalogSourceHasBeenSet; }
    template<typename S3CatalogSourceT = S3CatalogSource>
    void SetS3CatalogSource(S3CatalogSourceT&& value) { m_s3CatalogSourceHasBeenSet = true; m_s3CatalogSource = std::forward<S3CatalogSourceT>(value); }
    template<typename S3CatalogSourceT = S3CatalogSource>
    CodeGenConfigurationNode& WithS3CatalogSource(S3CatalogSourceT&& value) { SetS3CatalogSource(std::forward<S3CatalogSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a command-separated value (CSV) data store stored in Amazon S3.</p>
     */
    inline const S3CsvSource& GetS3CsvSource() const { return m_s3CsvSource; }
    inline bool S3CsvSourceHasBeenSet() const { return m_s3CsvSourceHasBeenSet; }
    template<typename S3CsvSourceT = S3CsvSource>
    void SetS3CsvSource(S3CsvSourceT&& value) { m_s3CsvSourceHasBeenSet = true; m_s3CsvSource = std::forward<S3CsvSourceT>(value); }
    template<typename S3CsvSourceT = S3CsvSource>
    CodeGenConfigurationNode& WithS3CsvSource(S3CsvSourceT&& value) { SetS3CsvSource(std::forward<S3CsvSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a JSON data store stored in Amazon S3.</p>
     */
    inline const S3JsonSource& GetS3JsonSource() const { return m_s3JsonSource; }
    inline bool S3JsonSourceHasBeenSet() const { return m_s3JsonSourceHasBeenSet; }
    template<typename S3JsonSourceT = S3JsonSource>
    void SetS3JsonSource(S3JsonSourceT&& value) { m_s3JsonSourceHasBeenSet = true; m_s3JsonSource = std::forward<S3JsonSourceT>(value); }
    template<typename S3JsonSourceT = S3JsonSource>
    CodeGenConfigurationNode& WithS3JsonSource(S3JsonSourceT&& value) { SetS3JsonSource(std::forward<S3JsonSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Apache Parquet data store stored in Amazon S3.</p>
     */
    inline const S3ParquetSource& GetS3ParquetSource() const { return m_s3ParquetSource; }
    inline bool S3ParquetSourceHasBeenSet() const { return m_s3ParquetSourceHasBeenSet; }
    template<typename S3ParquetSourceT = S3ParquetSource>
    void SetS3ParquetSource(S3ParquetSourceT&& value) { m_s3ParquetSourceHasBeenSet = true; m_s3ParquetSource = std::forward<S3ParquetSourceT>(value); }
    template<typename S3ParquetSourceT = S3ParquetSource>
    CodeGenConfigurationNode& WithS3ParquetSource(S3ParquetSourceT&& value) { SetS3ParquetSource(std::forward<S3ParquetSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a relational catalog data store in the Glue Data Catalog.</p>
     */
    inline const RelationalCatalogSource& GetRelationalCatalogSource() const { return m_relationalCatalogSource; }
    inline bool RelationalCatalogSourceHasBeenSet() const { return m_relationalCatalogSourceHasBeenSet; }
    template<typename RelationalCatalogSourceT = RelationalCatalogSource>
    void SetRelationalCatalogSource(RelationalCatalogSourceT&& value) { m_relationalCatalogSourceHasBeenSet = true; m_relationalCatalogSource = std::forward<RelationalCatalogSourceT>(value); }
    template<typename RelationalCatalogSourceT = RelationalCatalogSource>
    CodeGenConfigurationNode& WithRelationalCatalogSource(RelationalCatalogSourceT&& value) { SetRelationalCatalogSource(std::forward<RelationalCatalogSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a DynamoDBC Catalog data store in the Glue Data Catalog.</p>
     */
    inline const DynamoDBCatalogSource& GetDynamoDBCatalogSource() const { return m_dynamoDBCatalogSource; }
    inline bool DynamoDBCatalogSourceHasBeenSet() const { return m_dynamoDBCatalogSourceHasBeenSet; }
    template<typename DynamoDBCatalogSourceT = DynamoDBCatalogSource>
    void SetDynamoDBCatalogSource(DynamoDBCatalogSourceT&& value) { m_dynamoDBCatalogSourceHasBeenSet = true; m_dynamoDBCatalogSource = std::forward<DynamoDBCatalogSourceT>(value); }
    template<typename DynamoDBCatalogSourceT = DynamoDBCatalogSource>
    CodeGenConfigurationNode& WithDynamoDBCatalogSource(DynamoDBCatalogSourceT&& value) { SetDynamoDBCatalogSource(std::forward<DynamoDBCatalogSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data target that writes to Amazon S3 in Apache Parquet columnar
     * storage.</p>
     */
    inline const JDBCConnectorTarget& GetJDBCConnectorTarget() const { return m_jDBCConnectorTarget; }
    inline bool JDBCConnectorTargetHasBeenSet() const { return m_jDBCConnectorTargetHasBeenSet; }
    template<typename JDBCConnectorTargetT = JDBCConnectorTarget>
    void SetJDBCConnectorTarget(JDBCConnectorTargetT&& value) { m_jDBCConnectorTargetHasBeenSet = true; m_jDBCConnectorTarget = std::forward<JDBCConnectorTargetT>(value); }
    template<typename JDBCConnectorTargetT = JDBCConnectorTarget>
    CodeGenConfigurationNode& WithJDBCConnectorTarget(JDBCConnectorTargetT&& value) { SetJDBCConnectorTarget(std::forward<JDBCConnectorTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses an Apache Spark connector.</p>
     */
    inline const SparkConnectorTarget& GetSparkConnectorTarget() const { return m_sparkConnectorTarget; }
    inline bool SparkConnectorTargetHasBeenSet() const { return m_sparkConnectorTargetHasBeenSet; }
    template<typename SparkConnectorTargetT = SparkConnectorTarget>
    void SetSparkConnectorTarget(SparkConnectorTargetT&& value) { m_sparkConnectorTargetHasBeenSet = true; m_sparkConnectorTarget = std::forward<SparkConnectorTargetT>(value); }
    template<typename SparkConnectorTargetT = SparkConnectorTarget>
    CodeGenConfigurationNode& WithSparkConnectorTarget(SparkConnectorTargetT&& value) { SetSparkConnectorTarget(std::forward<SparkConnectorTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses a Glue Data Catalog table.</p>
     */
    inline const BasicCatalogTarget& GetCatalogTarget() const { return m_catalogTarget; }
    inline bool CatalogTargetHasBeenSet() const { return m_catalogTargetHasBeenSet; }
    template<typename CatalogTargetT = BasicCatalogTarget>
    void SetCatalogTarget(CatalogTargetT&& value) { m_catalogTargetHasBeenSet = true; m_catalogTarget = std::forward<CatalogTargetT>(value); }
    template<typename CatalogTargetT = BasicCatalogTarget>
    CodeGenConfigurationNode& WithCatalogTarget(CatalogTargetT&& value) { SetCatalogTarget(std::forward<CatalogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses Amazon Redshift.</p>
     */
    inline const RedshiftTarget& GetRedshiftTarget() const { return m_redshiftTarget; }
    inline bool RedshiftTargetHasBeenSet() const { return m_redshiftTargetHasBeenSet; }
    template<typename RedshiftTargetT = RedshiftTarget>
    void SetRedshiftTarget(RedshiftTargetT&& value) { m_redshiftTargetHasBeenSet = true; m_redshiftTarget = std::forward<RedshiftTargetT>(value); }
    template<typename RedshiftTargetT = RedshiftTarget>
    CodeGenConfigurationNode& WithRedshiftTarget(RedshiftTargetT&& value) { SetRedshiftTarget(std::forward<RedshiftTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data target that writes to Amazon S3 using the Glue Data
     * Catalog.</p>
     */
    inline const S3CatalogTarget& GetS3CatalogTarget() const { return m_s3CatalogTarget; }
    inline bool S3CatalogTargetHasBeenSet() const { return m_s3CatalogTargetHasBeenSet; }
    template<typename S3CatalogTargetT = S3CatalogTarget>
    void SetS3CatalogTarget(S3CatalogTargetT&& value) { m_s3CatalogTargetHasBeenSet = true; m_s3CatalogTarget = std::forward<S3CatalogTargetT>(value); }
    template<typename S3CatalogTargetT = S3CatalogTarget>
    CodeGenConfigurationNode& WithS3CatalogTarget(S3CatalogTargetT&& value) { SetS3CatalogTarget(std::forward<S3CatalogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data target that writes to Amazon S3 in Apache Parquet columnar
     * storage.</p>
     */
    inline const S3GlueParquetTarget& GetS3GlueParquetTarget() const { return m_s3GlueParquetTarget; }
    inline bool S3GlueParquetTargetHasBeenSet() const { return m_s3GlueParquetTargetHasBeenSet; }
    template<typename S3GlueParquetTargetT = S3GlueParquetTarget>
    void SetS3GlueParquetTarget(S3GlueParquetTargetT&& value) { m_s3GlueParquetTargetHasBeenSet = true; m_s3GlueParquetTarget = std::forward<S3GlueParquetTargetT>(value); }
    template<typename S3GlueParquetTargetT = S3GlueParquetTarget>
    CodeGenConfigurationNode& WithS3GlueParquetTarget(S3GlueParquetTargetT&& value) { SetS3GlueParquetTarget(std::forward<S3GlueParquetTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data target that writes to Amazon S3.</p>
     */
    inline const S3DirectTarget& GetS3DirectTarget() const { return m_s3DirectTarget; }
    inline bool S3DirectTargetHasBeenSet() const { return m_s3DirectTargetHasBeenSet; }
    template<typename S3DirectTargetT = S3DirectTarget>
    void SetS3DirectTarget(S3DirectTargetT&& value) { m_s3DirectTargetHasBeenSet = true; m_s3DirectTarget = std::forward<S3DirectTargetT>(value); }
    template<typename S3DirectTargetT = S3DirectTarget>
    CodeGenConfigurationNode& WithS3DirectTarget(S3DirectTargetT&& value) { SetS3DirectTarget(std::forward<S3DirectTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that maps data property keys in the data source to data
     * property keys in the data target. You can rename keys, modify the data types for
     * keys, and choose which keys to drop from the dataset.</p>
     */
    inline const ApplyMapping& GetApplyMapping() const { return m_applyMapping; }
    inline bool ApplyMappingHasBeenSet() const { return m_applyMappingHasBeenSet; }
    template<typename ApplyMappingT = ApplyMapping>
    void SetApplyMapping(ApplyMappingT&& value) { m_applyMappingHasBeenSet = true; m_applyMapping = std::forward<ApplyMappingT>(value); }
    template<typename ApplyMappingT = ApplyMapping>
    CodeGenConfigurationNode& WithApplyMapping(ApplyMappingT&& value) { SetApplyMapping(std::forward<ApplyMappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that chooses the data property keys that you want to
     * keep.</p>
     */
    inline const SelectFields& GetSelectFields() const { return m_selectFields; }
    inline bool SelectFieldsHasBeenSet() const { return m_selectFieldsHasBeenSet; }
    template<typename SelectFieldsT = SelectFields>
    void SetSelectFields(SelectFieldsT&& value) { m_selectFieldsHasBeenSet = true; m_selectFields = std::forward<SelectFieldsT>(value); }
    template<typename SelectFieldsT = SelectFields>
    CodeGenConfigurationNode& WithSelectFields(SelectFieldsT&& value) { SetSelectFields(std::forward<SelectFieldsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that chooses the data property keys that you want to
     * drop.</p>
     */
    inline const DropFields& GetDropFields() const { return m_dropFields; }
    inline bool DropFieldsHasBeenSet() const { return m_dropFieldsHasBeenSet; }
    template<typename DropFieldsT = DropFields>
    void SetDropFields(DropFieldsT&& value) { m_dropFieldsHasBeenSet = true; m_dropFields = std::forward<DropFieldsT>(value); }
    template<typename DropFieldsT = DropFields>
    CodeGenConfigurationNode& WithDropFields(DropFieldsT&& value) { SetDropFields(std::forward<DropFieldsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that renames a single data property key.</p>
     */
    inline const RenameField& GetRenameField() const { return m_renameField; }
    inline bool RenameFieldHasBeenSet() const { return m_renameFieldHasBeenSet; }
    template<typename RenameFieldT = RenameField>
    void SetRenameField(RenameFieldT&& value) { m_renameFieldHasBeenSet = true; m_renameField = std::forward<RenameFieldT>(value); }
    template<typename RenameFieldT = RenameField>
    CodeGenConfigurationNode& WithRenameField(RenameFieldT&& value) { SetRenameField(std::forward<RenameFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that writes samples of the data to an Amazon S3
     * bucket.</p>
     */
    inline const Spigot& GetSpigot() const { return m_spigot; }
    inline bool SpigotHasBeenSet() const { return m_spigotHasBeenSet; }
    template<typename SpigotT = Spigot>
    void SetSpigot(SpigotT&& value) { m_spigotHasBeenSet = true; m_spigot = std::forward<SpigotT>(value); }
    template<typename SpigotT = Spigot>
    CodeGenConfigurationNode& WithSpigot(SpigotT&& value) { SetSpigot(std::forward<SpigotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that joins two datasets into one dataset using a
     * comparison phrase on the specified data property keys. You can use inner, outer,
     * left, right, left semi, and left anti joins.</p>
     */
    inline const Join& GetJoin() const { return m_join; }
    inline bool JoinHasBeenSet() const { return m_joinHasBeenSet; }
    template<typename JoinT = Join>
    void SetJoin(JoinT&& value) { m_joinHasBeenSet = true; m_join = std::forward<JoinT>(value); }
    template<typename JoinT = Join>
    CodeGenConfigurationNode& WithJoin(JoinT&& value) { SetJoin(std::forward<JoinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that splits data property keys into two
     * <code>DynamicFrames</code>. The output is a collection of
     * <code>DynamicFrames</code>: one with selected data property keys, and one with
     * the remaining data property keys.</p>
     */
    inline const SplitFields& GetSplitFields() const { return m_splitFields; }
    inline bool SplitFieldsHasBeenSet() const { return m_splitFieldsHasBeenSet; }
    template<typename SplitFieldsT = SplitFields>
    void SetSplitFields(SplitFieldsT&& value) { m_splitFieldsHasBeenSet = true; m_splitFields = std::forward<SplitFieldsT>(value); }
    template<typename SplitFieldsT = SplitFields>
    CodeGenConfigurationNode& WithSplitFields(SplitFieldsT&& value) { SetSplitFields(std::forward<SplitFieldsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that chooses one <code>DynamicFrame</code> from a
     * collection of <code>DynamicFrames</code>. The output is the selected
     * <code>DynamicFrame</code> </p>
     */
    inline const SelectFromCollection& GetSelectFromCollection() const { return m_selectFromCollection; }
    inline bool SelectFromCollectionHasBeenSet() const { return m_selectFromCollectionHasBeenSet; }
    template<typename SelectFromCollectionT = SelectFromCollection>
    void SetSelectFromCollection(SelectFromCollectionT&& value) { m_selectFromCollectionHasBeenSet = true; m_selectFromCollection = std::forward<SelectFromCollectionT>(value); }
    template<typename SelectFromCollectionT = SelectFromCollection>
    CodeGenConfigurationNode& WithSelectFromCollection(SelectFromCollectionT&& value) { SetSelectFromCollection(std::forward<SelectFromCollectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that locates records in the dataset that have missing
     * values and adds a new field with a value determined by imputation. The input
     * data set is used to train the machine learning model that determines what the
     * missing value should be.</p>
     */
    inline const FillMissingValues& GetFillMissingValues() const { return m_fillMissingValues; }
    inline bool FillMissingValuesHasBeenSet() const { return m_fillMissingValuesHasBeenSet; }
    template<typename FillMissingValuesT = FillMissingValues>
    void SetFillMissingValues(FillMissingValuesT&& value) { m_fillMissingValuesHasBeenSet = true; m_fillMissingValues = std::forward<FillMissingValuesT>(value); }
    template<typename FillMissingValuesT = FillMissingValues>
    CodeGenConfigurationNode& WithFillMissingValues(FillMissingValuesT&& value) { SetFillMissingValues(std::forward<FillMissingValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that splits a dataset into two, based on a filter
     * condition.</p>
     */
    inline const Filter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Filter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Filter>
    CodeGenConfigurationNode& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that uses custom code you provide to perform the data
     * transformation. The output is a collection of DynamicFrames.</p>
     */
    inline const CustomCode& GetCustomCode() const { return m_customCode; }
    inline bool CustomCodeHasBeenSet() const { return m_customCodeHasBeenSet; }
    template<typename CustomCodeT = CustomCode>
    void SetCustomCode(CustomCodeT&& value) { m_customCodeHasBeenSet = true; m_customCode = std::forward<CustomCodeT>(value); }
    template<typename CustomCodeT = CustomCode>
    CodeGenConfigurationNode& WithCustomCode(CustomCodeT&& value) { SetCustomCode(std::forward<CustomCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform where you enter a SQL query using Spark SQL syntax to
     * transform the data. The output is a single <code>DynamicFrame</code>.</p>
     */
    inline const SparkSQL& GetSparkSQL() const { return m_sparkSQL; }
    inline bool SparkSQLHasBeenSet() const { return m_sparkSQLHasBeenSet; }
    template<typename SparkSQLT = SparkSQL>
    void SetSparkSQL(SparkSQLT&& value) { m_sparkSQLHasBeenSet = true; m_sparkSQL = std::forward<SparkSQLT>(value); }
    template<typename SparkSQLT = SparkSQL>
    CodeGenConfigurationNode& WithSparkSQL(SparkSQLT&& value) { SetSparkSQL(std::forward<SparkSQLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a direct Amazon Kinesis data source.</p>
     */
    inline const DirectKinesisSource& GetDirectKinesisSource() const { return m_directKinesisSource; }
    inline bool DirectKinesisSourceHasBeenSet() const { return m_directKinesisSourceHasBeenSet; }
    template<typename DirectKinesisSourceT = DirectKinesisSource>
    void SetDirectKinesisSource(DirectKinesisSourceT&& value) { m_directKinesisSourceHasBeenSet = true; m_directKinesisSource = std::forward<DirectKinesisSourceT>(value); }
    template<typename DirectKinesisSourceT = DirectKinesisSource>
    CodeGenConfigurationNode& WithDirectKinesisSource(DirectKinesisSourceT&& value) { SetDirectKinesisSource(std::forward<DirectKinesisSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Apache Kafka data store.</p>
     */
    inline const DirectKafkaSource& GetDirectKafkaSource() const { return m_directKafkaSource; }
    inline bool DirectKafkaSourceHasBeenSet() const { return m_directKafkaSourceHasBeenSet; }
    template<typename DirectKafkaSourceT = DirectKafkaSource>
    void SetDirectKafkaSource(DirectKafkaSourceT&& value) { m_directKafkaSourceHasBeenSet = true; m_directKafkaSource = std::forward<DirectKafkaSourceT>(value); }
    template<typename DirectKafkaSourceT = DirectKafkaSource>
    CodeGenConfigurationNode& WithDirectKafkaSource(DirectKafkaSourceT&& value) { SetDirectKafkaSource(std::forward<DirectKafkaSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Kinesis data source in the Glue Data Catalog.</p>
     */
    inline const CatalogKinesisSource& GetCatalogKinesisSource() const { return m_catalogKinesisSource; }
    inline bool CatalogKinesisSourceHasBeenSet() const { return m_catalogKinesisSourceHasBeenSet; }
    template<typename CatalogKinesisSourceT = CatalogKinesisSource>
    void SetCatalogKinesisSource(CatalogKinesisSourceT&& value) { m_catalogKinesisSourceHasBeenSet = true; m_catalogKinesisSource = std::forward<CatalogKinesisSourceT>(value); }
    template<typename CatalogKinesisSourceT = CatalogKinesisSource>
    CodeGenConfigurationNode& WithCatalogKinesisSource(CatalogKinesisSourceT&& value) { SetCatalogKinesisSource(std::forward<CatalogKinesisSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Apache Kafka data store in the Data Catalog.</p>
     */
    inline const CatalogKafkaSource& GetCatalogKafkaSource() const { return m_catalogKafkaSource; }
    inline bool CatalogKafkaSourceHasBeenSet() const { return m_catalogKafkaSourceHasBeenSet; }
    template<typename CatalogKafkaSourceT = CatalogKafkaSource>
    void SetCatalogKafkaSource(CatalogKafkaSourceT&& value) { m_catalogKafkaSourceHasBeenSet = true; m_catalogKafkaSource = std::forward<CatalogKafkaSourceT>(value); }
    template<typename CatalogKafkaSourceT = CatalogKafkaSource>
    CodeGenConfigurationNode& WithCatalogKafkaSource(CatalogKafkaSourceT&& value) { SetCatalogKafkaSource(std::forward<CatalogKafkaSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that removes columns from the dataset if all values in
     * the column are 'null'. By default, Glue Studio will recognize null objects, but
     * some values such as empty strings, strings that are "null", -1 integers or other
     * placeholders such as zeros, are not automatically recognized as nulls.</p>
     */
    inline const DropNullFields& GetDropNullFields() const { return m_dropNullFields; }
    inline bool DropNullFieldsHasBeenSet() const { return m_dropNullFieldsHasBeenSet; }
    template<typename DropNullFieldsT = DropNullFields>
    void SetDropNullFields(DropNullFieldsT&& value) { m_dropNullFieldsHasBeenSet = true; m_dropNullFields = std::forward<DropNullFieldsT>(value); }
    template<typename DropNullFieldsT = DropNullFields>
    CodeGenConfigurationNode& WithDropNullFields(DropNullFieldsT&& value) { SetDropNullFields(std::forward<DropNullFieldsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that merges a <code>DynamicFrame</code> with a staging
     * <code>DynamicFrame</code> based on the specified primary keys to identify
     * records. Duplicate records (records with the same primary keys) are not
     * de-duplicated. </p>
     */
    inline const Merge& GetMerge() const { return m_merge; }
    inline bool MergeHasBeenSet() const { return m_mergeHasBeenSet; }
    template<typename MergeT = Merge>
    void SetMerge(MergeT&& value) { m_mergeHasBeenSet = true; m_merge = std::forward<MergeT>(value); }
    template<typename MergeT = Merge>
    CodeGenConfigurationNode& WithMerge(MergeT&& value) { SetMerge(std::forward<MergeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that combines the rows from two or more datasets into a
     * single result.</p>
     */
    inline const Union& GetUnion() const { return m_union; }
    inline bool UnionHasBeenSet() const { return m_unionHasBeenSet; }
    template<typename UnionT = Union>
    void SetUnion(UnionT&& value) { m_unionHasBeenSet = true; m_union = std::forward<UnionT>(value); }
    template<typename UnionT = Union>
    CodeGenConfigurationNode& WithUnion(UnionT&& value) { SetUnion(std::forward<UnionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that identifies, removes or masks PII data.</p>
     */
    inline const PIIDetection& GetPIIDetection() const { return m_pIIDetection; }
    inline bool PIIDetectionHasBeenSet() const { return m_pIIDetectionHasBeenSet; }
    template<typename PIIDetectionT = PIIDetection>
    void SetPIIDetection(PIIDetectionT&& value) { m_pIIDetectionHasBeenSet = true; m_pIIDetection = std::forward<PIIDetectionT>(value); }
    template<typename PIIDetectionT = PIIDetection>
    CodeGenConfigurationNode& WithPIIDetection(PIIDetectionT&& value) { SetPIIDetection(std::forward<PIIDetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that groups rows by chosen fields and computes the
     * aggregated value by specified function.</p>
     */
    inline const Aggregate& GetAggregate() const { return m_aggregate; }
    inline bool AggregateHasBeenSet() const { return m_aggregateHasBeenSet; }
    template<typename AggregateT = Aggregate>
    void SetAggregate(AggregateT&& value) { m_aggregateHasBeenSet = true; m_aggregate = std::forward<AggregateT>(value); }
    template<typename AggregateT = Aggregate>
    CodeGenConfigurationNode& WithAggregate(AggregateT&& value) { SetAggregate(std::forward<AggregateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a transform that removes rows of repeating data from a data
     * set.</p>
     */
    inline const DropDuplicates& GetDropDuplicates() const { return m_dropDuplicates; }
    inline bool DropDuplicatesHasBeenSet() const { return m_dropDuplicatesHasBeenSet; }
    template<typename DropDuplicatesT = DropDuplicates>
    void SetDropDuplicates(DropDuplicatesT&& value) { m_dropDuplicatesHasBeenSet = true; m_dropDuplicates = std::forward<DropDuplicatesT>(value); }
    template<typename DropDuplicatesT = DropDuplicates>
    CodeGenConfigurationNode& WithDropDuplicates(DropDuplicatesT&& value) { SetDropDuplicates(std::forward<DropDuplicatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data target that writes to a goverened catalog.</p>
     */
    inline const GovernedCatalogTarget& GetGovernedCatalogTarget() const { return m_governedCatalogTarget; }
    inline bool GovernedCatalogTargetHasBeenSet() const { return m_governedCatalogTargetHasBeenSet; }
    template<typename GovernedCatalogTargetT = GovernedCatalogTarget>
    void SetGovernedCatalogTarget(GovernedCatalogTargetT&& value) { m_governedCatalogTargetHasBeenSet = true; m_governedCatalogTarget = std::forward<GovernedCatalogTargetT>(value); }
    template<typename GovernedCatalogTargetT = GovernedCatalogTarget>
    CodeGenConfigurationNode& WithGovernedCatalogTarget(GovernedCatalogTargetT&& value) { SetGovernedCatalogTarget(std::forward<GovernedCatalogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a data source in a goverened Data Catalog.</p>
     */
    inline const GovernedCatalogSource& GetGovernedCatalogSource() const { return m_governedCatalogSource; }
    inline bool GovernedCatalogSourceHasBeenSet() const { return m_governedCatalogSourceHasBeenSet; }
    template<typename GovernedCatalogSourceT = GovernedCatalogSource>
    void SetGovernedCatalogSource(GovernedCatalogSourceT&& value) { m_governedCatalogSourceHasBeenSet = true; m_governedCatalogSource = std::forward<GovernedCatalogSourceT>(value); }
    template<typename GovernedCatalogSourceT = GovernedCatalogSource>
    CodeGenConfigurationNode& WithGovernedCatalogSource(GovernedCatalogSourceT&& value) { SetGovernedCatalogSource(std::forward<GovernedCatalogSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Microsoft SQL server data source in the Glue Data Catalog.</p>
     */
    inline const MicrosoftSQLServerCatalogSource& GetMicrosoftSQLServerCatalogSource() const { return m_microsoftSQLServerCatalogSource; }
    inline bool MicrosoftSQLServerCatalogSourceHasBeenSet() const { return m_microsoftSQLServerCatalogSourceHasBeenSet; }
    template<typename MicrosoftSQLServerCatalogSourceT = MicrosoftSQLServerCatalogSource>
    void SetMicrosoftSQLServerCatalogSource(MicrosoftSQLServerCatalogSourceT&& value) { m_microsoftSQLServerCatalogSourceHasBeenSet = true; m_microsoftSQLServerCatalogSource = std::forward<MicrosoftSQLServerCatalogSourceT>(value); }
    template<typename MicrosoftSQLServerCatalogSourceT = MicrosoftSQLServerCatalogSource>
    CodeGenConfigurationNode& WithMicrosoftSQLServerCatalogSource(MicrosoftSQLServerCatalogSourceT&& value) { SetMicrosoftSQLServerCatalogSource(std::forward<MicrosoftSQLServerCatalogSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a MySQL data source in the Glue Data Catalog.</p>
     */
    inline const MySQLCatalogSource& GetMySQLCatalogSource() const { return m_mySQLCatalogSource; }
    inline bool MySQLCatalogSourceHasBeenSet() const { return m_mySQLCatalogSourceHasBeenSet; }
    template<typename MySQLCatalogSourceT = MySQLCatalogSource>
    void SetMySQLCatalogSource(MySQLCatalogSourceT&& value) { m_mySQLCatalogSourceHasBeenSet = true; m_mySQLCatalogSource = std::forward<MySQLCatalogSourceT>(value); }
    template<typename MySQLCatalogSourceT = MySQLCatalogSource>
    CodeGenConfigurationNode& WithMySQLCatalogSource(MySQLCatalogSourceT&& value) { SetMySQLCatalogSource(std::forward<MySQLCatalogSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Oracle data source in the Glue Data Catalog.</p>
     */
    inline const OracleSQLCatalogSource& GetOracleSQLCatalogSource() const { return m_oracleSQLCatalogSource; }
    inline bool OracleSQLCatalogSourceHasBeenSet() const { return m_oracleSQLCatalogSourceHasBeenSet; }
    template<typename OracleSQLCatalogSourceT = OracleSQLCatalogSource>
    void SetOracleSQLCatalogSource(OracleSQLCatalogSourceT&& value) { m_oracleSQLCatalogSourceHasBeenSet = true; m_oracleSQLCatalogSource = std::forward<OracleSQLCatalogSourceT>(value); }
    template<typename OracleSQLCatalogSourceT = OracleSQLCatalogSource>
    CodeGenConfigurationNode& WithOracleSQLCatalogSource(OracleSQLCatalogSourceT&& value) { SetOracleSQLCatalogSource(std::forward<OracleSQLCatalogSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a PostgresSQL data source in the Glue Data Catalog.</p>
     */
    inline const PostgreSQLCatalogSource& GetPostgreSQLCatalogSource() const { return m_postgreSQLCatalogSource; }
    inline bool PostgreSQLCatalogSourceHasBeenSet() const { return m_postgreSQLCatalogSourceHasBeenSet; }
    template<typename PostgreSQLCatalogSourceT = PostgreSQLCatalogSource>
    void SetPostgreSQLCatalogSource(PostgreSQLCatalogSourceT&& value) { m_postgreSQLCatalogSourceHasBeenSet = true; m_postgreSQLCatalogSource = std::forward<PostgreSQLCatalogSourceT>(value); }
    template<typename PostgreSQLCatalogSourceT = PostgreSQLCatalogSource>
    CodeGenConfigurationNode& WithPostgreSQLCatalogSource(PostgreSQLCatalogSourceT&& value) { SetPostgreSQLCatalogSource(std::forward<PostgreSQLCatalogSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses Microsoft SQL.</p>
     */
    inline const MicrosoftSQLServerCatalogTarget& GetMicrosoftSQLServerCatalogTarget() const { return m_microsoftSQLServerCatalogTarget; }
    inline bool MicrosoftSQLServerCatalogTargetHasBeenSet() const { return m_microsoftSQLServerCatalogTargetHasBeenSet; }
    template<typename MicrosoftSQLServerCatalogTargetT = MicrosoftSQLServerCatalogTarget>
    void SetMicrosoftSQLServerCatalogTarget(MicrosoftSQLServerCatalogTargetT&& value) { m_microsoftSQLServerCatalogTargetHasBeenSet = true; m_microsoftSQLServerCatalogTarget = std::forward<MicrosoftSQLServerCatalogTargetT>(value); }
    template<typename MicrosoftSQLServerCatalogTargetT = MicrosoftSQLServerCatalogTarget>
    CodeGenConfigurationNode& WithMicrosoftSQLServerCatalogTarget(MicrosoftSQLServerCatalogTargetT&& value) { SetMicrosoftSQLServerCatalogTarget(std::forward<MicrosoftSQLServerCatalogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses MySQL.</p>
     */
    inline const MySQLCatalogTarget& GetMySQLCatalogTarget() const { return m_mySQLCatalogTarget; }
    inline bool MySQLCatalogTargetHasBeenSet() const { return m_mySQLCatalogTargetHasBeenSet; }
    template<typename MySQLCatalogTargetT = MySQLCatalogTarget>
    void SetMySQLCatalogTarget(MySQLCatalogTargetT&& value) { m_mySQLCatalogTargetHasBeenSet = true; m_mySQLCatalogTarget = std::forward<MySQLCatalogTargetT>(value); }
    template<typename MySQLCatalogTargetT = MySQLCatalogTarget>
    CodeGenConfigurationNode& WithMySQLCatalogTarget(MySQLCatalogTargetT&& value) { SetMySQLCatalogTarget(std::forward<MySQLCatalogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses Oracle SQL.</p>
     */
    inline const OracleSQLCatalogTarget& GetOracleSQLCatalogTarget() const { return m_oracleSQLCatalogTarget; }
    inline bool OracleSQLCatalogTargetHasBeenSet() const { return m_oracleSQLCatalogTargetHasBeenSet; }
    template<typename OracleSQLCatalogTargetT = OracleSQLCatalogTarget>
    void SetOracleSQLCatalogTarget(OracleSQLCatalogTargetT&& value) { m_oracleSQLCatalogTargetHasBeenSet = true; m_oracleSQLCatalogTarget = std::forward<OracleSQLCatalogTargetT>(value); }
    template<typename OracleSQLCatalogTargetT = OracleSQLCatalogTarget>
    CodeGenConfigurationNode& WithOracleSQLCatalogTarget(OracleSQLCatalogTargetT&& value) { SetOracleSQLCatalogTarget(std::forward<OracleSQLCatalogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that uses Postgres SQL.</p>
     */
    inline const PostgreSQLCatalogTarget& GetPostgreSQLCatalogTarget() const { return m_postgreSQLCatalogTarget; }
    inline bool PostgreSQLCatalogTargetHasBeenSet() const { return m_postgreSQLCatalogTargetHasBeenSet; }
    template<typename PostgreSQLCatalogTargetT = PostgreSQLCatalogTarget>
    void SetPostgreSQLCatalogTarget(PostgreSQLCatalogTargetT&& value) { m_postgreSQLCatalogTargetHasBeenSet = true; m_postgreSQLCatalogTarget = std::forward<PostgreSQLCatalogTargetT>(value); }
    template<typename PostgreSQLCatalogTargetT = PostgreSQLCatalogTarget>
    CodeGenConfigurationNode& WithPostgreSQLCatalogTarget(PostgreSQLCatalogTargetT&& value) { SetPostgreSQLCatalogTarget(std::forward<PostgreSQLCatalogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a route node that directs data to different output paths based on
     * defined filtering conditions.</p>
     */
    inline const Route& GetRoute() const { return m_route; }
    inline bool RouteHasBeenSet() const { return m_routeHasBeenSet; }
    template<typename RouteT = Route>
    void SetRoute(RouteT&& value) { m_routeHasBeenSet = true; m_route = std::forward<RouteT>(value); }
    template<typename RouteT = Route>
    CodeGenConfigurationNode& WithRoute(RouteT&& value) { SetRoute(std::forward<RouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a custom visual transform created by a user.</p>
     */
    inline const DynamicTransform& GetDynamicTransform() const { return m_dynamicTransform; }
    inline bool DynamicTransformHasBeenSet() const { return m_dynamicTransformHasBeenSet; }
    template<typename DynamicTransformT = DynamicTransform>
    void SetDynamicTransform(DynamicTransformT&& value) { m_dynamicTransformHasBeenSet = true; m_dynamicTransform = std::forward<DynamicTransformT>(value); }
    template<typename DynamicTransformT = DynamicTransform>
    CodeGenConfigurationNode& WithDynamicTransform(DynamicTransformT&& value) { SetDynamicTransform(std::forward<DynamicTransformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies your data quality evaluation criteria.</p>
     */
    inline const EvaluateDataQuality& GetEvaluateDataQuality() const { return m_evaluateDataQuality; }
    inline bool EvaluateDataQualityHasBeenSet() const { return m_evaluateDataQualityHasBeenSet; }
    template<typename EvaluateDataQualityT = EvaluateDataQuality>
    void SetEvaluateDataQuality(EvaluateDataQualityT&& value) { m_evaluateDataQualityHasBeenSet = true; m_evaluateDataQuality = std::forward<EvaluateDataQualityT>(value); }
    template<typename EvaluateDataQualityT = EvaluateDataQuality>
    CodeGenConfigurationNode& WithEvaluateDataQuality(EvaluateDataQualityT&& value) { SetEvaluateDataQuality(std::forward<EvaluateDataQualityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Hudi data source that is registered in the Glue Data Catalog. The
     * data source must be stored in Amazon S3.</p>
     */
    inline const S3CatalogHudiSource& GetS3CatalogHudiSource() const { return m_s3CatalogHudiSource; }
    inline bool S3CatalogHudiSourceHasBeenSet() const { return m_s3CatalogHudiSourceHasBeenSet; }
    template<typename S3CatalogHudiSourceT = S3CatalogHudiSource>
    void SetS3CatalogHudiSource(S3CatalogHudiSourceT&& value) { m_s3CatalogHudiSourceHasBeenSet = true; m_s3CatalogHudiSource = std::forward<S3CatalogHudiSourceT>(value); }
    template<typename S3CatalogHudiSourceT = S3CatalogHudiSource>
    CodeGenConfigurationNode& WithS3CatalogHudiSource(S3CatalogHudiSourceT&& value) { SetS3CatalogHudiSource(std::forward<S3CatalogHudiSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Hudi data source that is registered in the Glue Data Catalog.</p>
     */
    inline const CatalogHudiSource& GetCatalogHudiSource() const { return m_catalogHudiSource; }
    inline bool CatalogHudiSourceHasBeenSet() const { return m_catalogHudiSourceHasBeenSet; }
    template<typename CatalogHudiSourceT = CatalogHudiSource>
    void SetCatalogHudiSource(CatalogHudiSourceT&& value) { m_catalogHudiSourceHasBeenSet = true; m_catalogHudiSource = std::forward<CatalogHudiSourceT>(value); }
    template<typename CatalogHudiSourceT = CatalogHudiSource>
    CodeGenConfigurationNode& WithCatalogHudiSource(CatalogHudiSourceT&& value) { SetCatalogHudiSource(std::forward<CatalogHudiSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Hudi data source stored in Amazon S3.</p>
     */
    inline const S3HudiSource& GetS3HudiSource() const { return m_s3HudiSource; }
    inline bool S3HudiSourceHasBeenSet() const { return m_s3HudiSourceHasBeenSet; }
    template<typename S3HudiSourceT = S3HudiSource>
    void SetS3HudiSource(S3HudiSourceT&& value) { m_s3HudiSourceHasBeenSet = true; m_s3HudiSource = std::forward<S3HudiSourceT>(value); }
    template<typename S3HudiSourceT = S3HudiSource>
    CodeGenConfigurationNode& WithS3HudiSource(S3HudiSourceT&& value) { SetS3HudiSource(std::forward<S3HudiSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a Hudi data source in the Glue Data
     * Catalog.</p>
     */
    inline const S3HudiCatalogTarget& GetS3HudiCatalogTarget() const { return m_s3HudiCatalogTarget; }
    inline bool S3HudiCatalogTargetHasBeenSet() const { return m_s3HudiCatalogTargetHasBeenSet; }
    template<typename S3HudiCatalogTargetT = S3HudiCatalogTarget>
    void SetS3HudiCatalogTarget(S3HudiCatalogTargetT&& value) { m_s3HudiCatalogTargetHasBeenSet = true; m_s3HudiCatalogTarget = std::forward<S3HudiCatalogTargetT>(value); }
    template<typename S3HudiCatalogTargetT = S3HudiCatalogTarget>
    CodeGenConfigurationNode& WithS3HudiCatalogTarget(S3HudiCatalogTargetT&& value) { SetS3HudiCatalogTarget(std::forward<S3HudiCatalogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a Hudi data source in Amazon S3.</p>
     */
    inline const S3HudiDirectTarget& GetS3HudiDirectTarget() const { return m_s3HudiDirectTarget; }
    inline bool S3HudiDirectTargetHasBeenSet() const { return m_s3HudiDirectTargetHasBeenSet; }
    template<typename S3HudiDirectTargetT = S3HudiDirectTarget>
    void SetS3HudiDirectTarget(S3HudiDirectTargetT&& value) { m_s3HudiDirectTargetHasBeenSet = true; m_s3HudiDirectTarget = std::forward<S3HudiDirectTargetT>(value); }
    template<typename S3HudiDirectTargetT = S3HudiDirectTarget>
    CodeGenConfigurationNode& WithS3HudiDirectTarget(S3HudiDirectTargetT&& value) { SetS3HudiDirectTarget(std::forward<S3HudiDirectTargetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DirectJDBCSource& GetDirectJDBCSource() const { return m_directJDBCSource; }
    inline bool DirectJDBCSourceHasBeenSet() const { return m_directJDBCSourceHasBeenSet; }
    template<typename DirectJDBCSourceT = DirectJDBCSource>
    void SetDirectJDBCSource(DirectJDBCSourceT&& value) { m_directJDBCSourceHasBeenSet = true; m_directJDBCSource = std::forward<DirectJDBCSourceT>(value); }
    template<typename DirectJDBCSourceT = DirectJDBCSource>
    CodeGenConfigurationNode& WithDirectJDBCSource(DirectJDBCSourceT&& value) { SetDirectJDBCSource(std::forward<DirectJDBCSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Delta Lake data source that is registered in the Glue Data
     * Catalog. The data source must be stored in Amazon S3.</p>
     */
    inline const S3CatalogDeltaSource& GetS3CatalogDeltaSource() const { return m_s3CatalogDeltaSource; }
    inline bool S3CatalogDeltaSourceHasBeenSet() const { return m_s3CatalogDeltaSourceHasBeenSet; }
    template<typename S3CatalogDeltaSourceT = S3CatalogDeltaSource>
    void SetS3CatalogDeltaSource(S3CatalogDeltaSourceT&& value) { m_s3CatalogDeltaSourceHasBeenSet = true; m_s3CatalogDeltaSource = std::forward<S3CatalogDeltaSourceT>(value); }
    template<typename S3CatalogDeltaSourceT = S3CatalogDeltaSource>
    CodeGenConfigurationNode& WithS3CatalogDeltaSource(S3CatalogDeltaSourceT&& value) { SetS3CatalogDeltaSource(std::forward<S3CatalogDeltaSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Delta Lake data source that is registered in the Glue Data
     * Catalog.</p>
     */
    inline const CatalogDeltaSource& GetCatalogDeltaSource() const { return m_catalogDeltaSource; }
    inline bool CatalogDeltaSourceHasBeenSet() const { return m_catalogDeltaSourceHasBeenSet; }
    template<typename CatalogDeltaSourceT = CatalogDeltaSource>
    void SetCatalogDeltaSource(CatalogDeltaSourceT&& value) { m_catalogDeltaSourceHasBeenSet = true; m_catalogDeltaSource = std::forward<CatalogDeltaSourceT>(value); }
    template<typename CatalogDeltaSourceT = CatalogDeltaSource>
    CodeGenConfigurationNode& WithCatalogDeltaSource(CatalogDeltaSourceT&& value) { SetCatalogDeltaSource(std::forward<CatalogDeltaSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Delta Lake data source stored in Amazon S3.</p>
     */
    inline const S3DeltaSource& GetS3DeltaSource() const { return m_s3DeltaSource; }
    inline bool S3DeltaSourceHasBeenSet() const { return m_s3DeltaSourceHasBeenSet; }
    template<typename S3DeltaSourceT = S3DeltaSource>
    void SetS3DeltaSource(S3DeltaSourceT&& value) { m_s3DeltaSourceHasBeenSet = true; m_s3DeltaSource = std::forward<S3DeltaSourceT>(value); }
    template<typename S3DeltaSourceT = S3DeltaSource>
    CodeGenConfigurationNode& WithS3DeltaSource(S3DeltaSourceT&& value) { SetS3DeltaSource(std::forward<S3DeltaSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a Delta Lake data source in the Glue Data
     * Catalog.</p>
     */
    inline const S3DeltaCatalogTarget& GetS3DeltaCatalogTarget() const { return m_s3DeltaCatalogTarget; }
    inline bool S3DeltaCatalogTargetHasBeenSet() const { return m_s3DeltaCatalogTargetHasBeenSet; }
    template<typename S3DeltaCatalogTargetT = S3DeltaCatalogTarget>
    void SetS3DeltaCatalogTarget(S3DeltaCatalogTargetT&& value) { m_s3DeltaCatalogTargetHasBeenSet = true; m_s3DeltaCatalogTarget = std::forward<S3DeltaCatalogTargetT>(value); }
    template<typename S3DeltaCatalogTargetT = S3DeltaCatalogTarget>
    CodeGenConfigurationNode& WithS3DeltaCatalogTarget(S3DeltaCatalogTargetT&& value) { SetS3DeltaCatalogTarget(std::forward<S3DeltaCatalogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a Delta Lake data source in Amazon S3.</p>
     */
    inline const S3DeltaDirectTarget& GetS3DeltaDirectTarget() const { return m_s3DeltaDirectTarget; }
    inline bool S3DeltaDirectTargetHasBeenSet() const { return m_s3DeltaDirectTargetHasBeenSet; }
    template<typename S3DeltaDirectTargetT = S3DeltaDirectTarget>
    void SetS3DeltaDirectTarget(S3DeltaDirectTargetT&& value) { m_s3DeltaDirectTargetHasBeenSet = true; m_s3DeltaDirectTarget = std::forward<S3DeltaDirectTargetT>(value); }
    template<typename S3DeltaDirectTargetT = S3DeltaDirectTarget>
    CodeGenConfigurationNode& WithS3DeltaDirectTarget(S3DeltaDirectTargetT&& value) { SetS3DeltaDirectTarget(std::forward<S3DeltaDirectTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a data source in Amazon Redshift.</p>
     */
    inline const AmazonRedshiftSource& GetAmazonRedshiftSource() const { return m_amazonRedshiftSource; }
    inline bool AmazonRedshiftSourceHasBeenSet() const { return m_amazonRedshiftSourceHasBeenSet; }
    template<typename AmazonRedshiftSourceT = AmazonRedshiftSource>
    void SetAmazonRedshiftSource(AmazonRedshiftSourceT&& value) { m_amazonRedshiftSourceHasBeenSet = true; m_amazonRedshiftSource = std::forward<AmazonRedshiftSourceT>(value); }
    template<typename AmazonRedshiftSourceT = AmazonRedshiftSource>
    CodeGenConfigurationNode& WithAmazonRedshiftSource(AmazonRedshiftSourceT&& value) { SetAmazonRedshiftSource(std::forward<AmazonRedshiftSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a data target in Amazon Redshift.</p>
     */
    inline const AmazonRedshiftTarget& GetAmazonRedshiftTarget() const { return m_amazonRedshiftTarget; }
    inline bool AmazonRedshiftTargetHasBeenSet() const { return m_amazonRedshiftTargetHasBeenSet; }
    template<typename AmazonRedshiftTargetT = AmazonRedshiftTarget>
    void SetAmazonRedshiftTarget(AmazonRedshiftTargetT&& value) { m_amazonRedshiftTargetHasBeenSet = true; m_amazonRedshiftTarget = std::forward<AmazonRedshiftTargetT>(value); }
    template<typename AmazonRedshiftTargetT = AmazonRedshiftTarget>
    CodeGenConfigurationNode& WithAmazonRedshiftTarget(AmazonRedshiftTargetT&& value) { SetAmazonRedshiftTarget(std::forward<AmazonRedshiftTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies your data quality evaluation criteria. Allows multiple input data
     * and returns a collection of Dynamic Frames.</p>
     */
    inline const EvaluateDataQualityMultiFrame& GetEvaluateDataQualityMultiFrame() const { return m_evaluateDataQualityMultiFrame; }
    inline bool EvaluateDataQualityMultiFrameHasBeenSet() const { return m_evaluateDataQualityMultiFrameHasBeenSet; }
    template<typename EvaluateDataQualityMultiFrameT = EvaluateDataQualityMultiFrame>
    void SetEvaluateDataQualityMultiFrame(EvaluateDataQualityMultiFrameT&& value) { m_evaluateDataQualityMultiFrameHasBeenSet = true; m_evaluateDataQualityMultiFrame = std::forward<EvaluateDataQualityMultiFrameT>(value); }
    template<typename EvaluateDataQualityMultiFrameT = EvaluateDataQualityMultiFrame>
    CodeGenConfigurationNode& WithEvaluateDataQualityMultiFrame(EvaluateDataQualityMultiFrameT&& value) { SetEvaluateDataQualityMultiFrame(std::forward<EvaluateDataQualityMultiFrameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Glue DataBrew recipe node.</p>
     */
    inline const Recipe& GetRecipe() const { return m_recipe; }
    inline bool RecipeHasBeenSet() const { return m_recipeHasBeenSet; }
    template<typename RecipeT = Recipe>
    void SetRecipe(RecipeT&& value) { m_recipeHasBeenSet = true; m_recipe = std::forward<RecipeT>(value); }
    template<typename RecipeT = Recipe>
    CodeGenConfigurationNode& WithRecipe(RecipeT&& value) { SetRecipe(std::forward<RecipeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Snowflake data source.</p>
     */
    inline const SnowflakeSource& GetSnowflakeSource() const { return m_snowflakeSource; }
    inline bool SnowflakeSourceHasBeenSet() const { return m_snowflakeSourceHasBeenSet; }
    template<typename SnowflakeSourceT = SnowflakeSource>
    void SetSnowflakeSource(SnowflakeSourceT&& value) { m_snowflakeSourceHasBeenSet = true; m_snowflakeSource = std::forward<SnowflakeSourceT>(value); }
    template<typename SnowflakeSourceT = SnowflakeSource>
    CodeGenConfigurationNode& WithSnowflakeSource(SnowflakeSourceT&& value) { SetSnowflakeSource(std::forward<SnowflakeSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target that writes to a Snowflake data source.</p>
     */
    inline const SnowflakeTarget& GetSnowflakeTarget() const { return m_snowflakeTarget; }
    inline bool SnowflakeTargetHasBeenSet() const { return m_snowflakeTargetHasBeenSet; }
    template<typename SnowflakeTargetT = SnowflakeTarget>
    void SetSnowflakeTarget(SnowflakeTargetT&& value) { m_snowflakeTargetHasBeenSet = true; m_snowflakeTarget = std::forward<SnowflakeTargetT>(value); }
    template<typename SnowflakeTargetT = SnowflakeTarget>
    CodeGenConfigurationNode& WithSnowflakeTarget(SnowflakeTargetT&& value) { SetSnowflakeTarget(std::forward<SnowflakeTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a source generated with standard connection options.</p>
     */
    inline const ConnectorDataSource& GetConnectorDataSource() const { return m_connectorDataSource; }
    inline bool ConnectorDataSourceHasBeenSet() const { return m_connectorDataSourceHasBeenSet; }
    template<typename ConnectorDataSourceT = ConnectorDataSource>
    void SetConnectorDataSource(ConnectorDataSourceT&& value) { m_connectorDataSourceHasBeenSet = true; m_connectorDataSource = std::forward<ConnectorDataSourceT>(value); }
    template<typename ConnectorDataSourceT = ConnectorDataSource>
    CodeGenConfigurationNode& WithConnectorDataSource(ConnectorDataSourceT&& value) { SetConnectorDataSource(std::forward<ConnectorDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target generated with standard connection options.</p>
     */
    inline const ConnectorDataTarget& GetConnectorDataTarget() const { return m_connectorDataTarget; }
    inline bool ConnectorDataTargetHasBeenSet() const { return m_connectorDataTargetHasBeenSet; }
    template<typename ConnectorDataTargetT = ConnectorDataTarget>
    void SetConnectorDataTarget(ConnectorDataTargetT&& value) { m_connectorDataTargetHasBeenSet = true; m_connectorDataTarget = std::forward<ConnectorDataTargetT>(value); }
    template<typename ConnectorDataTargetT = ConnectorDataTarget>
    CodeGenConfigurationNode& WithConnectorDataTarget(ConnectorDataTargetT&& value) { SetConnectorDataTarget(std::forward<ConnectorDataTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Apache Iceberg data source that is registered in the Glue Data
     * Catalog. The Iceberg data source must be stored in Amazon S3.</p>
     */
    inline const S3CatalogIcebergSource& GetS3CatalogIcebergSource() const { return m_s3CatalogIcebergSource; }
    inline bool S3CatalogIcebergSourceHasBeenSet() const { return m_s3CatalogIcebergSourceHasBeenSet; }
    template<typename S3CatalogIcebergSourceT = S3CatalogIcebergSource>
    void SetS3CatalogIcebergSource(S3CatalogIcebergSourceT&& value) { m_s3CatalogIcebergSourceHasBeenSet = true; m_s3CatalogIcebergSource = std::forward<S3CatalogIcebergSourceT>(value); }
    template<typename S3CatalogIcebergSourceT = S3CatalogIcebergSource>
    CodeGenConfigurationNode& WithS3CatalogIcebergSource(S3CatalogIcebergSourceT&& value) { SetS3CatalogIcebergSource(std::forward<S3CatalogIcebergSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Apache Iceberg data source that is registered in the Glue Data
     * Catalog.</p>
     */
    inline const CatalogIcebergSource& GetCatalogIcebergSource() const { return m_catalogIcebergSource; }
    inline bool CatalogIcebergSourceHasBeenSet() const { return m_catalogIcebergSourceHasBeenSet; }
    template<typename CatalogIcebergSourceT = CatalogIcebergSource>
    void SetCatalogIcebergSource(CatalogIcebergSourceT&& value) { m_catalogIcebergSourceHasBeenSet = true; m_catalogIcebergSource = std::forward<CatalogIcebergSourceT>(value); }
    template<typename CatalogIcebergSourceT = CatalogIcebergSource>
    CodeGenConfigurationNode& WithCatalogIcebergSource(CatalogIcebergSourceT&& value) { SetCatalogIcebergSource(std::forward<CatalogIcebergSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Apache Iceberg catalog target that writes data to Amazon S3 and
     * registers the table in the Glue Data Catalog.</p>
     */
    inline const S3IcebergCatalogTarget& GetS3IcebergCatalogTarget() const { return m_s3IcebergCatalogTarget; }
    inline bool S3IcebergCatalogTargetHasBeenSet() const { return m_s3IcebergCatalogTargetHasBeenSet; }
    template<typename S3IcebergCatalogTargetT = S3IcebergCatalogTarget>
    void SetS3IcebergCatalogTarget(S3IcebergCatalogTargetT&& value) { m_s3IcebergCatalogTargetHasBeenSet = true; m_s3IcebergCatalogTarget = std::forward<S3IcebergCatalogTargetT>(value); }
    template<typename S3IcebergCatalogTargetT = S3IcebergCatalogTarget>
    CodeGenConfigurationNode& WithS3IcebergCatalogTarget(S3IcebergCatalogTargetT&& value) { SetS3IcebergCatalogTarget(std::forward<S3IcebergCatalogTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines configuration parameters for writing data to Amazon S3 as an Apache
     * Iceberg table.</p>
     */
    inline const S3IcebergDirectTarget& GetS3IcebergDirectTarget() const { return m_s3IcebergDirectTarget; }
    inline bool S3IcebergDirectTargetHasBeenSet() const { return m_s3IcebergDirectTargetHasBeenSet; }
    template<typename S3IcebergDirectTargetT = S3IcebergDirectTarget>
    void SetS3IcebergDirectTarget(S3IcebergDirectTargetT&& value) { m_s3IcebergDirectTargetHasBeenSet = true; m_s3IcebergDirectTarget = std::forward<S3IcebergDirectTargetT>(value); }
    template<typename S3IcebergDirectTargetT = S3IcebergDirectTarget>
    CodeGenConfigurationNode& WithS3IcebergDirectTarget(S3IcebergDirectTargetT&& value) { SetS3IcebergDirectTarget(std::forward<S3IcebergDirectTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines configuration parameters for reading Excel files from Amazon S3.</p>
     */
    inline const S3ExcelSource& GetS3ExcelSource() const { return m_s3ExcelSource; }
    inline bool S3ExcelSourceHasBeenSet() const { return m_s3ExcelSourceHasBeenSet; }
    template<typename S3ExcelSourceT = S3ExcelSource>
    void SetS3ExcelSource(S3ExcelSourceT&& value) { m_s3ExcelSourceHasBeenSet = true; m_s3ExcelSource = std::forward<S3ExcelSourceT>(value); }
    template<typename S3ExcelSourceT = S3ExcelSource>
    CodeGenConfigurationNode& WithS3ExcelSource(S3ExcelSourceT&& value) { SetS3ExcelSource(std::forward<S3ExcelSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines configuration parameters for writing data to Amazon S3 using
     * HyperDirect optimization.</p>
     */
    inline const S3HyperDirectTarget& GetS3HyperDirectTarget() const { return m_s3HyperDirectTarget; }
    inline bool S3HyperDirectTargetHasBeenSet() const { return m_s3HyperDirectTargetHasBeenSet; }
    template<typename S3HyperDirectTargetT = S3HyperDirectTarget>
    void SetS3HyperDirectTarget(S3HyperDirectTargetT&& value) { m_s3HyperDirectTargetHasBeenSet = true; m_s3HyperDirectTarget = std::forward<S3HyperDirectTargetT>(value); }
    template<typename S3HyperDirectTargetT = S3HyperDirectTarget>
    CodeGenConfigurationNode& WithS3HyperDirectTarget(S3HyperDirectTargetT&& value) { SetS3HyperDirectTarget(std::forward<S3HyperDirectTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a DynamoDB ELT connector source for extracting data from DynamoDB
     * tables.</p>
     */
    inline const DynamoDBELTConnectorSource& GetDynamoDBELTConnectorSource() const { return m_dynamoDBELTConnectorSource; }
    inline bool DynamoDBELTConnectorSourceHasBeenSet() const { return m_dynamoDBELTConnectorSourceHasBeenSet; }
    template<typename DynamoDBELTConnectorSourceT = DynamoDBELTConnectorSource>
    void SetDynamoDBELTConnectorSource(DynamoDBELTConnectorSourceT&& value) { m_dynamoDBELTConnectorSourceHasBeenSet = true; m_dynamoDBELTConnectorSource = std::forward<DynamoDBELTConnectorSourceT>(value); }
    template<typename DynamoDBELTConnectorSourceT = DynamoDBELTConnectorSource>
    CodeGenConfigurationNode& WithDynamoDBELTConnectorSource(DynamoDBELTConnectorSourceT&& value) { SetDynamoDBELTConnectorSource(std::forward<DynamoDBELTConnectorSourceT>(value)); return *this;}
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

    Route m_route;
    bool m_routeHasBeenSet = false;

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

    S3CatalogIcebergSource m_s3CatalogIcebergSource;
    bool m_s3CatalogIcebergSourceHasBeenSet = false;

    CatalogIcebergSource m_catalogIcebergSource;
    bool m_catalogIcebergSourceHasBeenSet = false;

    S3IcebergCatalogTarget m_s3IcebergCatalogTarget;
    bool m_s3IcebergCatalogTargetHasBeenSet = false;

    S3IcebergDirectTarget m_s3IcebergDirectTarget;
    bool m_s3IcebergDirectTargetHasBeenSet = false;

    S3ExcelSource m_s3ExcelSource;
    bool m_s3ExcelSourceHasBeenSet = false;

    S3HyperDirectTarget m_s3HyperDirectTarget;
    bool m_s3HyperDirectTargetHasBeenSet = false;

    DynamoDBELTConnectorSource m_dynamoDBELTConnectorSource;
    bool m_dynamoDBELTConnectorSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
