/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/forecast/model/EvaluationType.h>
#include <aws/forecast/model/Metrics.h>
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
   * <p>The metrics for a time range within the evaluation portion of a dataset. This
   * object is part of the <a>EvaluationResult</a> object.</p> <p>The
   * <code>TestWindowStart</code> and <code>TestWindowEnd</code> parameters are
   * determined by the <code>BackTestWindowOffset</code> parameter of the
   * <a>EvaluationParameters</a> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/WindowSummary">AWS
   * API Reference</a></p>
   */
  class WindowSummary
  {
  public:
    AWS_FORECASTSERVICE_API WindowSummary() = default;
    AWS_FORECASTSERVICE_API WindowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API WindowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp that defines the start of the window.</p>
     */
    inline const Aws::Utils::DateTime& GetTestWindowStart() const { return m_testWindowStart; }
    inline bool TestWindowStartHasBeenSet() const { return m_testWindowStartHasBeenSet; }
    template<typename TestWindowStartT = Aws::Utils::DateTime>
    void SetTestWindowStart(TestWindowStartT&& value) { m_testWindowStartHasBeenSet = true; m_testWindowStart = std::forward<TestWindowStartT>(value); }
    template<typename TestWindowStartT = Aws::Utils::DateTime>
    WindowSummary& WithTestWindowStart(TestWindowStartT&& value) { SetTestWindowStart(std::forward<TestWindowStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that defines the end of the window.</p>
     */
    inline const Aws::Utils::DateTime& GetTestWindowEnd() const { return m_testWindowEnd; }
    inline bool TestWindowEndHasBeenSet() const { return m_testWindowEndHasBeenSet; }
    template<typename TestWindowEndT = Aws::Utils::DateTime>
    void SetTestWindowEnd(TestWindowEndT&& value) { m_testWindowEndHasBeenSet = true; m_testWindowEnd = std::forward<TestWindowEndT>(value); }
    template<typename TestWindowEndT = Aws::Utils::DateTime>
    WindowSummary& WithTestWindowEnd(TestWindowEndT&& value) { SetTestWindowEnd(std::forward<TestWindowEndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data points within the window.</p>
     */
    inline int GetItemCount() const { return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline WindowSummary& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of evaluation.</p> <ul> <li> <p> <code>SUMMARY</code> - The average
     * metrics across all windows.</p> </li> <li> <p> <code>COMPUTED</code> - The
     * metrics for the specified window.</p> </li> </ul>
     */
    inline EvaluationType GetEvaluationType() const { return m_evaluationType; }
    inline bool EvaluationTypeHasBeenSet() const { return m_evaluationTypeHasBeenSet; }
    inline void SetEvaluationType(EvaluationType value) { m_evaluationTypeHasBeenSet = true; m_evaluationType = value; }
    inline WindowSummary& WithEvaluationType(EvaluationType value) { SetEvaluationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides metrics used to evaluate the performance of a predictor.</p>
     */
    inline const Metrics& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Metrics>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Metrics>
    WindowSummary& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_testWindowStart{};
    bool m_testWindowStartHasBeenSet = false;

    Aws::Utils::DateTime m_testWindowEnd{};
    bool m_testWindowEndHasBeenSet = false;

    int m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    EvaluationType m_evaluationType{EvaluationType::NOT_SET};
    bool m_evaluationTypeHasBeenSet = false;

    Metrics m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
