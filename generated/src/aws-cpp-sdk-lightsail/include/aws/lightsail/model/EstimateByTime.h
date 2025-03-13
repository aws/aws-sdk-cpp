/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/PricingUnit.h>
#include <aws/lightsail/model/Currency.h>
#include <aws/lightsail/model/TimePeriod.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>An estimate that's associated with a time period. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/EstimateByTime">AWS
   * API Reference</a></p>
   */
  class EstimateByTime
  {
  public:
    AWS_LIGHTSAIL_API EstimateByTime() = default;
    AWS_LIGHTSAIL_API EstimateByTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API EstimateByTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of cost or usage that's measured for the cost estimate.</p>
     */
    inline double GetUsageCost() const { return m_usageCost; }
    inline bool UsageCostHasBeenSet() const { return m_usageCostHasBeenSet; }
    inline void SetUsageCost(double value) { m_usageCostHasBeenSet = true; m_usageCost = value; }
    inline EstimateByTime& WithUsageCost(double value) { SetUsageCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measurement that's used for the cost estimate.</p>
     */
    inline PricingUnit GetPricingUnit() const { return m_pricingUnit; }
    inline bool PricingUnitHasBeenSet() const { return m_pricingUnitHasBeenSet; }
    inline void SetPricingUnit(PricingUnit value) { m_pricingUnitHasBeenSet = true; m_pricingUnit = value; }
    inline EstimateByTime& WithPricingUnit(PricingUnit value) { SetPricingUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of pricing units used to calculate the total number of hours. For
     * example, 1 unit equals 1 hour.</p>
     */
    inline double GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(double value) { m_unitHasBeenSet = true; m_unit = value; }
    inline EstimateByTime& WithUnit(double value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency of the estimate in USD.</p>
     */
    inline Currency GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(Currency value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline EstimateByTime& WithCurrency(Currency value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time, in days, that an estimate covers. The period has a start
     * date and an end date. The start date must come before the end date.</p>
     */
    inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = TimePeriod>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = TimePeriod>
    EstimateByTime& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}
  private:

    double m_usageCost{0.0};
    bool m_usageCostHasBeenSet = false;

    PricingUnit m_pricingUnit{PricingUnit::NOT_SET};
    bool m_pricingUnitHasBeenSet = false;

    double m_unit{0.0};
    bool m_unitHasBeenSet = false;

    Currency m_currency{Currency::NOT_SET};
    bool m_currencyHasBeenSet = false;

    TimePeriod m_timePeriod;
    bool m_timePeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
