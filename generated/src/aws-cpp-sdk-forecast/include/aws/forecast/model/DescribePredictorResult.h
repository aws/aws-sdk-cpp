/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/AutoMLOverrideStrategy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/forecast/model/EvaluationParameters.h>
#include <aws/forecast/model/HyperParameterTuningJobConfig.h>
#include <aws/forecast/model/InputDataConfig.h>
#include <aws/forecast/model/FeaturizationConfig.h>
#include <aws/forecast/model/EncryptionConfig.h>
#include <aws/forecast/model/PredictorExecutionDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/forecast/model/OptimizationMetric.h>
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
  class DescribePredictorResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribePredictorResult() = default;
    AWS_FORECASTSERVICE_API DescribePredictorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribePredictorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the predictor.</p>
     */
    inline const Aws::String& GetPredictorArn() const { return m_predictorArn; }
    template<typename PredictorArnT = Aws::String>
    void SetPredictorArn(PredictorArnT&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::forward<PredictorArnT>(value); }
    template<typename PredictorArnT = Aws::String>
    DescribePredictorResult& WithPredictorArn(PredictorArnT&& value) { SetPredictorArn(std::forward<PredictorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the predictor.</p>
     */
    inline const Aws::String& GetPredictorName() const { return m_predictorName; }
    template<typename PredictorNameT = Aws::String>
    void SetPredictorName(PredictorNameT&& value) { m_predictorNameHasBeenSet = true; m_predictorName = std::forward<PredictorNameT>(value); }
    template<typename PredictorNameT = Aws::String>
    DescribePredictorResult& WithPredictorName(PredictorNameT&& value) { SetPredictorName(std::forward<PredictorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm used for model training.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const { return m_algorithmArn; }
    template<typename AlgorithmArnT = Aws::String>
    void SetAlgorithmArn(AlgorithmArnT&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::forward<AlgorithmArnT>(value); }
    template<typename AlgorithmArnT = Aws::String>
    DescribePredictorResult& WithAlgorithmArn(AlgorithmArnT&& value) { SetAlgorithmArn(std::forward<AlgorithmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>PerformAutoML</code> is specified, the ARN of the chosen
     * algorithm.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoMLAlgorithmArns() const { return m_autoMLAlgorithmArns; }
    template<typename AutoMLAlgorithmArnsT = Aws::Vector<Aws::String>>
    void SetAutoMLAlgorithmArns(AutoMLAlgorithmArnsT&& value) { m_autoMLAlgorithmArnsHasBeenSet = true; m_autoMLAlgorithmArns = std::forward<AutoMLAlgorithmArnsT>(value); }
    template<typename AutoMLAlgorithmArnsT = Aws::Vector<Aws::String>>
    DescribePredictorResult& WithAutoMLAlgorithmArns(AutoMLAlgorithmArnsT&& value) { SetAutoMLAlgorithmArns(std::forward<AutoMLAlgorithmArnsT>(value)); return *this;}
    template<typename AutoMLAlgorithmArnsT = Aws::String>
    DescribePredictorResult& AddAutoMLAlgorithmArns(AutoMLAlgorithmArnsT&& value) { m_autoMLAlgorithmArnsHasBeenSet = true; m_autoMLAlgorithmArns.emplace_back(std::forward<AutoMLAlgorithmArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of time-steps of the forecast. The forecast horizon is also called
     * the prediction length.</p>
     */
    inline int GetForecastHorizon() const { return m_forecastHorizon; }
    inline void SetForecastHorizon(int value) { m_forecastHorizonHasBeenSet = true; m_forecastHorizon = value; }
    inline DescribePredictorResult& WithForecastHorizon(int value) { SetForecastHorizon(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecast types used during predictor training. Default value is
     * <code>["0.1","0.5","0.9"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const { return m_forecastTypes; }
    template<typename ForecastTypesT = Aws::Vector<Aws::String>>
    void SetForecastTypes(ForecastTypesT&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = std::forward<ForecastTypesT>(value); }
    template<typename ForecastTypesT = Aws::Vector<Aws::String>>
    DescribePredictorResult& WithForecastTypes(ForecastTypesT&& value) { SetForecastTypes(std::forward<ForecastTypesT>(value)); return *this;}
    template<typename ForecastTypesT = Aws::String>
    DescribePredictorResult& AddForecastTypes(ForecastTypesT&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.emplace_back(std::forward<ForecastTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the predictor is set to perform AutoML.</p>
     */
    inline bool GetPerformAutoML() const { return m_performAutoML; }
    inline void SetPerformAutoML(bool value) { m_performAutoMLHasBeenSet = true; m_performAutoML = value; }
    inline DescribePredictorResult& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p> The <code>LatencyOptimized</code> AutoML override strategy is only
     * available in private beta. Contact Amazon Web Services Support or your account
     * manager to learn more about access privileges. </p>  <p>The AutoML
     * strategy used to train the predictor. Unless <code>LatencyOptimized</code> is
     * specified, the AutoML strategy optimizes predictor accuracy.</p> <p>This
     * parameter is only valid for predictors trained using AutoML.</p>
     */
    inline AutoMLOverrideStrategy GetAutoMLOverrideStrategy() const { return m_autoMLOverrideStrategy; }
    inline void SetAutoMLOverrideStrategy(AutoMLOverrideStrategy value) { m_autoMLOverrideStrategyHasBeenSet = true; m_autoMLOverrideStrategy = value; }
    inline DescribePredictorResult& WithAutoMLOverrideStrategy(AutoMLOverrideStrategy value) { SetAutoMLOverrideStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the predictor is set to perform hyperparameter optimization
     * (HPO).</p>
     */
    inline bool GetPerformHPO() const { return m_performHPO; }
    inline void SetPerformHPO(bool value) { m_performHPOHasBeenSet = true; m_performHPO = value; }
    inline DescribePredictorResult& WithPerformHPO(bool value) { SetPerformHPO(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTrainingParameters() const { return m_trainingParameters; }
    template<typename TrainingParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTrainingParameters(TrainingParametersT&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters = std::forward<TrainingParametersT>(value); }
    template<typename TrainingParametersT = Aws::Map<Aws::String, Aws::String>>
    DescribePredictorResult& WithTrainingParameters(TrainingParametersT&& value) { SetTrainingParameters(std::forward<TrainingParametersT>(value)); return *this;}
    template<typename TrainingParametersKeyT = Aws::String, typename TrainingParametersValueT = Aws::String>
    DescribePredictorResult& AddTrainingParameters(TrainingParametersKeyT&& key, TrainingParametersValueT&& value) {
      m_trainingParametersHasBeenSet = true; m_trainingParameters.emplace(std::forward<TrainingParametersKeyT>(key), std::forward<TrainingParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline const EvaluationParameters& GetEvaluationParameters() const { return m_evaluationParameters; }
    template<typename EvaluationParametersT = EvaluationParameters>
    void SetEvaluationParameters(EvaluationParametersT&& value) { m_evaluationParametersHasBeenSet = true; m_evaluationParameters = std::forward<EvaluationParametersT>(value); }
    template<typename EvaluationParametersT = EvaluationParameters>
    DescribePredictorResult& WithEvaluationParameters(EvaluationParametersT&& value) { SetEvaluationParameters(std::forward<EvaluationParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameter override values for the algorithm.</p>
     */
    inline const HyperParameterTuningJobConfig& GetHPOConfig() const { return m_hPOConfig; }
    template<typename HPOConfigT = HyperParameterTuningJobConfig>
    void SetHPOConfig(HPOConfigT&& value) { m_hPOConfigHasBeenSet = true; m_hPOConfig = std::forward<HPOConfigT>(value); }
    template<typename HPOConfigT = HyperParameterTuningJobConfig>
    DescribePredictorResult& WithHPOConfig(HPOConfigT&& value) { SetHPOConfig(std::forward<HPOConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    template<typename InputDataConfigT = InputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = InputDataConfig>
    DescribePredictorResult& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The featurization configuration.</p>
     */
    inline const FeaturizationConfig& GetFeaturizationConfig() const { return m_featurizationConfig; }
    template<typename FeaturizationConfigT = FeaturizationConfig>
    void SetFeaturizationConfig(FeaturizationConfigT&& value) { m_featurizationConfigHasBeenSet = true; m_featurizationConfig = std::forward<FeaturizationConfigT>(value); }
    template<typename FeaturizationConfigT = FeaturizationConfig>
    DescribePredictorResult& WithFeaturizationConfig(FeaturizationConfigT&& value) { SetFeaturizationConfig(std::forward<FeaturizationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Key Management Service (KMS) key and the Identity and Access Management
     * (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const { return m_encryptionConfig; }
    template<typename EncryptionConfigT = EncryptionConfig>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = EncryptionConfig>
    DescribePredictorResult& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on the the status and results of the backtests performed to evaluate
     * the accuracy of the predictor. You specify the number of backtests to perform
     * when you call the operation.</p>
     */
    inline const PredictorExecutionDetails& GetPredictorExecutionDetails() const { return m_predictorExecutionDetails; }
    template<typename PredictorExecutionDetailsT = PredictorExecutionDetails>
    void SetPredictorExecutionDetails(PredictorExecutionDetailsT&& value) { m_predictorExecutionDetailsHasBeenSet = true; m_predictorExecutionDetails = std::forward<PredictorExecutionDetailsT>(value); }
    template<typename PredictorExecutionDetailsT = PredictorExecutionDetails>
    DescribePredictorResult& WithPredictorExecutionDetails(PredictorExecutionDetailsT&& value) { SetPredictorExecutionDetails(std::forward<PredictorExecutionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time remaining in minutes for the predictor training job to
     * complete.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const { return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutesHasBeenSet = true; m_estimatedTimeRemainingInMinutes = value; }
    inline DescribePredictorResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the predictor was created with <a>CreateAutoPredictor</a>.</p>
     */
    inline bool GetIsAutoPredictor() const { return m_isAutoPredictor; }
    inline void SetIsAutoPredictor(bool value) { m_isAutoPredictorHasBeenSet = true; m_isAutoPredictor = value; }
    inline DescribePredictorResult& WithIsAutoPredictor(bool value) { SetIsAutoPredictor(value); return *this;}
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
    DescribePredictorResult& WithDatasetImportJobArns(DatasetImportJobArnsT&& value) { SetDatasetImportJobArns(std::forward<DatasetImportJobArnsT>(value)); return *this;}
    template<typename DatasetImportJobArnsT = Aws::String>
    DescribePredictorResult& AddDatasetImportJobArns(DatasetImportJobArnsT&& value) { m_datasetImportJobArnsHasBeenSet = true; m_datasetImportJobArns.emplace_back(std::forward<DatasetImportJobArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the predictor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>CREATE_STOPPING</code>,
     * <code>CREATE_STOPPED</code> </p> </li> </ul>  <p>The <code>Status</code>
     * of the predictor must be <code>ACTIVE</code> before you can use the predictor to
     * create a forecast.</p> 
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribePredictorResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribePredictorResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the model training task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribePredictorResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    DescribePredictorResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline OptimizationMetric GetOptimizationMetric() const { return m_optimizationMetric; }
    inline void SetOptimizationMetric(OptimizationMetric value) { m_optimizationMetricHasBeenSet = true; m_optimizationMetric = value; }
    inline DescribePredictorResult& WithOptimizationMetric(OptimizationMetric value) { SetOptimizationMetric(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePredictorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;

    Aws::String m_predictorName;
    bool m_predictorNameHasBeenSet = false;

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoMLAlgorithmArns;
    bool m_autoMLAlgorithmArnsHasBeenSet = false;

    int m_forecastHorizon{0};
    bool m_forecastHorizonHasBeenSet = false;

    Aws::Vector<Aws::String> m_forecastTypes;
    bool m_forecastTypesHasBeenSet = false;

    bool m_performAutoML{false};
    bool m_performAutoMLHasBeenSet = false;

    AutoMLOverrideStrategy m_autoMLOverrideStrategy{AutoMLOverrideStrategy::NOT_SET};
    bool m_autoMLOverrideStrategyHasBeenSet = false;

    bool m_performHPO{false};
    bool m_performHPOHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_trainingParameters;
    bool m_trainingParametersHasBeenSet = false;

    EvaluationParameters m_evaluationParameters;
    bool m_evaluationParametersHasBeenSet = false;

    HyperParameterTuningJobConfig m_hPOConfig;
    bool m_hPOConfigHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    FeaturizationConfig m_featurizationConfig;
    bool m_featurizationConfigHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    PredictorExecutionDetails m_predictorExecutionDetails;
    bool m_predictorExecutionDetailsHasBeenSet = false;

    long long m_estimatedTimeRemainingInMinutes{0};
    bool m_estimatedTimeRemainingInMinutesHasBeenSet = false;

    bool m_isAutoPredictor{false};
    bool m_isAutoPredictorHasBeenSet = false;

    Aws::Vector<Aws::String> m_datasetImportJobArns;
    bool m_datasetImportJobArnsHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
