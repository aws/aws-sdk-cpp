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
 * <p>A record that was acknowledged.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/AcknowledgeQueueRecordsResultEntry">AWS
 * API Reference</a></p>
 */
class AcknowledgeQueueRecordsResultEntry {
 public:
  AWS_KINESIS_API AcknowledgeQueueRecordsResultEntry() = default;
  AWS_KINESIS_API AcknowledgeQueueRecordsResultEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API AcknowledgeQueueRecordsResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The receipt handle of the record that was acknowledged.</p>
   */
  inline const Aws::String& GetReceiptHandle() const { return m_receiptHandle; }
  inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }
  template <typename ReceiptHandleT = Aws::String>
  void SetReceiptHandle(ReceiptHandleT&& value) {
    m_receiptHandleHasBeenSet = true;
    m_receiptHandle = std::forward<ReceiptHandleT>(value);
  }
  template <typename ReceiptHandleT = Aws::String>
  AcknowledgeQueueRecordsResultEntry& WithReceiptHandle(ReceiptHandleT&& value) {
    SetReceiptHandle(std::forward<ReceiptHandleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_receiptHandle;
  bool m_receiptHandleHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
