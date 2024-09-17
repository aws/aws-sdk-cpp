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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline CustomModelSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline CustomModelSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline CustomModelSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline CustomModelSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline CustomModelSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline CustomModelSummary& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the model.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline CustomModelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CustomModelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base model Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetBaseModelArn() const{ return m_baseModelArn; }
    inline bool BaseModelArnHasBeenSet() const { return m_baseModelArnHasBeenSet; }
    inline void SetBaseModelArn(const Aws::String& value) { m_baseModelArnHasBeenSet = true; m_baseModelArn = value; }
    inline void SetBaseModelArn(Aws::String&& value) { m_baseModelArnHasBeenSet = true; m_baseModelArn = std::move(value); }
    inline void SetBaseModelArn(const char* value) { m_baseModelArnHasBeenSet = true; m_baseModelArn.assign(value); }
    inline CustomModelSummary& WithBaseModelArn(const Aws::String& value) { SetBaseModelArn(value); return *this;}
    inline CustomModelSummary& WithBaseModelArn(Aws::String&& value) { SetBaseModelArn(std::move(value)); return *this;}
    inline CustomModelSummary& WithBaseModelArn(const char* value) { SetBaseModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base model name.</p>
     */
    inline const Aws::String& GetBaseModelName() const{ return m_baseModelName; }
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }
    inline void SetBaseModelName(const Aws::String& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = value; }
    inline void SetBaseModelName(Aws::String&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::move(value); }
    inline void SetBaseModelName(const char* value) { m_baseModelNameHasBeenSet = true; m_baseModelName.assign(value); }
    inline CustomModelSummary& WithBaseModelName(const Aws::String& value) { SetBaseModelName(value); return *this;}
    inline CustomModelSummary& WithBaseModelName(Aws::String&& value) { SetBaseModelName(std::move(value)); return *this;}
    inline CustomModelSummary& WithBaseModelName(const char* value) { SetBaseModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to carry out continued pre-training of a model or whether
     * to fine-tune it. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
     * models</a>.</p>
     */
    inline const CustomizationType& GetCustomizationType() const{ return m_customizationType; }
    inline bool CustomizationTypeHasBeenSet() const { return m_customizationTypeHasBeenSet; }
    inline void SetCustomizationType(const CustomizationType& value) { m_customizationTypeHasBeenSet = true; m_customizationType = value; }
    inline void SetCustomizationType(CustomizationType&& value) { m_customizationTypeHasBeenSet = true; m_customizationType = std::move(value); }
    inline CustomModelSummary& WithCustomizationType(const CustomizationType& value) { SetCustomizationType(value); return *this;}
    inline CustomModelSummary& WithCustomizationType(CustomizationType&& value) { SetCustomizationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the account that owns the model.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline CustomModelSummary& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline CustomModelSummary& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline CustomModelSummary& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}
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

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
