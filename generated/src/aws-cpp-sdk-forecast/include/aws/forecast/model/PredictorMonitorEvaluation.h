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
    AWS_FORECASTSERVICE_API PredictorMonitorEvaluation();
    AWS_FORECASTSERVICE_API PredictorMonitorEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorMonitorEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource to monitor.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline PredictorMonitorEvaluation& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline PredictorMonitorEvaluation& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline PredictorMonitorEvaluation& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArnHasBeenSet = true; m_monitorArn = value; }
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::move(value); }
    inline void SetMonitorArn(const char* value) { m_monitorArnHasBeenSet = true; m_monitorArn.assign(value); }
    inline PredictorMonitorEvaluation& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}
    inline PredictorMonitorEvaluation& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}
    inline PredictorMonitorEvaluation& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the monitor evaluation was started. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationTime() const{ return m_evaluationTime; }
    inline bool EvaluationTimeHasBeenSet() const { return m_evaluationTimeHasBeenSet; }
    inline void SetEvaluationTime(const Aws::Utils::DateTime& value) { m_evaluationTimeHasBeenSet = true; m_evaluationTime = value; }
    inline void SetEvaluationTime(Aws::Utils::DateTime&& value) { m_evaluationTimeHasBeenSet = true; m_evaluationTime = std::move(value); }
    inline PredictorMonitorEvaluation& WithEvaluationTime(const Aws::Utils::DateTime& value) { SetEvaluationTime(value); return *this;}
    inline PredictorMonitorEvaluation& WithEvaluationTime(Aws::Utils::DateTime&& value) { SetEvaluationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the monitor evaluation. The state can be <code>SUCCESS</code>
     * or <code>FAILURE</code>.</p>
     */
    inline const Aws::String& GetEvaluationState() const{ return m_evaluationState; }
    inline bool EvaluationStateHasBeenSet() const { return m_evaluationStateHasBeenSet; }
    inline void SetEvaluationState(const Aws::String& value) { m_evaluationStateHasBeenSet = true; m_evaluationState = value; }
    inline void SetEvaluationState(Aws::String&& value) { m_evaluationStateHasBeenSet = true; m_evaluationState = std::move(value); }
    inline void SetEvaluationState(const char* value) { m_evaluationStateHasBeenSet = true; m_evaluationState.assign(value); }
    inline PredictorMonitorEvaluation& WithEvaluationState(const Aws::String& value) { SetEvaluationState(value); return *this;}
    inline PredictorMonitorEvaluation& WithEvaluationState(Aws::String&& value) { SetEvaluationState(std::move(value)); return *this;}
    inline PredictorMonitorEvaluation& WithEvaluationState(const char* value) { SetEvaluationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates the start of the window that is used for monitor
     * evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetWindowStartDatetime() const{ return m_windowStartDatetime; }
    inline bool WindowStartDatetimeHasBeenSet() const { return m_windowStartDatetimeHasBeenSet; }
    inline void SetWindowStartDatetime(const Aws::Utils::DateTime& value) { m_windowStartDatetimeHasBeenSet = true; m_windowStartDatetime = value; }
    inline void SetWindowStartDatetime(Aws::Utils::DateTime&& value) { m_windowStartDatetimeHasBeenSet = true; m_windowStartDatetime = std::move(value); }
    inline PredictorMonitorEvaluation& WithWindowStartDatetime(const Aws::Utils::DateTime& value) { SetWindowStartDatetime(value); return *this;}
    inline PredictorMonitorEvaluation& WithWindowStartDatetime(Aws::Utils::DateTime&& value) { SetWindowStartDatetime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates the end of the window that is used for monitor
     * evaluation.</p>
     */
    inline const Aws::Utils::DateTime& GetWindowEndDatetime() const{ return m_windowEndDatetime; }
    inline bool WindowEndDatetimeHasBeenSet() const { return m_windowEndDatetimeHasBeenSet; }
    inline void SetWindowEndDatetime(const Aws::Utils::DateTime& value) { m_windowEndDatetimeHasBeenSet = true; m_windowEndDatetime = value; }
    inline void SetWindowEndDatetime(Aws::Utils::DateTime&& value) { m_windowEndDatetimeHasBeenSet = true; m_windowEndDatetime = std::move(value); }
    inline PredictorMonitorEvaluation& WithWindowEndDatetime(const Aws::Utils::DateTime& value) { SetWindowEndDatetime(value); return *this;}
    inline PredictorMonitorEvaluation& WithWindowEndDatetime(Aws::Utils::DateTime&& value) { SetWindowEndDatetime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about a predictor event, such as a retraining.</p>
     */
    inline const PredictorEvent& GetPredictorEvent() const{ return m_predictorEvent; }
    inline bool PredictorEventHasBeenSet() const { return m_predictorEventHasBeenSet; }
    inline void SetPredictorEvent(const PredictorEvent& value) { m_predictorEventHasBeenSet = true; m_predictorEvent = value; }
    inline void SetPredictorEvent(PredictorEvent&& value) { m_predictorEventHasBeenSet = true; m_predictorEvent = std::move(value); }
    inline PredictorMonitorEvaluation& WithPredictorEvent(const PredictorEvent& value) { SetPredictorEvent(value); return *this;}
    inline PredictorMonitorEvaluation& WithPredictorEvent(PredictorEvent&& value) { SetPredictorEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the data the monitor resource used during the evaluation.</p>
     */
    inline const MonitorDataSource& GetMonitorDataSource() const{ return m_monitorDataSource; }
    inline bool MonitorDataSourceHasBeenSet() const { return m_monitorDataSourceHasBeenSet; }
    inline void SetMonitorDataSource(const MonitorDataSource& value) { m_monitorDataSourceHasBeenSet = true; m_monitorDataSource = value; }
    inline void SetMonitorDataSource(MonitorDataSource&& value) { m_monitorDataSourceHasBeenSet = true; m_monitorDataSource = std::move(value); }
    inline PredictorMonitorEvaluation& WithMonitorDataSource(const MonitorDataSource& value) { SetMonitorDataSource(value); return *this;}
    inline PredictorMonitorEvaluation& WithMonitorDataSource(MonitorDataSource&& value) { SetMonitorDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metrics Forecast calculated when monitoring a predictor. You can
     * compare the value for each metric in the list to the metric's value in the
     * <a>Baseline</a> to see how your predictor's performance is changing.</p>
     */
    inline const Aws::Vector<MetricResult>& GetMetricResults() const{ return m_metricResults; }
    inline bool MetricResultsHasBeenSet() const { return m_metricResultsHasBeenSet; }
    inline void SetMetricResults(const Aws::Vector<MetricResult>& value) { m_metricResultsHasBeenSet = true; m_metricResults = value; }
    inline void SetMetricResults(Aws::Vector<MetricResult>&& value) { m_metricResultsHasBeenSet = true; m_metricResults = std::move(value); }
    inline PredictorMonitorEvaluation& WithMetricResults(const Aws::Vector<MetricResult>& value) { SetMetricResults(value); return *this;}
    inline PredictorMonitorEvaluation& WithMetricResults(Aws::Vector<MetricResult>&& value) { SetMetricResults(std::move(value)); return *this;}
    inline PredictorMonitorEvaluation& AddMetricResults(const MetricResult& value) { m_metricResultsHasBeenSet = true; m_metricResults.push_back(value); return *this; }
    inline PredictorMonitorEvaluation& AddMetricResults(MetricResult&& value) { m_metricResultsHasBeenSet = true; m_metricResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of items considered during the evaluation.</p>
     */
    inline long long GetNumItemsEvaluated() const{ return m_numItemsEvaluated; }
    inline bool NumItemsEvaluatedHasBeenSet() const { return m_numItemsEvaluatedHasBeenSet; }
    inline void SetNumItemsEvaluated(long long value) { m_numItemsEvaluatedHasBeenSet = true; m_numItemsEvaluated = value; }
    inline PredictorMonitorEvaluation& WithNumItemsEvaluated(long long value) { SetNumItemsEvaluated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about any errors that may have occurred during the monitor
     * evaluation.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline PredictorMonitorEvaluation& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline PredictorMonitorEvaluation& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline PredictorMonitorEvaluation& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationTime;
    bool m_evaluationTimeHasBeenSet = false;

    Aws::String m_evaluationState;
    bool m_evaluationStateHasBeenSet = false;

    Aws::Utils::DateTime m_windowStartDatetime;
    bool m_windowStartDatetimeHasBeenSet = false;

    Aws::Utils::DateTime m_windowEndDatetime;
    bool m_windowEndDatetimeHasBeenSet = false;

    PredictorEvent m_predictorEvent;
    bool m_predictorEventHasBeenSet = false;

    MonitorDataSource m_monitorDataSource;
    bool m_monitorDataSourceHasBeenSet = false;

    Aws::Vector<MetricResult> m_metricResults;
    bool m_metricResultsHasBeenSet = false;

    long long m_numItemsEvaluated;
    bool m_numItemsEvaluatedHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
