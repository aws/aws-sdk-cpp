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
   * <p>Parameters that define how to split a dataset into training data and testing
   * data, and the number of iterations to perform. These parameters are specified in
   * the predefined algorithms but you can override them in the
   * <a>CreatePredictor</a> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/EvaluationParameters">AWS
   * API Reference</a></p>
   */
  class EvaluationParameters
  {
  public:
    AWS_FORECASTSERVICE_API EvaluationParameters();
    AWS_FORECASTSERVICE_API EvaluationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API EvaluationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of times to split the input data. The default is 1. Valid values
     * are 1 through 5.</p>
     */
    inline int GetNumberOfBacktestWindows() const{ return m_numberOfBacktestWindows; }

    /**
     * <p>The number of times to split the input data. The default is 1. Valid values
     * are 1 through 5.</p>
     */
    inline bool NumberOfBacktestWindowsHasBeenSet() const { return m_numberOfBacktestWindowsHasBeenSet; }

    /**
     * <p>The number of times to split the input data. The default is 1. Valid values
     * are 1 through 5.</p>
     */
    inline void SetNumberOfBacktestWindows(int value) { m_numberOfBacktestWindowsHasBeenSet = true; m_numberOfBacktestWindows = value; }

    /**
     * <p>The number of times to split the input data. The default is 1. Valid values
     * are 1 through 5.</p>
     */
    inline EvaluationParameters& WithNumberOfBacktestWindows(int value) { SetNumberOfBacktestWindows(value); return *this;}


    /**
     * <p>The point from the end of the dataset where you want to split the data for
     * model training and testing (evaluation). Specify the value as the number of data
     * points. The default is the value of the forecast horizon.
     * <code>BackTestWindowOffset</code> can be used to mimic a past virtual forecast
     * start date. This value must be greater than or equal to the forecast horizon and
     * less than half of the TARGET_TIME_SERIES dataset length.</p> <p>
     * <code>ForecastHorizon</code> &lt;= <code>BackTestWindowOffset</code> &lt; 1/2 *
     * TARGET_TIME_SERIES dataset length</p>
     */
    inline int GetBackTestWindowOffset() const{ return m_backTestWindowOffset; }

    /**
     * <p>The point from the end of the dataset where you want to split the data for
     * model training and testing (evaluation). Specify the value as the number of data
     * points. The default is the value of the forecast horizon.
     * <code>BackTestWindowOffset</code> can be used to mimic a past virtual forecast
     * start date. This value must be greater than or equal to the forecast horizon and
     * less than half of the TARGET_TIME_SERIES dataset length.</p> <p>
     * <code>ForecastHorizon</code> &lt;= <code>BackTestWindowOffset</code> &lt; 1/2 *
     * TARGET_TIME_SERIES dataset length</p>
     */
    inline bool BackTestWindowOffsetHasBeenSet() const { return m_backTestWindowOffsetHasBeenSet; }

    /**
     * <p>The point from the end of the dataset where you want to split the data for
     * model training and testing (evaluation). Specify the value as the number of data
     * points. The default is the value of the forecast horizon.
     * <code>BackTestWindowOffset</code> can be used to mimic a past virtual forecast
     * start date. This value must be greater than or equal to the forecast horizon and
     * less than half of the TARGET_TIME_SERIES dataset length.</p> <p>
     * <code>ForecastHorizon</code> &lt;= <code>BackTestWindowOffset</code> &lt; 1/2 *
     * TARGET_TIME_SERIES dataset length</p>
     */
    inline void SetBackTestWindowOffset(int value) { m_backTestWindowOffsetHasBeenSet = true; m_backTestWindowOffset = value; }

    /**
     * <p>The point from the end of the dataset where you want to split the data for
     * model training and testing (evaluation). Specify the value as the number of data
     * points. The default is the value of the forecast horizon.
     * <code>BackTestWindowOffset</code> can be used to mimic a past virtual forecast
     * start date. This value must be greater than or equal to the forecast horizon and
     * less than half of the TARGET_TIME_SERIES dataset length.</p> <p>
     * <code>ForecastHorizon</code> &lt;= <code>BackTestWindowOffset</code> &lt; 1/2 *
     * TARGET_TIME_SERIES dataset length</p>
     */
    inline EvaluationParameters& WithBackTestWindowOffset(int value) { SetBackTestWindowOffset(value); return *this;}

  private:

    int m_numberOfBacktestWindows;
    bool m_numberOfBacktestWindowsHasBeenSet = false;

    int m_backTestWindowOffset;
    bool m_backTestWindowOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
