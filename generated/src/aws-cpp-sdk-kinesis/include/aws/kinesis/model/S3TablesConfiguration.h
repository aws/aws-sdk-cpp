/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/PartitionSpec.h>
#include <aws/kinesis/model/S3TablesCompressionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>Specifies a destination streaming table on Apache Iceberg.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/S3TablesConfiguration">AWS
 * API Reference</a></p>
 */
class S3TablesConfiguration {
 public:
  AWS_KINESIS_API S3TablesConfiguration() = default;
  AWS_KINESIS_API S3TablesConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API S3TablesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon S3 table bucket.</p>
   */
  inline const Aws::String& GetTableBucketARN() const { return m_tableBucketARN; }
  inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
  template <typename TableBucketARNT = Aws::String>
  void SetTableBucketARN(TableBucketARNT&& value) {
    m_tableBucketARNHasBeenSet = true;
    m_tableBucketARN = std::forward<TableBucketARNT>(value);
  }
  template <typename TableBucketARNT = Aws::String>
  S3TablesConfiguration& WithTableBucketARN(TableBucketARNT&& value) {
    SetTableBucketARN(std::forward<TableBucketARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace (database) of the destination table.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  S3TablesConfiguration& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the destination table. Amazon Kinesis Data Streams creates this
   * table in the specified table bucket.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  S3TablesConfiguration& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compression applied to Parquet data files. Valid values:</p> <ul> <li>
   * <p> <code>NONE</code> - No compression.</p> </li> <li> <p> <code>ZSTD</code> -
   * Zstandard compression.</p> </li> <li> <p> <code>SNAPPY</code> - Snappy
   * compression.</p> </li> </ul>
   */
  inline S3TablesCompressionType GetCompressionType() const { return m_compressionType; }
  inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
  inline void SetCompressionType(S3TablesCompressionType value) {
    m_compressionTypeHasBeenSet = true;
    m_compressionType = value;
  }
  inline S3TablesConfiguration& WithCompressionType(S3TablesCompressionType value) {
    SetCompressionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partitioning specification for the destination table.</p>
   */
  inline const PartitionSpec& GetPartitionSpec() const { return m_partitionSpec; }
  inline bool PartitionSpecHasBeenSet() const { return m_partitionSpecHasBeenSet; }
  template <typename PartitionSpecT = PartitionSpec>
  void SetPartitionSpec(PartitionSpecT&& value) {
    m_partitionSpecHasBeenSet = true;
    m_partitionSpec = std::forward<PartitionSpecT>(value);
  }
  template <typename PartitionSpecT = PartitionSpec>
  S3TablesConfiguration& WithPartitionSpec(PartitionSpecT&& value) {
    SetPartitionSpec(std::forward<PartitionSpecT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableBucketARN;

  Aws::String m_namespace;

  Aws::String m_tableName;

  S3TablesCompressionType m_compressionType{S3TablesCompressionType::NOT_SET};

  PartitionSpec m_partitionSpec;
  bool m_tableBucketARNHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_tableNameHasBeenSet = false;
  bool m_compressionTypeHasBeenSet = false;
  bool m_partitionSpecHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
