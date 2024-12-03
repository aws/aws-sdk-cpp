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
    AWS_BEDROCK_API GetCustomModelResult();
    AWS_BEDROCK_API GetCustomModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetCustomModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) associated with this model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }
    inline GetCustomModelResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline GetCustomModelResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline GetCustomModelResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model name associated with this model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelName.assign(value); }
    inline GetCustomModelResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline GetCustomModelResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline GetCustomModelResult& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job name associated with this model.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline GetCustomModelResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline GetCustomModelResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline GetCustomModelResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job Amazon Resource Name (ARN) associated with this model.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline GetCustomModelResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline GetCustomModelResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline GetCustomModelResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the base model.</p>
     */
    inline const Aws::String& GetBaseModelArn() const{ return m_baseModelArn; }
    inline void SetBaseModelArn(const Aws::String& value) { m_baseModelArn = value; }
    inline void SetBaseModelArn(Aws::String&& value) { m_baseModelArn = std::move(value); }
    inline void SetBaseModelArn(const char* value) { m_baseModelArn.assign(value); }
    inline GetCustomModelResult& WithBaseModelArn(const Aws::String& value) { SetBaseModelArn(value); return *this;}
    inline GetCustomModelResult& WithBaseModelArn(Aws::String&& value) { SetBaseModelArn(std::move(value)); return *this;}
    inline GetCustomModelResult& WithBaseModelArn(const char* value) { SetBaseModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of model customization.</p>
     */
    inline const CustomizationType& GetCustomizationType() const{ return m_customizationType; }
    inline void SetCustomizationType(const CustomizationType& value) { m_customizationType = value; }
    inline void SetCustomizationType(CustomizationType&& value) { m_customizationType = std::move(value); }
    inline GetCustomModelResult& WithCustomizationType(const CustomizationType& value) { SetCustomizationType(value); return *this;}
    inline GetCustomModelResult& WithCustomizationType(CustomizationType&& value) { SetCustomizationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetModelKmsKeyArn() const{ return m_modelKmsKeyArn; }
    inline void SetModelKmsKeyArn(const Aws::String& value) { m_modelKmsKeyArn = value; }
    inline void SetModelKmsKeyArn(Aws::String&& value) { m_modelKmsKeyArn = std::move(value); }
    inline void SetModelKmsKeyArn(const char* value) { m_modelKmsKeyArn.assign(value); }
    inline GetCustomModelResult& WithModelKmsKeyArn(const Aws::String& value) { SetModelKmsKeyArn(value); return *this;}
    inline GetCustomModelResult& WithModelKmsKeyArn(Aws::String&& value) { SetModelKmsKeyArn(std::move(value)); return *this;}
    inline GetCustomModelResult& WithModelKmsKeyArn(const char* value) { SetModelKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hyperparameter values associated with this model. For details on the format
     * for different models, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models-hp.html">Custom
     * model hyperparameters</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParameters = value; }
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParameters = std::move(value); }
    inline GetCustomModelResult& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}
    inline GetCustomModelResult& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}
    inline GetCustomModelResult& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParameters.emplace(key, value); return *this; }
    inline GetCustomModelResult& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParameters.emplace(std::move(key), value); return *this; }
    inline GetCustomModelResult& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParameters.emplace(key, std::move(value)); return *this; }
    inline GetCustomModelResult& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline GetCustomModelResult& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParameters.emplace(key, std::move(value)); return *this; }
    inline GetCustomModelResult& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParameters.emplace(std::move(key), value); return *this; }
    inline GetCustomModelResult& AddHyperParameters(const char* key, const char* value) { m_hyperParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the training dataset.</p>
     */
    inline const TrainingDataConfig& GetTrainingDataConfig() const{ return m_trainingDataConfig; }
    inline void SetTrainingDataConfig(const TrainingDataConfig& value) { m_trainingDataConfig = value; }
    inline void SetTrainingDataConfig(TrainingDataConfig&& value) { m_trainingDataConfig = std::move(value); }
    inline GetCustomModelResult& WithTrainingDataConfig(const TrainingDataConfig& value) { SetTrainingDataConfig(value); return *this;}
    inline GetCustomModelResult& WithTrainingDataConfig(TrainingDataConfig&& value) { SetTrainingDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the validation dataset.</p>
     */
    inline const ValidationDataConfig& GetValidationDataConfig() const{ return m_validationDataConfig; }
    inline void SetValidationDataConfig(const ValidationDataConfig& value) { m_validationDataConfig = value; }
    inline void SetValidationDataConfig(ValidationDataConfig&& value) { m_validationDataConfig = std::move(value); }
    inline GetCustomModelResult& WithValidationDataConfig(const ValidationDataConfig& value) { SetValidationDataConfig(value); return *this;}
    inline GetCustomModelResult& WithValidationDataConfig(ValidationDataConfig&& value) { SetValidationDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output data configuration associated with this custom model.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfig = value; }
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfig = std::move(value); }
    inline GetCustomModelResult& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline GetCustomModelResult& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains training metrics from the job creation.</p>
     */
    inline const TrainingMetrics& GetTrainingMetrics() const{ return m_trainingMetrics; }
    inline void SetTrainingMetrics(const TrainingMetrics& value) { m_trainingMetrics = value; }
    inline void SetTrainingMetrics(TrainingMetrics&& value) { m_trainingMetrics = std::move(value); }
    inline GetCustomModelResult& WithTrainingMetrics(const TrainingMetrics& value) { SetTrainingMetrics(value); return *this;}
    inline GetCustomModelResult& WithTrainingMetrics(TrainingMetrics&& value) { SetTrainingMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation metrics from the job creation.</p>
     */
    inline const Aws::Vector<ValidatorMetric>& GetValidationMetrics() const{ return m_validationMetrics; }
    inline void SetValidationMetrics(const Aws::Vector<ValidatorMetric>& value) { m_validationMetrics = value; }
    inline void SetValidationMetrics(Aws::Vector<ValidatorMetric>&& value) { m_validationMetrics = std::move(value); }
    inline GetCustomModelResult& WithValidationMetrics(const Aws::Vector<ValidatorMetric>& value) { SetValidationMetrics(value); return *this;}
    inline GetCustomModelResult& WithValidationMetrics(Aws::Vector<ValidatorMetric>&& value) { SetValidationMetrics(std::move(value)); return *this;}
    inline GetCustomModelResult& AddValidationMetrics(const ValidatorMetric& value) { m_validationMetrics.push_back(value); return *this; }
    inline GetCustomModelResult& AddValidationMetrics(ValidatorMetric&& value) { m_validationMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Creation time of the model.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetCustomModelResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetCustomModelResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customization configuration for the custom model.</p>
     */
    inline const CustomizationConfig& GetCustomizationConfig() const{ return m_customizationConfig; }
    inline void SetCustomizationConfig(const CustomizationConfig& value) { m_customizationConfig = value; }
    inline void SetCustomizationConfig(CustomizationConfig&& value) { m_customizationConfig = std::move(value); }
    inline GetCustomModelResult& WithCustomizationConfig(const CustomizationConfig& value) { SetCustomizationConfig(value); return *this;}
    inline GetCustomModelResult& WithCustomizationConfig(CustomizationConfig&& value) { SetCustomizationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCustomModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCustomModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCustomModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;

    Aws::String m_modelName;

    Aws::String m_jobName;

    Aws::String m_jobArn;

    Aws::String m_baseModelArn;

    CustomizationType m_customizationType;

    Aws::String m_modelKmsKeyArn;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;

    TrainingDataConfig m_trainingDataConfig;

    ValidationDataConfig m_validationDataConfig;

    OutputDataConfig m_outputDataConfig;

    TrainingMetrics m_trainingMetrics;

    Aws::Vector<ValidatorMetric> m_validationMetrics;

    Aws::Utils::DateTime m_creationTime;

    CustomizationConfig m_customizationConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
