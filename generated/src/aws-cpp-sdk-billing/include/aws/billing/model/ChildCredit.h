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
 * <p>A new credit that a split created.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ChildCredit">AWS
 * API Reference</a></p>
 */
class ChildCredit {
 public:
  AWS_BILLING_API ChildCredit() = default;
  AWS_BILLING_API ChildCredit(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API ChildCredit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the new credit. A dry run omits this field.</p>
   */
  inline const Aws::String& GetCreditId() const { return m_creditId; }
  inline bool CreditIdHasBeenSet() const { return m_creditIdHasBeenSet; }
  template <typename CreditIdT = Aws::String>
  void SetCreditId(CreditIdT&& value) {
    m_creditIdHasBeenSet = true;
    m_creditId = std::forward<CreditIdT>(value);
  }
  template <typename CreditIdT = Aws::String>
  ChildCredit& WithCreditId(CreditIdT&& value) {
    SetCreditId(std::forward<CreditIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of the new credit.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  ChildCredit& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_creditId;

  Aws::String m_amount;
  bool m_creditIdHasBeenSet = false;
  bool m_amountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
