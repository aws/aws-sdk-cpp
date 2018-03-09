﻿/*
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TargetSelection.h>
#include <aws/iot/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/PresignedUrlConfig.h>
#include <aws/iot/model/JobExecutionsRolloutConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/JobProcessDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>The <code>Job</code> object contains details about a job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Job">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API Job
  {
  public:
    Job();
    Job(const Aws::Utils::Json::JsonValue& jsonValue);
    Job& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline Job& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline Job& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline Job& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline Job& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline Job& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline Job& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a device when the thing
     * representing the device is added to a target group, even after the job was
     * completed by all things originally in the group. </p>
     */
    inline const TargetSelection& GetTargetSelection() const{ return m_targetSelection; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a device when the thing
     * representing the device is added to a target group, even after the job was
     * completed by all things originally in the group. </p>
     */
    inline void SetTargetSelection(const TargetSelection& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a device when the thing
     * representing the device is added to a target group, even after the job was
     * completed by all things originally in the group. </p>
     */
    inline void SetTargetSelection(TargetSelection&& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = std::move(value); }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a device when the thing
     * representing the device is added to a target group, even after the job was
     * completed by all things originally in the group. </p>
     */
    inline Job& WithTargetSelection(const TargetSelection& value) { SetTargetSelection(value); return *this;}

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a device when the thing
     * representing the device is added to a target group, even after the job was
     * completed by all things originally in the group. </p>
     */
    inline Job& WithTargetSelection(TargetSelection&& value) { SetTargetSelection(std::move(value)); return *this;}


    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, or <code>COMPLETED</code>. </p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, or <code>COMPLETED</code>. </p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, or <code>COMPLETED</code>. </p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, or <code>COMPLETED</code>. </p>
     */
    inline Job& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, or <code>COMPLETED</code>. </p>
     */
    inline Job& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline Job& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline Job& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline Job& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>A list of IoT things and thing groups to which the job should be sent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>A list of IoT things and thing groups to which the job should be sent.</p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>A list of IoT things and thing groups to which the job should be sent.</p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>A list of IoT things and thing groups to which the job should be sent.</p>
     */
    inline Job& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>A list of IoT things and thing groups to which the job should be sent.</p>
     */
    inline Job& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>A list of IoT things and thing groups to which the job should be sent.</p>
     */
    inline Job& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>A list of IoT things and thing groups to which the job should be sent.</p>
     */
    inline Job& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IoT things and thing groups to which the job should be sent.</p>
     */
    inline Job& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }


    /**
     * <p>A short text description of the job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A short text description of the job.</p>
     */
    inline Job& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A short text description of the job.</p>
     */
    inline Job& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A short text description of the job.</p>
     */
    inline Job& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configuration for pre-signed S3 URLs.</p>
     */
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const{ return m_presignedUrlConfig; }

    /**
     * <p>Configuration for pre-signed S3 URLs.</p>
     */
    inline void SetPresignedUrlConfig(const PresignedUrlConfig& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = value; }

    /**
     * <p>Configuration for pre-signed S3 URLs.</p>
     */
    inline void SetPresignedUrlConfig(PresignedUrlConfig&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::move(value); }

    /**
     * <p>Configuration for pre-signed S3 URLs.</p>
     */
    inline Job& WithPresignedUrlConfig(const PresignedUrlConfig& value) { SetPresignedUrlConfig(value); return *this;}

    /**
     * <p>Configuration for pre-signed S3 URLs.</p>
     */
    inline Job& WithPresignedUrlConfig(PresignedUrlConfig&& value) { SetPresignedUrlConfig(std::move(value)); return *this;}


    /**
     * <p>Allows you to create a staged rollout of a job.</p>
     */
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const{ return m_jobExecutionsRolloutConfig; }

    /**
     * <p>Allows you to create a staged rollout of a job.</p>
     */
    inline void SetJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = value; }

    /**
     * <p>Allows you to create a staged rollout of a job.</p>
     */
    inline void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::move(value); }

    /**
     * <p>Allows you to create a staged rollout of a job.</p>
     */
    inline Job& WithJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { SetJobExecutionsRolloutConfig(value); return *this;}

    /**
     * <p>Allows you to create a staged rollout of a job.</p>
     */
    inline Job& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { SetJobExecutionsRolloutConfig(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the job was created.</p>
     */
    inline Job& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the job was created.</p>
     */
    inline Job& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the job was last updated.</p>
     */
    inline Job& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the job was last updated.</p>
     */
    inline Job& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job was completed.</p>
     */
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job was completed.</p>
     */
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the job was completed.</p>
     */
    inline Job& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the job was completed.</p>
     */
    inline Job& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}


    /**
     * <p>Details about the job process.</p>
     */
    inline const JobProcessDetails& GetJobProcessDetails() const{ return m_jobProcessDetails; }

    /**
     * <p>Details about the job process.</p>
     */
    inline void SetJobProcessDetails(const JobProcessDetails& value) { m_jobProcessDetailsHasBeenSet = true; m_jobProcessDetails = value; }

    /**
     * <p>Details about the job process.</p>
     */
    inline void SetJobProcessDetails(JobProcessDetails&& value) { m_jobProcessDetailsHasBeenSet = true; m_jobProcessDetails = std::move(value); }

    /**
     * <p>Details about the job process.</p>
     */
    inline Job& WithJobProcessDetails(const JobProcessDetails& value) { SetJobProcessDetails(value); return *this;}

    /**
     * <p>Details about the job process.</p>
     */
    inline Job& WithJobProcessDetails(JobProcessDetails&& value) { SetJobProcessDetails(std::move(value)); return *this;}


    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDocumentParameters() const{ return m_documentParameters; }

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline void SetDocumentParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_documentParametersHasBeenSet = true; m_documentParameters = value; }

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline void SetDocumentParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_documentParametersHasBeenSet = true; m_documentParameters = std::move(value); }

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline Job& WithDocumentParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetDocumentParameters(value); return *this;}

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline Job& WithDocumentParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetDocumentParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline Job& AddDocumentParameters(const Aws::String& key, const Aws::String& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline Job& AddDocumentParameters(Aws::String&& key, const Aws::String& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline Job& AddDocumentParameters(const Aws::String& key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline Job& AddDocumentParameters(Aws::String&& key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline Job& AddDocumentParameters(const char* key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline Job& AddDocumentParameters(Aws::String&& key, const char* value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters specified for the job document.</p>
     */
    inline Job& AddDocumentParameters(const char* key, const char* value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, value); return *this; }

  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    TargetSelection m_targetSelection;
    bool m_targetSelectionHasBeenSet;

    JobStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    PresignedUrlConfig m_presignedUrlConfig;
    bool m_presignedUrlConfigHasBeenSet;

    JobExecutionsRolloutConfig m_jobExecutionsRolloutConfig;
    bool m_jobExecutionsRolloutConfigHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    Aws::Utils::DateTime m_completedAt;
    bool m_completedAtHasBeenSet;

    JobProcessDetails m_jobProcessDetails;
    bool m_jobProcessDetailsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_documentParameters;
    bool m_documentParametersHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
