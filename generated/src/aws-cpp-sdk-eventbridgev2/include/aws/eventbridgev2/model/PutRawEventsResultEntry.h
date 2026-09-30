/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/SuccessCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Result entry for a published event. The position of each entry in the
 * response list aligns 1:1 with the corresponding request entry, enabling
 * co-location by index.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/PutRawEventsResultEntry">AWS
 * API Reference</a></p>
 */
class PutRawEventsResultEntry {
 public:
  AWS_EVENTBRIDGEV2_API PutRawEventsResultEntry() = default;
  AWS_EVENTBRIDGEV2_API PutRawEventsResultEntry(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API PutRawEventsResultEntry& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Unique event ID assigned by the service. Present on successful entries.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  PutRawEventsResultEntry& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sequence number for ordering within the event group.</p>
   */
  inline const Aws::String& GetSequenceNumber() const { return m_sequenceNumber; }
  inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
  template <typename SequenceNumberT = Aws::String>
  void SetSequenceNumber(SequenceNumberT&& value) {
    m_sequenceNumberHasBeenSet = true;
    m_sequenceNumber = std::forward<SequenceNumberT>(value);
  }
  template <typename SequenceNumberT = Aws::String>
  PutRawEventsResultEntry& WithSequenceNumber(SequenceNumberT&& value) {
    SetSequenceNumber(std::forward<SequenceNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates how the entry was processed. Present only on successful
   * entries.</p>
   */
  inline SuccessCode GetSuccessCode() const { return m_successCode; }
  inline bool SuccessCodeHasBeenSet() const { return m_successCodeHasBeenSet; }
  inline void SetSuccessCode(SuccessCode value) {
    m_successCodeHasBeenSet = true;
    m_successCode = value;
  }
  inline PutRawEventsResultEntry& WithSuccessCode(SuccessCode value) {
    SetSuccessCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error code if the entry failed.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  PutRawEventsResultEntry& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error message if the entry failed.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  PutRawEventsResultEntry& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  Aws::String m_sequenceNumber;

  SuccessCode m_successCode{SuccessCode::NOT_SET};

  Aws::String m_errorCode;

  Aws::String m_errorMessage;
  bool m_eventIdHasBeenSet = false;
  bool m_sequenceNumberHasBeenSet = false;
  bool m_successCodeHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
