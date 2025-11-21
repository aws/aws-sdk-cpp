/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/SavingsEstimationMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p> Contains information about estimated monthly cost savings. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/EstimatedMonthlySavings">AWS
 * API Reference</a></p>
 */
class EstimatedMonthlySavings {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API EstimatedMonthlySavings() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API EstimatedMonthlySavings(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API EstimatedMonthlySavings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The currency of the estimated savings. </p>
   */
  inline const Aws::String& GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  template <typename CurrencyT = Aws::String>
  void SetCurrency(CurrencyT&& value) {
    m_currencyHasBeenSet = true;
    m_currency = std::forward<CurrencyT>(value);
  }
  template <typename CurrencyT = Aws::String>
  EstimatedMonthlySavings& WithCurrency(CurrencyT&& value) {
    SetCurrency(std::forward<CurrencyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The estimated monthly savings before applying any discounts. </p>
   */
  inline double GetBeforeDiscountSavings() const { return m_beforeDiscountSavings; }
  inline bool BeforeDiscountSavingsHasBeenSet() const { return m_beforeDiscountSavingsHasBeenSet; }
  inline void SetBeforeDiscountSavings(double value) {
    m_beforeDiscountSavingsHasBeenSet = true;
    m_beforeDiscountSavings = value;
  }
  inline EstimatedMonthlySavings& WithBeforeDiscountSavings(double value) {
    SetBeforeDiscountSavings(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The estimated monthly savings after applying any discounts. </p>
   */
  inline double GetAfterDiscountSavings() const { return m_afterDiscountSavings; }
  inline bool AfterDiscountSavingsHasBeenSet() const { return m_afterDiscountSavingsHasBeenSet; }
  inline void SetAfterDiscountSavings(double value) {
    m_afterDiscountSavingsHasBeenSet = true;
    m_afterDiscountSavings = value;
  }
  inline EstimatedMonthlySavings& WithAfterDiscountSavings(double value) {
    SetAfterDiscountSavings(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode used to calculate savings, either BeforeDiscount or
   * AfterDiscount.</p>
   */
  inline SavingsEstimationMode GetSavingsEstimationMode() const { return m_savingsEstimationMode; }
  inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }
  inline void SetSavingsEstimationMode(SavingsEstimationMode value) {
    m_savingsEstimationModeHasBeenSet = true;
    m_savingsEstimationMode = value;
  }
  inline EstimatedMonthlySavings& WithSavingsEstimationMode(SavingsEstimationMode value) {
    SetSavingsEstimationMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_currency;
  bool m_currencyHasBeenSet = false;

  double m_beforeDiscountSavings{0.0};
  bool m_beforeDiscountSavingsHasBeenSet = false;

  double m_afterDiscountSavings{0.0};
  bool m_afterDiscountSavingsHasBeenSet = false;

  SavingsEstimationMode m_savingsEstimationMode{SavingsEstimationMode::NOT_SET};
  bool m_savingsEstimationModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
