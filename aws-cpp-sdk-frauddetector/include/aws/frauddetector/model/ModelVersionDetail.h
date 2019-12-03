/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelTypeEnum.h>
#include <aws/frauddetector/model/TrainingDataSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/LabelSchema.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/frauddetector/model/ModelVariable.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>Provides the model version details. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelVersionDetail">AWS
   * API Reference</a></p>
   */
  class AWS_FRAUDDETECTOR_API ModelVersionDetail
  {
  public:
    ModelVersionDetail();
    ModelVersionDetail(Aws::Utils::Json::JsonView jsonValue);
    ModelVersionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The model ID.</p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>The model ID.</p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>The model ID.</p>
     */
    inline ModelVersionDetail& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline ModelVersionDetail& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline ModelVersionDetail& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The model type.</p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }

    /**
     * <p>The model type.</p>
     */
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }

    /**
     * <p>The model type.</p>
     */
    inline void SetModelType(const ModelTypeEnum& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }

    /**
     * <p>The model type.</p>
     */
    inline void SetModelType(ModelTypeEnum&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }

    /**
     * <p>The model type.</p>
     */
    inline ModelVersionDetail& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type.</p>
     */
    inline ModelVersionDetail& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>The model version.</p>
     */
    inline const Aws::String& GetModelVersionNumber() const{ return m_modelVersionNumber; }

    /**
     * <p>The model version.</p>
     */
    inline bool ModelVersionNumberHasBeenSet() const { return m_modelVersionNumberHasBeenSet; }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersionNumber(const Aws::String& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = value; }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersionNumber(Aws::String&& value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber = std::move(value); }

    /**
     * <p>The model version.</p>
     */
    inline void SetModelVersionNumber(const char* value) { m_modelVersionNumberHasBeenSet = true; m_modelVersionNumber.assign(value); }

    /**
     * <p>The model version.</p>
     */
    inline ModelVersionDetail& WithModelVersionNumber(const Aws::String& value) { SetModelVersionNumber(value); return *this;}

    /**
     * <p>The model version.</p>
     */
    inline ModelVersionDetail& WithModelVersionNumber(Aws::String&& value) { SetModelVersionNumber(std::move(value)); return *this;}

    /**
     * <p>The model version.</p>
     */
    inline ModelVersionDetail& WithModelVersionNumber(const char* value) { SetModelVersionNumber(value); return *this;}


    /**
     * <p>The model description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The model description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The model description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The model description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The model description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The model description.</p>
     */
    inline ModelVersionDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The model description.</p>
     */
    inline ModelVersionDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The model description.</p>
     */
    inline ModelVersionDetail& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The model status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The model status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The model status.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The model status.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The model status.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The model status.</p>
     */
    inline ModelVersionDetail& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The model status.</p>
     */
    inline ModelVersionDetail& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The model status.</p>
     */
    inline ModelVersionDetail& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The model training data source.</p>
     */
    inline const TrainingDataSource& GetTrainingDataSource() const{ return m_trainingDataSource; }

    /**
     * <p>The model training data source.</p>
     */
    inline bool TrainingDataSourceHasBeenSet() const { return m_trainingDataSourceHasBeenSet; }

    /**
     * <p>The model training data source.</p>
     */
    inline void SetTrainingDataSource(const TrainingDataSource& value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = value; }

    /**
     * <p>The model training data source.</p>
     */
    inline void SetTrainingDataSource(TrainingDataSource&& value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = std::move(value); }

    /**
     * <p>The model training data source.</p>
     */
    inline ModelVersionDetail& WithTrainingDataSource(const TrainingDataSource& value) { SetTrainingDataSource(value); return *this;}

    /**
     * <p>The model training data source.</p>
     */
    inline ModelVersionDetail& WithTrainingDataSource(TrainingDataSource&& value) { SetTrainingDataSource(std::move(value)); return *this;}


    /**
     * <p>The model variables.</p>
     */
    inline const Aws::Vector<ModelVariable>& GetModelVariables() const{ return m_modelVariables; }

    /**
     * <p>The model variables.</p>
     */
    inline bool ModelVariablesHasBeenSet() const { return m_modelVariablesHasBeenSet; }

    /**
     * <p>The model variables.</p>
     */
    inline void SetModelVariables(const Aws::Vector<ModelVariable>& value) { m_modelVariablesHasBeenSet = true; m_modelVariables = value; }

    /**
     * <p>The model variables.</p>
     */
    inline void SetModelVariables(Aws::Vector<ModelVariable>&& value) { m_modelVariablesHasBeenSet = true; m_modelVariables = std::move(value); }

    /**
     * <p>The model variables.</p>
     */
    inline ModelVersionDetail& WithModelVariables(const Aws::Vector<ModelVariable>& value) { SetModelVariables(value); return *this;}

    /**
     * <p>The model variables.</p>
     */
    inline ModelVersionDetail& WithModelVariables(Aws::Vector<ModelVariable>&& value) { SetModelVariables(std::move(value)); return *this;}

    /**
     * <p>The model variables.</p>
     */
    inline ModelVersionDetail& AddModelVariables(const ModelVariable& value) { m_modelVariablesHasBeenSet = true; m_modelVariables.push_back(value); return *this; }

    /**
     * <p>The model variables.</p>
     */
    inline ModelVersionDetail& AddModelVariables(ModelVariable&& value) { m_modelVariablesHasBeenSet = true; m_modelVariables.push_back(std::move(value)); return *this; }


    /**
     * <p>The model label schema.</p>
     */
    inline const LabelSchema& GetLabelSchema() const{ return m_labelSchema; }

    /**
     * <p>The model label schema.</p>
     */
    inline bool LabelSchemaHasBeenSet() const { return m_labelSchemaHasBeenSet; }

    /**
     * <p>The model label schema.</p>
     */
    inline void SetLabelSchema(const LabelSchema& value) { m_labelSchemaHasBeenSet = true; m_labelSchema = value; }

    /**
     * <p>The model label schema.</p>
     */
    inline void SetLabelSchema(LabelSchema&& value) { m_labelSchemaHasBeenSet = true; m_labelSchema = std::move(value); }

    /**
     * <p>The model label schema.</p>
     */
    inline ModelVersionDetail& WithLabelSchema(const LabelSchema& value) { SetLabelSchema(value); return *this;}

    /**
     * <p>The model label schema.</p>
     */
    inline ModelVersionDetail& WithLabelSchema(LabelSchema&& value) { SetLabelSchema(std::move(value)); return *this;}


    /**
     * <p>The model validation metrics.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetValidationMetrics() const{ return m_validationMetrics; }

    /**
     * <p>The model validation metrics.</p>
     */
    inline bool ValidationMetricsHasBeenSet() const { return m_validationMetricsHasBeenSet; }

    /**
     * <p>The model validation metrics.</p>
     */
    inline void SetValidationMetrics(const Aws::Map<Aws::String, Aws::String>& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics = value; }

    /**
     * <p>The model validation metrics.</p>
     */
    inline void SetValidationMetrics(Aws::Map<Aws::String, Aws::String>&& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics = std::move(value); }

    /**
     * <p>The model validation metrics.</p>
     */
    inline ModelVersionDetail& WithValidationMetrics(const Aws::Map<Aws::String, Aws::String>& value) { SetValidationMetrics(value); return *this;}

    /**
     * <p>The model validation metrics.</p>
     */
    inline ModelVersionDetail& WithValidationMetrics(Aws::Map<Aws::String, Aws::String>&& value) { SetValidationMetrics(std::move(value)); return *this;}

    /**
     * <p>The model validation metrics.</p>
     */
    inline ModelVersionDetail& AddValidationMetrics(const Aws::String& key, const Aws::String& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics.emplace(key, value); return *this; }

    /**
     * <p>The model validation metrics.</p>
     */
    inline ModelVersionDetail& AddValidationMetrics(Aws::String&& key, const Aws::String& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>The model validation metrics.</p>
     */
    inline ModelVersionDetail& AddValidationMetrics(const Aws::String& key, Aws::String&& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The model validation metrics.</p>
     */
    inline ModelVersionDetail& AddValidationMetrics(Aws::String&& key, Aws::String&& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The model validation metrics.</p>
     */
    inline ModelVersionDetail& AddValidationMetrics(const char* key, Aws::String&& value) { m_validationMetricsHasBeenSet = true; m_validationMetrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The model validation metrics.</p>
     */
    inline ModelVersionDetail& AddValidationMetrics(Aws::String&& key, const char* value) { m_validationMetricsHasBeenSet = true; m_validationMetrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>The model validation metrics.</p>
     */
    inline ModelVersionDetail& AddValidationMetrics(const char* key, const char* value) { m_validationMetricsHasBeenSet = true; m_validationMetrics.emplace(key, value); return *this; }


    /**
     * <p>The model training metrics.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTrainingMetrics() const{ return m_trainingMetrics; }

    /**
     * <p>The model training metrics.</p>
     */
    inline bool TrainingMetricsHasBeenSet() const { return m_trainingMetricsHasBeenSet; }

    /**
     * <p>The model training metrics.</p>
     */
    inline void SetTrainingMetrics(const Aws::Map<Aws::String, Aws::String>& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics = value; }

    /**
     * <p>The model training metrics.</p>
     */
    inline void SetTrainingMetrics(Aws::Map<Aws::String, Aws::String>&& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics = std::move(value); }

    /**
     * <p>The model training metrics.</p>
     */
    inline ModelVersionDetail& WithTrainingMetrics(const Aws::Map<Aws::String, Aws::String>& value) { SetTrainingMetrics(value); return *this;}

    /**
     * <p>The model training metrics.</p>
     */
    inline ModelVersionDetail& WithTrainingMetrics(Aws::Map<Aws::String, Aws::String>&& value) { SetTrainingMetrics(std::move(value)); return *this;}

    /**
     * <p>The model training metrics.</p>
     */
    inline ModelVersionDetail& AddTrainingMetrics(const Aws::String& key, const Aws::String& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics.emplace(key, value); return *this; }

    /**
     * <p>The model training metrics.</p>
     */
    inline ModelVersionDetail& AddTrainingMetrics(Aws::String&& key, const Aws::String& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>The model training metrics.</p>
     */
    inline ModelVersionDetail& AddTrainingMetrics(const Aws::String& key, Aws::String&& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The model training metrics.</p>
     */
    inline ModelVersionDetail& AddTrainingMetrics(Aws::String&& key, Aws::String&& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The model training metrics.</p>
     */
    inline ModelVersionDetail& AddTrainingMetrics(const char* key, Aws::String&& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The model training metrics.</p>
     */
    inline ModelVersionDetail& AddTrainingMetrics(Aws::String&& key, const char* value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>The model training metrics.</p>
     */
    inline ModelVersionDetail& AddTrainingMetrics(const char* key, const char* value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics.emplace(key, value); return *this; }


    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline ModelVersionDetail& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline ModelVersionDetail& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the model was last updated.</p>
     */
    inline ModelVersionDetail& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline ModelVersionDetail& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline ModelVersionDetail& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the model was created.</p>
     */
    inline ModelVersionDetail& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}

  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet;

    ModelTypeEnum m_modelType;
    bool m_modelTypeHasBeenSet;

    Aws::String m_modelVersionNumber;
    bool m_modelVersionNumberHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    TrainingDataSource m_trainingDataSource;
    bool m_trainingDataSourceHasBeenSet;

    Aws::Vector<ModelVariable> m_modelVariables;
    bool m_modelVariablesHasBeenSet;

    LabelSchema m_labelSchema;
    bool m_labelSchemaHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_validationMetrics;
    bool m_validationMetricsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_trainingMetrics;
    bool m_trainingMetricsHasBeenSet;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
