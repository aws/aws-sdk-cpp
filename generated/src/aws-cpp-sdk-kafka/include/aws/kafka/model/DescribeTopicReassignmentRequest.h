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
class DescribeTopicReassignmentRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API DescribeTopicReassignmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeTopicReassignment"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  DescribeTopicReassignmentRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the topic reassignment operation.</p>
   */
  inline const Aws::String& GetTopicReassignmentOperationArn() const { return m_topicReassignmentOperationArn; }
  inline bool TopicReassignmentOperationArnHasBeenSet() const { return m_topicReassignmentOperationArnHasBeenSet; }
  template <typename TopicReassignmentOperationArnT = Aws::String>
  void SetTopicReassignmentOperationArn(TopicReassignmentOperationArnT&& value) {
    m_topicReassignmentOperationArnHasBeenSet = true;
    m_topicReassignmentOperationArn = std::forward<TopicReassignmentOperationArnT>(value);
  }
  template <typename TopicReassignmentOperationArnT = Aws::String>
  DescribeTopicReassignmentRequest& WithTopicReassignmentOperationArn(TopicReassignmentOperationArnT&& value) {
    SetTopicReassignmentOperationArn(std::forward<TopicReassignmentOperationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::String m_topicReassignmentOperationArn;
  bool m_clusterArnHasBeenSet = false;
  bool m_topicReassignmentOperationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
