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
    AWS_FORECASTSERVICE_API DescribePredictorResult();
    AWS_FORECASTSERVICE_API DescribePredictorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribePredictorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the predictor.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArn = value; }

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArn = std::move(value); }

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArn.assign(value); }

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline DescribePredictorResult& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline DescribePredictorResult& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline DescribePredictorResult& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}


    /**
     * <p>The name of the predictor.</p>
     */
    inline const Aws::String& GetPredictorName() const{ return m_predictorName; }

    /**
     * <p>The name of the predictor.</p>
     */
    inline void SetPredictorName(const Aws::String& value) { m_predictorName = value; }

    /**
     * <p>The name of the predictor.</p>
     */
    inline void SetPredictorName(Aws::String&& value) { m_predictorName = std::move(value); }

    /**
     * <p>The name of the predictor.</p>
     */
    inline void SetPredictorName(const char* value) { m_predictorName.assign(value); }

    /**
     * <p>The name of the predictor.</p>
     */
    inline DescribePredictorResult& WithPredictorName(const Aws::String& value) { SetPredictorName(value); return *this;}

    /**
     * <p>The name of the predictor.</p>
     */
    inline DescribePredictorResult& WithPredictorName(Aws::String&& value) { SetPredictorName(std::move(value)); return *this;}

    /**
     * <p>The name of the predictor.</p>
     */
    inline DescribePredictorResult& WithPredictorName(const char* value) { SetPredictorName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm used for model training.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm used for model training.</p>
     */
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm used for model training.</p>
     */
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm used for model training.</p>
     */
    inline void SetAlgorithmArn(const char* value) { m_algorithmArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm used for model training.</p>
     */
    inline DescribePredictorResult& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm used for model training.</p>
     */
    inline DescribePredictorResult& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm used for model training.</p>
     */
    inline DescribePredictorResult& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}


    /**
     * <p>When <code>PerformAutoML</code> is specified, the ARN of the chosen
     * algorithm.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoMLAlgorithmArns() const{ return m_autoMLAlgorithmArns; }

    /**
     * <p>When <code>PerformAutoML</code> is specified, the ARN of the chosen
     * algorithm.</p>
     */
    inline void SetAutoMLAlgorithmArns(const Aws::Vector<Aws::String>& value) { m_autoMLAlgorithmArns = value; }

    /**
     * <p>When <code>PerformAutoML</code> is specified, the ARN of the chosen
     * algorithm.</p>
     */
    inline void SetAutoMLAlgorithmArns(Aws::Vector<Aws::String>&& value) { m_autoMLAlgorithmArns = std::move(value); }

    /**
     * <p>When <code>PerformAutoML</code> is specified, the ARN of the chosen
     * algorithm.</p>
     */
    inline DescribePredictorResult& WithAutoMLAlgorithmArns(const Aws::Vector<Aws::String>& value) { SetAutoMLAlgorithmArns(value); return *this;}

    /**
     * <p>When <code>PerformAutoML</code> is specified, the ARN of the chosen
     * algorithm.</p>
     */
    inline DescribePredictorResult& WithAutoMLAlgorithmArns(Aws::Vector<Aws::String>&& value) { SetAutoMLAlgorithmArns(std::move(value)); return *this;}

    /**
     * <p>When <code>PerformAutoML</code> is specified, the ARN of the chosen
     * algorithm.</p>
     */
    inline DescribePredictorResult& AddAutoMLAlgorithmArns(const Aws::String& value) { m_autoMLAlgorithmArns.push_back(value); return *this; }

    /**
     * <p>When <code>PerformAutoML</code> is specified, the ARN of the chosen
     * algorithm.</p>
     */
    inline DescribePredictorResult& AddAutoMLAlgorithmArns(Aws::String&& value) { m_autoMLAlgorithmArns.push_back(std::move(value)); return *this; }

    /**
     * <p>When <code>PerformAutoML</code> is specified, the ARN of the chosen
     * algorithm.</p>
     */
    inline DescribePredictorResult& AddAutoMLAlgorithmArns(const char* value) { m_autoMLAlgorithmArns.push_back(value); return *this; }


    /**
     * <p>The number of time-steps of the forecast. The forecast horizon is also called
     * the prediction length.</p>
     */
    inline int GetForecastHorizon() const{ return m_forecastHorizon; }

    /**
     * <p>The number of time-steps of the forecast. The forecast horizon is also called
     * the prediction length.</p>
     */
    inline void SetForecastHorizon(int value) { m_forecastHorizon = value; }

    /**
     * <p>The number of time-steps of the forecast. The forecast horizon is also called
     * the prediction length.</p>
     */
    inline DescribePredictorResult& WithForecastHorizon(int value) { SetForecastHorizon(value); return *this;}


    /**
     * <p>The forecast types used during predictor training. Default value is
     * <code>["0.1","0.5","0.9"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const{ return m_forecastTypes; }

    /**
     * <p>The forecast types used during predictor training. Default value is
     * <code>["0.1","0.5","0.9"]</code> </p>
     */
    inline void SetForecastTypes(const Aws::Vector<Aws::String>& value) { m_forecastTypes = value; }

    /**
     * <p>The forecast types used during predictor training. Default value is
     * <code>["0.1","0.5","0.9"]</code> </p>
     */
    inline void SetForecastTypes(Aws::Vector<Aws::String>&& value) { m_forecastTypes = std::move(value); }

    /**
     * <p>The forecast types used during predictor training. Default value is
     * <code>["0.1","0.5","0.9"]</code> </p>
     */
    inline DescribePredictorResult& WithForecastTypes(const Aws::Vector<Aws::String>& value) { SetForecastTypes(value); return *this;}

    /**
     * <p>The forecast types used during predictor training. Default value is
     * <code>["0.1","0.5","0.9"]</code> </p>
     */
    inline DescribePredictorResult& WithForecastTypes(Aws::Vector<Aws::String>&& value) { SetForecastTypes(std::move(value)); return *this;}

    /**
     * <p>The forecast types used during predictor training. Default value is
     * <code>["0.1","0.5","0.9"]</code> </p>
     */
    inline DescribePredictorResult& AddForecastTypes(const Aws::String& value) { m_forecastTypes.push_back(value); return *this; }

    /**
     * <p>The forecast types used during predictor training. Default value is
     * <code>["0.1","0.5","0.9"]</code> </p>
     */
    inline DescribePredictorResult& AddForecastTypes(Aws::String&& value) { m_forecastTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The forecast types used during predictor training. Default value is
     * <code>["0.1","0.5","0.9"]</code> </p>
     */
    inline DescribePredictorResult& AddForecastTypes(const char* value) { m_forecastTypes.push_back(value); return *this; }


    /**
     * <p>Whether the predictor is set to perform AutoML.</p>
     */
    inline bool GetPerformAutoML() const{ return m_performAutoML; }

    /**
     * <p>Whether the predictor is set to perform AutoML.</p>
     */
    inline void SetPerformAutoML(bool value) { m_performAutoML = value; }

    /**
     * <p>Whether the predictor is set to perform AutoML.</p>
     */
    inline DescribePredictorResult& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}


    /**
     *  <p> The <code>LatencyOptimized</code> AutoML override strategy is only
     * available in private beta. Contact AWS Support or your account manager to learn
     * more about access privileges. </p>  <p>The AutoML strategy used to train
     * the predictor. Unless <code>LatencyOptimized</code> is specified, the AutoML
     * strategy optimizes predictor accuracy.</p> <p>This parameter is only valid for
     * predictors trained using AutoML.</p>
     */
    inline const AutoMLOverrideStrategy& GetAutoMLOverrideStrategy() const{ return m_autoMLOverrideStrategy; }

    /**
     *  <p> The <code>LatencyOptimized</code> AutoML override strategy is only
     * available in private beta. Contact AWS Support or your account manager to learn
     * more about access privileges. </p>  <p>The AutoML strategy used to train
     * the predictor. Unless <code>LatencyOptimized</code> is specified, the AutoML
     * strategy optimizes predictor accuracy.</p> <p>This parameter is only valid for
     * predictors trained using AutoML.</p>
     */
    inline void SetAutoMLOverrideStrategy(const AutoMLOverrideStrategy& value) { m_autoMLOverrideStrategy = value; }

    /**
     *  <p> The <code>LatencyOptimized</code> AutoML override strategy is only
     * available in private beta. Contact AWS Support or your account manager to learn
     * more about access privileges. </p>  <p>The AutoML strategy used to train
     * the predictor. Unless <code>LatencyOptimized</code> is specified, the AutoML
     * strategy optimizes predictor accuracy.</p> <p>This parameter is only valid for
     * predictors trained using AutoML.</p>
     */
    inline void SetAutoMLOverrideStrategy(AutoMLOverrideStrategy&& value) { m_autoMLOverrideStrategy = std::move(value); }

    /**
     *  <p> The <code>LatencyOptimized</code> AutoML override strategy is only
     * available in private beta. Contact AWS Support or your account manager to learn
     * more about access privileges. </p>  <p>The AutoML strategy used to train
     * the predictor. Unless <code>LatencyOptimized</code> is specified, the AutoML
     * strategy optimizes predictor accuracy.</p> <p>This parameter is only valid for
     * predictors trained using AutoML.</p>
     */
    inline DescribePredictorResult& WithAutoMLOverrideStrategy(const AutoMLOverrideStrategy& value) { SetAutoMLOverrideStrategy(value); return *this;}

    /**
     *  <p> The <code>LatencyOptimized</code> AutoML override strategy is only
     * available in private beta. Contact AWS Support or your account manager to learn
     * more about access privileges. </p>  <p>The AutoML strategy used to train
     * the predictor. Unless <code>LatencyOptimized</code> is specified, the AutoML
     * strategy optimizes predictor accuracy.</p> <p>This parameter is only valid for
     * predictors trained using AutoML.</p>
     */
    inline DescribePredictorResult& WithAutoMLOverrideStrategy(AutoMLOverrideStrategy&& value) { SetAutoMLOverrideStrategy(std::move(value)); return *this;}


    /**
     * <p>Whether the predictor is set to perform hyperparameter optimization
     * (HPO).</p>
     */
    inline bool GetPerformHPO() const{ return m_performHPO; }

    /**
     * <p>Whether the predictor is set to perform hyperparameter optimization
     * (HPO).</p>
     */
    inline void SetPerformHPO(bool value) { m_performHPO = value; }

    /**
     * <p>Whether the predictor is set to perform hyperparameter optimization
     * (HPO).</p>
     */
    inline DescribePredictorResult& WithPerformHPO(bool value) { SetPerformHPO(value); return *this;}


    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTrainingParameters() const{ return m_trainingParameters; }

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline void SetTrainingParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_trainingParameters = value; }

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline void SetTrainingParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_trainingParameters = std::move(value); }

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline DescribePredictorResult& WithTrainingParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTrainingParameters(value); return *this;}

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline DescribePredictorResult& WithTrainingParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTrainingParameters(std::move(value)); return *this;}

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline DescribePredictorResult& AddTrainingParameters(const Aws::String& key, const Aws::String& value) { m_trainingParameters.emplace(key, value); return *this; }

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline DescribePredictorResult& AddTrainingParameters(Aws::String&& key, const Aws::String& value) { m_trainingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline DescribePredictorResult& AddTrainingParameters(const Aws::String& key, Aws::String&& value) { m_trainingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline DescribePredictorResult& AddTrainingParameters(Aws::String&& key, Aws::String&& value) { m_trainingParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline DescribePredictorResult& AddTrainingParameters(const char* key, Aws::String&& value) { m_trainingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline DescribePredictorResult& AddTrainingParameters(Aws::String&& key, const char* value) { m_trainingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default training parameters or overrides selected during model training.
     * When running AutoML or choosing HPO with CNN-QR or DeepAR+, the optimized values
     * for the chosen hyperparameters are returned. For more information, see
     * <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline DescribePredictorResult& AddTrainingParameters(const char* key, const char* value) { m_trainingParameters.emplace(key, value); return *this; }


    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline const EvaluationParameters& GetEvaluationParameters() const{ return m_evaluationParameters; }

    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline void SetEvaluationParameters(const EvaluationParameters& value) { m_evaluationParameters = value; }

    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline void SetEvaluationParameters(EvaluationParameters&& value) { m_evaluationParameters = std::move(value); }

    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline DescribePredictorResult& WithEvaluationParameters(const EvaluationParameters& value) { SetEvaluationParameters(value); return *this;}

    /**
     * <p>Used to override the default evaluation parameters of the specified
     * algorithm. Amazon Forecast evaluates a predictor by splitting a dataset into
     * training data and testing data. The evaluation parameters define how to perform
     * the split and the number of iterations.</p>
     */
    inline DescribePredictorResult& WithEvaluationParameters(EvaluationParameters&& value) { SetEvaluationParameters(std::move(value)); return *this;}


    /**
     * <p>The hyperparameter override values for the algorithm.</p>
     */
    inline const HyperParameterTuningJobConfig& GetHPOConfig() const{ return m_hPOConfig; }

    /**
     * <p>The hyperparameter override values for the algorithm.</p>
     */
    inline void SetHPOConfig(const HyperParameterTuningJobConfig& value) { m_hPOConfig = value; }

    /**
     * <p>The hyperparameter override values for the algorithm.</p>
     */
    inline void SetHPOConfig(HyperParameterTuningJobConfig&& value) { m_hPOConfig = std::move(value); }

    /**
     * <p>The hyperparameter override values for the algorithm.</p>
     */
    inline DescribePredictorResult& WithHPOConfig(const HyperParameterTuningJobConfig& value) { SetHPOConfig(value); return *this;}

    /**
     * <p>The hyperparameter override values for the algorithm.</p>
     */
    inline DescribePredictorResult& WithHPOConfig(HyperParameterTuningJobConfig&& value) { SetHPOConfig(std::move(value)); return *this;}


    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfig = value; }

    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfig = std::move(value); }

    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline DescribePredictorResult& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline DescribePredictorResult& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The featurization configuration.</p>
     */
    inline const FeaturizationConfig& GetFeaturizationConfig() const{ return m_featurizationConfig; }

    /**
     * <p>The featurization configuration.</p>
     */
    inline void SetFeaturizationConfig(const FeaturizationConfig& value) { m_featurizationConfig = value; }

    /**
     * <p>The featurization configuration.</p>
     */
    inline void SetFeaturizationConfig(FeaturizationConfig&& value) { m_featurizationConfig = std::move(value); }

    /**
     * <p>The featurization configuration.</p>
     */
    inline DescribePredictorResult& WithFeaturizationConfig(const FeaturizationConfig& value) { SetFeaturizationConfig(value); return *this;}

    /**
     * <p>The featurization configuration.</p>
     */
    inline DescribePredictorResult& WithFeaturizationConfig(FeaturizationConfig&& value) { SetFeaturizationConfig(std::move(value)); return *this;}


    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfig = value; }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfig = std::move(value); }

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline DescribePredictorResult& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>An AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline DescribePredictorResult& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}


    /**
     * <p>Details on the the status and results of the backtests performed to evaluate
     * the accuracy of the predictor. You specify the number of backtests to perform
     * when you call the operation.</p>
     */
    inline const PredictorExecutionDetails& GetPredictorExecutionDetails() const{ return m_predictorExecutionDetails; }

    /**
     * <p>Details on the the status and results of the backtests performed to evaluate
     * the accuracy of the predictor. You specify the number of backtests to perform
     * when you call the operation.</p>
     */
    inline void SetPredictorExecutionDetails(const PredictorExecutionDetails& value) { m_predictorExecutionDetails = value; }

    /**
     * <p>Details on the the status and results of the backtests performed to evaluate
     * the accuracy of the predictor. You specify the number of backtests to perform
     * when you call the operation.</p>
     */
    inline void SetPredictorExecutionDetails(PredictorExecutionDetails&& value) { m_predictorExecutionDetails = std::move(value); }

    /**
     * <p>Details on the the status and results of the backtests performed to evaluate
     * the accuracy of the predictor. You specify the number of backtests to perform
     * when you call the operation.</p>
     */
    inline DescribePredictorResult& WithPredictorExecutionDetails(const PredictorExecutionDetails& value) { SetPredictorExecutionDetails(value); return *this;}

    /**
     * <p>Details on the the status and results of the backtests performed to evaluate
     * the accuracy of the predictor. You specify the number of backtests to perform
     * when you call the operation.</p>
     */
    inline DescribePredictorResult& WithPredictorExecutionDetails(PredictorExecutionDetails&& value) { SetPredictorExecutionDetails(std::move(value)); return *this;}


    /**
     * <p>The estimated time remaining in minutes for the predictor training job to
     * complete.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const{ return m_estimatedTimeRemainingInMinutes; }

    /**
     * <p>The estimated time remaining in minutes for the predictor training job to
     * complete.</p>
     */
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutes = value; }

    /**
     * <p>The estimated time remaining in minutes for the predictor training job to
     * complete.</p>
     */
    inline DescribePredictorResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}


    /**
     * <p>Whether the predictor was created with <a>CreateAutoPredictor</a>.</p>
     */
    inline bool GetIsAutoPredictor() const{ return m_isAutoPredictor; }

    /**
     * <p>Whether the predictor was created with <a>CreateAutoPredictor</a>.</p>
     */
    inline void SetIsAutoPredictor(bool value) { m_isAutoPredictor = value; }

    /**
     * <p>Whether the predictor was created with <a>CreateAutoPredictor</a>.</p>
     */
    inline DescribePredictorResult& WithIsAutoPredictor(bool value) { SetIsAutoPredictor(value); return *this;}


    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetImportJobArns() const{ return m_datasetImportJobArns; }

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline void SetDatasetImportJobArns(const Aws::Vector<Aws::String>& value) { m_datasetImportJobArns = value; }

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline void SetDatasetImportJobArns(Aws::Vector<Aws::String>&& value) { m_datasetImportJobArns = std::move(value); }

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline DescribePredictorResult& WithDatasetImportJobArns(const Aws::Vector<Aws::String>& value) { SetDatasetImportJobArns(value); return *this;}

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline DescribePredictorResult& WithDatasetImportJobArns(Aws::Vector<Aws::String>&& value) { SetDatasetImportJobArns(std::move(value)); return *this;}

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline DescribePredictorResult& AddDatasetImportJobArns(const Aws::String& value) { m_datasetImportJobArns.push_back(value); return *this; }

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline DescribePredictorResult& AddDatasetImportJobArns(Aws::String&& value) { m_datasetImportJobArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline DescribePredictorResult& AddDatasetImportJobArns(const char* value) { m_datasetImportJobArns.push_back(value); return *this; }


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
    inline const Aws::String& GetStatus() const{ return m_status; }

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
    inline void SetStatus(const Aws::String& value) { m_status = value; }

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
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

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
    inline void SetStatus(const char* value) { m_status.assign(value); }

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
    inline DescribePredictorResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

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
    inline DescribePredictorResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

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
    inline DescribePredictorResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribePredictorResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribePredictorResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribePredictorResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>When the model training task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the model training task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the model training task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the model training task was created.</p>
     */
    inline DescribePredictorResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the model training task was created.</p>
     */
    inline DescribePredictorResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline DescribePredictorResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline DescribePredictorResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}


    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline const OptimizationMetric& GetOptimizationMetric() const{ return m_optimizationMetric; }

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline void SetOptimizationMetric(const OptimizationMetric& value) { m_optimizationMetric = value; }

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline void SetOptimizationMetric(OptimizationMetric&& value) { m_optimizationMetric = std::move(value); }

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline DescribePredictorResult& WithOptimizationMetric(const OptimizationMetric& value) { SetOptimizationMetric(value); return *this;}

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline DescribePredictorResult& WithOptimizationMetric(OptimizationMetric&& value) { SetOptimizationMetric(std::move(value)); return *this;}

  private:

    Aws::String m_predictorArn;

    Aws::String m_predictorName;

    Aws::String m_algorithmArn;

    Aws::Vector<Aws::String> m_autoMLAlgorithmArns;

    int m_forecastHorizon;

    Aws::Vector<Aws::String> m_forecastTypes;

    bool m_performAutoML;

    AutoMLOverrideStrategy m_autoMLOverrideStrategy;

    bool m_performHPO;

    Aws::Map<Aws::String, Aws::String> m_trainingParameters;

    EvaluationParameters m_evaluationParameters;

    HyperParameterTuningJobConfig m_hPOConfig;

    InputDataConfig m_inputDataConfig;

    FeaturizationConfig m_featurizationConfig;

    EncryptionConfig m_encryptionConfig;

    PredictorExecutionDetails m_predictorExecutionDetails;

    long long m_estimatedTimeRemainingInMinutes;

    bool m_isAutoPredictor;

    Aws::Vector<Aws::String> m_datasetImportJobArns;

    Aws::String m_status;

    Aws::String m_message;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    OptimizationMetric m_optimizationMetric;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
