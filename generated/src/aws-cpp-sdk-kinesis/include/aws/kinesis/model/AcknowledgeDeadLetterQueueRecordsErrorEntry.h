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
 * <p>A dead-letter record that was not acknowledged, and why.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/AcknowledgeDeadLetterQueueRecordsErrorEntry">AWS
 * API Reference</a></p>
 */
class AcknowledgeDeadLetterQueueRecordsErrorEntry {
 public:
  AWS_KINESIS_API AcknowledgeDeadLetterQueueRecordsErrorEntry() = default;
  AWS_KINESIS_API AcknowledgeDeadLetterQueueRecordsErrorEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API AcknowledgeDeadLetterQueueRecordsErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The receipt handle of the record that was not acknowledged.</p>
   */
  inline const Aws::String& GetReceiptHandle() const { return m_receiptHandle; }
  inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }
  template <typename ReceiptHandleT = Aws::String>
  void SetReceiptHandle(ReceiptHandleT&& value) {
    m_receiptHandleHasBeenSet = true;
    m_receiptHandle = std::forward<ReceiptHandleT>(value);
  }
  template <typename ReceiptHandleT = Aws::String>
  AcknowledgeDeadLetterQueueRecordsErrorEntry& WithReceiptHandle(ReceiptHandleT&& value) {
    SetReceiptHandle(std::forward<ReceiptHandleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code identifying the type of failure. One of
   * <code>ResourceNotFoundException</code>, <code>InvalidArgumentException</code>,
   * <code>ThrottlingException</code>, or <code>InternalFailureException</code>.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  AcknowledgeDeadLetterQueueRecordsErrorEntry& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the cause of the failure.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  AcknowledgeDeadLetterQueueRecordsErrorEntry& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_receiptHandle;

  Aws::String m_errorCode;

  Aws::String m_errorMessage;
  bool m_receiptHandleHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
