/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelCustomizationJobStatus.h>
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
   * <p>Information about one customization job</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelCustomizationJobSummary">AWS
   * API Reference</a></p>
   */
  class ModelCustomizationJobSummary
  {
  public:
    AWS_BEDROCK_API ModelCustomizationJobSummary();
    AWS_BEDROCK_API ModelCustomizationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelCustomizationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the customization job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>ARN of the customization job.</p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p>ARN of the customization job.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p>ARN of the customization job.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p>ARN of the customization job.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p>ARN of the customization job.</p>
     */
    inline ModelCustomizationJobSummary& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>ARN of the customization job.</p>
     */
    inline ModelCustomizationJobSummary& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the customization job.</p>
     */
    inline ModelCustomizationJobSummary& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>ARN of the base model.</p>
     */
    inline const Aws::String& GetBaseModelArn() const{ return m_baseModelArn; }

    /**
     * <p>ARN of the base model.</p>
     */
    inline bool BaseModelArnHasBeenSet() const { return m_baseModelArnHasBeenSet; }

    /**
     * <p>ARN of the base model.</p>
     */
    inline void SetBaseModelArn(const Aws::String& value) { m_baseModelArnHasBeenSet = true; m_baseModelArn = value; }

    /**
     * <p>ARN of the base model.</p>
     */
    inline void SetBaseModelArn(Aws::String&& value) { m_baseModelArnHasBeenSet = true; m_baseModelArn = std::move(value); }

    /**
     * <p>ARN of the base model.</p>
     */
    inline void SetBaseModelArn(const char* value) { m_baseModelArnHasBeenSet = true; m_baseModelArn.assign(value); }

    /**
     * <p>ARN of the base model.</p>
     */
    inline ModelCustomizationJobSummary& WithBaseModelArn(const Aws::String& value) { SetBaseModelArn(value); return *this;}

    /**
     * <p>ARN of the base model.</p>
     */
    inline ModelCustomizationJobSummary& WithBaseModelArn(Aws::String&& value) { SetBaseModelArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the base model.</p>
     */
    inline ModelCustomizationJobSummary& WithBaseModelArn(const char* value) { SetBaseModelArn(value); return *this;}


    /**
     * <p>Name of the customization job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>Name of the customization job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>Name of the customization job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>Name of the customization job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>Name of the customization job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>Name of the customization job.</p>
     */
    inline ModelCustomizationJobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>Name of the customization job.</p>
     */
    inline ModelCustomizationJobSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>Name of the customization job.</p>
     */
    inline ModelCustomizationJobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Status of the customization job. </p>
     */
    inline const ModelCustomizationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the customization job. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the customization job. </p>
     */
    inline void SetStatus(const ModelCustomizationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the customization job. </p>
     */
    inline void SetStatus(ModelCustomizationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the customization job. </p>
     */
    inline ModelCustomizationJobSummary& WithStatus(const ModelCustomizationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the customization job. </p>
     */
    inline ModelCustomizationJobSummary& WithStatus(ModelCustomizationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Time that the customization job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>Time that the customization job was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>Time that the customization job was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>Time that the customization job was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>Time that the customization job was last modified.</p>
     */
    inline ModelCustomizationJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>Time that the customization job was last modified.</p>
     */
    inline ModelCustomizationJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>Creation time of the custom model. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Creation time of the custom model. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>Creation time of the custom model. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Creation time of the custom model. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Creation time of the custom model. </p>
     */
    inline ModelCustomizationJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Creation time of the custom model. </p>
     */
    inline ModelCustomizationJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Time that the customization job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Time that the customization job ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>Time that the customization job ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Time that the customization job ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Time that the customization job ended.</p>
     */
    inline ModelCustomizationJobSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Time that the customization job ended.</p>
     */
    inline ModelCustomizationJobSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>ARN of the custom model.</p>
     */
    inline const Aws::String& GetCustomModelArn() const{ return m_customModelArn; }

    /**
     * <p>ARN of the custom model.</p>
     */
    inline bool CustomModelArnHasBeenSet() const { return m_customModelArnHasBeenSet; }

    /**
     * <p>ARN of the custom model.</p>
     */
    inline void SetCustomModelArn(const Aws::String& value) { m_customModelArnHasBeenSet = true; m_customModelArn = value; }

    /**
     * <p>ARN of the custom model.</p>
     */
    inline void SetCustomModelArn(Aws::String&& value) { m_customModelArnHasBeenSet = true; m_customModelArn = std::move(value); }

    /**
     * <p>ARN of the custom model.</p>
     */
    inline void SetCustomModelArn(const char* value) { m_customModelArnHasBeenSet = true; m_customModelArn.assign(value); }

    /**
     * <p>ARN of the custom model.</p>
     */
    inline ModelCustomizationJobSummary& WithCustomModelArn(const Aws::String& value) { SetCustomModelArn(value); return *this;}

    /**
     * <p>ARN of the custom model.</p>
     */
    inline ModelCustomizationJobSummary& WithCustomModelArn(Aws::String&& value) { SetCustomModelArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the custom model.</p>
     */
    inline ModelCustomizationJobSummary& WithCustomModelArn(const char* value) { SetCustomModelArn(value); return *this;}


    /**
     * <p>Name of the custom model.</p>
     */
    inline const Aws::String& GetCustomModelName() const{ return m_customModelName; }

    /**
     * <p>Name of the custom model.</p>
     */
    inline bool CustomModelNameHasBeenSet() const { return m_customModelNameHasBeenSet; }

    /**
     * <p>Name of the custom model.</p>
     */
    inline void SetCustomModelName(const Aws::String& value) { m_customModelNameHasBeenSet = true; m_customModelName = value; }

    /**
     * <p>Name of the custom model.</p>
     */
    inline void SetCustomModelName(Aws::String&& value) { m_customModelNameHasBeenSet = true; m_customModelName = std::move(value); }

    /**
     * <p>Name of the custom model.</p>
     */
    inline void SetCustomModelName(const char* value) { m_customModelNameHasBeenSet = true; m_customModelName.assign(value); }

    /**
     * <p>Name of the custom model.</p>
     */
    inline ModelCustomizationJobSummary& WithCustomModelName(const Aws::String& value) { SetCustomModelName(value); return *this;}

    /**
     * <p>Name of the custom model.</p>
     */
    inline ModelCustomizationJobSummary& WithCustomModelName(Aws::String&& value) { SetCustomModelName(std::move(value)); return *this;}

    /**
     * <p>Name of the custom model.</p>
     */
    inline ModelCustomizationJobSummary& WithCustomModelName(const char* value) { SetCustomModelName(value); return *this;}


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
    inline ModelCustomizationJobSummary& WithCustomizationType(const CustomizationType& value) { SetCustomizationType(value); return *this;}

    /**
     * <p>Specifies whether to carry out continued pre-training of a model or whether
     * to fine-tune it. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
     * models</a>.</p>
     */
    inline ModelCustomizationJobSummary& WithCustomizationType(CustomizationType&& value) { SetCustomizationType(std::move(value)); return *this;}

  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_baseModelArn;
    bool m_baseModelArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    ModelCustomizationJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_customModelArn;
    bool m_customModelArnHasBeenSet = false;

    Aws::String m_customModelName;
    bool m_customModelNameHasBeenSet = false;

    CustomizationType m_customizationType;
    bool m_customizationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
