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
    AWS_LOOKOUTFORVISION_API ModelPackagingJobMetadata();
    AWS_LOOKOUTFORVISION_API ModelPackagingJobMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ModelPackagingJobMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the model packaging job. </p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p> The name of the model packaging job. </p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p> The name of the model packaging job. </p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p> The name of the model packaging job. </p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p> The name of the model packaging job. </p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p> The name of the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p> The name of the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p> The name of the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p> The project that contains the model that is in the model package. </p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p> The project that contains the model that is in the model package. </p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p> The project that contains the model that is in the model package. </p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p> The project that contains the model that is in the model package. </p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p> The project that contains the model that is in the model package. </p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p> The project that contains the model that is in the model package. </p>
     */
    inline ModelPackagingJobMetadata& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p> The project that contains the model that is in the model package. </p>
     */
    inline ModelPackagingJobMetadata& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p> The project that contains the model that is in the model package. </p>
     */
    inline ModelPackagingJobMetadata& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p> The version of the model that is in the model package. </p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p> The version of the model that is in the model package. </p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p> The version of the model that is in the model package. </p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p> The version of the model that is in the model package. </p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p> The version of the model that is in the model package. </p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p> The version of the model that is in the model package. </p>
     */
    inline ModelPackagingJobMetadata& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p> The version of the model that is in the model package. </p>
     */
    inline ModelPackagingJobMetadata& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p> The version of the model that is in the model package. </p>
     */
    inline ModelPackagingJobMetadata& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p> The description for the model packaging job. </p>
     */
    inline const Aws::String& GetModelPackagingJobDescription() const{ return m_modelPackagingJobDescription; }

    /**
     * <p> The description for the model packaging job. </p>
     */
    inline bool ModelPackagingJobDescriptionHasBeenSet() const { return m_modelPackagingJobDescriptionHasBeenSet; }

    /**
     * <p> The description for the model packaging job. </p>
     */
    inline void SetModelPackagingJobDescription(const Aws::String& value) { m_modelPackagingJobDescriptionHasBeenSet = true; m_modelPackagingJobDescription = value; }

    /**
     * <p> The description for the model packaging job. </p>
     */
    inline void SetModelPackagingJobDescription(Aws::String&& value) { m_modelPackagingJobDescriptionHasBeenSet = true; m_modelPackagingJobDescription = std::move(value); }

    /**
     * <p> The description for the model packaging job. </p>
     */
    inline void SetModelPackagingJobDescription(const char* value) { m_modelPackagingJobDescriptionHasBeenSet = true; m_modelPackagingJobDescription.assign(value); }

    /**
     * <p> The description for the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithModelPackagingJobDescription(const Aws::String& value) { SetModelPackagingJobDescription(value); return *this;}

    /**
     * <p> The description for the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithModelPackagingJobDescription(Aws::String&& value) { SetModelPackagingJobDescription(std::move(value)); return *this;}

    /**
     * <p> The description for the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithModelPackagingJobDescription(const char* value) { SetModelPackagingJobDescription(value); return *this;}


    /**
     * <p> The AWS service used to package the job. Currently Lookout for Vision can
     * package jobs with AWS IoT Greengrass. </p>
     */
    inline const Aws::String& GetModelPackagingMethod() const{ return m_modelPackagingMethod; }

    /**
     * <p> The AWS service used to package the job. Currently Lookout for Vision can
     * package jobs with AWS IoT Greengrass. </p>
     */
    inline bool ModelPackagingMethodHasBeenSet() const { return m_modelPackagingMethodHasBeenSet; }

    /**
     * <p> The AWS service used to package the job. Currently Lookout for Vision can
     * package jobs with AWS IoT Greengrass. </p>
     */
    inline void SetModelPackagingMethod(const Aws::String& value) { m_modelPackagingMethodHasBeenSet = true; m_modelPackagingMethod = value; }

    /**
     * <p> The AWS service used to package the job. Currently Lookout for Vision can
     * package jobs with AWS IoT Greengrass. </p>
     */
    inline void SetModelPackagingMethod(Aws::String&& value) { m_modelPackagingMethodHasBeenSet = true; m_modelPackagingMethod = std::move(value); }

    /**
     * <p> The AWS service used to package the job. Currently Lookout for Vision can
     * package jobs with AWS IoT Greengrass. </p>
     */
    inline void SetModelPackagingMethod(const char* value) { m_modelPackagingMethodHasBeenSet = true; m_modelPackagingMethod.assign(value); }

    /**
     * <p> The AWS service used to package the job. Currently Lookout for Vision can
     * package jobs with AWS IoT Greengrass. </p>
     */
    inline ModelPackagingJobMetadata& WithModelPackagingMethod(const Aws::String& value) { SetModelPackagingMethod(value); return *this;}

    /**
     * <p> The AWS service used to package the job. Currently Lookout for Vision can
     * package jobs with AWS IoT Greengrass. </p>
     */
    inline ModelPackagingJobMetadata& WithModelPackagingMethod(Aws::String&& value) { SetModelPackagingMethod(std::move(value)); return *this;}

    /**
     * <p> The AWS service used to package the job. Currently Lookout for Vision can
     * package jobs with AWS IoT Greengrass. </p>
     */
    inline ModelPackagingJobMetadata& WithModelPackagingMethod(const char* value) { SetModelPackagingMethod(value); return *this;}


    /**
     * <p>The status of the model packaging job. </p>
     */
    inline const ModelPackagingJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the model packaging job. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the model packaging job. </p>
     */
    inline void SetStatus(const ModelPackagingJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the model packaging job. </p>
     */
    inline void SetStatus(ModelPackagingJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithStatus(const ModelPackagingJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithStatus(ModelPackagingJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message for the model packaging job. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for the model packaging job. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for the model packaging job. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for the model packaging job. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for the model packaging job. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the model packaging job. </p>
     */
    inline ModelPackagingJobMetadata& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * created.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * created.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * created.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * created.</p>
     */
    inline ModelPackagingJobMetadata& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * created.</p>
     */
    inline ModelPackagingJobMetadata& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * last updated.</p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * last updated.</p>
     */
    inline ModelPackagingJobMetadata& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>The Unix timestamp for the time and date that the model packaging job was
     * last updated.</p>
     */
    inline ModelPackagingJobMetadata& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}

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

    ModelPackagingJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
