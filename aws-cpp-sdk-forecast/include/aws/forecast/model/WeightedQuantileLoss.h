/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>

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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>The weighted loss value for a quantile. This object is part of the
   * <a>Metrics</a> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/WeightedQuantileLoss">AWS
   * API Reference</a></p>
   */
  class WeightedQuantileLoss
  {
  public:
    AWS_FORECASTSERVICE_API WeightedQuantileLoss();
    AWS_FORECASTSERVICE_API WeightedQuantileLoss(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API WeightedQuantileLoss& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The quantile. Quantiles divide a probability distribution into regions of
     * equal probability. For example, if the distribution was divided into 5 regions
     * of equal probability, the quantiles would be 0.2, 0.4, 0.6, and 0.8.</p>
     */
    inline double GetQuantile() const{ return m_quantile; }

    /**
     * <p>The quantile. Quantiles divide a probability distribution into regions of
     * equal probability. For example, if the distribution was divided into 5 regions
     * of equal probability, the quantiles would be 0.2, 0.4, 0.6, and 0.8.</p>
     */
    inline bool QuantileHasBeenSet() const { return m_quantileHasBeenSet; }

    /**
     * <p>The quantile. Quantiles divide a probability distribution into regions of
     * equal probability. For example, if the distribution was divided into 5 regions
     * of equal probability, the quantiles would be 0.2, 0.4, 0.6, and 0.8.</p>
     */
    inline void SetQuantile(double value) { m_quantileHasBeenSet = true; m_quantile = value; }

    /**
     * <p>The quantile. Quantiles divide a probability distribution into regions of
     * equal probability. For example, if the distribution was divided into 5 regions
     * of equal probability, the quantiles would be 0.2, 0.4, 0.6, and 0.8.</p>
     */
    inline WeightedQuantileLoss& WithQuantile(double value) { SetQuantile(value); return *this;}


    /**
     * <p>The difference between the predicted value and the actual value over the
     * quantile, weighted (normalized) by dividing by the sum over all quantiles.</p>
     */
    inline double GetLossValue() const{ return m_lossValue; }

    /**
     * <p>The difference between the predicted value and the actual value over the
     * quantile, weighted (normalized) by dividing by the sum over all quantiles.</p>
     */
    inline bool LossValueHasBeenSet() const { return m_lossValueHasBeenSet; }

    /**
     * <p>The difference between the predicted value and the actual value over the
     * quantile, weighted (normalized) by dividing by the sum over all quantiles.</p>
     */
    inline void SetLossValue(double value) { m_lossValueHasBeenSet = true; m_lossValue = value; }

    /**
     * <p>The difference between the predicted value and the actual value over the
     * quantile, weighted (normalized) by dividing by the sum over all quantiles.</p>
     */
    inline WeightedQuantileLoss& WithLossValue(double value) { SetLossValue(value); return *this;}

  private:

    double m_quantile;
    bool m_quantileHasBeenSet = false;

    double m_lossValue;
    bool m_lossValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
