/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/AutoMLOverrideStrategy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/forecast/model/EvaluationParameters.h>
#include <aws/forecast/model/HyperParameterTuningJobConfig.h>
#include <aws/forecast/model/InputDataConfig.h>
#include <aws/forecast/model/FeaturizationConfig.h>
#include <aws/forecast/model/EncryptionConfig.h>
#include <aws/forecast/model/OptimizationMetric.h>
#include <aws/forecast/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class CreatePredictorRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreatePredictorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePredictor"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the predictor.</p>
     */
    inline const Aws::String& GetPredictorName() const { return m_predictorName; }
    inline bool PredictorNameHasBeenSet() const { return m_predictorNameHasBeenSet; }
    template<typename PredictorNameT = Aws::String>
    void SetPredictorName(PredictorNameT&& value) { m_predictorNameHasBeenSet = true; m_predictorName = std::forward<PredictorNameT>(value); }
    template<typename PredictorNameT = Aws::String>
    CreatePredictorRequest& WithPredictorName(PredictorNameT&& value) { SetPredictorName(std::forward<PredictorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm to use for model training.
     * Required if <code>PerformAutoML</code> is not set to <code>true</code>.</p> <p
     * class="title"> <b>Supported algorithms:</b> </p> <ul> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ARIMA</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/CNN-QR</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Deep_AR_Plus</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/ETS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/NPTS</code> </p> </li> <li> <p>
     * <code>arn:aws:forecast:::algorithm/Prophet</code> </p> </li> </ul>
     */
    inline const Aws::String& GetAlgorithmArn() const { return m_algorithmArn; }
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }
    template<typename AlgorithmArnT = Aws::String>
    void SetAlgorithmArn(AlgorithmArnT&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::forward<AlgorithmArnT>(value); }
    template<typename AlgorithmArnT = Aws::String>
    CreatePredictorRequest& WithAlgorithmArn(AlgorithmArnT&& value) { SetAlgorithmArn(std::forward<AlgorithmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of time-steps that the model is trained to predict. The
     * forecast horizon is also called the prediction length.</p> <p>For example, if
     * you configure a dataset for daily data collection (using the
     * <code>DataFrequency</code> parameter of the <a>CreateDataset</a> operation) and
     * set the forecast horizon to 10, the model returns predictions for 10 days.</p>
     * <p>The maximum forecast horizon is the lesser of 500 time-steps or 1/3 of the
     * TARGET_TIME_SERIES dataset length.</p>
     */
    inline int GetForecastHorizon() const { return m_forecastHorizon; }
    inline bool ForecastHorizonHasBeenSet() const { return m_forecastHorizonHasBeenSet; }
    inline void SetForecastHorizon(int value) { m_forecastHorizonHasBeenSet = true; m_forecastHorizon = value; }
    inline CreatePredictorRequest& WithForecastHorizon(int value) { SetForecastHorizon(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the forecast types used to train a predictor. You can specify up to
     * five forecast types. Forecast types can be quantiles from 0.01 to 0.99, by
     * increments of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>. </p> <p>The default value is <code>["0.10", "0.50",
     * "0.9"]</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const { return m_forecastTypes; }
    inline bool ForecastTypesHasBeenSet() const { return m_forecastTypesHasBeenSet; }
    template<typename ForecastTypesT = Aws::Vector<Aws::String>>
    void SetForecastTypes(ForecastTypesT&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = std::forward<ForecastTypesT>(value); }
    template<typename ForecastTypesT = Aws::Vector<Aws::String>>
    CreatePredictorRequest& WithForecastTypes(ForecastTypesT&& value) { SetForecastTypes(std::forward<ForecastTypesT>(value)); return *this;}
    template<typename ForecastTypesT = Aws::String>
    CreatePredictorRequest& AddForecastTypes(ForecastTypesT&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.emplace_back(std::forward<ForecastTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to perform AutoML. When Amazon Forecast performs AutoML, it evaluates
     * the algorithms it provides and chooses the best algorithm and configuration for
     * your training dataset.</p> <p>The default value is <code>false</code>. In this
     * case, you are required to specify an algorithm.</p> <p>Set
     * <code>PerformAutoML</code> to <code>true</code> to have Amazon Forecast perform
     * AutoML. This is a good option if you aren't sure which algorithm is suitable for
     * your training data. In this case, <code>PerformHPO</code> must be false.</p>
     */
    inline bool GetPerformAutoML() const { return m_performAutoML; }
    inline bool PerformAutoMLHasBeenSet() const { return m_performAutoMLHasBeenSet; }
    inline void SetPerformAutoML(bool value) { m_performAutoMLHasBeenSet = true; m_performAutoML = value; }
    inline CreatePredictorRequest& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p> The <code>LatencyOptimized</code> AutoML override strategy is only
     * available in private beta. Contact Amazon Web Services Support or your account
     * manager to learn more about access privileges. </p>  <p>Used to overide
     * the default AutoML strategy, which is to optimize predictor accuracy. To apply
     * an AutoML strategy that minimizes training time, use
     * <code>LatencyOptimized</code>.</p> <p>This parameter is only valid for
     * predictors trained using AutoML.</p>
     */
    inline AutoMLOverrideStrategy GetAutoMLOverrideStrategy() const { return m_autoMLOverrideStrategy; }
    inline bool AutoMLOverrideStrategyHasBeenSet() const { return m_autoMLOverrideStrategyHasBeenSet; }
    inline void SetAutoMLOverrideStrategy(AutoMLOverrideStrategy value) { m_autoMLOverrideStrategyHasBeenSet = true; m_autoMLOverrideStrategy = value; }
    inline CreatePredictorRequest& WithAutoMLOverrideStrategy(AutoMLOverrideStrategy value) { SetAutoMLOverrideStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to perform hyperparameter optimization (HPO). HPO finds optimal
     * hyperparameter values for your training data. The process of performing HPO is
     * known as running a hyperparameter tuning job.</p> <p>The default value is
     * <code>false</code>. In this case, Amazon Forecast uses default hyperparameter
     * values from the chosen algorithm.</p> <p>To override the default values, set
     * <code>PerformHPO</code> to <code>true</code> and, optionally, supply the
     * <a>HyperParameterTuningJobConfig</a> object. The tuning job specifies a metric
     * to optimize, which hyperparameters participate in tuning, and the valid range
     * for each tunable hyperparameter. In this case, you are required to specify an
     * algorithm and <code>PerformAutoML</code> must be false.</p> <p>The following
     * algorithms support HPO:</p> <ul> <li> <p>DeepAR+</p> </li> <li> <p>CNN-QR</p>
     * </li> </ul>
     */
    inline bool GetPerformHPO() const { return m_performHPO; }
    inline bool PerformHPOHasBeenSet() const { return m_performHPOHasBeenSet; }
    inline void SetPerformHPO(bool value) { m_performHPOHasBeenSet = true; m_performHPO = value; }
    inline CreatePredictorRequest& WithPerformHPO(bool value) { SetPerformHPO(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters to override for model training. The hyperparameters that
     * you can override are listed in the individual algorithms. For the list of
     * supported algorithms, see <a>aws-forecast-choosing-recipes</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTrainingParameters() const { return m_trainingParameters; }
    inline bool TrainingParametersHasBeenSet() const { return m_trainingParametersHasBeenSet; }
    template<typename TrainingParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTrainingParameters(TrainingParametersT&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters = std::forward<TrainingParametersT>(value); }
    template<typename TrainingParametersT = Aws::Map<Aws::String, Aws::String>>
    CreatePredictorRequest& WithTrainingParameters(TrainingParametersT&& value) { SetTrainingParameters(std::forward<TrainingParametersT>(value)); return *this;}
    template<typename TrainingParametersKeyT = Aws::String, typename TrainingParametersValueT = Aws::String>
    CreatePredictorRequest& AddTrainingParameters(TrainingParametersKeyT&& key, TrainingParametersValueT&& value) {
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
    inline bool EvaluationParametersHasBeenSet() const { return m_evaluationParametersHasBeenSet; }
    template<typename EvaluationParametersT = EvaluationParameters>
    void SetEvaluationParameters(EvaluationParametersT&& value) { m_evaluationParametersHasBeenSet = true; m_evaluationParameters = std::forward<EvaluationParametersT>(value); }
    template<typename EvaluationParametersT = EvaluationParameters>
    CreatePredictorRequest& WithEvaluationParameters(EvaluationParametersT&& value) { SetEvaluationParameters(std::forward<EvaluationParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides hyperparameter override values for the algorithm. If you don't
     * provide this parameter, Amazon Forecast uses default values. The individual
     * algorithms specify which hyperparameters support hyperparameter optimization
     * (HPO). For more information, see <a>aws-forecast-choosing-recipes</a>.</p> <p>If
     * you included the <code>HPOConfig</code> object, you must set
     * <code>PerformHPO</code> to true.</p>
     */
    inline const HyperParameterTuningJobConfig& GetHPOConfig() const { return m_hPOConfig; }
    inline bool HPOConfigHasBeenSet() const { return m_hPOConfigHasBeenSet; }
    template<typename HPOConfigT = HyperParameterTuningJobConfig>
    void SetHPOConfig(HPOConfigT&& value) { m_hPOConfigHasBeenSet = true; m_hPOConfig = std::forward<HPOConfigT>(value); }
    template<typename HPOConfigT = HyperParameterTuningJobConfig>
    CreatePredictorRequest& WithHPOConfig(HPOConfigT&& value) { SetHPOConfig(std::forward<HPOConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the dataset group that contains the data to use to train the
     * predictor.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = InputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = InputDataConfig>
    CreatePredictorRequest& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The featurization configuration.</p>
     */
    inline const FeaturizationConfig& GetFeaturizationConfig() const { return m_featurizationConfig; }
    inline bool FeaturizationConfigHasBeenSet() const { return m_featurizationConfigHasBeenSet; }
    template<typename FeaturizationConfigT = FeaturizationConfig>
    void SetFeaturizationConfig(FeaturizationConfigT&& value) { m_featurizationConfigHasBeenSet = true; m_featurizationConfig = std::forward<FeaturizationConfigT>(value); }
    template<typename FeaturizationConfigT = FeaturizationConfig>
    CreatePredictorRequest& WithFeaturizationConfig(FeaturizationConfigT&& value) { SetFeaturizationConfig(std::forward<FeaturizationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Key Management Service (KMS) key and the Identity and Access Management
     * (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const { return m_encryptionConfig; }
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }
    template<typename EncryptionConfigT = EncryptionConfig>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = EncryptionConfig>
    CreatePredictorRequest& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional metadata that you apply to the predictor to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for Amazon Web Services use. You
     * cannot edit or delete tag keys with this prefix. Values can have this prefix. If
     * a tag value has <code>aws</code> as its prefix but the key does not, then
     * Forecast considers it to be a user tag and will count against the limit of 50
     * tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreatePredictorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreatePredictorRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline OptimizationMetric GetOptimizationMetric() const { return m_optimizationMetric; }
    inline bool OptimizationMetricHasBeenSet() const { return m_optimizationMetricHasBeenSet; }
    inline void SetOptimizationMetric(OptimizationMetric value) { m_optimizationMetricHasBeenSet = true; m_optimizationMetric = value; }
    inline CreatePredictorRequest& WithOptimizationMetric(OptimizationMetric value) { SetOptimizationMetric(value); return *this;}
    ///@}
  private:

    Aws::String m_predictorName;
    bool m_predictorNameHasBeenSet = false;

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    OptimizationMetric m_optimizationMetric{OptimizationMetric::NOT_SET};
    bool m_optimizationMetricHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
