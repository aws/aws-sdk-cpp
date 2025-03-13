/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/CurrencyCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   * <p> Represents a monetary amount with associated currency. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/CostAmount">AWS
   * API Reference</a></p>
   */
  class CostAmount
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API CostAmount() = default;
    AWS_BCMPRICINGCALCULATOR_API CostAmount(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API CostAmount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The numeric value of the cost. </p>
     */
    inline double GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }
    inline CostAmount& WithAmount(double value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The currency code for the cost amount. </p>
     */
    inline CurrencyCode GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(CurrencyCode value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline CostAmount& WithCurrency(CurrencyCode value) { SetCurrency(value); return *this;}
    ///@}
  private:

    double m_amount{0.0};
    bool m_amountHasBeenSet = false;

    CurrencyCode m_currency{CurrencyCode::NOT_SET};
    bool m_currencyHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
