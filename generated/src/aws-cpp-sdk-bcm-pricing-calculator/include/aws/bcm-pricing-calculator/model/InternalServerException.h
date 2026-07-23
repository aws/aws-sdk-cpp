/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace BCMPricingCalculator {
namespace Model {

/**
 * <p> An internal error has occurred. Retry your request, but if the problem
 * persists, contact Amazon Web Services support. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/InternalServerException">AWS
 * API Reference</a></p>
 */
class InternalServerException {
 public:
  AWS_BCMPRICINGCALCULATOR_API InternalServerException() = default;
  AWS_BCMPRICINGCALCULATOR_API InternalServerException(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_BCMPRICINGCALCULATOR_API InternalServerException& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_BCMPRICINGCALCULATOR_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  InternalServerException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> An internal error has occurred. Retry your request, but if the problem
   * persists, contact Amazon Web Services support. </p>
   */
  inline int64_t GetRetryAfterSeconds() const { return m_retryAfterSeconds; }
  inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }
  inline void SetRetryAfterSeconds(int64_t value) {
    m_retryAfterSecondsHasBeenSet = true;
    m_retryAfterSeconds = value;
  }
  inline InternalServerException& WithRetryAfterSeconds(int64_t value) {
    SetRetryAfterSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  int64_t m_retryAfterSeconds{0};
  bool m_messageHasBeenSet = false;
  bool m_retryAfterSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
