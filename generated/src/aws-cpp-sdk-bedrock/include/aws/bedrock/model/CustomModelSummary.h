/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/CustomizationType.h>
#include <aws/bedrock/model/ModelStatus.h>
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
    AWS_BEDROCK_API CustomModelSummary() = default;
    AWS_BEDROCK_API CustomModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API CustomModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom model.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    CustomModelSummary& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    CustomModelSummary& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the model.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CustomModelSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base model Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetBaseModelArn() const { return m_baseModelArn; }
    inline bool BaseModelArnHasBeenSet() const { return m_baseModelArnHasBeenSet; }
    template<typename BaseModelArnT = Aws::String>
    void SetBaseModelArn(BaseModelArnT&& value) { m_baseModelArnHasBeenSet = true; m_baseModelArn = std::forward<BaseModelArnT>(value); }
    template<typename BaseModelArnT = Aws::String>
    CustomModelSummary& WithBaseModelArn(BaseModelArnT&& value) { SetBaseModelArn(std::forward<BaseModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base model name.</p>
     */
    inline const Aws::String& GetBaseModelName() const { return m_baseModelName; }
    inline bool BaseModelNameHasBeenSet() const { return m_baseModelNameHasBeenSet; }
    template<typename BaseModelNameT = Aws::String>
    void SetBaseModelName(BaseModelNameT&& value) { m_baseModelNameHasBeenSet = true; m_baseModelName = std::forward<BaseModelNameT>(value); }
    template<typename BaseModelNameT = Aws::String>
    CustomModelSummary& WithBaseModelName(BaseModelNameT&& value) { SetBaseModelName(std::forward<BaseModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to carry out continued pre-training of a model or whether
     * to fine-tune it. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
     * models</a>.</p>
     */
    inline CustomizationType GetCustomizationType() const { return m_customizationType; }
    inline bool CustomizationTypeHasBeenSet() const { return m_customizationTypeHasBeenSet; }
    inline void SetCustomizationType(CustomizationType value) { m_customizationTypeHasBeenSet = true; m_customizationType = value; }
    inline CustomModelSummary& WithCustomizationType(CustomizationType value) { SetCustomizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the account that owns the model.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    CustomModelSummary& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the custom model. Possible values include:</p> <ul>
     * <li> <p> <code>Creating</code> - The model is being created and validated.</p>
     * </li> <li> <p> <code>Active</code> - The model has been successfully created and
     * is ready for use.</p> </li> <li> <p> <code>Failed</code> - The model creation
     * process failed.</p> </li> </ul>
     */
    inline ModelStatus GetModelStatus() const { return m_modelStatus; }
    inline bool ModelStatusHasBeenSet() const { return m_modelStatusHasBeenSet; }
    inline void SetModelStatus(ModelStatus value) { m_modelStatusHasBeenSet = true; m_modelStatus = value; }
    inline CustomModelSummary& WithModelStatus(ModelStatus value) { SetModelStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_baseModelArn;
    bool m_baseModelArnHasBeenSet = false;

    Aws::String m_baseModelName;
    bool m_baseModelNameHasBeenSet = false;

    CustomizationType m_customizationType{CustomizationType::NOT_SET};
    bool m_customizationTypeHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    ModelStatus m_modelStatus{ModelStatus::NOT_SET};
    bool m_modelStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
