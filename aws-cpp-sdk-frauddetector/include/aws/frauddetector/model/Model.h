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
   * <p>The model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/Model">AWS
   * API Reference</a></p>
   */
  class AWS_FRAUDDETECTOR_API Model
  {
  public:
    Model();
    Model(Aws::Utils::Json::JsonView jsonValue);
    Model& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Model& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline Model& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline Model& WithModelId(const char* value) { SetModelId(value); return *this;}


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
    inline Model& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type.</p>
     */
    inline Model& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}


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
    inline Model& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The model description.</p>
     */
    inline Model& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The model description.</p>
     */
    inline Model& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The model training data source in Amazon S3.</p>
     */
    inline const TrainingDataSource& GetTrainingDataSource() const{ return m_trainingDataSource; }

    /**
     * <p>The model training data source in Amazon S3.</p>
     */
    inline bool TrainingDataSourceHasBeenSet() const { return m_trainingDataSourceHasBeenSet; }

    /**
     * <p>The model training data source in Amazon S3.</p>
     */
    inline void SetTrainingDataSource(const TrainingDataSource& value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = value; }

    /**
     * <p>The model training data source in Amazon S3.</p>
     */
    inline void SetTrainingDataSource(TrainingDataSource&& value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = std::move(value); }

    /**
     * <p>The model training data source in Amazon S3.</p>
     */
    inline Model& WithTrainingDataSource(const TrainingDataSource& value) { SetTrainingDataSource(value); return *this;}

    /**
     * <p>The model training data source in Amazon S3.</p>
     */
    inline Model& WithTrainingDataSource(TrainingDataSource&& value) { SetTrainingDataSource(std::move(value)); return *this;}


    /**
     * <p>The model input variables.</p>
     */
    inline const Aws::Vector<ModelVariable>& GetModelVariables() const{ return m_modelVariables; }

    /**
     * <p>The model input variables.</p>
     */
    inline bool ModelVariablesHasBeenSet() const { return m_modelVariablesHasBeenSet; }

    /**
     * <p>The model input variables.</p>
     */
    inline void SetModelVariables(const Aws::Vector<ModelVariable>& value) { m_modelVariablesHasBeenSet = true; m_modelVariables = value; }

    /**
     * <p>The model input variables.</p>
     */
    inline void SetModelVariables(Aws::Vector<ModelVariable>&& value) { m_modelVariablesHasBeenSet = true; m_modelVariables = std::move(value); }

    /**
     * <p>The model input variables.</p>
     */
    inline Model& WithModelVariables(const Aws::Vector<ModelVariable>& value) { SetModelVariables(value); return *this;}

    /**
     * <p>The model input variables.</p>
     */
    inline Model& WithModelVariables(Aws::Vector<ModelVariable>&& value) { SetModelVariables(std::move(value)); return *this;}

    /**
     * <p>The model input variables.</p>
     */
    inline Model& AddModelVariables(const ModelVariable& value) { m_modelVariablesHasBeenSet = true; m_modelVariables.push_back(value); return *this; }

    /**
     * <p>The model input variables.</p>
     */
    inline Model& AddModelVariables(ModelVariable&& value) { m_modelVariablesHasBeenSet = true; m_modelVariables.push_back(std::move(value)); return *this; }


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
    inline Model& WithLabelSchema(const LabelSchema& value) { SetLabelSchema(value); return *this;}

    /**
     * <p>The model label schema.</p>
     */
    inline Model& WithLabelSchema(LabelSchema&& value) { SetLabelSchema(std::move(value)); return *this;}


    /**
     * <p>Timestamp of last time the model was updated.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>Timestamp of last time the model was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>Timestamp of last time the model was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>Timestamp of last time the model was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>Timestamp of last time the model was updated.</p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>Timestamp of last time the model was updated.</p>
     */
    inline Model& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>Timestamp of last time the model was updated.</p>
     */
    inline Model& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of last time the model was updated.</p>
     */
    inline Model& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>Timestamp of when the model was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>Timestamp of when the model was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>Timestamp of when the model was created.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>Timestamp of when the model was created.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>Timestamp of when the model was created.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p>Timestamp of when the model was created.</p>
     */
    inline Model& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>Timestamp of when the model was created.</p>
     */
    inline Model& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when the model was created.</p>
     */
    inline Model& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}

  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet;

    ModelTypeEnum m_modelType;
    bool m_modelTypeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    TrainingDataSource m_trainingDataSource;
    bool m_trainingDataSourceHasBeenSet;

    Aws::Vector<ModelVariable> m_modelVariables;
    bool m_modelVariablesHasBeenSet;

    LabelSchema m_labelSchema;
    bool m_labelSchemaHasBeenSet;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
