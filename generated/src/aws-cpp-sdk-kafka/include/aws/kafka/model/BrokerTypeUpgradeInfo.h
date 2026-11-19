/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/TopicReassignmentMode.h>

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
 * <p>Information about the topic reassignment of an UpdateBrokerType operation
 * that upgrades a cluster from Standard brokers to Express brokers. Present only
 * on the operation that initiated the upgrade.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BrokerTypeUpgradeInfo">AWS
 * API Reference</a></p>
 */
class BrokerTypeUpgradeInfo {
 public:
  AWS_KAFKA_API BrokerTypeUpgradeInfo() = default;
  AWS_KAFKA_API BrokerTypeUpgradeInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API BrokerTypeUpgradeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>How topics are reassigned to the Express brokers.</p>
   */
  inline TopicReassignmentMode GetTopicReassignmentMode() const { return m_topicReassignmentMode; }
  inline bool TopicReassignmentModeHasBeenSet() const { return m_topicReassignmentModeHasBeenSet; }
  inline void SetTopicReassignmentMode(TopicReassignmentMode value) {
    m_topicReassignmentModeHasBeenSet = true;
    m_topicReassignmentMode = value;
  }
  inline BrokerTypeUpgradeInfo& WithTopicReassignmentMode(TopicReassignmentMode value) {
    SetTopicReassignmentMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the topic reassignment operation that
   * Amazon MSK started for this upgrade. Present once that reassignment has started.
   * Under MANUAL you start reassignments yourself, so Amazon MSK starts none.</p>
   */
  inline const Aws::String& GetTopicReassignmentOperationArn() const { return m_topicReassignmentOperationArn; }
  inline bool TopicReassignmentOperationArnHasBeenSet() const { return m_topicReassignmentOperationArnHasBeenSet; }
  template <typename TopicReassignmentOperationArnT = Aws::String>
  void SetTopicReassignmentOperationArn(TopicReassignmentOperationArnT&& value) {
    m_topicReassignmentOperationArnHasBeenSet = true;
    m_topicReassignmentOperationArn = std::forward<TopicReassignmentOperationArnT>(value);
  }
  template <typename TopicReassignmentOperationArnT = Aws::String>
  BrokerTypeUpgradeInfo& WithTopicReassignmentOperationArn(TopicReassignmentOperationArnT&& value) {
    SetTopicReassignmentOperationArn(std::forward<TopicReassignmentOperationArnT>(value));
    return *this;
  }
  ///@}
 private:
  TopicReassignmentMode m_topicReassignmentMode{TopicReassignmentMode::NOT_SET};

  Aws::String m_topicReassignmentOperationArn;
  bool m_topicReassignmentModeHasBeenSet = false;
  bool m_topicReassignmentOperationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
