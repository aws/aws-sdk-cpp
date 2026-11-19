/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/TopicReassignmentStatus.h>

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
 * <p>Summary information about a topic reassignment operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TopicReassignmentInfo">AWS
 * API Reference</a></p>
 */
class TopicReassignmentInfo {
 public:
  AWS_KAFKA_API TopicReassignmentInfo() = default;
  AWS_KAFKA_API TopicReassignmentInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API TopicReassignmentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Number of topics fully migrated.</p>
   */
  inline int GetCompletedTopics() const { return m_completedTopics; }
  inline bool CompletedTopicsHasBeenSet() const { return m_completedTopicsHasBeenSet; }
  inline void SetCompletedTopics(int value) {
    m_completedTopicsHasBeenSet = true;
    m_completedTopics = value;
  }
  inline TopicReassignmentInfo& WithCompletedTopics(int value) {
    SetCompletedTopics(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the operation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  TopicReassignmentInfo& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the reassignment operation.</p>
   */
  inline TopicReassignmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TopicReassignmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TopicReassignmentInfo& WithStatus(TopicReassignmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target broker instance type for this reassignment.</p>
   */
  inline const Aws::String& GetTargetInstanceType() const { return m_targetInstanceType; }
  inline bool TargetInstanceTypeHasBeenSet() const { return m_targetInstanceTypeHasBeenSet; }
  template <typename TargetInstanceTypeT = Aws::String>
  void SetTargetInstanceType(TargetInstanceTypeT&& value) {
    m_targetInstanceTypeHasBeenSet = true;
    m_targetInstanceType = std::forward<TargetInstanceTypeT>(value);
  }
  template <typename TargetInstanceTypeT = Aws::String>
  TopicReassignmentInfo& WithTargetInstanceType(TargetInstanceTypeT&& value) {
    SetTargetInstanceType(std::forward<TargetInstanceTypeT>(value));
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
  TopicReassignmentInfo& WithTopicReassignmentOperationArn(TopicReassignmentOperationArnT&& value) {
    SetTopicReassignmentOperationArn(std::forward<TopicReassignmentOperationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total number of topics matching the selector.</p>
   */
  inline int GetTotalTopics() const { return m_totalTopics; }
  inline bool TotalTopicsHasBeenSet() const { return m_totalTopicsHasBeenSet; }
  inline void SetTotalTopics(int value) {
    m_totalTopicsHasBeenSet = true;
    m_totalTopics = value;
  }
  inline TopicReassignmentInfo& WithTotalTopics(int value) {
    SetTotalTopics(value);
    return *this;
  }
  ///@}
 private:
  int m_completedTopics{0};

  Aws::Utils::DateTime m_creationTime{};

  TopicReassignmentStatus m_status{TopicReassignmentStatus::NOT_SET};

  Aws::String m_targetInstanceType;

  Aws::String m_topicReassignmentOperationArn;

  int m_totalTopics{0};
  bool m_completedTopicsHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_targetInstanceTypeHasBeenSet = false;
  bool m_topicReassignmentOperationArnHasBeenSet = false;
  bool m_totalTopicsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
