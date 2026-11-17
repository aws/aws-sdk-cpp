/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/QueueAttributes.h>
#include <aws/kinesis/model/QueueStatus.h>
#include <aws/kinesis/model/QueueStreamConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>A description of a queue. Returned by <a>CreateQueue</a>, <a>UpdateQueue</a>,
 * and <a>DescribeQueue</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/QueueDescription">AWS
 * API Reference</a></p>
 */
class QueueDescription {
 public:
  AWS_KINESIS_API QueueDescription() = default;
  AWS_KINESIS_API QueueDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API QueueDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the queue.</p>
   */
  inline const Aws::String& GetQueueName() const { return m_queueName; }
  inline bool QueueNameHasBeenSet() const { return m_queueNameHasBeenSet; }
  template <typename QueueNameT = Aws::String>
  void SetQueueName(QueueNameT&& value) {
    m_queueNameHasBeenSet = true;
    m_queueName = std::forward<QueueNameT>(value);
  }
  template <typename QueueNameT = Aws::String>
  QueueDescription& WithQueueName(QueueNameT&& value) {
    SetQueueName(std::forward<QueueNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the queue. The resource identifier in the ARN is generated when
   * the queue is created and is not derived from <code>QueueName</code>. Use the
   * returned <code>QueueARN</code> to identify the queue in subsequent requests.</p>
   */
  inline const Aws::String& GetQueueARN() const { return m_queueARN; }
  inline bool QueueARNHasBeenSet() const { return m_queueARNHasBeenSet; }
  template <typename QueueARNT = Aws::String>
  void SetQueueARN(QueueARNT&& value) {
    m_queueARNHasBeenSet = true;
    m_queueARN = std::forward<QueueARNT>(value);
  }
  template <typename QueueARNT = Aws::String>
  QueueDescription& WithQueueARN(QueueARNT&& value) {
    SetQueueARN(std::forward<QueueARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the queue.</p>
   */
  inline QueueStatus GetQueueStatus() const { return m_queueStatus; }
  inline bool QueueStatusHasBeenSet() const { return m_queueStatusHasBeenSet; }
  inline void SetQueueStatus(QueueStatus value) {
    m_queueStatusHasBeenSet = true;
    m_queueStatus = value;
  }
  inline QueueDescription& WithQueueStatus(QueueStatus value) {
    SetQueueStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the queue was created.</p>
   */
  inline const Aws::Utils::DateTime& GetQueueCreationTimestamp() const { return m_queueCreationTimestamp; }
  inline bool QueueCreationTimestampHasBeenSet() const { return m_queueCreationTimestampHasBeenSet; }
  template <typename QueueCreationTimestampT = Aws::Utils::DateTime>
  void SetQueueCreationTimestamp(QueueCreationTimestampT&& value) {
    m_queueCreationTimestampHasBeenSet = true;
    m_queueCreationTimestamp = std::forward<QueueCreationTimestampT>(value);
  }
  template <typename QueueCreationTimestampT = Aws::Utils::DateTime>
  QueueDescription& WithQueueCreationTimestamp(QueueCreationTimestampT&& value) {
    SetQueueCreationTimestamp(std::forward<QueueCreationTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data stream the queue delivers records from, and the position in that
   * stream where delivery begins. The list contains exactly one entry, because a
   * queue delivers records from a single data stream.</p>
   */
  inline const Aws::Vector<QueueStreamConfiguration>& GetStreamConfigurationList() const { return m_streamConfigurationList; }
  inline bool StreamConfigurationListHasBeenSet() const { return m_streamConfigurationListHasBeenSet; }
  template <typename StreamConfigurationListT = Aws::Vector<QueueStreamConfiguration>>
  void SetStreamConfigurationList(StreamConfigurationListT&& value) {
    m_streamConfigurationListHasBeenSet = true;
    m_streamConfigurationList = std::forward<StreamConfigurationListT>(value);
  }
  template <typename StreamConfigurationListT = Aws::Vector<QueueStreamConfiguration>>
  QueueDescription& WithStreamConfigurationList(StreamConfigurationListT&& value) {
    SetStreamConfigurationList(std::forward<StreamConfigurationListT>(value));
    return *this;
  }
  template <typename StreamConfigurationListT = QueueStreamConfiguration>
  QueueDescription& AddStreamConfigurationList(StreamConfigurationListT&& value) {
    m_streamConfigurationListHasBeenSet = true;
    m_streamConfigurationList.emplace_back(std::forward<StreamConfigurationListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration attributes of the queue.</p>
   */
  inline const QueueAttributes& GetQueueAttributes() const { return m_queueAttributes; }
  inline bool QueueAttributesHasBeenSet() const { return m_queueAttributesHasBeenSet; }
  template <typename QueueAttributesT = QueueAttributes>
  void SetQueueAttributes(QueueAttributesT&& value) {
    m_queueAttributesHasBeenSet = true;
    m_queueAttributes = std::forward<QueueAttributesT>(value);
  }
  template <typename QueueAttributesT = QueueAttributes>
  QueueDescription& WithQueueAttributes(QueueAttributesT&& value) {
    SetQueueAttributes(std::forward<QueueAttributesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queueName;

  Aws::String m_queueARN;

  QueueStatus m_queueStatus{QueueStatus::NOT_SET};

  Aws::Utils::DateTime m_queueCreationTimestamp{};

  Aws::Vector<QueueStreamConfiguration> m_streamConfigurationList;

  QueueAttributes m_queueAttributes;
  bool m_queueNameHasBeenSet = false;
  bool m_queueARNHasBeenSet = false;
  bool m_queueStatusHasBeenSet = false;
  bool m_queueCreationTimestampHasBeenSet = false;
  bool m_streamConfigurationListHasBeenSet = false;
  bool m_queueAttributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
