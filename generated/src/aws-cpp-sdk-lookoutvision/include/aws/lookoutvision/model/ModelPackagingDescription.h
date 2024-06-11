/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/ModelPackagingConfiguration.h>
#include <aws/lookoutvision/model/ModelPackagingOutputDetails.h>
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
   * <p> Information about a model packaging job. For more information, see
   * <a>DescribeModelPackagingJob</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ModelPackagingDescription">AWS
   * API Reference</a></p>
   */
  class ModelPackagingDescription
  {
  public:
    AWS_LOOKOUTFORVISION_API ModelPackagingDescription();
    AWS_LOOKOUTFORVISION_API ModelPackagingDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ModelPackagingDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the model packaging job. </p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline ModelPackagingDescription& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline ModelPackagingDescription& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline ModelPackagingDescription& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project that's associated with a model that's in the model
     * package. </p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline ModelPackagingDescription& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline ModelPackagingDescription& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline ModelPackagingDescription& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model used in the model packaging job. </p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }
    inline ModelPackagingDescription& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}
    inline ModelPackagingDescription& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}
    inline ModelPackagingDescription& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration information used in the model packaging job. </p>
     */
    inline const ModelPackagingConfiguration& GetModelPackagingConfiguration() const{ return m_modelPackagingConfiguration; }
    inline bool ModelPackagingConfigurationHasBeenSet() const { return m_modelPackagingConfigurationHasBeenSet; }
    inline void SetModelPackagingConfiguration(const ModelPackagingConfiguration& value) { m_modelPackagingConfigurationHasBeenSet = true; m_modelPackagingConfiguration = value; }
    inline void SetModelPackagingConfiguration(ModelPackagingConfiguration&& value) { m_modelPackagingConfigurationHasBeenSet = true; m_modelPackagingConfiguration = std::move(value); }
    inline ModelPackagingDescription& WithModelPackagingConfiguration(const ModelPackagingConfiguration& value) { SetModelPackagingConfiguration(value); return *this;}
    inline ModelPackagingDescription& WithModelPackagingConfiguration(ModelPackagingConfiguration&& value) { SetModelPackagingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the model packaging job. </p>
     */
    inline const Aws::String& GetModelPackagingJobDescription() const{ return m_modelPackagingJobDescription; }
    inline bool ModelPackagingJobDescriptionHasBeenSet() const { return m_modelPackagingJobDescriptionHasBeenSet; }
    inline void SetModelPackagingJobDescription(const Aws::String& value) { m_modelPackagingJobDescriptionHasBeenSet = true; m_modelPackagingJobDescription = value; }
    inline void SetModelPackagingJobDescription(Aws::String&& value) { m_modelPackagingJobDescriptionHasBeenSet = true; m_modelPackagingJobDescription = std::move(value); }
    inline void SetModelPackagingJobDescription(const char* value) { m_modelPackagingJobDescriptionHasBeenSet = true; m_modelPackagingJobDescription.assign(value); }
    inline ModelPackagingDescription& WithModelPackagingJobDescription(const Aws::String& value) { SetModelPackagingJobDescription(value); return *this;}
    inline ModelPackagingDescription& WithModelPackagingJobDescription(Aws::String&& value) { SetModelPackagingJobDescription(std::move(value)); return *this;}
    inline ModelPackagingDescription& WithModelPackagingJobDescription(const char* value) { SetModelPackagingJobDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS service used to package the job. Currently Lookout for Vision can
     * package jobs with AWS IoT Greengrass. </p>
     */
    inline const Aws::String& GetModelPackagingMethod() const{ return m_modelPackagingMethod; }
    inline bool ModelPackagingMethodHasBeenSet() const { return m_modelPackagingMethodHasBeenSet; }
    inline void SetModelPackagingMethod(const Aws::String& value) { m_modelPackagingMethodHasBeenSet = true; m_modelPackagingMethod = value; }
    inline void SetModelPackagingMethod(Aws::String&& value) { m_modelPackagingMethodHasBeenSet = true; m_modelPackagingMethod = std::move(value); }
    inline void SetModelPackagingMethod(const char* value) { m_modelPackagingMethodHasBeenSet = true; m_modelPackagingMethod.assign(value); }
    inline ModelPackagingDescription& WithModelPackagingMethod(const Aws::String& value) { SetModelPackagingMethod(value); return *this;}
    inline ModelPackagingDescription& WithModelPackagingMethod(Aws::String&& value) { SetModelPackagingMethod(std::move(value)); return *this;}
    inline ModelPackagingDescription& WithModelPackagingMethod(const char* value) { SetModelPackagingMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the output of the model packaging job. For more
     * information, see <a>DescribeModelPackagingJob</a>. </p>
     */
    inline const ModelPackagingOutputDetails& GetModelPackagingOutputDetails() const{ return m_modelPackagingOutputDetails; }
    inline bool ModelPackagingOutputDetailsHasBeenSet() const { return m_modelPackagingOutputDetailsHasBeenSet; }
    inline void SetModelPackagingOutputDetails(const ModelPackagingOutputDetails& value) { m_modelPackagingOutputDetailsHasBeenSet = true; m_modelPackagingOutputDetails = value; }
    inline void SetModelPackagingOutputDetails(ModelPackagingOutputDetails&& value) { m_modelPackagingOutputDetailsHasBeenSet = true; m_modelPackagingOutputDetails = std::move(value); }
    inline ModelPackagingDescription& WithModelPackagingOutputDetails(const ModelPackagingOutputDetails& value) { SetModelPackagingOutputDetails(value); return *this;}
    inline ModelPackagingDescription& WithModelPackagingOutputDetails(ModelPackagingOutputDetails&& value) { SetModelPackagingOutputDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the model packaging job. </p>
     */
    inline const ModelPackagingJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ModelPackagingJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ModelPackagingJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ModelPackagingDescription& WithStatus(const ModelPackagingJobStatus& value) { SetStatus(value); return *this;}
    inline ModelPackagingDescription& WithStatus(ModelPackagingJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status message for the model packaging job. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ModelPackagingDescription& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ModelPackagingDescription& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ModelPackagingDescription& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Unix timestamp for the time and date that the model packaging job was
     * created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline ModelPackagingDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline ModelPackagingDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Unix timestamp for the time and date that the model packaging job was
     * last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline ModelPackagingDescription& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline ModelPackagingDescription& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    ModelPackagingConfiguration m_modelPackagingConfiguration;
    bool m_modelPackagingConfigurationHasBeenSet = false;

    Aws::String m_modelPackagingJobDescription;
    bool m_modelPackagingJobDescriptionHasBeenSet = false;

    Aws::String m_modelPackagingMethod;
    bool m_modelPackagingMethodHasBeenSet = false;

    ModelPackagingOutputDetails m_modelPackagingOutputDetails;
    bool m_modelPackagingOutputDetailsHasBeenSet = false;

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
