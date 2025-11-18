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
class DescribeTopicRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API DescribeTopicRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeTopic"; }

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
  DescribeTopicRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The Kafka topic name that uniquely identifies the topic.</p>

   *
   */
  inline const Aws::String& GetTopicName() const { return m_topicName; }
  inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
  template <typename TopicNameT = Aws::String>
  void SetTopicName(TopicNameT&& value) {
    m_topicNameHasBeenSet = true;
    m_topicName = std::forward<TopicNameT>(value);
  }
  template <typename TopicNameT = Aws::String>
  DescribeTopicRequest& WithTopicName(TopicNameT&& value) {
    SetTopicName(std::forward<TopicNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;
  bool m_clusterArnHasBeenSet = false;

  Aws::String m_topicName;
  bool m_topicNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
