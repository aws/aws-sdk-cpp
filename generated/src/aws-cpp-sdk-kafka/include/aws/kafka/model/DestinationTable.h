/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/PartitionSpec.h>

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
 * <p>Configuration of an Apache Iceberg destination table.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DestinationTable">AWS
 * API Reference</a></p>
 */
class DestinationTable {
 public:
  AWS_KAFKA_API DestinationTable() = default;
  AWS_KAFKA_API DestinationTable(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API DestinationTable& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the destination namespace (database) in the AWS Glue Data
   * Catalog.</p>
   */
  inline const Aws::String& GetDestinationDatabaseName() const { return m_destinationDatabaseName; }
  inline bool DestinationDatabaseNameHasBeenSet() const { return m_destinationDatabaseNameHasBeenSet; }
  template <typename DestinationDatabaseNameT = Aws::String>
  void SetDestinationDatabaseName(DestinationDatabaseNameT&& value) {
    m_destinationDatabaseNameHasBeenSet = true;
    m_destinationDatabaseName = std::forward<DestinationDatabaseNameT>(value);
  }
  template <typename DestinationDatabaseNameT = Aws::String>
  DestinationTable& WithDestinationDatabaseName(DestinationDatabaseNameT&& value) {
    SetDestinationDatabaseName(std::forward<DestinationDatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the destination Apache Iceberg table.</p>
   */
  inline const Aws::String& GetDestinationTableName() const { return m_destinationTableName; }
  inline bool DestinationTableNameHasBeenSet() const { return m_destinationTableNameHasBeenSet; }
  template <typename DestinationTableNameT = Aws::String>
  void SetDestinationTableName(DestinationTableNameT&& value) {
    m_destinationTableNameHasBeenSet = true;
    m_destinationTableName = std::forward<DestinationTableNameT>(value);
  }
  template <typename DestinationTableNameT = Aws::String>
  DestinationTable& WithDestinationTableName(DestinationTableNameT&& value) {
    SetDestinationTableName(std::forward<DestinationTableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partition specification for the destination table.</p>
   */
  inline const PartitionSpec& GetPartitionSpec() const { return m_partitionSpec; }
  inline bool PartitionSpecHasBeenSet() const { return m_partitionSpecHasBeenSet; }
  template <typename PartitionSpecT = PartitionSpec>
  void SetPartitionSpec(PartitionSpecT&& value) {
    m_partitionSpecHasBeenSet = true;
    m_partitionSpec = std::forward<PartitionSpecT>(value);
  }
  template <typename PartitionSpecT = PartitionSpec>
  DestinationTable& WithPartitionSpec(PartitionSpecT&& value) {
    SetPartitionSpec(std::forward<PartitionSpecT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationDatabaseName;

  Aws::String m_destinationTableName;

  PartitionSpec m_partitionSpec;
  bool m_destinationDatabaseNameHasBeenSet = false;
  bool m_destinationTableNameHasBeenSet = false;
  bool m_partitionSpecHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
