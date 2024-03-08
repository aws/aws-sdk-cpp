/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelCustomizationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock/model/TrainingDataConfig.h>
#include <aws/bedrock/model/ValidationDataConfig.h>
#include <aws/bedrock/model/OutputDataConfig.h>
#include <aws/bedrock/model/CustomizationType.h>
#include <aws/bedrock/model/TrainingMetrics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/VpcConfig.h>
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
    AWS_BEDROCK_API GetModelCustomizationJobResult();
    AWS_BEDROCK_API GetModelCustomizationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetModelCustomizationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the customization job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The ARN of the customization job.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }

    /**
     * <p>The ARN of the customization job.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }

    /**
     * <p>The ARN of the customization job.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }

    /**
     * <p>The ARN of the customization job.</p>
     */
    inline GetModelCustomizationJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The ARN of the customization job.</p>
     */
    inline GetModelCustomizationJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the customization job.</p>
     */
    inline GetModelCustomizationJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The name of the customization job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the customization job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The name of the customization job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The name of the customization job.</p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The name of the customization job.</p>
     */
    inline GetModelCustomizationJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the customization job.</p>
     */
    inline GetModelCustomizationJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the customization job.</p>
     */
    inline GetModelCustomizationJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The name of the output model.</p>
     */
    inline const Aws::String& GetOutputModelName() const{ return m_outputModelName; }

    /**
     * <p>The name of the output model.</p>
     */
    inline void SetOutputModelName(const Aws::String& value) { m_outputModelName = value; }

    /**
     * <p>The name of the output model.</p>
     */
    inline void SetOutputModelName(Aws::String&& value) { m_outputModelName = std::move(value); }

    /**
     * <p>The name of the output model.</p>
     */
    inline void SetOutputModelName(const char* value) { m_outputModelName.assign(value); }

    /**
     * <p>The name of the output model.</p>
     */
    inline GetModelCustomizationJobResult& WithOutputModelName(const Aws::String& value) { SetOutputModelName(value); return *this;}

    /**
     * <p>The name of the output model.</p>
     */
    inline GetModelCustomizationJobResult& WithOutputModelName(Aws::String&& value) { SetOutputModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the output model.</p>
     */
    inline GetModelCustomizationJobResult& WithOutputModelName(const char* value) { SetOutputModelName(value); return *this;}


    /**
     * <p>The ARN of the output model.</p>
     */
    inline const Aws::String& GetOutputModelArn() const{ return m_outputModelArn; }

    /**
     * <p>The ARN of the output model.</p>
     */
    inline void SetOutputModelArn(const Aws::String& value) { m_outputModelArn = value; }

    /**
     * <p>The ARN of the output model.</p>
     */
    inline void SetOutputModelArn(Aws::String&& value) { m_outputModelArn = std::move(value); }

    /**
     * <p>The ARN of the output model.</p>
     */
    inline void SetOutputModelArn(const char* value) { m_outputModelArn.assign(value); }

    /**
     * <p>The ARN of the output model.</p>
     */
    inline GetModelCustomizationJobResult& WithOutputModelArn(const Aws::String& value) { SetOutputModelArn(value); return *this;}

    /**
     * <p>The ARN of the output model.</p>
     */
    inline GetModelCustomizationJobResult& WithOutputModelArn(Aws::String&& value) { SetOutputModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the output model.</p>
     */
    inline GetModelCustomizationJobResult& WithOutputModelArn(const char* value) { SetOutputModelArn(value); return *this;}


    /**
     * <p>The token that you specified in the CreateCustomizationJob request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The token that you specified in the CreateCustomizationJob request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }

    /**
     * <p>The token that you specified in the CreateCustomizationJob request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }

    /**
     * <p>The token that you specified in the CreateCustomizationJob request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }

    /**
     * <p>The token that you specified in the CreateCustomizationJob request.</p>
     */
    inline GetModelCustomizationJobResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The token that you specified in the CreateCustomizationJob request.</p>
     */
    inline GetModelCustomizationJobResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The token that you specified in the CreateCustomizationJob request.</p>
     */
    inline GetModelCustomizationJobResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline GetModelCustomizationJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline GetModelCustomizationJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline GetModelCustomizationJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the job. A successful job transitions from in-progress to
     * completed when the output model is ready to use. If the job failed, the failure
     * message contains information about why the job failed.</p>
     */
    inline const ModelCustomizationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job. A successful job transitions from in-progress to
     * completed when the output model is ready to use. If the job failed, the failure
     * message contains information about why the job failed.</p>
     */
    inline void SetStatus(const ModelCustomizationJobStatus& value) { m_status = value; }

    /**
     * <p>The status of the job. A successful job transitions from in-progress to
     * completed when the output model is ready to use. If the job failed, the failure
     * message contains information about why the job failed.</p>
     */
    inline void SetStatus(ModelCustomizationJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the job. A successful job transitions from in-progress to
     * completed when the output model is ready to use. If the job failed, the failure
     * message contains information about why the job failed.</p>
     */
    inline GetModelCustomizationJobResult& WithStatus(const ModelCustomizationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job. A successful job transitions from in-progress to
     * completed when the output model is ready to use. If the job failed, the failure
     * message contains information about why the job failed.</p>
     */
    inline GetModelCustomizationJobResult& WithStatus(ModelCustomizationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Information about why the job failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>Information about why the job failed.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }

    /**
     * <p>Information about why the job failed.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }

    /**
     * <p>Information about why the job failed.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }

    /**
     * <p>Information about why the job failed.</p>
     */
    inline GetModelCustomizationJobResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>Information about why the job failed.</p>
     */
    inline GetModelCustomizationJobResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>Information about why the job failed.</p>
     */
    inline GetModelCustomizationJobResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>Time that the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time that the resource was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>Time that the resource was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>Time that the resource was created.</p>
     */
    inline GetModelCustomizationJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time that the resource was created.</p>
     */
    inline GetModelCustomizationJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Time that the resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>Time that the resource was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>Time that the resource was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>Time that the resource was last modified.</p>
     */
    inline GetModelCustomizationJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>Time that the resource was last modified.</p>
     */
    inline GetModelCustomizationJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>Time that the resource transitioned to terminal state.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Time that the resource transitioned to terminal state.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>Time that the resource transitioned to terminal state.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>Time that the resource transitioned to terminal state.</p>
     */
    inline GetModelCustomizationJobResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Time that the resource transitioned to terminal state.</p>
     */
    inline GetModelCustomizationJobResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>ARN of the base model.</p>
     */
    inline const Aws::String& GetBaseModelArn() const{ return m_baseModelArn; }

    /**
     * <p>ARN of the base model.</p>
     */
    inline void SetBaseModelArn(const Aws::String& value) { m_baseModelArn = value; }

    /**
     * <p>ARN of the base model.</p>
     */
    inline void SetBaseModelArn(Aws::String&& value) { m_baseModelArn = std::move(value); }

    /**
     * <p>ARN of the base model.</p>
     */
    inline void SetBaseModelArn(const char* value) { m_baseModelArn.assign(value); }

    /**
     * <p>ARN of the base model.</p>
     */
    inline GetModelCustomizationJobResult& WithBaseModelArn(const Aws::String& value) { SetBaseModelArn(value); return *this;}

    /**
     * <p>ARN of the base model.</p>
     */
    inline GetModelCustomizationJobResult& WithBaseModelArn(Aws::String&& value) { SetBaseModelArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the base model.</p>
     */
    inline GetModelCustomizationJobResult& WithBaseModelArn(const char* value) { SetBaseModelArn(value); return *this;}


    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParameters = value; }

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParameters = std::move(value); }

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline GetModelCustomizationJobResult& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline GetModelCustomizationJobResult& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline GetModelCustomizationJobResult& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParameters.emplace(key, value); return *this; }

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline GetModelCustomizationJobResult& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline GetModelCustomizationJobResult& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline GetModelCustomizationJobResult& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline GetModelCustomizationJobResult& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline GetModelCustomizationJobResult& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The hyperparameter values for the job. For information about hyperparameters
     * for specific models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-guidelines.html">Guidelines
     * for model customization</a>.</p>
     */
    inline GetModelCustomizationJobResult& AddHyperParameters(const char* key, const char* value) { m_hyperParameters.emplace(key, value); return *this; }


    
    inline const TrainingDataConfig& GetTrainingDataConfig() const{ return m_trainingDataConfig; }

    
    inline void SetTrainingDataConfig(const TrainingDataConfig& value) { m_trainingDataConfig = value; }

    
    inline void SetTrainingDataConfig(TrainingDataConfig&& value) { m_trainingDataConfig = std::move(value); }

    
    inline GetModelCustomizationJobResult& WithTrainingDataConfig(const TrainingDataConfig& value) { SetTrainingDataConfig(value); return *this;}

    
    inline GetModelCustomizationJobResult& WithTrainingDataConfig(TrainingDataConfig&& value) { SetTrainingDataConfig(std::move(value)); return *this;}


    
    inline const ValidationDataConfig& GetValidationDataConfig() const{ return m_validationDataConfig; }

    
    inline void SetValidationDataConfig(const ValidationDataConfig& value) { m_validationDataConfig = value; }

    
    inline void SetValidationDataConfig(ValidationDataConfig&& value) { m_validationDataConfig = std::move(value); }

    
    inline GetModelCustomizationJobResult& WithValidationDataConfig(const ValidationDataConfig& value) { SetValidationDataConfig(value); return *this;}

    
    inline GetModelCustomizationJobResult& WithValidationDataConfig(ValidationDataConfig&& value) { SetValidationDataConfig(std::move(value)); return *this;}


    /**
     * <p>Output data configuration </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Output data configuration </p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfig = value; }

    /**
     * <p>Output data configuration </p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfig = std::move(value); }

    /**
     * <p>Output data configuration </p>
     */
    inline GetModelCustomizationJobResult& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Output data configuration </p>
     */
    inline GetModelCustomizationJobResult& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The type of model customization.</p>
     */
    inline const CustomizationType& GetCustomizationType() const{ return m_customizationType; }

    /**
     * <p>The type of model customization.</p>
     */
    inline void SetCustomizationType(const CustomizationType& value) { m_customizationType = value; }

    /**
     * <p>The type of model customization.</p>
     */
    inline void SetCustomizationType(CustomizationType&& value) { m_customizationType = std::move(value); }

    /**
     * <p>The type of model customization.</p>
     */
    inline GetModelCustomizationJobResult& WithCustomizationType(const CustomizationType& value) { SetCustomizationType(value); return *this;}

    /**
     * <p>The type of model customization.</p>
     */
    inline GetModelCustomizationJobResult& WithCustomizationType(CustomizationType&& value) { SetCustomizationType(std::move(value)); return *this;}


    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetOutputModelKmsKeyArn() const{ return m_outputModelKmsKeyArn; }

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline void SetOutputModelKmsKeyArn(const Aws::String& value) { m_outputModelKmsKeyArn = value; }

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline void SetOutputModelKmsKeyArn(Aws::String&& value) { m_outputModelKmsKeyArn = std::move(value); }

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline void SetOutputModelKmsKeyArn(const char* value) { m_outputModelKmsKeyArn.assign(value); }

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline GetModelCustomizationJobResult& WithOutputModelKmsKeyArn(const Aws::String& value) { SetOutputModelKmsKeyArn(value); return *this;}

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline GetModelCustomizationJobResult& WithOutputModelKmsKeyArn(Aws::String&& value) { SetOutputModelKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline GetModelCustomizationJobResult& WithOutputModelKmsKeyArn(const char* value) { SetOutputModelKmsKeyArn(value); return *this;}


    
    inline const TrainingMetrics& GetTrainingMetrics() const{ return m_trainingMetrics; }

    
    inline void SetTrainingMetrics(const TrainingMetrics& value) { m_trainingMetrics = value; }

    
    inline void SetTrainingMetrics(TrainingMetrics&& value) { m_trainingMetrics = std::move(value); }

    
    inline GetModelCustomizationJobResult& WithTrainingMetrics(const TrainingMetrics& value) { SetTrainingMetrics(value); return *this;}

    
    inline GetModelCustomizationJobResult& WithTrainingMetrics(TrainingMetrics&& value) { SetTrainingMetrics(std::move(value)); return *this;}


    /**
     * <p>The loss metric for each validator that you provided in the createjob
     * request.</p>
     */
    inline const Aws::Vector<ValidatorMetric>& GetValidationMetrics() const{ return m_validationMetrics; }

    /**
     * <p>The loss metric for each validator that you provided in the createjob
     * request.</p>
     */
    inline void SetValidationMetrics(const Aws::Vector<ValidatorMetric>& value) { m_validationMetrics = value; }

    /**
     * <p>The loss metric for each validator that you provided in the createjob
     * request.</p>
     */
    inline void SetValidationMetrics(Aws::Vector<ValidatorMetric>&& value) { m_validationMetrics = std::move(value); }

    /**
     * <p>The loss metric for each validator that you provided in the createjob
     * request.</p>
     */
    inline GetModelCustomizationJobResult& WithValidationMetrics(const Aws::Vector<ValidatorMetric>& value) { SetValidationMetrics(value); return *this;}

    /**
     * <p>The loss metric for each validator that you provided in the createjob
     * request.</p>
     */
    inline GetModelCustomizationJobResult& WithValidationMetrics(Aws::Vector<ValidatorMetric>&& value) { SetValidationMetrics(std::move(value)); return *this;}

    /**
     * <p>The loss metric for each validator that you provided in the createjob
     * request.</p>
     */
    inline GetModelCustomizationJobResult& AddValidationMetrics(const ValidatorMetric& value) { m_validationMetrics.push_back(value); return *this; }

    /**
     * <p>The loss metric for each validator that you provided in the createjob
     * request.</p>
     */
    inline GetModelCustomizationJobResult& AddValidationMetrics(ValidatorMetric&& value) { m_validationMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>VPC configuration for the custom model job.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>VPC configuration for the custom model job.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfig = value; }

    /**
     * <p>VPC configuration for the custom model job.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfig = std::move(value); }

    /**
     * <p>VPC configuration for the custom model job.</p>
     */
    inline GetModelCustomizationJobResult& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>VPC configuration for the custom model job.</p>
     */
    inline GetModelCustomizationJobResult& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetModelCustomizationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetModelCustomizationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetModelCustomizationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_jobArn;

    Aws::String m_jobName;

    Aws::String m_outputModelName;

    Aws::String m_outputModelArn;

    Aws::String m_clientRequestToken;

    Aws::String m_roleArn;

    ModelCustomizationJobStatus m_status;

    Aws::String m_failureMessage;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_endTime;

    Aws::String m_baseModelArn;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;

    TrainingDataConfig m_trainingDataConfig;

    ValidationDataConfig m_validationDataConfig;

    OutputDataConfig m_outputDataConfig;

    CustomizationType m_customizationType;

    Aws::String m_outputModelKmsKeyArn;

    TrainingMetrics m_trainingMetrics;

    Aws::Vector<ValidatorMetric> m_validationMetrics;

    VpcConfig m_vpcConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
