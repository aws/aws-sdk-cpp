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
   * <p>Summary of the route and toll price.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTollPriceSummary">AWS
   * API Reference</a></p>
   */
  class RouteTollPriceSummary
  {
  public:
    AWS_GEOROUTES_API RouteTollPriceSummary() = default;
    AWS_GEOROUTES_API RouteTollPriceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTollPriceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    RouteTollPriceSummary& WithCurrency(CurrencyT&& value) { SetCurrency(std::forward<CurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the price is an estimate or an exact value. </p>
     */
    inline bool GetEstimate() const { return m_estimate; }
    inline bool EstimateHasBeenSet() const { return m_estimateHasBeenSet; }
    inline void SetEstimate(bool value) { m_estimateHasBeenSet = true; m_estimate = value; }
    inline RouteTollPriceSummary& WithEstimate(bool value) { SetEstimate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the price is a range or an exact value. If any of the toll fares making up
     * the route is a range, the overall price is also a range.</p>
     */
    inline bool GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(bool value) { m_rangeHasBeenSet = true; m_range = value; }
    inline RouteTollPriceSummary& WithRange(bool value) { SetRange(value); return *this;}
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
    RouteTollPriceSummary& WithRangeValue(RangeValueT&& value) { SetRangeValue(std::forward<RangeValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exact price, if not a range.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline RouteTollPriceSummary& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_currency;
    bool m_currencyHasBeenSet = false;

    bool m_estimate{false};
    bool m_estimateHasBeenSet = false;

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
