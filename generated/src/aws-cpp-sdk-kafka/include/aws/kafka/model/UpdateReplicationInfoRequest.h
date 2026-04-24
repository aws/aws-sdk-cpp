/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ConsumerGroupReplicationUpdate.h>
#include <aws/kafka/model/LogDelivery.h>
#include <aws/kafka/model/TopicReplicationUpdate.h>

#include <utility>

namespace Aws {
namespace Kafka {
namespace Model {

/**
 * <p>Update information relating to replication between a given source and target
 * Kafka cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateReplicationInfoRequest">AWS
 * API Reference</a></p>
 */
class UpdateReplicationInfoRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API UpdateReplicationInfoRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationInfo"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Updated consumer group replication information.</p>
   */
  inline const ConsumerGroupReplicationUpdate& GetConsumerGroupReplication() const { return m_consumerGroupReplication; }
  inline bool ConsumerGroupReplicationHasBeenSet() const { return m_consumerGroupReplicationHasBeenSet; }
  template <typename ConsumerGroupReplicationT = ConsumerGroupReplicationUpdate>
  void SetConsumerGroupReplication(ConsumerGroupReplicationT&& value) {
    m_consumerGroupReplicationHasBeenSet = true;
    m_consumerGroupReplication = std::forward<ConsumerGroupReplicationT>(value);
  }
  template <typename ConsumerGroupReplicationT = ConsumerGroupReplicationUpdate>
  UpdateReplicationInfoRequest& WithConsumerGroupReplication(ConsumerGroupReplicationT&& value) {
    SetConsumerGroupReplication(std::forward<ConsumerGroupReplicationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current replicator version.</p>
   */
  inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
  inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
  template <typename CurrentVersionT = Aws::String>
  void SetCurrentVersion(CurrentVersionT&& value) {
    m_currentVersionHasBeenSet = true;
    m_currentVersion = std::forward<CurrentVersionT>(value);
  }
  template <typename CurrentVersionT = Aws::String>
  UpdateReplicationInfoRequest& WithCurrentVersion(CurrentVersionT&& value) {
    SetCurrentVersion(std::forward<CurrentVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the replicator to be updated.</p>
   */
  inline const Aws::String& GetReplicatorArn() const { return m_replicatorArn; }
  inline bool ReplicatorArnHasBeenSet() const { return m_replicatorArnHasBeenSet; }
  template <typename ReplicatorArnT = Aws::String>
  void SetReplicatorArn(ReplicatorArnT&& value) {
    m_replicatorArnHasBeenSet = true;
    m_replicatorArn = std::forward<ReplicatorArnT>(value);
  }
  template <typename ReplicatorArnT = Aws::String>
  UpdateReplicationInfoRequest& WithReplicatorArn(ReplicatorArnT&& value) {
    SetReplicatorArn(std::forward<ReplicatorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the source Kafka cluster.</p>
   */
  inline const Aws::String& GetSourceKafkaClusterArn() const { return m_sourceKafkaClusterArn; }
  inline bool SourceKafkaClusterArnHasBeenSet() const { return m_sourceKafkaClusterArnHasBeenSet; }
  template <typename SourceKafkaClusterArnT = Aws::String>
  void SetSourceKafkaClusterArn(SourceKafkaClusterArnT&& value) {
    m_sourceKafkaClusterArnHasBeenSet = true;
    m_sourceKafkaClusterArn = std::forward<SourceKafkaClusterArnT>(value);
  }
  template <typename SourceKafkaClusterArnT = Aws::String>
  UpdateReplicationInfoRequest& WithSourceKafkaClusterArn(SourceKafkaClusterArnT&& value) {
    SetSourceKafkaClusterArn(std::forward<SourceKafkaClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the source Kafka cluster.</p>
   */
  inline const Aws::String& GetSourceKafkaClusterId() const { return m_sourceKafkaClusterId; }
  inline bool SourceKafkaClusterIdHasBeenSet() const { return m_sourceKafkaClusterIdHasBeenSet; }
  template <typename SourceKafkaClusterIdT = Aws::String>
  void SetSourceKafkaClusterId(SourceKafkaClusterIdT&& value) {
    m_sourceKafkaClusterIdHasBeenSet = true;
    m_sourceKafkaClusterId = std::forward<SourceKafkaClusterIdT>(value);
  }
  template <typename SourceKafkaClusterIdT = Aws::String>
  UpdateReplicationInfoRequest& WithSourceKafkaClusterId(SourceKafkaClusterIdT&& value) {
    SetSourceKafkaClusterId(std::forward<SourceKafkaClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the target Kafka cluster.</p>
   */
  inline const Aws::String& GetTargetKafkaClusterArn() const { return m_targetKafkaClusterArn; }
  inline bool TargetKafkaClusterArnHasBeenSet() const { return m_targetKafkaClusterArnHasBeenSet; }
  template <typename TargetKafkaClusterArnT = Aws::String>
  void SetTargetKafkaClusterArn(TargetKafkaClusterArnT&& value) {
    m_targetKafkaClusterArnHasBeenSet = true;
    m_targetKafkaClusterArn = std::forward<TargetKafkaClusterArnT>(value);
  }
  template <typename TargetKafkaClusterArnT = Aws::String>
  UpdateReplicationInfoRequest& WithTargetKafkaClusterArn(TargetKafkaClusterArnT&& value) {
    SetTargetKafkaClusterArn(std::forward<TargetKafkaClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the target Kafka cluster.</p>
   */
  inline const Aws::String& GetTargetKafkaClusterId() const { return m_targetKafkaClusterId; }
  inline bool TargetKafkaClusterIdHasBeenSet() const { return m_targetKafkaClusterIdHasBeenSet; }
  template <typename TargetKafkaClusterIdT = Aws::String>
  void SetTargetKafkaClusterId(TargetKafkaClusterIdT&& value) {
    m_targetKafkaClusterIdHasBeenSet = true;
    m_targetKafkaClusterId = std::forward<TargetKafkaClusterIdT>(value);
  }
  template <typename TargetKafkaClusterIdT = Aws::String>
  UpdateReplicationInfoRequest& WithTargetKafkaClusterId(TargetKafkaClusterIdT&& value) {
    SetTargetKafkaClusterId(std::forward<TargetKafkaClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated topic replication information.</p>
   */
  inline const TopicReplicationUpdate& GetTopicReplication() const { return m_topicReplication; }
  inline bool TopicReplicationHasBeenSet() const { return m_topicReplicationHasBeenSet; }
  template <typename TopicReplicationT = TopicReplicationUpdate>
  void SetTopicReplication(TopicReplicationT&& value) {
    m_topicReplicationHasBeenSet = true;
    m_topicReplication = std::forward<TopicReplicationT>(value);
  }
  template <typename TopicReplicationT = TopicReplicationUpdate>
  UpdateReplicationInfoRequest& WithTopicReplication(TopicReplicationT&& value) {
    SetTopicReplication(std::forward<TopicReplicationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for delivering replicator logs to customer destinations.</p>
   */
  inline const LogDelivery& GetLogDelivery() const { return m_logDelivery; }
  inline bool LogDeliveryHasBeenSet() const { return m_logDeliveryHasBeenSet; }
  template <typename LogDeliveryT = LogDelivery>
  void SetLogDelivery(LogDeliveryT&& value) {
    m_logDeliveryHasBeenSet = true;
    m_logDelivery = std::forward<LogDeliveryT>(value);
  }
  template <typename LogDeliveryT = LogDelivery>
  UpdateReplicationInfoRequest& WithLogDelivery(LogDeliveryT&& value) {
    SetLogDelivery(std::forward<LogDeliveryT>(value));
    return *this;
  }
  ///@}
 private:
  ConsumerGroupReplicationUpdate m_consumerGroupReplication;

  Aws::String m_currentVersion;

  Aws::String m_replicatorArn;

  Aws::String m_sourceKafkaClusterArn;

  Aws::String m_sourceKafkaClusterId;

  Aws::String m_targetKafkaClusterArn;

  Aws::String m_targetKafkaClusterId;

  TopicReplicationUpdate m_topicReplication;

  LogDelivery m_logDelivery;
  bool m_consumerGroupReplicationHasBeenSet = false;
  bool m_currentVersionHasBeenSet = false;
  bool m_replicatorArnHasBeenSet = false;
  bool m_sourceKafkaClusterArnHasBeenSet = false;
  bool m_sourceKafkaClusterIdHasBeenSet = false;
  bool m_targetKafkaClusterArnHasBeenSet = false;
  bool m_targetKafkaClusterIdHasBeenSet = false;
  bool m_topicReplicationHasBeenSet = false;
  bool m_logDeliveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
