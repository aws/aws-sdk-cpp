/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/TopicReassignment.h>

#include <utility>

namespace Aws {
namespace Kafka {
namespace Model {

/**
 */
class UpdateBrokerTypeRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API UpdateBrokerTypeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateBrokerType"; }

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
  UpdateBrokerTypeRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The cluster version that you want to change. After this
   * operation completes successfully, the cluster will have a new version.</p>

   *
   */
  inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
  inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
  template <typename CurrentVersionT = Aws::String>
  void SetCurrentVersion(CurrentVersionT&& value) {
    m_currentVersionHasBeenSet = true;
    m_currentVersion = std::forward<CurrentVersionT>(value);
  }
  template <typename CurrentVersionT = Aws::String>
  UpdateBrokerTypeRequest& WithCurrentVersion(CurrentVersionT&& value) {
    SetCurrentVersion(std::forward<CurrentVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The type of Amazon EC2 instances to use for Kafka brokers. For
   * in-place upgrades to Express, use the composite format to initiate mixed mode,
   * the Express instance type to complete the upgrade, or the Standard instance type
   * to rollback.</p>

   */
  inline const Aws::String& GetTargetInstanceType() const { return m_targetInstanceType; }
  inline bool TargetInstanceTypeHasBeenSet() const { return m_targetInstanceTypeHasBeenSet; }
  template <typename TargetInstanceTypeT = Aws::String>
  void SetTargetInstanceType(TargetInstanceTypeT&& value) {
    m_targetInstanceTypeHasBeenSet = true;
    m_targetInstanceType = std::forward<TargetInstanceTypeT>(value);
  }
  template <typename TargetInstanceTypeT = Aws::String>
  UpdateBrokerTypeRequest& WithTargetInstanceType(TargetInstanceTypeT&& value) {
    SetTargetInstanceType(std::forward<TargetInstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Controls automatic topic reassignment when entering mixed broker
   * mode. When set to AUTO, MSK automatically reassigns all topics to the target
   * broker type after adding new brokers. When set to MANUAL (default), customers
   * manage topic reassignment using the StartTopicReassignment API. Only valid when
   * targetInstanceType is a composite mixed-mode value. Must be set to MANUAL before
   * completing the upgrade or rolling back.</p>

   */
  inline TopicReassignment GetTopicReassignment() const { return m_topicReassignment; }
  inline bool TopicReassignmentHasBeenSet() const { return m_topicReassignmentHasBeenSet; }
  inline void SetTopicReassignment(TopicReassignment value) {
    m_topicReassignmentHasBeenSet = true;
    m_topicReassignment = value;
  }
  inline UpdateBrokerTypeRequest& WithTopicReassignment(TopicReassignment value) {
    SetTopicReassignment(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::String m_currentVersion;

  Aws::String m_targetInstanceType;

  TopicReassignment m_topicReassignment{TopicReassignment::NOT_SET};
  bool m_clusterArnHasBeenSet = false;
  bool m_currentVersionHasBeenSet = false;
  bool m_targetInstanceTypeHasBeenSet = false;
  bool m_topicReassignmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
