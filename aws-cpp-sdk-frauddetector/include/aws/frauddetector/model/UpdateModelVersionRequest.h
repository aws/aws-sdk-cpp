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
#include <aws/frauddetector/model/ModelVersionStatus.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class AWS_FRAUDDETECTOR_API UpdateModelVersionRequest : public FraudDetectorRequest
  {
  public:
    UpdateModelVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateModelVersion"; }

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
    inline UpdateModelVersionRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline UpdateModelVersionRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model ID.</p>
     */
    inline UpdateModelVersionRequest& WithModelId(const char* value) { SetModelId(value); return *this;}


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
    inline UpdateModelVersionRequest& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type.</p>
     */
    inline UpdateModelVersionRequest& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}


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
    inline UpdateModelVersionRequest& WithModelVersionNumber(const Aws::String& value) { SetModelVersionNumber(value); return *this;}

    /**
     * <p>The model version.</p>
     */
    inline UpdateModelVersionRequest& WithModelVersionNumber(Aws::String&& value) { SetModelVersionNumber(std::move(value)); return *this;}

    /**
     * <p>The model version.</p>
     */
    inline UpdateModelVersionRequest& WithModelVersionNumber(const char* value) { SetModelVersionNumber(value); return *this;}


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
    inline UpdateModelVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The model description.</p>
     */
    inline UpdateModelVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The model description.</p>
     */
    inline UpdateModelVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The new model status.</p>
     */
    inline const ModelVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The new model status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The new model status.</p>
     */
    inline void SetStatus(const ModelVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The new model status.</p>
     */
    inline void SetStatus(ModelVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The new model status.</p>
     */
    inline UpdateModelVersionRequest& WithStatus(const ModelVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The new model status.</p>
     */
    inline UpdateModelVersionRequest& WithStatus(ModelVersionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet;

    ModelTypeEnum m_modelType;
    bool m_modelTypeHasBeenSet;

    Aws::String m_modelVersionNumber;
    bool m_modelVersionNumberHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ModelVersionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
