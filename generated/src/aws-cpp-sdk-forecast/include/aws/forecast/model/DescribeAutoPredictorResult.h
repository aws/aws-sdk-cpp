/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/DataConfig.h>
#include <aws/forecast/model/EncryptionConfig.h>
#include <aws/forecast/model/ReferencePredictorSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/forecast/model/OptimizationMetric.h>
#include <aws/forecast/model/ExplainabilityInfo.h>
#include <aws/forecast/model/MonitorInfo.h>
#include <aws/forecast/model/TimeAlignmentBoundary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ForecastService
{
namespace Model
{
  class DescribeAutoPredictorResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeAutoPredictorResult() = default;
    AWS_FORECASTSERVICE_API DescribeAutoPredictorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeAutoPredictorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the predictor</p>
     */
    inline const Aws::String& GetPredictorArn() const { return m_predictorArn; }
    template<typename PredictorArnT = Aws::String>
    void SetPredictorArn(PredictorArnT&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::forward<PredictorArnT>(value); }
    template<typename PredictorArnT = Aws::String>
    DescribeAutoPredictorResult& WithPredictorArn(PredictorArnT&& value) { SetPredictorArn(std::forward<PredictorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the predictor.</p>
     */
    inline const Aws::String& GetPredictorName() const { return m_predictorName; }
    template<typename PredictorNameT = Aws::String>
    void SetPredictorName(PredictorNameT&& value) { m_predictorNameHasBeenSet = true; m_predictorName = std::forward<PredictorNameT>(value); }
    template<typename PredictorNameT = Aws::String>
    DescribeAutoPredictorResult& WithPredictorName(PredictorNameT&& value) { SetPredictorName(std::forward<PredictorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of time-steps that the model predicts. The forecast horizon is
     * also called the prediction length.</p>
     */
    inline int GetForecastHorizon() const { return m_forecastHorizon; }
    inline void SetForecastHorizon(int value) { m_forecastHorizonHasBeenSet = true; m_forecastHorizon = value; }
    inline DescribeAutoPredictorResult& WithForecastHorizon(int value) { SetForecastHorizon(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecast types used during predictor training. Default value is
     * ["0.1","0.5","0.9"].</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const { return m_forecastTypes; }
    template<typename ForecastTypesT = Aws::Vector<Aws::String>>
    void SetForecastTypes(ForecastTypesT&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = std::forward<ForecastTypesT>(value); }
    template<typename ForecastTypesT = Aws::Vector<Aws::String>>
    DescribeAutoPredictorResult& WithForecastTypes(ForecastTypesT&& value) { SetForecastTypes(std::forward<ForecastTypesT>(value)); return *this;}
    template<typename ForecastTypesT = Aws::String>
    DescribeAutoPredictorResult& AddForecastTypes(ForecastTypesT&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.emplace_back(std::forward<ForecastTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     */
    inline const Aws::String& GetForecastFrequency() const { return m_forecastFrequency; }
    template<typename ForecastFrequencyT = Aws::String>
    void SetForecastFrequency(ForecastFrequencyT&& value) { m_forecastFrequencyHasBeenSet = true; m_forecastFrequency = std::forward<ForecastFrequencyT>(value); }
    template<typename ForecastFrequencyT = Aws::String>
    DescribeAutoPredictorResult& WithForecastFrequency(ForecastFrequencyT&& value) { SetForecastFrequency(std::forward<ForecastFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of dimension (field) names that specify the attributes used to group
     * your time series.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastDimensions() const { return m_forecastDimensions; }
    template<typename ForecastDimensionsT = Aws::Vector<Aws::String>>
    void SetForecastDimensions(ForecastDimensionsT&& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions = std::forward<ForecastDimensionsT>(value); }
    template<typename ForecastDimensionsT = Aws::Vector<Aws::String>>
    DescribeAutoPredictorResult& WithForecastDimensions(ForecastDimensionsT&& value) { SetForecastDimensions(std::forward<ForecastDimensionsT>(value)); return *this;}
    template<typename ForecastDimensionsT = Aws::String>
    DescribeAutoPredictorResult& AddForecastDimensions(ForecastDimensionsT&& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions.emplace_back(std::forward<ForecastDimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetImportJobArns() const { return m_datasetImportJobArns; }
    template<typename DatasetImportJobArnsT = Aws::Vector<Aws::String>>
    void SetDatasetImportJobArns(DatasetImportJobArnsT&& value) { m_datasetImportJobArnsHasBeenSet = true; m_datasetImportJobArns = std::forward<DatasetImportJobArnsT>(value); }
    template<typename DatasetImportJobArnsT = Aws::Vector<Aws::String>>
    DescribeAutoPredictorResult& WithDatasetImportJobArns(DatasetImportJobArnsT&& value) { SetDatasetImportJobArns(std::forward<DatasetImportJobArnsT>(value)); return *this;}
    template<typename DatasetImportJobArnsT = Aws::String>
    DescribeAutoPredictorResult& AddDatasetImportJobArns(DatasetImportJobArnsT&& value) { m_datasetImportJobArnsHasBeenSet = true; m_datasetImportJobArns.emplace_back(std::forward<DatasetImportJobArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline const DataConfig& GetDataConfig() const { return m_dataConfig; }
    template<typename DataConfigT = DataConfig>
    void SetDataConfig(DataConfigT&& value) { m_dataConfigHasBeenSet = true; m_dataConfig = std::forward<DataConfigT>(value); }
    template<typename DataConfigT = DataConfig>
    DescribeAutoPredictorResult& WithDataConfig(DataConfigT&& value) { SetDataConfig(std::forward<DataConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionConfig& GetEncryptionConfig() const { return m_encryptionConfig; }
    template<typename EncryptionConfigT = EncryptionConfig>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = EncryptionConfig>
    DescribeAutoPredictorResult& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN and state of the reference predictor. This parameter is only valid
     * for retrained or upgraded predictors.</p>
     */
    inline const ReferencePredictorSummary& GetReferencePredictorSummary() const { return m_referencePredictorSummary; }
    template<typename ReferencePredictorSummaryT = ReferencePredictorSummary>
    void SetReferencePredictorSummary(ReferencePredictorSummaryT&& value) { m_referencePredictorSummaryHasBeenSet = true; m_referencePredictorSummary = std::forward<ReferencePredictorSummaryT>(value); }
    template<typename ReferencePredictorSummaryT = ReferencePredictorSummary>
    DescribeAutoPredictorResult& WithReferencePredictorSummary(ReferencePredictorSummaryT&& value) { SetReferencePredictorSummary(std::forward<ReferencePredictorSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time remaining in minutes for the predictor training job to
     * complete.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const { return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutesHasBeenSet = true; m_estimatedTimeRemainingInMinutes = value; }
    inline DescribeAutoPredictorResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the predictor. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeAutoPredictorResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the event of an error, a message detailing the cause of the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribeAutoPredictorResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the CreateAutoPredictor request.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeAutoPredictorResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DescribeAutoPredictorResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline OptimizationMetric GetOptimizationMetric() const { return m_optimizationMetric; }
    inline void SetOptimizationMetric(OptimizationMetric value) { m_optimizationMetricHasBeenSet = true; m_optimizationMetric = value; }
    inline DescribeAutoPredictorResult& WithOptimizationMetric(OptimizationMetric value) { SetOptimizationMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status and ARN of the Predictor Explainability.</p>
     */
    inline const ExplainabilityInfo& GetExplainabilityInfo() const { return m_explainabilityInfo; }
    template<typename ExplainabilityInfoT = ExplainabilityInfo>
    void SetExplainabilityInfo(ExplainabilityInfoT&& value) { m_explainabilityInfoHasBeenSet = true; m_explainabilityInfo = std::forward<ExplainabilityInfoT>(value); }
    template<typename ExplainabilityInfoT = ExplainabilityInfo>
    DescribeAutoPredictorResult& WithExplainabilityInfo(ExplainabilityInfoT&& value) { SetExplainabilityInfo(std::forward<ExplainabilityInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A object with the Amazon Resource Name (ARN) and status of the monitor
     * resource.</p>
     */
    inline const MonitorInfo& GetMonitorInfo() const { return m_monitorInfo; }
    template<typename MonitorInfoT = MonitorInfo>
    void SetMonitorInfo(MonitorInfoT&& value) { m_monitorInfoHasBeenSet = true; m_monitorInfo = std::forward<MonitorInfoT>(value); }
    template<typename MonitorInfoT = MonitorInfo>
    DescribeAutoPredictorResult& WithMonitorInfo(MonitorInfoT&& value) { SetMonitorInfo(std::forward<MonitorInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time boundary Forecast uses when aggregating data.</p>
     */
    inline const TimeAlignmentBoundary& GetTimeAlignmentBoundary() const { return m_timeAlignmentBoundary; }
    template<typename TimeAlignmentBoundaryT = TimeAlignmentBoundary>
    void SetTimeAlignmentBoundary(TimeAlignmentBoundaryT&& value) { m_timeAlignmentBoundaryHasBeenSet = true; m_timeAlignmentBoundary = std::forward<TimeAlignmentBoundaryT>(value); }
    template<typename TimeAlignmentBoundaryT = TimeAlignmentBoundary>
    DescribeAutoPredictorResult& WithTimeAlignmentBoundary(TimeAlignmentBoundaryT&& value) { SetTimeAlignmentBoundary(std::forward<TimeAlignmentBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAutoPredictorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;

    Aws::String m_predictorName;
    bool m_predictorNameHasBeenSet = false;

    int m_forecastHorizon{0};
    bool m_forecastHorizonHasBeenSet = false;

    Aws::Vector<Aws::String> m_forecastTypes;
    bool m_forecastTypesHasBeenSet = false;

    Aws::String m_forecastFrequency;
    bool m_forecastFrequencyHasBeenSet = false;

    Aws::Vector<Aws::String> m_forecastDimensions;
    bool m_forecastDimensionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_datasetImportJobArns;
    bool m_datasetImportJobArnsHasBeenSet = false;

    DataConfig m_dataConfig;
    bool m_dataConfigHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    ReferencePredictorSummary m_referencePredictorSummary;
    bool m_referencePredictorSummaryHasBeenSet = false;

    long long m_estimatedTimeRemainingInMinutes{0};
    bool m_estimatedTimeRemainingInMinutesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    OptimizationMetric m_optimizationMetric{OptimizationMetric::NOT_SET};
    bool m_optimizationMetricHasBeenSet = false;

    ExplainabilityInfo m_explainabilityInfo;
    bool m_explainabilityInfoHasBeenSet = false;

    MonitorInfo m_monitorInfo;
    bool m_monitorInfoHasBeenSet = false;

    TimeAlignmentBoundary m_timeAlignmentBoundary;
    bool m_timeAlignmentBoundaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
