/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelCustomizationJobStatus.h>
#include <aws/bedrock/model/StatusDetails.h>
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
    AWS_BEDROCK_API ModelCustomizationJobSummary() = default;
    AWS_BEDROCK_API ModelCustomizationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelCustomizationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the customization job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    ModelCustomizationJobSummary& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the base model.</p>
     */
    inline const Aws::String& GetBaseModelArn() const { return m_baseModelArn; }
    inline bool BaseModelArnHasBeenSet() const { return m_baseModelArnHasBeenSet; }
    template<typename BaseModelArnT = Aws::String>
    void SetBaseModelArn(BaseModelArnT&& value) { m_baseModelArnHasBeenSet = true; m_baseModelArn = std::forward<BaseModelArnT>(value); }
    template<typename BaseModelArnT = Aws::String>
    ModelCustomizationJobSummary& WithBaseModelArn(BaseModelArnT&& value) { SetBaseModelArn(std::forward<BaseModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the customization job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    ModelCustomizationJobSummary& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the customization job. </p>
     */
    inline ModelCustomizationJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelCustomizationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ModelCustomizationJobSummary& WithStatus(ModelCustomizationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status of the data processing sub-task of the job.</p>
     */
    inline const StatusDetails& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = StatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = StatusDetails>
    ModelCustomizationJobSummary& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time that the customization job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ModelCustomizationJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the custom model. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ModelCustomizationJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time that the customization job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ModelCustomizationJobSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the custom model.</p>
     */
    inline const Aws::String& GetCustomModelArn() const { return m_customModelArn; }
    inline bool CustomModelArnHasBeenSet() const { return m_customModelArnHasBeenSet; }
    template<typename CustomModelArnT = Aws::String>
    void SetCustomModelArn(CustomModelArnT&& value) { m_customModelArnHasBeenSet = true; m_customModelArn = std::forward<CustomModelArnT>(value); }
    template<typename CustomModelArnT = Aws::String>
    ModelCustomizationJobSummary& WithCustomModelArn(CustomModelArnT&& value) { SetCustomModelArn(std::forward<CustomModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the custom model.</p>
     */
    inline const Aws::String& GetCustomModelName() const { return m_customModelName; }
    inline bool CustomModelNameHasBeenSet() const { return m_customModelNameHasBeenSet; }
    template<typename CustomModelNameT = Aws::String>
    void SetCustomModelName(CustomModelNameT&& value) { m_customModelNameHasBeenSet = true; m_customModelName = std::forward<CustomModelNameT>(value); }
    template<typename CustomModelNameT = Aws::String>
    ModelCustomizationJobSummary& WithCustomModelName(CustomModelNameT&& value) { SetCustomModelName(std::forward<CustomModelNameT>(value)); return *this;}
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
    inline ModelCustomizationJobSummary& WithCustomizationType(CustomizationType value) { SetCustomizationType(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_baseModelArn;
    bool m_baseModelArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    ModelCustomizationJobStatus m_status{ModelCustomizationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_customModelArn;
    bool m_customModelArnHasBeenSet = false;

    Aws::String m_customModelName;
    bool m_customModelNameHasBeenSet = false;

    CustomizationType m_customizationType{CustomizationType::NOT_SET};
    bool m_customizationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
