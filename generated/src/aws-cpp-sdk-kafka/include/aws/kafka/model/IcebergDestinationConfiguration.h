/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/Catalog.h>
#include <aws/kafka/model/DeadLetterQueueS3.h>
#include <aws/kafka/model/DestinationTable.h>
#include <aws/kafka/model/IcebergCompressionType.h>
#include <aws/kafka/model/SchemaEvolution.h>
#include <aws/kafka/model/TableCreation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Configuration of an Apache Iceberg destination for a channel.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/IcebergDestinationConfiguration">AWS
 * API Reference</a></p>
 */
class IcebergDestinationConfiguration {
 public:
  AWS_KAFKA_API IcebergDestinationConfiguration() = default;
  AWS_KAFKA_API IcebergDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API IcebergDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the destination is append-only. Must be true; updates and deletes are
   * not supported.</p>
   */
  inline bool GetAppendOnly() const { return m_appendOnly; }
  inline bool AppendOnlyHasBeenSet() const { return m_appendOnlyHasBeenSet; }
  inline void SetAppendOnly(bool value) {
    m_appendOnlyHasBeenSet = true;
    m_appendOnly = value;
  }
  inline IcebergDestinationConfiguration& WithAppendOnly(bool value) {
    SetAppendOnly(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Glue Data Catalog and S3 Tables warehouse used by the
   * destination.</p>
   */
  inline const Catalog& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Catalog>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Catalog>
  IcebergDestinationConfiguration& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in seconds, that records buffer in MSK before being flushed
   * to the destination. Allowed range: 300 to 900. Default: 600.</p>
   */
  inline int GetDataFreshnessInSeconds() const { return m_dataFreshnessInSeconds; }
  inline bool DataFreshnessInSecondsHasBeenSet() const { return m_dataFreshnessInSecondsHasBeenSet; }
  inline void SetDataFreshnessInSeconds(int value) {
    m_dataFreshnessInSecondsHasBeenSet = true;
    m_dataFreshnessInSeconds = value;
  }
  inline IcebergDestinationConfiguration& WithDataFreshnessInSeconds(int value) {
    SetDataFreshnessInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 bucket and prefix where MSK writes records that fail to
   * deliver.</p>
   */
  inline const DeadLetterQueueS3& GetDeadLetterQueueS3() const { return m_deadLetterQueueS3; }
  inline bool DeadLetterQueueS3HasBeenSet() const { return m_deadLetterQueueS3HasBeenSet; }
  template <typename DeadLetterQueueS3T = DeadLetterQueueS3>
  void SetDeadLetterQueueS3(DeadLetterQueueS3T&& value) {
    m_deadLetterQueueS3HasBeenSet = true;
    m_deadLetterQueueS3 = std::forward<DeadLetterQueueS3T>(value);
  }
  template <typename DeadLetterQueueS3T = DeadLetterQueueS3>
  IcebergDestinationConfiguration& WithDeadLetterQueueS3(DeadLetterQueueS3T&& value) {
    SetDeadLetterQueueS3(std::forward<DeadLetterQueueS3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination Iceberg tables. Currently exactly one table must be
   * specified.</p>
   */
  inline const Aws::Vector<DestinationTable>& GetDestinationTableList() const { return m_destinationTableList; }
  inline bool DestinationTableListHasBeenSet() const { return m_destinationTableListHasBeenSet; }
  template <typename DestinationTableListT = Aws::Vector<DestinationTable>>
  void SetDestinationTableList(DestinationTableListT&& value) {
    m_destinationTableListHasBeenSet = true;
    m_destinationTableList = std::forward<DestinationTableListT>(value);
  }
  template <typename DestinationTableListT = Aws::Vector<DestinationTable>>
  IcebergDestinationConfiguration& WithDestinationTableList(DestinationTableListT&& value) {
    SetDestinationTableList(std::forward<DestinationTableListT>(value));
    return *this;
  }
  template <typename DestinationTableListT = DestinationTable>
  IcebergDestinationConfiguration& AddDestinationTableList(DestinationTableListT&& value) {
    m_destinationTableListHasBeenSet = true;
    m_destinationTableList.emplace_back(std::forward<DestinationTableListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration controlling whether the destination table's schema is evolved
   * to match incoming records.</p>
   */
  inline const SchemaEvolution& GetSchemaEvolution() const { return m_schemaEvolution; }
  inline bool SchemaEvolutionHasBeenSet() const { return m_schemaEvolutionHasBeenSet; }
  template <typename SchemaEvolutionT = SchemaEvolution>
  void SetSchemaEvolution(SchemaEvolutionT&& value) {
    m_schemaEvolutionHasBeenSet = true;
    m_schemaEvolution = std::forward<SchemaEvolutionT>(value);
  }
  template <typename SchemaEvolutionT = SchemaEvolution>
  IcebergDestinationConfiguration& WithSchemaEvolution(SchemaEvolutionT&& value) {
    SetSchemaEvolution(std::forward<SchemaEvolutionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that MSK assumes to access the
   * destination table, the AWS Glue Data Catalog, and the dead-letter Amazon S3
   * bucket.</p>
   */
  inline const Aws::String& GetServiceExecutionRoleArn() const { return m_serviceExecutionRoleArn; }
  inline bool ServiceExecutionRoleArnHasBeenSet() const { return m_serviceExecutionRoleArnHasBeenSet; }
  template <typename ServiceExecutionRoleArnT = Aws::String>
  void SetServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) {
    m_serviceExecutionRoleArnHasBeenSet = true;
    m_serviceExecutionRoleArn = std::forward<ServiceExecutionRoleArnT>(value);
  }
  template <typename ServiceExecutionRoleArnT = Aws::String>
  IcebergDestinationConfiguration& WithServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) {
    SetServiceExecutionRoleArn(std::forward<ServiceExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration controlling whether MSK creates the destination table if it
   * does not already exist.</p>
   */
  inline const TableCreation& GetTableCreation() const { return m_tableCreation; }
  inline bool TableCreationHasBeenSet() const { return m_tableCreationHasBeenSet; }
  template <typename TableCreationT = TableCreation>
  void SetTableCreation(TableCreationT&& value) {
    m_tableCreationHasBeenSet = true;
    m_tableCreation = std::forward<TableCreationT>(value);
  }
  template <typename TableCreationT = TableCreation>
  IcebergDestinationConfiguration& WithTableCreation(TableCreationT&& value) {
    SetTableCreation(std::forward<TableCreationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compression codec for Iceberg table data files. Defaults to ZSTD.</p>
   */
  inline IcebergCompressionType GetCompressionType() const { return m_compressionType; }
  inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
  inline void SetCompressionType(IcebergCompressionType value) {
    m_compressionTypeHasBeenSet = true;
    m_compressionType = value;
  }
  inline IcebergDestinationConfiguration& WithCompressionType(IcebergCompressionType value) {
    SetCompressionType(value);
    return *this;
  }
  ///@}
 private:
  bool m_appendOnly{false};

  Catalog m_catalog;

  int m_dataFreshnessInSeconds{0};

  DeadLetterQueueS3 m_deadLetterQueueS3;

  Aws::Vector<DestinationTable> m_destinationTableList;

  SchemaEvolution m_schemaEvolution;

  Aws::String m_serviceExecutionRoleArn;

  TableCreation m_tableCreation;

  IcebergCompressionType m_compressionType{IcebergCompressionType::NOT_SET};
  bool m_appendOnlyHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_dataFreshnessInSecondsHasBeenSet = false;
  bool m_deadLetterQueueS3HasBeenSet = false;
  bool m_destinationTableListHasBeenSet = false;
  bool m_schemaEvolutionHasBeenSet = false;
  bool m_serviceExecutionRoleArnHasBeenSet = false;
  bool m_tableCreationHasBeenSet = false;
  bool m_compressionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
