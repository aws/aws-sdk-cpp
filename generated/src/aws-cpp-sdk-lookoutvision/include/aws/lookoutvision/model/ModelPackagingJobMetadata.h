/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/ModelPackagingJobStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p> Metadata for a model packaging job. For more information, see
   * <a>ListModelPackagingJobs</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ModelPackagingJobMetadata">AWS
   * API Reference</a></p>
   */
  class ModelPackagingJobMetadata
  {
  public:
    AWS_LOOKOUTFORVISION_API ModelPackagingJobMetadata() = default;
    AWS_LOOKOUTFORVISION_API ModelPackagingJobMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ModelPackagingJobMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the model packaging job. </p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    ModelPackagingJobMetadata& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The project that contains the model that is in the model package. </p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    ModelPackagingJobMetadata& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the model that is in the model package. </p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    ModelPackagingJobMetadata& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description for the model packaging job. </p>
     */
    inline const Aws::String& GetModelPackagingJobDescription() const { return m_modelPackagingJobDescription; }
    inline bool ModelPackagingJobDescriptionHasBeenSet() const { return m_modelPackagingJobDescriptionHasBeenSet; }
    template<typename ModelPackagingJobDescriptionT = Aws::String>
    void SetModelPackagingJobDescription(ModelPackagingJobDescriptionT&& value) { m_modelPackagingJobDescriptionHasBeenSet = true; m_modelPackagingJobDescription = std::forward<ModelPackagingJobDescriptionT>(value); }
    template<typename ModelPackagingJobDescriptionT = Aws::String>
    ModelPackagingJobMetadata& WithModelPackagingJobDescription(ModelPackagingJobDescriptionT&& value) { SetModelPackagingJobDescription(std::forward<ModelPackagingJobDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The AWS service used to package the job. Currently Lookout for Vision can
     * package jobs with AWS IoT Greengrass. </p>
     */
    inline const Aws::String& GetModelPackagingMethod() const { return m_modelPackagingMethod; }
    inline bool ModelPackagingMethodHasBeenSet() const { return m_modelPackagingMethodHasBeenSet; }
    template<typename ModelPackagingMethodT = Aws::String>
    void SetModelPackagingMethod(ModelPackagingMethodT&& value) { m_modelPackagingMethodHasBeenSet = true; m_modelPackagingMethod = std::forward<ModelPackagingMethodT>(value); }
    template<typename ModelPackagingMethodT = Aws::String>
    ModelPackagingJobMetadata& WithModelPackagingMethod(ModelPackagingMethodT&& value) { SetModelPackagingMethod(std::forward<ModelPackagingMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model packaging job. </p>
     */
    inline ModelPackagingJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelPackagingJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ModelPackagingJobMetadata& WithStatus(ModelPackagingJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the model packaging job. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ModelPackagingJobMetadata& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    ModelPackagingJobMetadata& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    ModelPackagingJobMetadata& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_modelPackagingJobDescription;
    bool m_modelPackagingJobDescriptionHasBeenSet = false;

    Aws::String m_modelPackagingMethod;
    bool m_modelPackagingMethodHasBeenSet = false;

    ModelPackagingJobStatus m_status{ModelPackagingJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
