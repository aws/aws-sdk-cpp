/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/QueueStatus.h>
#include <aws/kinesis/model/QueueStreamIdentifier.h>

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
 * <p>A summary of a queue. Returned by <a>ListQueues</a>. To retrieve a queue's
 * configuration attributes, use <a>DescribeQueue</a>.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/QueueSummary">AWS
 * API Reference</a></p>
 */
class QueueSummary {
 public:
  AWS_KINESIS_API QueueSummary() = default;
  AWS_KINESIS_API QueueSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API QueueSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  QueueSummary& WithQueueName(QueueNameT&& value) {
    SetQueueName(std::forward<QueueNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the queue.</p>
   */
  inline const Aws::String& GetQueueARN() const { return m_queueARN; }
  inline bool QueueARNHasBeenSet() const { return m_queueARNHasBeenSet; }
  template <typename QueueARNT = Aws::String>
  void SetQueueARN(QueueARNT&& value) {
    m_queueARNHasBeenSet = true;
    m_queueARN = std::forward<QueueARNT>(value);
  }
  template <typename QueueARNT = Aws::String>
  QueueSummary& WithQueueARN(QueueARNT&& value) {
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
  inline QueueSummary& WithQueueStatus(QueueStatus value) {
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
  QueueSummary& WithQueueCreationTimestamp(QueueCreationTimestampT&& value) {
    SetQueueCreationTimestamp(std::forward<QueueCreationTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data stream the queue delivers records from.</p>
   */
  inline const Aws::Vector<QueueStreamIdentifier>& GetStreams() const { return m_streams; }
  inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }
  template <typename StreamsT = Aws::Vector<QueueStreamIdentifier>>
  void SetStreams(StreamsT&& value) {
    m_streamsHasBeenSet = true;
    m_streams = std::forward<StreamsT>(value);
  }
  template <typename StreamsT = Aws::Vector<QueueStreamIdentifier>>
  QueueSummary& WithStreams(StreamsT&& value) {
    SetStreams(std::forward<StreamsT>(value));
    return *this;
  }
  template <typename StreamsT = QueueStreamIdentifier>
  QueueSummary& AddStreams(StreamsT&& value) {
    m_streamsHasBeenSet = true;
    m_streams.emplace_back(std::forward<StreamsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queueName;

  Aws::String m_queueARN;

  QueueStatus m_queueStatus{QueueStatus::NOT_SET};

  Aws::Utils::DateTime m_queueCreationTimestamp{};

  Aws::Vector<QueueStreamIdentifier> m_streams;
  bool m_queueNameHasBeenSet = false;
  bool m_queueARNHasBeenSet = false;
  bool m_queueStatusHasBeenSet = false;
  bool m_queueCreationTimestampHasBeenSet = false;
  bool m_streamsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
