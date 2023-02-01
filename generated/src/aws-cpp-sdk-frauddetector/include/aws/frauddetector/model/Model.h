/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelTypeEnum.h>
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
  class Model
  {
  public:
    AWS_FRAUDDETECTOR_API Model();
    AWS_FRAUDDETECTOR_API Model(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Model& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The name of the event type.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>The name of the event type.</p>
     */
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }

    /**
     * <p>The name of the event type.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }

    /**
     * <p>The name of the event type.</p>
     */
    inline Model& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The name of the event type.</p>
     */
    inline Model& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the event type.</p>
     */
    inline Model& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


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
     * <p>The ARN of the model.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the model.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the model.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the model.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the model.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the model.</p>
     */
    inline Model& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the model.</p>
     */
    inline Model& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model.</p>
     */
    inline Model& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType;
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
