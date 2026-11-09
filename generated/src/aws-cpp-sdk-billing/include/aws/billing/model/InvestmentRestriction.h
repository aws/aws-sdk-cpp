/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/Amount.h>

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
 * <p>A restriction that caps the value that can be disbursed for an investment.
 * The cap applies for each attestation window.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/InvestmentRestriction">AWS
 * API Reference</a></p>
 */
class InvestmentRestriction {
 public:
  AWS_BILLING_API InvestmentRestriction() = default;
  AWS_BILLING_API InvestmentRestriction(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API InvestmentRestriction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum monetary amount allowed under the restriction.</p>
   */
  inline const Amount& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Amount>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Amount>
  InvestmentRestriction& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}
 private:
  Amount m_amount;
  bool m_amountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
