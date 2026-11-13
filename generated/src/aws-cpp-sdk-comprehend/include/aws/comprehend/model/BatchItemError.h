/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
 * <p>Describes an error that occurred while processing a document in a batch. The
 * operation returns on <code>BatchItemError</code> object for each document that
 * contained an error.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchItemError">AWS
 * API Reference</a></p>
 */
class BatchItemError {
 public:
  AWS_COMPREHEND_API BatchItemError() = default;
  AWS_COMPREHEND_API BatchItemError(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API BatchItemError& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The zero-based index of the document in the input list.</p>
   */
  inline int64_t GetIndex() const { return m_index; }
  inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
  inline void SetIndex(int64_t value) {
    m_indexHasBeenSet = true;
    m_index = value;
  }
  inline BatchItemError& WithIndex(int64_t value) {
    SetIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The numeric error code of the error.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  BatchItemError& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A text description of the error.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  BatchItemError& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_index{0};

  Aws::String m_errorCode;

  Aws::String m_errorMessage;
  bool m_indexHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
