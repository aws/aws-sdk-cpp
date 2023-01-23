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
    AWS_FORECASTSERVICE_API WindowSummary();
    AWS_FORECASTSERVICE_API WindowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API WindowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp that defines the start of the window.</p>
     */
    inline const Aws::Utils::DateTime& GetTestWindowStart() const{ return m_testWindowStart; }

    /**
     * <p>The timestamp that defines the start of the window.</p>
     */
    inline bool TestWindowStartHasBeenSet() const { return m_testWindowStartHasBeenSet; }

    /**
     * <p>The timestamp that defines the start of the window.</p>
     */
    inline void SetTestWindowStart(const Aws::Utils::DateTime& value) { m_testWindowStartHasBeenSet = true; m_testWindowStart = value; }

    /**
     * <p>The timestamp that defines the start of the window.</p>
     */
    inline void SetTestWindowStart(Aws::Utils::DateTime&& value) { m_testWindowStartHasBeenSet = true; m_testWindowStart = std::move(value); }

    /**
     * <p>The timestamp that defines the start of the window.</p>
     */
    inline WindowSummary& WithTestWindowStart(const Aws::Utils::DateTime& value) { SetTestWindowStart(value); return *this;}

    /**
     * <p>The timestamp that defines the start of the window.</p>
     */
    inline WindowSummary& WithTestWindowStart(Aws::Utils::DateTime&& value) { SetTestWindowStart(std::move(value)); return *this;}


    /**
     * <p>The timestamp that defines the end of the window.</p>
     */
    inline const Aws::Utils::DateTime& GetTestWindowEnd() const{ return m_testWindowEnd; }

    /**
     * <p>The timestamp that defines the end of the window.</p>
     */
    inline bool TestWindowEndHasBeenSet() const { return m_testWindowEndHasBeenSet; }

    /**
     * <p>The timestamp that defines the end of the window.</p>
     */
    inline void SetTestWindowEnd(const Aws::Utils::DateTime& value) { m_testWindowEndHasBeenSet = true; m_testWindowEnd = value; }

    /**
     * <p>The timestamp that defines the end of the window.</p>
     */
    inline void SetTestWindowEnd(Aws::Utils::DateTime&& value) { m_testWindowEndHasBeenSet = true; m_testWindowEnd = std::move(value); }

    /**
     * <p>The timestamp that defines the end of the window.</p>
     */
    inline WindowSummary& WithTestWindowEnd(const Aws::Utils::DateTime& value) { SetTestWindowEnd(value); return *this;}

    /**
     * <p>The timestamp that defines the end of the window.</p>
     */
    inline WindowSummary& WithTestWindowEnd(Aws::Utils::DateTime&& value) { SetTestWindowEnd(std::move(value)); return *this;}


    /**
     * <p>The number of data points within the window.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }

    /**
     * <p>The number of data points within the window.</p>
     */
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }

    /**
     * <p>The number of data points within the window.</p>
     */
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /**
     * <p>The number of data points within the window.</p>
     */
    inline WindowSummary& WithItemCount(int value) { SetItemCount(value); return *this;}


    /**
     * <p>The type of evaluation.</p> <ul> <li> <p> <code>SUMMARY</code> - The average
     * metrics across all windows.</p> </li> <li> <p> <code>COMPUTED</code> - The
     * metrics for the specified window.</p> </li> </ul>
     */
    inline const EvaluationType& GetEvaluationType() const{ return m_evaluationType; }

    /**
     * <p>The type of evaluation.</p> <ul> <li> <p> <code>SUMMARY</code> - The average
     * metrics across all windows.</p> </li> <li> <p> <code>COMPUTED</code> - The
     * metrics for the specified window.</p> </li> </ul>
     */
    inline bool EvaluationTypeHasBeenSet() const { return m_evaluationTypeHasBeenSet; }

    /**
     * <p>The type of evaluation.</p> <ul> <li> <p> <code>SUMMARY</code> - The average
     * metrics across all windows.</p> </li> <li> <p> <code>COMPUTED</code> - The
     * metrics for the specified window.</p> </li> </ul>
     */
    inline void SetEvaluationType(const EvaluationType& value) { m_evaluationTypeHasBeenSet = true; m_evaluationType = value; }

    /**
     * <p>The type of evaluation.</p> <ul> <li> <p> <code>SUMMARY</code> - The average
     * metrics across all windows.</p> </li> <li> <p> <code>COMPUTED</code> - The
     * metrics for the specified window.</p> </li> </ul>
     */
    inline void SetEvaluationType(EvaluationType&& value) { m_evaluationTypeHasBeenSet = true; m_evaluationType = std::move(value); }

    /**
     * <p>The type of evaluation.</p> <ul> <li> <p> <code>SUMMARY</code> - The average
     * metrics across all windows.</p> </li> <li> <p> <code>COMPUTED</code> - The
     * metrics for the specified window.</p> </li> </ul>
     */
    inline WindowSummary& WithEvaluationType(const EvaluationType& value) { SetEvaluationType(value); return *this;}

    /**
     * <p>The type of evaluation.</p> <ul> <li> <p> <code>SUMMARY</code> - The average
     * metrics across all windows.</p> </li> <li> <p> <code>COMPUTED</code> - The
     * metrics for the specified window.</p> </li> </ul>
     */
    inline WindowSummary& WithEvaluationType(EvaluationType&& value) { SetEvaluationType(std::move(value)); return *this;}


    /**
     * <p>Provides metrics used to evaluate the performance of a predictor.</p>
     */
    inline const Metrics& GetMetrics() const{ return m_metrics; }

    /**
     * <p>Provides metrics used to evaluate the performance of a predictor.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>Provides metrics used to evaluate the performance of a predictor.</p>
     */
    inline void SetMetrics(const Metrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>Provides metrics used to evaluate the performance of a predictor.</p>
     */
    inline void SetMetrics(Metrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>Provides metrics used to evaluate the performance of a predictor.</p>
     */
    inline WindowSummary& WithMetrics(const Metrics& value) { SetMetrics(value); return *this;}

    /**
     * <p>Provides metrics used to evaluate the performance of a predictor.</p>
     */
    inline WindowSummary& WithMetrics(Metrics&& value) { SetMetrics(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_testWindowStart;
    bool m_testWindowStartHasBeenSet = false;

    Aws::Utils::DateTime m_testWindowEnd;
    bool m_testWindowEndHasBeenSet = false;

    int m_itemCount;
    bool m_itemCountHasBeenSet = false;

    EvaluationType m_evaluationType;
    bool m_evaluationTypeHasBeenSet = false;

    Metrics m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
