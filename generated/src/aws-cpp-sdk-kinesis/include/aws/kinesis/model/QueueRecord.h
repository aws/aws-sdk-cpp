/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

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
 * <p>A data stream record, as delivered through a queue.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/QueueRecord">AWS
 * API Reference</a></p>
 */
class QueueRecord {
 public:
  AWS_KINESIS_API QueueRecord() = default;
  AWS_KINESIS_API QueueRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API QueueRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier you use to acknowledge this record, change its visibility, or
   * restore it after it becomes a dead-letter record. A new receipt handle is issued
   * each time the record is received.</p>
   */
  inline const Aws::String& GetReceiptHandle() const { return m_receiptHandle; }
  inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }
  template <typename ReceiptHandleT = Aws::String>
  void SetReceiptHandle(ReceiptHandleT&& value) {
    m_receiptHandleHasBeenSet = true;
    m_receiptHandle = std::forward<ReceiptHandleT>(value);
  }
  template <typename ReceiptHandleT = Aws::String>
  QueueRecord& WithReceiptHandle(ReceiptHandleT&& value) {
    SetReceiptHandle(std::forward<ReceiptHandleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the record. This value stays the same across every
   * delivery of the record, and it is the same in every queue on the stream that
   * delivers the record. To identify a single delivery, use
   * <code>ReceiptHandle</code> instead.</p>
   */
  inline const Aws::String& GetRecordId() const { return m_recordId; }
  inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
  template <typename RecordIdT = Aws::String>
  void SetRecordId(RecordIdT&& value) {
    m_recordIdHasBeenSet = true;
    m_recordId = std::forward<RecordIdT>(value);
  }
  template <typename RecordIdT = Aws::String>
  QueueRecord& WithRecordId(RecordIdT&& value) {
    SetRecordId(std::forward<RecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partition key the record was written to the data stream with.</p>
   */
  inline const Aws::String& GetPartitionKey() const { return m_partitionKey; }
  inline bool PartitionKeyHasBeenSet() const { return m_partitionKeyHasBeenSet; }
  template <typename PartitionKeyT = Aws::String>
  void SetPartitionKey(PartitionKeyT&& value) {
    m_partitionKeyHasBeenSet = true;
    m_partitionKey = std::forward<PartitionKeyT>(value);
  }
  template <typename PartitionKeyT = Aws::String>
  QueueRecord& WithPartitionKey(PartitionKeyT&& value) {
    SetPartitionKey(std::forward<PartitionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data blob of the record. Amazon Kinesis Data Streams does not inspect,
   * interpret, or change the data.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::Utils::ByteBuffer>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::Utils::ByteBuffer>
  QueueRecord& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approximate time the record arrived in the data stream. The difference
   * between this value and the current time is how long the record took to reach
   * your queue consumer.</p>
   */
  inline const Aws::Utils::DateTime& GetApproximateArrivalTimestamp() const { return m_approximateArrivalTimestamp; }
  inline bool ApproximateArrivalTimestampHasBeenSet() const { return m_approximateArrivalTimestampHasBeenSet; }
  template <typename ApproximateArrivalTimestampT = Aws::Utils::DateTime>
  void SetApproximateArrivalTimestamp(ApproximateArrivalTimestampT&& value) {
    m_approximateArrivalTimestampHasBeenSet = true;
    m_approximateArrivalTimestamp = std::forward<ApproximateArrivalTimestampT>(value);
  }
  template <typename ApproximateArrivalTimestampT = Aws::Utils::DateTime>
  QueueRecord& WithApproximateArrivalTimestamp(ApproximateArrivalTimestampT&& value) {
    SetApproximateArrivalTimestamp(std::forward<ApproximateArrivalTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approximate time the record was first received from the queue.</p>
   */
  inline const Aws::Utils::DateTime& GetFirstReceiveTimestamp() const { return m_firstReceiveTimestamp; }
  inline bool FirstReceiveTimestampHasBeenSet() const { return m_firstReceiveTimestampHasBeenSet; }
  template <typename FirstReceiveTimestampT = Aws::Utils::DateTime>
  void SetFirstReceiveTimestamp(FirstReceiveTimestampT&& value) {
    m_firstReceiveTimestampHasBeenSet = true;
    m_firstReceiveTimestamp = std::forward<FirstReceiveTimestampT>(value);
  }
  template <typename FirstReceiveTimestampT = Aws::Utils::DateTime>
  QueueRecord& WithFirstReceiveTimestamp(FirstReceiveTimestampT&& value) {
    SetFirstReceiveTimestamp(std::forward<FirstReceiveTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of times this record has been received without being
   * acknowledged.</p>
   */
  inline int GetReceiveCount() const { return m_receiveCount; }
  inline bool ReceiveCountHasBeenSet() const { return m_receiveCountHasBeenSet; }
  inline void SetReceiveCount(int value) {
    m_receiveCountHasBeenSet = true;
    m_receiveCount = value;
  }
  inline QueueRecord& WithReceiveCount(int value) {
    SetReceiveCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_receiptHandle;

  Aws::String m_recordId;

  Aws::String m_partitionKey;

  Aws::Utils::ByteBuffer m_data{};

  Aws::Utils::DateTime m_approximateArrivalTimestamp{};

  Aws::Utils::DateTime m_firstReceiveTimestamp{};

  int m_receiveCount{0};
  bool m_receiptHandleHasBeenSet = false;
  bool m_recordIdHasBeenSet = false;
  bool m_partitionKeyHasBeenSet = false;
  bool m_dataHasBeenSet = false;
  bool m_approximateArrivalTimestampHasBeenSet = false;
  bool m_firstReceiveTimestampHasBeenSet = false;
  bool m_receiveCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
