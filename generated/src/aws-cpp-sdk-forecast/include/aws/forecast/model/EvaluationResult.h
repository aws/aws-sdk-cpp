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
    AWS_FORECASTSERVICE_API EvaluationResult();
    AWS_FORECASTSERVICE_API EvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API EvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that was evaluated.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that was evaluated.</p>
     */
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that was evaluated.</p>
     */
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that was evaluated.</p>
     */
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that was evaluated.</p>
     */
    inline void SetAlgorithmArn(const char* value) { m_algorithmArnHasBeenSet = true; m_algorithmArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that was evaluated.</p>
     */
    inline EvaluationResult& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that was evaluated.</p>
     */
    inline EvaluationResult& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that was evaluated.</p>
     */
    inline EvaluationResult& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}


    /**
     * <p>The array of test windows used for evaluating the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the <a>EvaluationParameters</a> object
     * determines the number of windows in the array.</p>
     */
    inline const Aws::Vector<WindowSummary>& GetTestWindows() const{ return m_testWindows; }

    /**
     * <p>The array of test windows used for evaluating the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the <a>EvaluationParameters</a> object
     * determines the number of windows in the array.</p>
     */
    inline bool TestWindowsHasBeenSet() const { return m_testWindowsHasBeenSet; }

    /**
     * <p>The array of test windows used for evaluating the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the <a>EvaluationParameters</a> object
     * determines the number of windows in the array.</p>
     */
    inline void SetTestWindows(const Aws::Vector<WindowSummary>& value) { m_testWindowsHasBeenSet = true; m_testWindows = value; }

    /**
     * <p>The array of test windows used for evaluating the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the <a>EvaluationParameters</a> object
     * determines the number of windows in the array.</p>
     */
    inline void SetTestWindows(Aws::Vector<WindowSummary>&& value) { m_testWindowsHasBeenSet = true; m_testWindows = std::move(value); }

    /**
     * <p>The array of test windows used for evaluating the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the <a>EvaluationParameters</a> object
     * determines the number of windows in the array.</p>
     */
    inline EvaluationResult& WithTestWindows(const Aws::Vector<WindowSummary>& value) { SetTestWindows(value); return *this;}

    /**
     * <p>The array of test windows used for evaluating the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the <a>EvaluationParameters</a> object
     * determines the number of windows in the array.</p>
     */
    inline EvaluationResult& WithTestWindows(Aws::Vector<WindowSummary>&& value) { SetTestWindows(std::move(value)); return *this;}

    /**
     * <p>The array of test windows used for evaluating the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the <a>EvaluationParameters</a> object
     * determines the number of windows in the array.</p>
     */
    inline EvaluationResult& AddTestWindows(const WindowSummary& value) { m_testWindowsHasBeenSet = true; m_testWindows.push_back(value); return *this; }

    /**
     * <p>The array of test windows used for evaluating the algorithm. The
     * <code>NumberOfBacktestWindows</code> from the <a>EvaluationParameters</a> object
     * determines the number of windows in the array.</p>
     */
    inline EvaluationResult& AddTestWindows(WindowSummary&& value) { m_testWindowsHasBeenSet = true; m_testWindows.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

    Aws::Vector<WindowSummary> m_testWindows;
    bool m_testWindowsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
