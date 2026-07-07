/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {

/**
 * <p>A monetary amount with a currency code. Used throughout the Billing API to
 * represent credit balances, allocations, and adjustments.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/Amount">AWS API
 * Reference</a></p>
 */
class Amount {
 public:
  AWS_BILLING_API Amount() = default;
  AWS_BILLING_API Amount(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Amount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ISO 4217 currency code for the amount (for example,
   * <code>USD</code>).</p>
   */
  inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  template <typename CurrencyCodeT = Aws::String>
  void SetCurrencyCode(CurrencyCodeT&& value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = std::forward<CurrencyCodeT>(value);
  }
  template <typename CurrencyCodeT = Aws::String>
  Amount& WithCurrencyCode(CurrencyCodeT&& value) {
    SetCurrencyCode(std::forward<CurrencyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount as a decimal string (for example, <code>"743.21"</code>). Negative
   * values represent credits that reduce a bill.</p>
   */
  inline const Aws::String& GetCurrencyAmount() const { return m_currencyAmount; }
  inline bool CurrencyAmountHasBeenSet() const { return m_currencyAmountHasBeenSet; }
  template <typename CurrencyAmountT = Aws::String>
  void SetCurrencyAmount(CurrencyAmountT&& value) {
    m_currencyAmountHasBeenSet = true;
    m_currencyAmount = std::forward<CurrencyAmountT>(value);
  }
  template <typename CurrencyAmountT = Aws::String>
  Amount& WithCurrencyAmount(CurrencyAmountT&& value) {
    SetCurrencyAmount(std::forward<CurrencyAmountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_currencyCode;

  Aws::String m_currencyAmount;
  bool m_currencyCodeHasBeenSet = false;
  bool m_currencyAmountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
