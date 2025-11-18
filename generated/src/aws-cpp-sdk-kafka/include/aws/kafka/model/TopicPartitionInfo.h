/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>

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
 * <p>Contains information about a topic partition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TopicPartitionInfo">AWS
 * API Reference</a></p>
 */
class TopicPartitionInfo {
 public:
  AWS_KAFKA_API TopicPartitionInfo() = default;
  AWS_KAFKA_API TopicPartitionInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API TopicPartitionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The partition ID.</p>
   */
  inline int GetPartition() const { return m_partition; }
  inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }
  inline void SetPartition(int value) {
    m_partitionHasBeenSet = true;
    m_partition = value;
  }
  inline TopicPartitionInfo& WithPartition(int value) {
    SetPartition(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The leader broker ID for the partition.</p>
   */
  inline int GetLeader() const { return m_leader; }
  inline bool LeaderHasBeenSet() const { return m_leaderHasBeenSet; }
  inline void SetLeader(int value) {
    m_leaderHasBeenSet = true;
    m_leader = value;
  }
  inline TopicPartitionInfo& WithLeader(int value) {
    SetLeader(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of replica broker IDs for the partition.</p>
   */
  inline const Aws::Vector<int>& GetReplicas() const { return m_replicas; }
  inline bool ReplicasHasBeenSet() const { return m_replicasHasBeenSet; }
  template <typename ReplicasT = Aws::Vector<int>>
  void SetReplicas(ReplicasT&& value) {
    m_replicasHasBeenSet = true;
    m_replicas = std::forward<ReplicasT>(value);
  }
  template <typename ReplicasT = Aws::Vector<int>>
  TopicPartitionInfo& WithReplicas(ReplicasT&& value) {
    SetReplicas(std::forward<ReplicasT>(value));
    return *this;
  }
  inline TopicPartitionInfo& AddReplicas(int value) {
    m_replicasHasBeenSet = true;
    m_replicas.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of in-sync replica broker IDs for the partition.</p>
   */
  inline const Aws::Vector<int>& GetIsr() const { return m_isr; }
  inline bool IsrHasBeenSet() const { return m_isrHasBeenSet; }
  template <typename IsrT = Aws::Vector<int>>
  void SetIsr(IsrT&& value) {
    m_isrHasBeenSet = true;
    m_isr = std::forward<IsrT>(value);
  }
  template <typename IsrT = Aws::Vector<int>>
  TopicPartitionInfo& WithIsr(IsrT&& value) {
    SetIsr(std::forward<IsrT>(value));
    return *this;
  }
  inline TopicPartitionInfo& AddIsr(int value) {
    m_isrHasBeenSet = true;
    m_isr.push_back(value);
    return *this;
  }
  ///@}
 private:
  int m_partition{0};
  bool m_partitionHasBeenSet = false;

  int m_leader{0};
  bool m_leaderHasBeenSet = false;

  Aws::Vector<int> m_replicas;
  bool m_replicasHasBeenSet = false;

  Aws::Vector<int> m_isr;
  bool m_isrHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
