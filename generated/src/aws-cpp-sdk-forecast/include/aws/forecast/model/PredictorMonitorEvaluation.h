/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/forecast/model/PredictorEvent.h>
#include <aws/forecast/model/MonitorDataSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/MetricResult.h>
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
   * <p>Describes the results of a monitor evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/PredictorMonitorEvaluation">AWS
   * API Reference</a></p>
   */
  class PredictorMonitorEvaluation
  {
  public:
    AWS_FORECASTSERVICE_API PredictorMonitorEvaluation() = default;
    AWS_FORECASTSERVICE_API PredictorMonitorEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorMonitorEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource to monitor.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    PredictorMonitorEvaluation& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource.</p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    PredictorMonitorEvaluation& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the monitor evaluation was started. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationTime() const { return m_evaluationTime; }
    inline bool EvaluationTimeHasBeenSet() const { return m_evaluationTimeHasBeenSet; }
    template<typename EvaluationTimeT = Aws::Utils::DateTime>
    void SetEvaluationTime(EvaluationTimeT&& value) { m_evaluationTimeHasBeenSet = true; m_evaluationTime = std::forward<EvaluationTimeT>(value); }
    template<typename EvaluationTimeT = Aws::Utils::DateTime>
    PredictorMonitorEvaluation& WithEvaluationTime(EvaluationTimeT&& value) { SetEvaluationTime(std::forward<EvaluationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the monitor evaluation. The state can be <code>SUCCESS</code>
     * or <code>FAILURE</code>.</p>
     */
    inline const Aws::String& GetEvaluationState() const { return m_evaluationState; }
    inline bool EvaluationStateHasBeenSet() const { return m_evaluationStateHasBeenSet; }
    template<typename EvaluationStateT = Aws::String>
    void SetEvaluationState(EvaluationStateT&& value) { m_evaluationStateHasBeenSet = true; m_evaluationState = std::forward<EvaluationStateT>(value); }
    template<typename EvaluationStateT = Aws::String>
    PredictorMonitorEvaluation& WithEvaluationState(EvaluationStateT&& value) { SetEvaluationState(std::forward<EvaluationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates the start of the window that is used for monitor
     * evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetWindowStartDatetime() const { return m_windowStartDatetime; }
    inline bool WindowStartDatetimeHasBeenSet() const { return m_windowStartDatetimeHasBeenSet; }
    template<typename WindowStartDatetimeT = Aws::Utils::DateTime>
    void SetWindowStartDatetime(WindowStartDatetimeT&& value) { m_windowStartDatetimeHasBeenSet = true; m_windowStartDatetime = std::forward<WindowStartDatetimeT>(value); }
    template<typename WindowStartDatetimeT = Aws::Utils::DateTime>
    PredictorMonitorEvaluation& WithWindowStartDatetime(WindowStartDatetimeT&& value) { SetWindowStartDatetime(std::forward<WindowStartDatetimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates the end of the window that is used for monitor
     * evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetWindowEndDatetime() const { return m_windowEndDatetime; }
    inline bool WindowEndDatetimeHasBeenSet() const { return m_windowEndDatetimeHasBeenSet; }
    template<typename WindowEndDatetimeT = Aws::Utils::DateTime>
    void SetWindowEndDatetime(WindowEndDatetimeT&& value) { m_windowEndDatetimeHasBeenSet = true; m_windowEndDatetime = std::forward<WindowEndDatetimeT>(value); }
    template<typename WindowEndDatetimeT = Aws::Utils::DateTime>
    PredictorMonitorEvaluation& WithWindowEndDatetime(WindowEndDatetimeT&& value) { SetWindowEndDatetime(std::forward<WindowEndDatetimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about a predictor event, such as a retraining.</p>
     */
    inline const PredictorEvent& GetPredictorEvent() const { return m_predictorEvent; }
    inline bool PredictorEventHasBeenSet() const { return m_predictorEventHasBeenSet; }
    template<typename PredictorEventT = PredictorEvent>
    void SetPredictorEvent(PredictorEventT&& value) { m_predictorEventHasBeenSet = true; m_predictorEvent = std::forward<PredictorEventT>(value); }
    template<typename PredictorEventT = PredictorEvent>
    PredictorMonitorEvaluation& WithPredictorEvent(PredictorEventT&& value) { SetPredictorEvent(std::forward<PredictorEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the data the monitor resource used during the evaluation.</p>
     */
    inline const MonitorDataSource& GetMonitorDataSource() const { return m_monitorDataSource; }
    inline bool MonitorDataSourceHasBeenSet() const { return m_monitorDataSourceHasBeenSet; }
    template<typename MonitorDataSourceT = MonitorDataSource>
    void SetMonitorDataSource(MonitorDataSourceT&& value) { m_monitorDataSourceHasBeenSet = true; m_monitorDataSource = std::forward<MonitorDataSourceT>(value); }
    template<typename MonitorDataSourceT = MonitorDataSource>
    PredictorMonitorEvaluation& WithMonitorDataSource(MonitorDataSourceT&& value) { SetMonitorDataSource(std::forward<MonitorDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metrics Forecast calculated when monitoring a predictor. You can
     * compare the value for each metric in the list to the metric's value in the
     * <a>Baseline</a> to see how your predictor's performance is changing.</p>
     */
    inline const Aws::Vector<MetricResult>& GetMetricResults() const { return m_metricResults; }
    inline bool MetricResultsHasBeenSet() const { return m_metricResultsHasBeenSet; }
    template<typename MetricResultsT = Aws::Vector<MetricResult>>
    void SetMetricResults(MetricResultsT&& value) { m_metricResultsHasBeenSet = true; m_metricResults = std::forward<MetricResultsT>(value); }
    template<typename MetricResultsT = Aws::Vector<MetricResult>>
    PredictorMonitorEvaluation& WithMetricResults(MetricResultsT&& value) { SetMetricResults(std::forward<MetricResultsT>(value)); return *this;}
    template<typename MetricResultsT = MetricResult>
    PredictorMonitorEvaluation& AddMetricResults(MetricResultsT&& value) { m_metricResultsHasBeenSet = true; m_metricResults.emplace_back(std::forward<MetricResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of items considered during the evaluation.</p>
     */
    inline long long GetNumItemsEvaluated() const { return m_numItemsEvaluated; }
    inline bool NumItemsEvaluatedHasBeenSet() const { return m_numItemsEvaluatedHasBeenSet; }
    inline void SetNumItemsEvaluated(long long value) { m_numItemsEvaluatedHasBeenSet = true; m_numItemsEvaluated = value; }
    inline PredictorMonitorEvaluation& WithNumItemsEvaluated(long long value) { SetNumItemsEvaluated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about any errors that may have occurred during the monitor
     * evaluation.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    PredictorMonitorEvaluation& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationTime{};
    bool m_evaluationTimeHasBeenSet = false;

    Aws::String m_evaluationState;
    bool m_evaluationStateHasBeenSet = false;

    Aws::Utils::DateTime m_windowStartDatetime{};
    bool m_windowStartDatetimeHasBeenSet = false;

    Aws::Utils::DateTime m_windowEndDatetime{};
    bool m_windowEndDatetimeHasBeenSet = false;

    PredictorEvent m_predictorEvent;
    bool m_predictorEventHasBeenSet = false;

    MonitorDataSource m_monitorDataSource;
    bool m_monitorDataSourceHasBeenSet = false;

    Aws::Vector<MetricResult> m_metricResults;
    bool m_metricResultsHasBeenSet = false;

    long long m_numItemsEvaluated{0};
    bool m_numItemsEvaluatedHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
