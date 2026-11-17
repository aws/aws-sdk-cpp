/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/AcknowledgeDeadLetterQueueRecordsRequestEntry.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class AcknowledgeDeadLetterQueueRecordsRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API AcknowledgeDeadLetterQueueRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AcknowledgeDeadLetterQueueRecords"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The ARN of the queue whose dead-letter records are acknowledged.</p>
   */
  inline const Aws::String& GetQueueARN() const { return m_queueARN; }
  inline bool QueueARNHasBeenSet() const { return m_queueARNHasBeenSet; }
  template <typename QueueARNT = Aws::String>
  void SetQueueARN(QueueARNT&& value) {
    m_queueARNHasBeenSet = true;
    m_queueARN = std::forward<QueueARNT>(value);
  }
  template <typename QueueARNT = Aws::String>
  AcknowledgeDeadLetterQueueRecordsRequest& WithQueueARN(QueueARNT&& value) {
    SetQueueARN(std::forward<QueueARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dead-letter records to acknowledge, identified by their receipt
   * handles.</p>
   */
  inline const Aws::Vector<AcknowledgeDeadLetterQueueRecordsRequestEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<AcknowledgeDeadLetterQueueRecordsRequestEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<AcknowledgeDeadLetterQueueRecordsRequestEntry>>
  AcknowledgeDeadLetterQueueRecordsRequest& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = AcknowledgeDeadLetterQueueRecordsRequestEntry>
  AcknowledgeDeadLetterQueueRecordsRequest& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queueARN;

  Aws::Vector<AcknowledgeDeadLetterQueueRecordsRequestEntry> m_entries;
  bool m_queueARNHasBeenSet = false;
  bool m_entriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
