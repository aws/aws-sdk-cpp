/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class ReceiveDeadLetterQueueRecordsRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API ReceiveDeadLetterQueueRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ReceiveDeadLetterQueueRecords"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The ARN of the queue whose dead-letter records are received.</p>
   */
  inline const Aws::String& GetQueueARN() const { return m_queueARN; }
  inline bool QueueARNHasBeenSet() const { return m_queueARNHasBeenSet; }
  template <typename QueueARNT = Aws::String>
  void SetQueueARN(QueueARNT&& value) {
    m_queueARNHasBeenSet = true;
    m_queueARN = std::forward<QueueARNT>(value);
  }
  template <typename QueueARNT = Aws::String>
  ReceiveDeadLetterQueueRecordsRequest& WithQueueARN(QueueARNT&& value) {
    SetQueueARN(std::forward<QueueARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of records to return. The queue never returns more
   * dead-letter records than this value, and might return fewer. The default is
   * 10.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ReceiveDeadLetterQueueRecordsRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration, in seconds, that the call waits for a record to become visible
   * before returning. The default is 9.</p>
   */
  inline int GetWaitTimeSeconds() const { return m_waitTimeSeconds; }
  inline bool WaitTimeSecondsHasBeenSet() const { return m_waitTimeSecondsHasBeenSet; }
  inline void SetWaitTimeSeconds(int value) {
    m_waitTimeSecondsHasBeenSet = true;
    m_waitTimeSeconds = value;
  }
  inline ReceiveDeadLetterQueueRecordsRequest& WithWaitTimeSeconds(int value) {
    SetWaitTimeSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration, in seconds, that the records returned by this request are in
   * flight and not visible to any consumer instance. If you do not specify this
   * value, the queue's visibility timeout is used.</p>
   */
  inline int GetVisibilityTimeoutSeconds() const { return m_visibilityTimeoutSeconds; }
  inline bool VisibilityTimeoutSecondsHasBeenSet() const { return m_visibilityTimeoutSecondsHasBeenSet; }
  inline void SetVisibilityTimeoutSeconds(int value) {
    m_visibilityTimeoutSecondsHasBeenSet = true;
    m_visibilityTimeoutSeconds = value;
  }
  inline ReceiveDeadLetterQueueRecordsRequest& WithVisibilityTimeoutSeconds(int value) {
    SetVisibilityTimeoutSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_queueARN;

  int m_limit{0};

  int m_waitTimeSeconds{0};

  int m_visibilityTimeoutSeconds{0};
  bool m_queueARNHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_waitTimeSecondsHasBeenSet = false;
  bool m_visibilityTimeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
