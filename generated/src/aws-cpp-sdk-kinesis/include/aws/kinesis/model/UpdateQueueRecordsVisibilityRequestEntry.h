/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>A record whose visibility timeout is changed, and the new visibility
 * timeout.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/UpdateQueueRecordsVisibilityRequestEntry">AWS
 * API Reference</a></p>
 */
class UpdateQueueRecordsVisibilityRequestEntry {
 public:
  AWS_KINESIS_API UpdateQueueRecordsVisibilityRequestEntry() = default;
  AWS_KINESIS_API UpdateQueueRecordsVisibilityRequestEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API UpdateQueueRecordsVisibilityRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The receipt handle of the record, as returned by
   * <a>ReceiveQueueRecords</a>.</p>
   */
  inline const Aws::String& GetReceiptHandle() const { return m_receiptHandle; }
  inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }
  template <typename ReceiptHandleT = Aws::String>
  void SetReceiptHandle(ReceiptHandleT&& value) {
    m_receiptHandleHasBeenSet = true;
    m_receiptHandle = std::forward<ReceiptHandleT>(value);
  }
  template <typename ReceiptHandleT = Aws::String>
  UpdateQueueRecordsVisibilityRequestEntry& WithReceiptHandle(ReceiptHandleT&& value) {
    SetReceiptHandle(std::forward<ReceiptHandleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new duration, in seconds, that the record is in flight and not visible to
   * any consumer instance, measured from when this request is processed. Specify
   * <code>0</code> to make the record visible in the queue immediately.</p>
   */
  inline int GetVisibilityTimeoutSeconds() const { return m_visibilityTimeoutSeconds; }
  inline bool VisibilityTimeoutSecondsHasBeenSet() const { return m_visibilityTimeoutSecondsHasBeenSet; }
  inline void SetVisibilityTimeoutSeconds(int value) {
    m_visibilityTimeoutSecondsHasBeenSet = true;
    m_visibilityTimeoutSeconds = value;
  }
  inline UpdateQueueRecordsVisibilityRequestEntry& WithVisibilityTimeoutSeconds(int value) {
    SetVisibilityTimeoutSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_receiptHandle;

  int m_visibilityTimeoutSeconds{0};
  bool m_receiptHandleHasBeenSet = false;
  bool m_visibilityTimeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
