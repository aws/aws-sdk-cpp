/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p> Provides detailed error metrics to evaluate the performance of a predictor.
   * This object is part of the <a>Metrics</a> object. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ErrorMetric">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API ErrorMetric
  {
  public:
    ErrorMetric();
    ErrorMetric(Aws::Utils::Json::JsonView jsonValue);
    ErrorMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Forecast type used to compute WAPE and RMSE. </p>
     */
    inline const Aws::String& GetForecastType() const{ return m_forecastType; }

    /**
     * <p> The Forecast type used to compute WAPE and RMSE. </p>
     */
    inline bool ForecastTypeHasBeenSet() const { return m_forecastTypeHasBeenSet; }

    /**
     * <p> The Forecast type used to compute WAPE and RMSE. </p>
     */
    inline void SetForecastType(const Aws::String& value) { m_forecastTypeHasBeenSet = true; m_forecastType = value; }

    /**
     * <p> The Forecast type used to compute WAPE and RMSE. </p>
     */
    inline void SetForecastType(Aws::String&& value) { m_forecastTypeHasBeenSet = true; m_forecastType = std::move(value); }

    /**
     * <p> The Forecast type used to compute WAPE and RMSE. </p>
     */
    inline void SetForecastType(const char* value) { m_forecastTypeHasBeenSet = true; m_forecastType.assign(value); }

    /**
     * <p> The Forecast type used to compute WAPE and RMSE. </p>
     */
    inline ErrorMetric& WithForecastType(const Aws::String& value) { SetForecastType(value); return *this;}

    /**
     * <p> The Forecast type used to compute WAPE and RMSE. </p>
     */
    inline ErrorMetric& WithForecastType(Aws::String&& value) { SetForecastType(std::move(value)); return *this;}

    /**
     * <p> The Forecast type used to compute WAPE and RMSE. </p>
     */
    inline ErrorMetric& WithForecastType(const char* value) { SetForecastType(value); return *this;}


    /**
     * <p> The weighted absolute percentage error (WAPE). </p>
     */
    inline double GetWAPE() const{ return m_wAPE; }

    /**
     * <p> The weighted absolute percentage error (WAPE). </p>
     */
    inline bool WAPEHasBeenSet() const { return m_wAPEHasBeenSet; }

    /**
     * <p> The weighted absolute percentage error (WAPE). </p>
     */
    inline void SetWAPE(double value) { m_wAPEHasBeenSet = true; m_wAPE = value; }

    /**
     * <p> The weighted absolute percentage error (WAPE). </p>
     */
    inline ErrorMetric& WithWAPE(double value) { SetWAPE(value); return *this;}


    /**
     * <p> The root-mean-square error (RMSE). </p>
     */
    inline double GetRMSE() const{ return m_rMSE; }

    /**
     * <p> The root-mean-square error (RMSE). </p>
     */
    inline bool RMSEHasBeenSet() const { return m_rMSEHasBeenSet; }

    /**
     * <p> The root-mean-square error (RMSE). </p>
     */
    inline void SetRMSE(double value) { m_rMSEHasBeenSet = true; m_rMSE = value; }

    /**
     * <p> The root-mean-square error (RMSE). </p>
     */
    inline ErrorMetric& WithRMSE(double value) { SetRMSE(value); return *this;}

  private:

    Aws::String m_forecastType;
    bool m_forecastTypeHasBeenSet;

    double m_wAPE;
    bool m_wAPEHasBeenSet;

    double m_rMSE;
    bool m_rMSEHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
