/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteTollPriceValueRange.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>The toll price.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTollPrice">AWS
   * API Reference</a></p>
   */
  class RouteTollPrice
  {
  public:
    AWS_GEOROUTES_API RouteTollPrice() = default;
    AWS_GEOROUTES_API RouteTollPrice(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTollPrice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Currency code corresponding to the price. This is the same as Currency
     * specified in the request.</p>
     */
    inline const Aws::String& GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    template<typename CurrencyT = Aws::String>
    void SetCurrency(CurrencyT&& value) { m_currencyHasBeenSet = true; m_currency = std::forward<CurrencyT>(value); }
    template<typename CurrencyT = Aws::String>
    RouteTollPrice& WithCurrency(CurrencyT&& value) { SetCurrency(std::forward<CurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the price is an estimate or an exact value. </p>
     */
    inline bool GetEstimate() const { return m_estimate; }
    inline bool EstimateHasBeenSet() const { return m_estimateHasBeenSet; }
    inline void SetEstimate(bool value) { m_estimateHasBeenSet = true; m_estimate = value; }
    inline RouteTollPrice& WithEstimate(bool value) { SetEstimate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration for which the price corresponds to.</p> <p> <b>Unit</b>:
     * <code>seconds</code> </p>
     */
    inline long long GetPerDuration() const { return m_perDuration; }
    inline bool PerDurationHasBeenSet() const { return m_perDurationHasBeenSet; }
    inline void SetPerDuration(long long value) { m_perDurationHasBeenSet = true; m_perDuration = value; }
    inline RouteTollPrice& WithPerDuration(long long value) { SetPerDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the price is a range or an exact value. If any of the toll fares making up
     * the route is a range, the overall price is also a range.</p>
     */
    inline bool GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(bool value) { m_rangeHasBeenSet = true; m_range = value; }
    inline RouteTollPrice& WithRange(bool value) { SetRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Price range with a minimum and maximum value, if a range.</p>
     */
    inline const RouteTollPriceValueRange& GetRangeValue() const { return m_rangeValue; }
    inline bool RangeValueHasBeenSet() const { return m_rangeValueHasBeenSet; }
    template<typename RangeValueT = RouteTollPriceValueRange>
    void SetRangeValue(RangeValueT&& value) { m_rangeValueHasBeenSet = true; m_rangeValue = std::forward<RangeValueT>(value); }
    template<typename RangeValueT = RouteTollPriceValueRange>
    RouteTollPrice& WithRangeValue(RangeValueT&& value) { SetRangeValue(std::forward<RangeValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exact price, if not a range.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline RouteTollPrice& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_currency;
    bool m_currencyHasBeenSet = false;

    bool m_estimate{false};
    bool m_estimateHasBeenSet = false;

    long long m_perDuration{0};
    bool m_perDurationHasBeenSet = false;

    bool m_range{false};
    bool m_rangeHasBeenSet = false;

    RouteTollPriceValueRange m_rangeValue;
    bool m_rangeValueHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
