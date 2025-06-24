/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/CustomizationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock/model/TrainingDataConfig.h>
#include <aws/bedrock/model/ValidationDataConfig.h>
#include <aws/bedrock/model/OutputDataConfig.h>
#include <aws/bedrock/model/TrainingMetrics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/CustomizationConfig.h>
#include <aws/bedrock/model/ModelStatus.h>
#include <aws/bedrock/model/ValidatorMetric.h>
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
namespace Bedrock
{
namespace Model
{
  class GetCustomModelResult
  {
  public:
    AWS_BEDROCK_API GetCustomModelResult() = default;
    AWS_BEDROCK_API GetCustomModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetCustomModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) associated with this model.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    GetCustomModelResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model name associated with this model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    GetCustomModelResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job name associated with this model.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    GetCustomModelResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job Amazon Resource Name (ARN) associated with this model. For models that
     * you create with the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_CreateCustomModel.html">CreateCustomModel</a>
     * API operation, this is <code>NULL</code>.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetCustomModelResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the base model.</p>
     */
    inline const Aws::String& GetBaseModelArn() const { return m_baseModelArn; }
    template<typename BaseModelArnT = Aws::String>
    void SetBaseModelArn(BaseModelArnT&& value) { m_baseModelArnHasBeenSet = true; m_baseModelArn = std::forward<BaseModelArnT>(value); }
    template<typename BaseModelArnT = Aws::String>
    GetCustomModelResult& WithBaseModelArn(BaseModelArnT&& value) { SetBaseModelArn(std::forward<BaseModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of model customization.</p>
     */
    inline CustomizationType GetCustomizationType() const { return m_customizationType; }
    inline void SetCustomizationType(CustomizationType value) { m_customizationTypeHasBeenSet = true; m_customizationType = value; }
    inline GetCustomModelResult& WithCustomizationType(CustomizationType value) { SetCustomizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetModelKmsKeyArn() const { return m_modelKmsKeyArn; }
    template<typename ModelKmsKeyArnT = Aws::String>
    void SetModelKmsKeyArn(ModelKmsKeyArnT&& value) { m_modelKmsKeyArnHasBeenSet = true; m_modelKmsKeyArn = std::forward<ModelKmsKeyArnT>(value); }
    template<typename ModelKmsKeyArnT = Aws::String>
    GetCustomModelResult& WithModelKmsKeyArn(ModelKmsKeyArnT&& value) { SetModelKmsKeyArn(std::forward<ModelKmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hyperparameter values associated with this model. For details on the format
     * for different models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models-hp.html">Custom
     * model hyperparameters</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const { return m_hyperParameters; }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperParameters(HyperParametersT&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::forward<HyperParametersT>(value); }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    GetCustomModelResult& WithHyperParameters(HyperParametersT&& value) { SetHyperParameters(std::forward<HyperParametersT>(value)); return *this;}
    template<typename HyperParametersKeyT = Aws::String, typename HyperParametersValueT = Aws::String>
    GetCustomModelResult& AddHyperParameters(HyperParametersKeyT&& key, HyperParametersValueT&& value) {
      m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::forward<HyperParametersKeyT>(key), std::forward<HyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Contains information about the training dataset.</p>
     */
    inline const TrainingDataConfig& GetTrainingDataConfig() const { return m_trainingDataConfig; }
    template<typename TrainingDataConfigT = TrainingDataConfig>
    void SetTrainingDataConfig(TrainingDataConfigT&& value) { m_trainingDataConfigHasBeenSet = true; m_trainingDataConfig = std::forward<TrainingDataConfigT>(value); }
    template<typename TrainingDataConfigT = TrainingDataConfig>
    GetCustomModelResult& WithTrainingDataConfig(TrainingDataConfigT&& value) { SetTrainingDataConfig(std::forward<TrainingDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the validation dataset.</p>
     */
    inline const ValidationDataConfig& GetValidationDataConfig() const { return m_validationDataConfig; }
    template<typename ValidationDataConfigT = ValidationDataConfig>
    void SetValidationDataConfig(ValidationDataConfigT&& value) { m_validationDataConfigHasBeenSet = true; m_validationDataConfig = std::forward<ValidationDataConfigT>(value); }
    template<typename ValidationDataConfigT = ValidationDataConfig>
    GetCustomModelResult& WithValidationDataConfig(ValidationDataConfigT&& value) { SetValidationDataConfig(std::forward<ValidationDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output data configuration associated with this custom model.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    GetCustomModelResult& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains training metrics from the job creation.</p>
     */
    inline const TrainingMetrics& GetTrainingMetrics() const { return m_trainingMetrics; }
    template<typename TrainingMetricsT = TrainingMetrics>
    void SetTrainingMetrics(TrainingMetricsT&& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics = std::forward<TrainingMetricsT>(value); }
    template<typename TrainingMetricsT = TrainingMetrics>
    GetCustomModelResult& WithTrainingMetrics(TrainingMetricsT&& value) { SetTrainingMetrics(std::forward<TrainingMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation metrics from the job creation.</p>
     */
    inline const Aws::Vector<ValidatorMetric>& GetValidationMetrics() const { return m_validationMetrics; }
    template<typename ValidationMetricsT = Aws::Vector<ValidatorMetric>>
    void SetValidationMetrics(ValidationMetricsT&& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics = std::forward<ValidationMetricsT>(value); }
    template<typename ValidationMetricsT = Aws::Vector<ValidatorMetric>>
    GetCustomModelResult& WithValidationMetrics(ValidationMetricsT&& value) { SetValidationMetrics(std::forward<ValidationMetricsT>(value)); return *this;}
    template<typename ValidationMetricsT = ValidatorMetric>
    GetCustomModelResult& AddValidationMetrics(ValidationMetricsT&& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics.emplace_back(std::forward<ValidationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Creation time of the model.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetCustomModelResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customization configuration for the custom model.</p>
     */
    inline const CustomizationConfig& GetCustomizationConfig() const { return m_customizationConfig; }
    template<typename CustomizationConfigT = CustomizationConfig>
    void SetCustomizationConfig(CustomizationConfigT&& value) { m_customizationConfigHasBeenSet = true; m_customizationConfig = std::forward<CustomizationConfigT>(value); }
    template<typename CustomizationConfigT = CustomizationConfig>
    GetCustomModelResult& WithCustomizationConfig(CustomizationConfigT&& value) { SetCustomizationConfig(std::forward<CustomizationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the custom model. Possible values include:</p> <ul>
     * <li> <p> <code>Creating</code> - The model is being created and validated.</p>
     * </li> <li> <p> <code>Active</code> - The model has been successfully created and
     * is ready for use.</p> </li> <li> <p> <code>Failed</code> - The model creation
     * process failed. Check the <code>failureMessage</code> field for details.</p>
     * </li> </ul>
     */
    inline ModelStatus GetModelStatus() const { return m_modelStatus; }
    inline void SetModelStatus(ModelStatus value) { m_modelStatusHasBeenSet = true; m_modelStatus = value; }
    inline GetCustomModelResult& WithModelStatus(ModelStatus value) { SetModelStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A failure message for any issues that occurred when creating the custom
     * model. This is included for only a failed CreateCustomModel operation.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    GetCustomModelResult& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCustomModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_baseModelArn;
    bool m_baseModelArnHasBeenSet = false;

    CustomizationType m_customizationType{CustomizationType::NOT_SET};
    bool m_customizationTypeHasBeenSet = false;

    Aws::String m_modelKmsKeyArn;
    bool m_modelKmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet = false;

    TrainingDataConfig m_trainingDataConfig;
    bool m_trainingDataConfigHasBeenSet = false;

    ValidationDataConfig m_validationDataConfig;
    bool m_validationDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    TrainingMetrics m_trainingMetrics;
    bool m_trainingMetricsHasBeenSet = false;

    Aws::Vector<ValidatorMetric> m_validationMetrics;
    bool m_validationMetricsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    CustomizationConfig m_customizationConfig;
    bool m_customizationConfigHasBeenSet = false;

    ModelStatus m_modelStatus{ModelStatus::NOT_SET};
    bool m_modelStatusHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
