/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/TestWindowSummary.h>
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
   * <p>The algorithm used to perform a backtest and the status of those
   * tests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/PredictorExecution">AWS
   * API Reference</a></p>
   */
  class PredictorExecution
  {
  public:
    AWS_FORECASTSERVICE_API PredictorExecution();
    AWS_FORECASTSERVICE_API PredictorExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the algorithm used to test the predictor.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }

    /**
     * <p>The ARN of the algorithm used to test the predictor.</p>
     */
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }

    /**
     * <p>The ARN of the algorithm used to test the predictor.</p>
     */
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = value; }

    /**
     * <p>The ARN of the algorithm used to test the predictor.</p>
     */
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::move(value); }

    /**
     * <p>The ARN of the algorithm used to test the predictor.</p>
     */
    inline void SetAlgorithmArn(const char* value) { m_algorithmArnHasBeenSet = true; m_algorithmArn.assign(value); }

    /**
     * <p>The ARN of the algorithm used to test the predictor.</p>
     */
    inline PredictorExecution& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}

    /**
     * <p>The ARN of the algorithm used to test the predictor.</p>
     */
    inline PredictorExecution& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the algorithm used to test the predictor.</p>
     */
    inline PredictorExecution& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}


    /**
     * <p>An array of test windows used to evaluate the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the object determines the number of
     * windows in the array.</p>
     */
    inline const Aws::Vector<TestWindowSummary>& GetTestWindows() const{ return m_testWindows; }

    /**
     * <p>An array of test windows used to evaluate the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the object determines the number of
     * windows in the array.</p>
     */
    inline bool TestWindowsHasBeenSet() const { return m_testWindowsHasBeenSet; }

    /**
     * <p>An array of test windows used to evaluate the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the object determines the number of
     * windows in the array.</p>
     */
    inline void SetTestWindows(const Aws::Vector<TestWindowSummary>& value) { m_testWindowsHasBeenSet = true; m_testWindows = value; }

    /**
     * <p>An array of test windows used to evaluate the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the object determines the number of
     * windows in the array.</p>
     */
    inline void SetTestWindows(Aws::Vector<TestWindowSummary>&& value) { m_testWindowsHasBeenSet = true; m_testWindows = std::move(value); }

    /**
     * <p>An array of test windows used to evaluate the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the object determines the number of
     * windows in the array.</p>
     */
    inline PredictorExecution& WithTestWindows(const Aws::Vector<TestWindowSummary>& value) { SetTestWindows(value); return *this;}

    /**
     * <p>An array of test windows used to evaluate the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the object determines the number of
     * windows in the array.</p>
     */
    inline PredictorExecution& WithTestWindows(Aws::Vector<TestWindowSummary>&& value) { SetTestWindows(std::move(value)); return *this;}

    /**
     * <p>An array of test windows used to evaluate the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the object determines the number of
     * windows in the array.</p>
     */
    inline PredictorExecution& AddTestWindows(const TestWindowSummary& value) { m_testWindowsHasBeenSet = true; m_testWindows.push_back(value); return *this; }

    /**
     * <p>An array of test windows used to evaluate the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the object determines the number of
     * windows in the array.</p>
     */
    inline PredictorExecution& AddTestWindows(TestWindowSummary&& value) { m_testWindowsHasBeenSet = true; m_testWindows.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

    Aws::Vector<TestWindowSummary> m_testWindows;
    bool m_testWindowsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
