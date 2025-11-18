/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 *
          <p>Includes identification info about the topic.</p>

 * <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TopicInfo">AWS API
 * Reference</a></p>
 */
class TopicInfo {
 public:
  AWS_KAFKA_API TopicInfo() = default;
  AWS_KAFKA_API TopicInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API TopicInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   *
          <p>The Amazon Resource Name (ARN) of the topic.</p>

   */
  inline const Aws::String& GetTopicArn() const { return m_topicArn; }
  inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
  template <typename TopicArnT = Aws::String>
  void SetTopicArn(TopicArnT&& value) {
    m_topicArnHasBeenSet = true;
    m_topicArn = std::forward<TopicArnT>(value);
  }
  template <typename TopicArnT = Aws::String>
  TopicInfo& WithTopicArn(TopicArnT&& value) {
    SetTopicArn(std::forward<TopicArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Name for a topic.</p>

   */
  inline const Aws::String& GetTopicName() const { return m_topicName; }
  inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
  template <typename TopicNameT = Aws::String>
  void SetTopicName(TopicNameT&& value) {
    m_topicNameHasBeenSet = true;
    m_topicName = std::forward<TopicNameT>(value);
  }
  template <typename TopicNameT = Aws::String>
  TopicInfo& WithTopicName(TopicNameT&& value) {
    SetTopicName(std::forward<TopicNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Replication factor for a topic.</p>

   */
  inline int GetReplicationFactor() const { return m_replicationFactor; }
  inline bool ReplicationFactorHasBeenSet() const { return m_replicationFactorHasBeenSet; }
  inline void SetReplicationFactor(int value) {
    m_replicationFactorHasBeenSet = true;
    m_replicationFactor = value;
  }
  inline TopicInfo& WithReplicationFactor(int value) {
    SetReplicationFactor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Partition count for a topic.</p>

   */
  inline int GetPartitionCount() const { return m_partitionCount; }
  inline bool PartitionCountHasBeenSet() const { return m_partitionCountHasBeenSet; }
  inline void SetPartitionCount(int value) {
    m_partitionCountHasBeenSet = true;
    m_partitionCount = value;
  }
  inline TopicInfo& WithPartitionCount(int value) {
    SetPartitionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Number of out-of-sync replicas for a topic.</p>

   */
  inline int GetOutOfSyncReplicaCount() const { return m_outOfSyncReplicaCount; }
  inline bool OutOfSyncReplicaCountHasBeenSet() const { return m_outOfSyncReplicaCountHasBeenSet; }
  inline void SetOutOfSyncReplicaCount(int value) {
    m_outOfSyncReplicaCountHasBeenSet = true;
    m_outOfSyncReplicaCount = value;
  }
  inline TopicInfo& WithOutOfSyncReplicaCount(int value) {
    SetOutOfSyncReplicaCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_topicArn;
  bool m_topicArnHasBeenSet = false;

  Aws::String m_topicName;
  bool m_topicNameHasBeenSet = false;

  int m_replicationFactor{0};
  bool m_replicationFactorHasBeenSet = false;

  int m_partitionCount{0};
  bool m_partitionCountHasBeenSet = false;

  int m_outOfSyncReplicaCount{0};
  bool m_outOfSyncReplicaCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
