/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/InvalidRequestDetail.h>
#include <aws/comprehend/model/InvalidRequestReason.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Comprehend {
namespace Model {

/**
 * <p>The request is invalid.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/InvalidRequestException">AWS
 * API Reference</a></p>
 */
class InvalidRequestException {
 public:
  AWS_COMPREHEND_API InvalidRequestException() = default;
  AWS_COMPREHEND_API InvalidRequestException(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API InvalidRequestException& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  InvalidRequestException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline InvalidRequestReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(InvalidRequestReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline InvalidRequestException& WithReason(InvalidRequestReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{

  inline const InvalidRequestDetail& GetDetail() const { return m_detail; }
  inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
  template <typename DetailT = InvalidRequestDetail>
  void SetDetail(DetailT&& value) {
    m_detailHasBeenSet = true;
    m_detail = std::forward<DetailT>(value);
  }
  template <typename DetailT = InvalidRequestDetail>
  InvalidRequestException& WithDetail(DetailT&& value) {
    SetDetail(std::forward<DetailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  InvalidRequestReason m_reason{InvalidRequestReason::NOT_SET};

  InvalidRequestDetail m_detail;
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_detailHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
