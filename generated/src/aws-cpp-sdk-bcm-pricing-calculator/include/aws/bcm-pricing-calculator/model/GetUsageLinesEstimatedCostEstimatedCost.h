/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/CurrencyCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BCMPricingCalculator {
namespace Model {

/**
 * <p> Represents the estimated cost of the usage amount for a usage line.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/GetUsageLinesEstimatedCostEstimatedCost">AWS
 * API Reference</a></p>
 */
class GetUsageLinesEstimatedCostEstimatedCost {
 public:
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostEstimatedCost() = default;
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostEstimatedCost(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostEstimatedCost& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The usage amount that was priced. </p>
   */
  inline double GetUsageAmount() const { return m_usageAmount; }
  inline bool UsageAmountHasBeenSet() const { return m_usageAmountHasBeenSet; }
  inline void SetUsageAmount(double value) {
    m_usageAmountHasBeenSet = true;
    m_usageAmount = value;
  }
  inline GetUsageLinesEstimatedCostEstimatedCost& WithUsageAmount(double value) {
    SetUsageAmount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unit of the usage amount, for example <code>Hrs</code> or
   * <code>GB-Mo</code>. </p>
   */
  inline const Aws::String& GetUsageUnit() const { return m_usageUnit; }
  inline bool UsageUnitHasBeenSet() const { return m_usageUnitHasBeenSet; }
  template <typename UsageUnitT = Aws::String>
  void SetUsageUnit(UsageUnitT&& value) {
    m_usageUnitHasBeenSet = true;
    m_usageUnit = std::forward<UsageUnitT>(value);
  }
  template <typename UsageUnitT = Aws::String>
  GetUsageLinesEstimatedCostEstimatedCost& WithUsageUnit(UsageUnitT&& value) {
    SetUsageUnit(std::forward<UsageUnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The estimated cost for the given usage amount. </p>
   */
  inline double GetCost() const { return m_cost; }
  inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
  inline void SetCost(double value) {
    m_costHasBeenSet = true;
    m_cost = value;
  }
  inline GetUsageLinesEstimatedCostEstimatedCost& WithCost(double value) {
    SetCost(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The currency of the estimated cost. </p>
   */
  inline CurrencyCode GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  inline void SetCurrency(CurrencyCode value) {
    m_currencyHasBeenSet = true;
    m_currency = value;
  }
  inline GetUsageLinesEstimatedCostEstimatedCost& WithCurrency(CurrencyCode value) {
    SetCurrency(value);
    return *this;
  }
  ///@}
 private:
  double m_usageAmount{0.0};

  Aws::String m_usageUnit;

  double m_cost{0.0};

  CurrencyCode m_currency{CurrencyCode::NOT_SET};
  bool m_usageAmountHasBeenSet = false;
  bool m_usageUnitHasBeenSet = false;
  bool m_costHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
