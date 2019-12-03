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
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelTypeEnum.h>
#include <aws/frauddetector/model/TrainingDataSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/LabelSchema.h>
#include <aws/frauddetector/model/ModelVariable.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class AWS_FRAUDDETECTOR_API PutModelRequest : public FraudDetectorRequest
  {
  public:
    PutModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutModel"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline PutModelRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline PutModelRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline PutModelRequest& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The model type. </p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }

    /**
     * <p>The model type. </p>
     */
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }

    /**
     * <p>The model type. </p>
     */
    inline void SetModelType(const ModelTypeEnum& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }

    /**
     * <p>The model type. </p>
     */
    inline void SetModelType(ModelTypeEnum&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }

    /**
     * <p>The model type. </p>
     */
    inline PutModelRequest& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type. </p>
     */
    inline PutModelRequest& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>The model description. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The model description. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The model description. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The model description. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The model description. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The model description. </p>
     */
    inline PutModelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The model description. </p>
     */
    inline PutModelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The model description. </p>
     */
    inline PutModelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline const TrainingDataSource& GetTrainingDataSource() const{ return m_trainingDataSource; }

    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline bool TrainingDataSourceHasBeenSet() const { return m_trainingDataSourceHasBeenSet; }

    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline void SetTrainingDataSource(const TrainingDataSource& value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = value; }

    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline void SetTrainingDataSource(TrainingDataSource&& value) { m_trainingDataSourceHasBeenSet = true; m_trainingDataSource = std::move(value); }

    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline PutModelRequest& WithTrainingDataSource(const TrainingDataSource& value) { SetTrainingDataSource(value); return *this;}

    /**
     * <p>The training data source location in Amazon S3. </p>
     */
    inline PutModelRequest& WithTrainingDataSource(TrainingDataSource&& value) { SetTrainingDataSource(std::move(value)); return *this;}


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
    inline PutModelRequest& WithModelVariables(const Aws::Vector<ModelVariable>& value) { SetModelVariables(value); return *this;}

    /**
     * <p>The model input variables.</p>
     */
    inline PutModelRequest& WithModelVariables(Aws::Vector<ModelVariable>&& value) { SetModelVariables(std::move(value)); return *this;}

    /**
     * <p>The model input variables.</p>
     */
    inline PutModelRequest& AddModelVariables(const ModelVariable& value) { m_modelVariablesHasBeenSet = true; m_modelVariables.push_back(value); return *this; }

    /**
     * <p>The model input variables.</p>
     */
    inline PutModelRequest& AddModelVariables(ModelVariable&& value) { m_modelVariablesHasBeenSet = true; m_modelVariables.push_back(std::move(value)); return *this; }


    /**
     * <p>The label schema.</p>
     */
    inline const LabelSchema& GetLabelSchema() const{ return m_labelSchema; }

    /**
     * <p>The label schema.</p>
     */
    inline bool LabelSchemaHasBeenSet() const { return m_labelSchemaHasBeenSet; }

    /**
     * <p>The label schema.</p>
     */
    inline void SetLabelSchema(const LabelSchema& value) { m_labelSchemaHasBeenSet = true; m_labelSchema = value; }

    /**
     * <p>The label schema.</p>
     */
    inline void SetLabelSchema(LabelSchema&& value) { m_labelSchemaHasBeenSet = true; m_labelSchema = std::move(value); }

    /**
     * <p>The label schema.</p>
     */
    inline PutModelRequest& WithLabelSchema(const LabelSchema& value) { SetLabelSchema(value); return *this;}

    /**
     * <p>The label schema.</p>
     */
    inline PutModelRequest& WithLabelSchema(LabelSchema&& value) { SetLabelSchema(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
