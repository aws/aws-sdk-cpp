/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/CustomizationType.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Summary information for a custom model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CustomModelSummary">AWS
   * API Reference</a></p>
   */
  class CustomModelSummary
  {
  public:
    AWS_BEDROCK_API CustomModelSummary();
    AWS_BEDROCK_API CustomModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API CustomModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the custom model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The ARN of the custom model.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The ARN of the custom model.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The ARN of the custom model.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The ARN of the custom model.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The ARN of the custom model.</p>
     */
    inline CustomModelSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The ARN of the custom model.</p>
     */
    inline CustomModelSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the custom model.</p>
     */
    inline CustomModelSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The name of the custom model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the custom model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the custom model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the custom model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the custom model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the custom model.</p>
     */
    inline CustomModelSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the custom model.</p>
     */
    inline CustomModelSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom model.</p>
     */
    inline CustomModelSummary& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>Creation time of the model.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Creation time of the model.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>Creation time of the model.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Creation time of the model.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Creation time of the model.</p>
     */
    inline CustomModelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Creation time of the model.</p>
     */
    inline CustomModelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The base model ARN.</p>
     */
    inline const Aws::String& GetBaseModelArn() const{ return m_baseModelArn; }

    /**
     * <p>The base model ARN.</p>
     */
    inline bool BaseModelArnHasBeenSet() const { return m_baseModelArnHasBeenSet; }

    /**
     * <p>The base model ARN.</p>
     */
    inline void SetBaseModelArn(const Aws::String& value) { m_baseModelArnHasBeenSet = true; m_baseModelArn = value; }

    /**
     * <p>The base model ARN.</p>
     */
    inline void SetBaseModelArn(Aws::String&& value) { m_baseModelArnHasBeenSet = true; m_baseModelArn = std::move(value); }

    /**
     * <p>The base model ARN.</p>
     */
    inline void SetBaseModelArn(const char* value) { m_baseModelArnHasBeenSet = true; m_baseModelArn.assign(value); }

    /**
     * <p>The base model ARN.</p>
     */
    inline CustomModelSummary& WithBaseModelArn(const Aws::String& value) { SetBaseModelArn(value); return *this;}

    /**
     * <p>The base model ARN.</p>
     */
    inline CustomModelSummary& WithBaseModelArn(Aws::String&& value) { SetBaseModelArn(std::move(value)); return *this;}

    /**
     * <p>The base model ARN.</p>
     */
    inline CustomModelSummary& WithBaseModelArn(const char* value) { SetBaseModelArn(value); return *this;}


    /**
     * <p>The base model name.</p>
     */
    inline const Aws::String& GetBaseModelName() const{ return m_baseModelName; }

    /**
     * <p>The base model name.</p>
     */
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }

    /**
     * <p>The base model name.</p>
     */
    inline void SetBaseModelName(const Aws::String& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }

    /**
     * <p>The base model name.</p>
     */
    inline void SetBaseModelName(Aws::String&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::move(value); }

    /**
     * <p>The base model name.</p>
     */
    inline void SetBaseModelName(const char* value) { m_baseModelNameHasBeenSet = true; m_baseModelName.assign(value); }

    /**
     * <p>The base model name.</p>
     */
    inline CustomModelSummary& WithBaseModelName(const Aws::String& value) { SetBaseModelName(value); return *this;}

    /**
     * <p>The base model name.</p>
     */
    inline CustomModelSummary& WithBaseModelName(Aws::String&& value) { SetBaseModelName(std::move(value)); return *this;}

    /**
     * <p>The base model name.</p>
     */
    inline CustomModelSummary& WithBaseModelName(const char* value) { SetBaseModelName(value); return *this;}


    /**
     * <p>Specifies whether to carry out continued pre-training of a model or whether
     * to fine-tune it. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
     * models</a>.</p>
     */
    inline const CustomizationType& GetCustomizationType() const{ return m_customizationType; }

    /**
     * <p>Specifies whether to carry out continued pre-training of a model or whether
     * to fine-tune it. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
     * models</a>.</p>
     */
    inline bool CustomizationTypeHasBeenSet() const { return m_customizationTypeHasBeenSet; }

    /**
     * <p>Specifies whether to carry out continued pre-training of a model or whether
     * to fine-tune it. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
     * models</a>.</p>
     */
    inline void SetCustomizationType(const CustomizationType& value) { m_customizationTypeHasBeenSet = true; m_customizationType = value; }

    /**
     * <p>Specifies whether to carry out continued pre-training of a model or whether
     * to fine-tune it. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
     * models</a>.</p>
     */
    inline void SetCustomizationType(CustomizationType&& value) { m_customizationTypeHasBeenSet = true; m_customizationType = std::move(value); }

    /**
     * <p>Specifies whether to carry out continued pre-training of a model or whether
     * to fine-tune it. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
     * models</a>.</p>
     */
    inline CustomModelSummary& WithCustomizationType(const CustomizationType& value) { SetCustomizationType(value); return *this;}

    /**
     * <p>Specifies whether to carry out continued pre-training of a model or whether
     * to fine-tune it. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
     * models</a>.</p>
     */
    inline CustomModelSummary& WithCustomizationType(CustomizationType&& value) { SetCustomizationType(std::move(value)); return *this;}

  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_baseModelArn;
    bool m_baseModelArnHasBeenSet = false;

    Aws::String m_baseModelName;
    bool m_baseModelNameHasBeenSet = false;

    CustomizationType m_customizationType;
    bool m_customizationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
