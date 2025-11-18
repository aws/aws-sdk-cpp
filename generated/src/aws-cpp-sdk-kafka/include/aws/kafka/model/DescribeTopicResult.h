/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/TopicState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {
class DescribeTopicResult {
 public:
  AWS_KAFKA_API DescribeTopicResult() = default;
  AWS_KAFKA_API DescribeTopicResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API DescribeTopicResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   *
          <p>The Amazon Resource Name (ARN) of the topic.</p>

   */
  inline const Aws::String& GetTopicArn() const { return m_topicArn; }
  template <typename TopicArnT = Aws::String>
  void SetTopicArn(TopicArnT&& value) {
    m_topicArnHasBeenSet = true;
    m_topicArn = std::forward<TopicArnT>(value);
  }
  template <typename TopicArnT = Aws::String>
  DescribeTopicResult& WithTopicArn(TopicArnT&& value) {
    SetTopicArn(std::forward<TopicArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The Kafka topic name of the topic.</p>
   */
  inline const Aws::String& GetTopicName() const { return m_topicName; }
  template <typename TopicNameT = Aws::String>
  void SetTopicName(TopicNameT&& value) {
    m_topicNameHasBeenSet = true;
    m_topicName = std::forward<TopicNameT>(value);
  }
  template <typename TopicNameT = Aws::String>
  DescribeTopicResult& WithTopicName(TopicNameT&& value) {
    SetTopicName(std::forward<TopicNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The replication factor of the topic.</p>
   */
  inline int GetReplicationFactor() const { return m_replicationFactor; }
  inline void SetReplicationFactor(int value) {
    m_replicationFactorHasBeenSet = true;
    m_replicationFactor = value;
  }
  inline DescribeTopicResult& WithReplicationFactor(int value) {
    SetReplicationFactor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The partition count of the topic.</p>
   */
  inline int GetPartitionCount() const { return m_partitionCount; }
  inline void SetPartitionCount(int value) {
    m_partitionCountHasBeenSet = true;
    m_partitionCount = value;
  }
  inline DescribeTopicResult& WithPartitionCount(int value) {
    SetPartitionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Topic configurations encoded as a Base64 string.</p>
   */
  inline const Aws::String& GetConfigs() const { return m_configs; }
  template <typename ConfigsT = Aws::String>
  void SetConfigs(ConfigsT&& value) {
    m_configsHasBeenSet = true;
    m_configs = std::forward<ConfigsT>(value);
  }
  template <typename ConfigsT = Aws::String>
  DescribeTopicResult& WithConfigs(ConfigsT&& value) {
    SetConfigs(std::forward<ConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The status of the topic.</p>

   */
  inline TopicState GetStatus() const { return m_status; }
  inline void SetStatus(TopicState value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeTopicResult& WithStatus(TopicState value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeTopicResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
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

  Aws::String m_configs;
  bool m_configsHasBeenSet = false;

  TopicState m_status{TopicState::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
