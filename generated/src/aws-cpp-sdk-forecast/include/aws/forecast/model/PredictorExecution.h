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
    AWS_FORECASTSERVICE_API PredictorExecution() = default;
    AWS_FORECASTSERVICE_API PredictorExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the algorithm used to test the predictor.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const { return m_algorithmArn; }
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }
    template<typename AlgorithmArnT = Aws::String>
    void SetAlgorithmArn(AlgorithmArnT&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::forward<AlgorithmArnT>(value); }
    template<typename AlgorithmArnT = Aws::String>
    PredictorExecution& WithAlgorithmArn(AlgorithmArnT&& value) { SetAlgorithmArn(std::forward<AlgorithmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of test windows used to evaluate the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the object determines the number of
     * windows in the array.</p>
     */
    inline const Aws::Vector<TestWindowSummary>& GetTestWindows() const { return m_testWindows; }
    inline bool TestWindowsHasBeenSet() const { return m_testWindowsHasBeenSet; }
    template<typename TestWindowsT = Aws::Vector<TestWindowSummary>>
    void SetTestWindows(TestWindowsT&& value) { m_testWindowsHasBeenSet = true; m_testWindows = std::forward<TestWindowsT>(value); }
    template<typename TestWindowsT = Aws::Vector<TestWindowSummary>>
    PredictorExecution& WithTestWindows(TestWindowsT&& value) { SetTestWindows(std::forward<TestWindowsT>(value)); return *this;}
    template<typename TestWindowsT = TestWindowSummary>
    PredictorExecution& AddTestWindows(TestWindowsT&& value) { m_testWindowsHasBeenSet = true; m_testWindows.emplace_back(std::forward<TestWindowsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

    Aws::Vector<TestWindowSummary> m_testWindows;
    bool m_testWindowsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
