/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/MultiplierType.h>
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
 * <p>A multiplier used to convert attestation input into an investment
 * value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/InvestmentMultiplier">AWS
 * API Reference</a></p>
 */
class InvestmentMultiplier {
 public:
  AWS_BILLING_API InvestmentMultiplier() = default;
  AWS_BILLING_API InvestmentMultiplier(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API InvestmentMultiplier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The multiplier value, expressed as a decimal string to preserve precision.
   * The value is digits with an optional decimal point and is 1–1000 characters. The
   * terms of the contract define this value.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  InvestmentMultiplier& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of the attestation input that the multiplier applies to, such as
   * <code>workloads migrated</code>. This value is 1–1000 characters. The terms of
   * the contract define this value.</p>
   */
  inline const Aws::String& GetInvestmentAttestationInputUnit() const { return m_investmentAttestationInputUnit; }
  inline bool InvestmentAttestationInputUnitHasBeenSet() const { return m_investmentAttestationInputUnitHasBeenSet; }
  template <typename InvestmentAttestationInputUnitT = Aws::String>
  void SetInvestmentAttestationInputUnit(InvestmentAttestationInputUnitT&& value) {
    m_investmentAttestationInputUnitHasBeenSet = true;
    m_investmentAttestationInputUnit = std::forward<InvestmentAttestationInputUnitT>(value);
  }
  template <typename InvestmentAttestationInputUnitT = Aws::String>
  InvestmentMultiplier& WithInvestmentAttestationInputUnit(InvestmentAttestationInputUnitT&& value) {
    SetInvestmentAttestationInputUnit(std::forward<InvestmentAttestationInputUnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the multiplier. A value of <code>PERCENTAGE</code> applies a
   * percentage of a value. A value of <code>CURRENCY_AMOUNT</code> applies a
   * currency amount per unit of attestation input. The terms of the contract define
   * this value.</p>
   */
  inline MultiplierType GetMultiplierType() const { return m_multiplierType; }
  inline bool MultiplierTypeHasBeenSet() const { return m_multiplierTypeHasBeenSet; }
  inline void SetMultiplierType(MultiplierType value) {
    m_multiplierTypeHasBeenSet = true;
    m_multiplierType = value;
  }
  inline InvestmentMultiplier& WithMultiplierType(MultiplierType value) {
    SetMultiplierType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  Aws::String m_investmentAttestationInputUnit;

  MultiplierType m_multiplierType{MultiplierType::NOT_SET};
  bool m_valueHasBeenSet = false;
  bool m_investmentAttestationInputUnitHasBeenSet = false;
  bool m_multiplierTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
