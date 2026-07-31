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
 * <p>An additional charge applied to an Enterprise Support contract.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/AdditionalCharge">AWS
 * API Reference</a></p>
 */
class AdditionalCharge {
 public:
  AWS_BILLING_API AdditionalCharge() = default;
  AWS_BILLING_API AdditionalCharge(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API AdditionalCharge& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the additional charge.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AdditionalCharge& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The charge amount.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  AdditionalCharge& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of additional charge.</p>
   */
  inline const Aws::String& GetChargeType() const { return m_chargeType; }
  inline bool ChargeTypeHasBeenSet() const { return m_chargeTypeHasBeenSet; }
  template <typename ChargeTypeT = Aws::String>
  void SetChargeType(ChargeTypeT&& value) {
    m_chargeTypeHasBeenSet = true;
    m_chargeType = std::forward<ChargeTypeT>(value);
  }
  template <typename ChargeTypeT = Aws::String>
  AdditionalCharge& WithChargeType(ChargeTypeT&& value) {
    SetChargeType(std::forward<ChargeTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::String m_amount;

  Aws::String m_chargeType;
  bool m_descriptionHasBeenSet = false;
  bool m_amountHasBeenSet = false;
  bool m_chargeTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
