/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/WindowSummary.h>
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
   * <p>The results of evaluating an algorithm. Returned as part of the
   * <a>GetAccuracyMetrics</a> response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/EvaluationResult">AWS
   * API Reference</a></p>
   */
  class EvaluationResult
  {
  public:
    AWS_FORECASTSERVICE_API EvaluationResult() = default;
    AWS_FORECASTSERVICE_API EvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API EvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that was evaluated.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const { return m_algorithmArn; }
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }
    template<typename AlgorithmArnT = Aws::String>
    void SetAlgorithmArn(AlgorithmArnT&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::forward<AlgorithmArnT>(value); }
    template<typename AlgorithmArnT = Aws::String>
    EvaluationResult& WithAlgorithmArn(AlgorithmArnT&& value) { SetAlgorithmArn(std::forward<AlgorithmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of test windows used for evaluating the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the <a>EvaluationParameters</a> object
     * determines the number of windows in the array.</p>
     */
    inline const Aws::Vector<WindowSummary>& GetTestWindows() const { return m_testWindows; }
    inline bool TestWindowsHasBeenSet() const { return m_testWindowsHasBeenSet; }
    template<typename TestWindowsT = Aws::Vector<WindowSummary>>
    void SetTestWindows(TestWindowsT&& value) { m_testWindowsHasBeenSet = true; m_testWindows = std::forward<TestWindowsT>(value); }
    template<typename TestWindowsT = Aws::Vector<WindowSummary>>
    EvaluationResult& WithTestWindows(TestWindowsT&& value) { SetTestWindows(std::forward<TestWindowsT>(value)); return *this;}
    template<typename TestWindowsT = WindowSummary>
    EvaluationResult& AddTestWindows(TestWindowsT&& value) { m_testWindowsHasBeenSet = true; m_testWindows.emplace_back(std::forward<TestWindowsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

    Aws::Vector<WindowSummary> m_testWindows;
    bool m_testWindowsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
