/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelCustomizationJobStatus.h>
#include <aws/bedrock/model/StatusDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock/model/TrainingDataConfig.h>
#include <aws/bedrock/model/ValidationDataConfig.h>
#include <aws/bedrock/model/OutputDataConfig.h>
#include <aws/bedrock/model/CustomizationType.h>
#include <aws/bedrock/model/TrainingMetrics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/VpcConfig.h>
#include <aws/bedrock/model/CustomizationConfig.h>
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
  class GetModelCustomizationJobResult
  {
  public:
    AWS_BEDROCK_API GetModelCustomizationJobResult() = default;
    AWS_BEDROCK_API GetModelCustomizationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetModelCustomizationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customization job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetModelCustomizationJobResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the customization job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    GetModelCustomizationJobResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the output model.</p>
     */
    inline const Aws::String& GetOutputModelName() const { return m_outputModelName; }
    template<typename OutputModelNameT = Aws::String>
    void SetOutputModelName(OutputModelNameT&& value) { m_outputModelNameHasBeenSet = true; m_outputModelName = std::forward<OutputModelNameT>(value); }
    template<typename OutputModelNameT = Aws::String>
    GetModelCustomizationJobResult& WithOutputModelName(OutputModelNameT&& value) { SetOutputModelName(std::forward<OutputModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the output model.</p>
     */
    inline const Aws::String& GetOutputModelArn() const { return m_outputModelArn; }
    template<typename OutputModelArnT = Aws::String>
    void SetOutputModelArn(OutputModelArnT&& value) { m_outputModelArnHasBeenSet = true; m_outputModelArn = std::forward<OutputModelArnT>(value); }
    template<typename OutputModelArnT = Aws::String>
    GetModelCustomizationJobResult& WithOutputModelArn(OutputModelArnT&& value) { SetOutputModelArn(std::forward<OutputModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that you specified in the <code>CreateCustomizationJob</code>
     * request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    GetModelCustomizationJobResult& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetModelCustomizationJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job. A successful job transitions from in-progress to
     * completed when the output model is ready to use. If the job failed, the failure
     * message contains information about why the job failed.</p>
     */
    inline ModelCustomizationJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(ModelCustomizationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetModelCustomizationJobResult& WithStatus(ModelCustomizationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a Distillation job, the details about the statuses of the sub-tasks of
     * the customization job. </p>
     */
    inline const StatusDetails& GetStatusDetails() const { return m_statusDetails; }
    template<typename StatusDetailsT = StatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = StatusDetails>
    GetModelCustomizationJobResult& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why the job failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    GetModelCustomizationJobResult& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time that the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetModelCustomizationJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time that the resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    GetModelCustomizationJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time that the resource transitioned to terminal state.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetModelCustomizationJobResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the base model.</p>
     */
    inline const Aws::String& GetBaseModelArn() const { return m_baseModelArn; }
    template<typename BaseModelArnT = Aws::String>
    void SetBaseModelArn(BaseModelArnT&& value) { m_baseModelArnHasBeenSet = true; m_baseModelArn = std::forward<BaseModelArnT>(value); }
    template<typename BaseModelArnT = Aws::String>
    GetModelCustomizationJobResult& WithBaseModelArn(BaseModelArnT&& value) { SetBaseModelArn(std::forward<BaseModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameter values for the job. For details on the format for
     * different models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models-hp.html">Custom
     * model hyperparameters</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const { return m_hyperParameters; }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperParameters(HyperParametersT&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::forward<HyperParametersT>(value); }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    GetModelCustomizationJobResult& WithHyperParameters(HyperParametersT&& value) { SetHyperParameters(std::forward<HyperParametersT>(value)); return *this;}
    template<typename HyperParametersKeyT = Aws::String, typename HyperParametersValueT = Aws::String>
    GetModelCustomizationJobResult& AddHyperParameters(HyperParametersKeyT&& key, HyperParametersValueT&& value) {
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
    GetModelCustomizationJobResult& WithTrainingDataConfig(TrainingDataConfigT&& value) { SetTrainingDataConfig(std::forward<TrainingDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the validation dataset.</p>
     */
    inline const ValidationDataConfig& GetValidationDataConfig() const { return m_validationDataConfig; }
    template<typename ValidationDataConfigT = ValidationDataConfig>
    void SetValidationDataConfig(ValidationDataConfigT&& value) { m_validationDataConfigHasBeenSet = true; m_validationDataConfig = std::forward<ValidationDataConfigT>(value); }
    template<typename ValidationDataConfigT = ValidationDataConfig>
    GetModelCustomizationJobResult& WithValidationDataConfig(ValidationDataConfigT&& value) { SetValidationDataConfig(std::forward<ValidationDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output data configuration </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    GetModelCustomizationJobResult& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of model customization.</p>
     */
    inline CustomizationType GetCustomizationType() const { return m_customizationType; }
    inline void SetCustomizationType(CustomizationType value) { m_customizationTypeHasBeenSet = true; m_customizationType = value; }
    inline GetModelCustomizationJobResult& WithCustomizationType(CustomizationType value) { SetCustomizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetOutputModelKmsKeyArn() const { return m_outputModelKmsKeyArn; }
    template<typename OutputModelKmsKeyArnT = Aws::String>
    void SetOutputModelKmsKeyArn(OutputModelKmsKeyArnT&& value) { m_outputModelKmsKeyArnHasBeenSet = true; m_outputModelKmsKeyArn = std::forward<OutputModelKmsKeyArnT>(value); }
    template<typename OutputModelKmsKeyArnT = Aws::String>
    GetModelCustomizationJobResult& WithOutputModelKmsKeyArn(OutputModelKmsKeyArnT&& value) { SetOutputModelKmsKeyArn(std::forward<OutputModelKmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains training metrics from the job creation.</p>
     */
    inline const TrainingMetrics& GetTrainingMetrics() const { return m_trainingMetrics; }
    template<typename TrainingMetricsT = TrainingMetrics>
    void SetTrainingMetrics(TrainingMetricsT&& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics = std::forward<TrainingMetricsT>(value); }
    template<typename TrainingMetricsT = TrainingMetrics>
    GetModelCustomizationJobResult& WithTrainingMetrics(TrainingMetricsT&& value) { SetTrainingMetrics(std::forward<TrainingMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The loss metric for each validator that you provided in the createjob
     * request.</p>
     */
    inline const Aws::Vector<ValidatorMetric>& GetValidationMetrics() const { return m_validationMetrics; }
    template<typename ValidationMetricsT = Aws::Vector<ValidatorMetric>>
    void SetValidationMetrics(ValidationMetricsT&& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics = std::forward<ValidationMetricsT>(value); }
    template<typename ValidationMetricsT = Aws::Vector<ValidatorMetric>>
    GetModelCustomizationJobResult& WithValidationMetrics(ValidationMetricsT&& value) { SetValidationMetrics(std::forward<ValidationMetricsT>(value)); return *this;}
    template<typename ValidationMetricsT = ValidatorMetric>
    GetModelCustomizationJobResult& AddValidationMetrics(ValidationMetricsT&& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics.emplace_back(std::forward<ValidationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>VPC configuration for the custom model job.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    GetModelCustomizationJobResult& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customization configuration for the model customization job.</p>
     */
    inline const CustomizationConfig& GetCustomizationConfig() const { return m_customizationConfig; }
    template<typename CustomizationConfigT = CustomizationConfig>
    void SetCustomizationConfig(CustomizationConfigT&& value) { m_customizationConfigHasBeenSet = true; m_customizationConfig = std::forward<CustomizationConfigT>(value); }
    template<typename CustomizationConfigT = CustomizationConfig>
    GetModelCustomizationJobResult& WithCustomizationConfig(CustomizationConfigT&& value) { SetCustomizationConfig(std::forward<CustomizationConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetModelCustomizationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_outputModelName;
    bool m_outputModelNameHasBeenSet = false;

    Aws::String m_outputModelArn;
    bool m_outputModelArnHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ModelCustomizationJobStatus m_status{ModelCustomizationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_baseModelArn;
    bool m_baseModelArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet = false;

    TrainingDataConfig m_trainingDataConfig;
    bool m_trainingDataConfigHasBeenSet = false;

    ValidationDataConfig m_validationDataConfig;
    bool m_validationDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    CustomizationType m_customizationType{CustomizationType::NOT_SET};
    bool m_customizationTypeHasBeenSet = false;

    Aws::String m_outputModelKmsKeyArn;
    bool m_outputModelKmsKeyArnHasBeenSet = false;

    TrainingMetrics m_trainingMetrics;
    bool m_trainingMetricsHasBeenSet = false;

    Aws::Vector<ValidatorMetric> m_validationMetrics;
    bool m_validationMetricsHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    CustomizationConfig m_customizationConfig;
    bool m_customizationConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
