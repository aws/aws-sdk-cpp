/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * the predefined algorithms and can be overridden in the <a>CreatePredictor</a>
   * request.</p> <p>For example, suppose that you have a dataset with data
   * collection frequency set to every day and you have 200 days worth of data (that
   * is, 200 data points). Now suppose that you set the
   * <code>NumberOfBacktestWindows</code> to 2 and the
   * <code>BackTestWindowOffset</code> parameter to 20. The algorithm splits the data
   * twice. The first time, the algorithm trains the model using the first 180 data
   * points and uses the last 20 data points for evaluation. The second time, the
   * algorithm trains the model using the first 160 data points and uses the last 40
   * data points for evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/EvaluationParameters">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API EvaluationParameters
  {
  public:
    EvaluationParameters();
    EvaluationParameters(Aws::Utils::Json::JsonView jsonValue);
    EvaluationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of times to split the input data. The default is 1. The range is 1
     * through 5.</p>
     */
    inline int GetNumberOfBacktestWindows() const{ return m_numberOfBacktestWindows; }

    /**
     * <p>The number of times to split the input data. The default is 1. The range is 1
     * through 5.</p>
     */
    inline bool NumberOfBacktestWindowsHasBeenSet() const { return m_numberOfBacktestWindowsHasBeenSet; }

    /**
     * <p>The number of times to split the input data. The default is 1. The range is 1
     * through 5.</p>
     */
    inline void SetNumberOfBacktestWindows(int value) { m_numberOfBacktestWindowsHasBeenSet = true; m_numberOfBacktestWindows = value; }

    /**
     * <p>The number of times to split the input data. The default is 1. The range is 1
     * through 5.</p>
     */
    inline EvaluationParameters& WithNumberOfBacktestWindows(int value) { SetNumberOfBacktestWindows(value); return *this;}


    /**
     * <p>The point from the end of the dataset where you want to split the data for
     * model training and evaluation. The value is specified as the number of data
     * points.</p>
     */
    inline int GetBackTestWindowOffset() const{ return m_backTestWindowOffset; }

    /**
     * <p>The point from the end of the dataset where you want to split the data for
     * model training and evaluation. The value is specified as the number of data
     * points.</p>
     */
    inline bool BackTestWindowOffsetHasBeenSet() const { return m_backTestWindowOffsetHasBeenSet; }

    /**
     * <p>The point from the end of the dataset where you want to split the data for
     * model training and evaluation. The value is specified as the number of data
     * points.</p>
     */
    inline void SetBackTestWindowOffset(int value) { m_backTestWindowOffsetHasBeenSet = true; m_backTestWindowOffset = value; }

    /**
     * <p>The point from the end of the dataset where you want to split the data for
     * model training and evaluation. The value is specified as the number of data
     * points.</p>
     */
    inline EvaluationParameters& WithBackTestWindowOffset(int value) { SetBackTestWindowOffset(value); return *this;}

  private:

    int m_numberOfBacktestWindows;
    bool m_numberOfBacktestWindowsHasBeenSet;

    int m_backTestWindowOffset;
    bool m_backTestWindowOffsetHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
