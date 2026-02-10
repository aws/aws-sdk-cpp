/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/Kafka_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Kafka {
namespace Model {

/**
 */
class CreateTopicRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API CreateTopicRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTopic"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   *
          <p>The Amazon Resource Name (ARN) that uniquely identifies the
   * cluster.</p>

   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  CreateTopicRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The name of the topic to create.</p>

   */
  inline const Aws::String& GetTopicName() const { return m_topicName; }
  inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
  template <typename TopicNameT = Aws::String>
  void SetTopicName(TopicNameT&& value) {
    m_topicNameHasBeenSet = true;
    m_topicName = std::forward<TopicNameT>(value);
  }
  template <typename TopicNameT = Aws::String>
  CreateTopicRequest& WithTopicName(TopicNameT&& value) {
    SetTopicName(std::forward<TopicNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The number of partitions for the topic.</p>

   */
  inline int GetPartitionCount() const { return m_partitionCount; }
  inline bool PartitionCountHasBeenSet() const { return m_partitionCountHasBeenSet; }
  inline void SetPartitionCount(int value) {
    m_partitionCountHasBeenSet = true;
    m_partitionCount = value;
  }
  inline CreateTopicRequest& WithPartitionCount(int value) {
    SetPartitionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The replication factor for the topic.</p>

   */
  inline int GetReplicationFactor() const { return m_replicationFactor; }
  inline bool ReplicationFactorHasBeenSet() const { return m_replicationFactorHasBeenSet; }
  inline void SetReplicationFactor(int value) {
    m_replicationFactorHasBeenSet = true;
    m_replicationFactor = value;
  }
  inline CreateTopicRequest& WithReplicationFactor(int value) {
    SetReplicationFactor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Topic configurations encoded as a Base64 string.</p>

   */
  inline const Aws::String& GetConfigs() const { return m_configs; }
  inline bool ConfigsHasBeenSet() const { return m_configsHasBeenSet; }
  template <typename ConfigsT = Aws::String>
  void SetConfigs(ConfigsT&& value) {
    m_configsHasBeenSet = true;
    m_configs = std::forward<ConfigsT>(value);
  }
  template <typename ConfigsT = Aws::String>
  CreateTopicRequest& WithConfigs(ConfigsT&& value) {
    SetConfigs(std::forward<ConfigsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::String m_topicName;

  int m_partitionCount{0};

  int m_replicationFactor{0};

  Aws::String m_configs;
  bool m_clusterArnHasBeenSet = false;
  bool m_topicNameHasBeenSet = false;
  bool m_partitionCountHasBeenSet = false;
  bool m_replicationFactorHasBeenSet = false;
  bool m_configsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
