/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>
#include <aws/rpcv2protocol/model/ValidationExceptionField.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2Protocol {
namespace Model {

/**
 * <p>A standard error for input validation failures. This should be thrown by
 * services when a member of the input structure falls outside of the modeled or
 * documented constraints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rpcv2protocol-2020-07-14/ValidationException">AWS
 * API Reference</a></p>
 */
class ValidationException {
 public:
  AWS_RPCV2PROTOCOL_API ValidationException() = default;
  AWS_RPCV2PROTOCOL_API ValidationException(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2PROTOCOL_API ValidationException& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2PROTOCOL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A summary of the validation failure.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ValidationException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of specific failures encountered while validating the input. A member
   * can appear in this list more than once if it failed to satisfy multiple
   * constraints.</p>
   */
  inline const Aws::Vector<ValidationExceptionField>& GetFieldList() const { return m_fieldList; }
  inline bool FieldListHasBeenSet() const { return m_fieldListHasBeenSet; }
  template <typename FieldListT = Aws::Vector<ValidationExceptionField>>
  void SetFieldList(FieldListT&& value) {
    m_fieldListHasBeenSet = true;
    m_fieldList = std::forward<FieldListT>(value);
  }
  template <typename FieldListT = Aws::Vector<ValidationExceptionField>>
  ValidationException& WithFieldList(FieldListT&& value) {
    SetFieldList(std::forward<FieldListT>(value));
    return *this;
  }
  template <typename FieldListT = ValidationExceptionField>
  ValidationException& AddFieldList(FieldListT&& value) {
    m_fieldListHasBeenSet = true;
    m_fieldList.emplace_back(std::forward<FieldListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;
  bool m_messageHasBeenSet = false;

  Aws::Vector<ValidationExceptionField> m_fieldList;
  bool m_fieldListHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
