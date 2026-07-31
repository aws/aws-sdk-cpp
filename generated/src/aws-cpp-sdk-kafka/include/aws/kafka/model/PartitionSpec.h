/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/PartitionSource.h>
#include <aws/kafka/model/PartitionStrategy.h>

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
 * <p>Partition specification for an Apache Iceberg destination
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/PartitionSpec">AWS
 * API Reference</a></p>
 */
class PartitionSpec {
 public:
  AWS_KAFKA_API PartitionSpec() = default;
  AWS_KAFKA_API PartitionSpec(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API PartitionSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The partitioning strategy applied to records written to the table.</p>
   */
  inline PartitionStrategy GetPartitionStrategy() const { return m_partitionStrategy; }
  inline bool PartitionStrategyHasBeenSet() const { return m_partitionStrategyHasBeenSet; }
  inline void SetPartitionStrategy(PartitionStrategy value) {
    m_partitionStrategyHasBeenSet = true;
    m_partitionStrategy = value;
  }
  inline PartitionSpec& WithPartitionStrategy(PartitionStrategy value) {
    SetPartitionStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source columns used by the partitioning strategy. For TIME_HOUR, must
   * contain exactly one source column whose value is a timestamp.</p>
   */
  inline const Aws::Vector<PartitionSource>& GetSourceList() const { return m_sourceList; }
  inline bool SourceListHasBeenSet() const { return m_sourceListHasBeenSet; }
  template <typename SourceListT = Aws::Vector<PartitionSource>>
  void SetSourceList(SourceListT&& value) {
    m_sourceListHasBeenSet = true;
    m_sourceList = std::forward<SourceListT>(value);
  }
  template <typename SourceListT = Aws::Vector<PartitionSource>>
  PartitionSpec& WithSourceList(SourceListT&& value) {
    SetSourceList(std::forward<SourceListT>(value));
    return *this;
  }
  template <typename SourceListT = PartitionSource>
  PartitionSpec& AddSourceList(SourceListT&& value) {
    m_sourceListHasBeenSet = true;
    m_sourceList.emplace_back(std::forward<SourceListT>(value));
    return *this;
  }
  ///@}
 private:
  PartitionStrategy m_partitionStrategy{PartitionStrategy::NOT_SET};

  Aws::Vector<PartitionSource> m_sourceList;
  bool m_partitionStrategyHasBeenSet = false;
  bool m_sourceListHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
