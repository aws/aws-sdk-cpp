/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TargetSelection.h>
#include <aws/iot/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/PresignedUrlConfig.h>
#include <aws/iot/model/JobExecutionsRolloutConfig.h>
#include <aws/iot/model/AbortConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/JobProcessDetails.h>
#include <aws/iot/model/TimeoutConfig.h>
#include <aws/iot/model/JobExecutionsRetryConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/SchedulingConfig.h>
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
  class Job
  {
  public:
    AWS_IOT_API Job();
    AWS_IOT_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

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
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

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
     * completed by all things originally in the group. </p>  <p>We recommend
     * that you use continuous jobs instead of snapshot jobs for dynamic thing group
     * targets. By using continuous jobs, devices that join the group receive the job
     * execution even after the job has been created.</p> 
     */
    inline const TargetSelection& GetTargetSelection() const{ return m_targetSelection; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a device when the thing
     * representing the device is added to a target group, even after the job was
     * completed by all things originally in the group. </p>  <p>We recommend
     * that you use continuous jobs instead of snapshot jobs for dynamic thing group
     * targets. By using continuous jobs, devices that join the group receive the job
     * execution even after the job has been created.</p> 
     */
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a device when the thing
     * representing the device is added to a target group, even after the job was
     * completed by all things originally in the group. </p>  <p>We recommend
     * that you use continuous jobs instead of snapshot jobs for dynamic thing group
     * targets. By using continuous jobs, devices that join the group receive the job
     * execution even after the job has been created.</p> 
     */
    inline void SetTargetSelection(const TargetSelection& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a device when the thing
     * representing the device is added to a target group, even after the job was
     * completed by all things originally in the group. </p>  <p>We recommend
     * that you use continuous jobs instead of snapshot jobs for dynamic thing group
     * targets. By using continuous jobs, devices that join the group receive the job
     * execution even after the job has been created.</p> 
     */
    inline void SetTargetSelection(TargetSelection&& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = std::move(value); }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a device when the thing
     * representing the device is added to a target group, even after the job was
     * completed by all things originally in the group. </p>  <p>We recommend
     * that you use continuous jobs instead of snapshot jobs for dynamic thing group
     * targets. By using continuous jobs, devices that join the group receive the job
     * execution even after the job has been created.</p> 
     */
    inline Job& WithTargetSelection(const TargetSelection& value) { SetTargetSelection(value); return *this;}

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a device when the thing
     * representing the device is added to a target group, even after the job was
     * completed by all things originally in the group. </p>  <p>We recommend
     * that you use continuous jobs instead of snapshot jobs for dynamic thing group
     * targets. By using continuous jobs, devices that join the group receive the job
     * execution even after the job has been created.</p> 
     */
    inline Job& WithTargetSelection(TargetSelection&& value) { SetTargetSelection(std::move(value)); return *this;}


    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, <code>DELETION_IN_PROGRESS</code> or
     * <code>COMPLETED</code>. </p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, <code>DELETION_IN_PROGRESS</code> or
     * <code>COMPLETED</code>. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, <code>DELETION_IN_PROGRESS</code> or
     * <code>COMPLETED</code>. </p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, <code>DELETION_IN_PROGRESS</code> or
     * <code>COMPLETED</code>. </p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, <code>DELETION_IN_PROGRESS</code> or
     * <code>COMPLETED</code>. </p>
     */
    inline Job& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, <code>DELETION_IN_PROGRESS</code> or
     * <code>COMPLETED</code>. </p>
     */
    inline Job& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Will be <code>true</code> if the job was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline bool GetForceCanceled() const{ return m_forceCanceled; }

    /**
     * <p>Will be <code>true</code> if the job was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline bool ForceCanceledHasBeenSet() const { return m_forceCanceledHasBeenSet; }

    /**
     * <p>Will be <code>true</code> if the job was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline void SetForceCanceled(bool value) { m_forceCanceledHasBeenSet = true; m_forceCanceled = value; }

    /**
     * <p>Will be <code>true</code> if the job was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline Job& WithForceCanceled(bool value) { SetForceCanceled(value); return *this;}


    /**
     * <p>If the job was updated, provides the reason code for the update.</p>
     */
    inline const Aws::String& GetReasonCode() const{ return m_reasonCode; }

    /**
     * <p>If the job was updated, provides the reason code for the update.</p>
     */
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }

    /**
     * <p>If the job was updated, provides the reason code for the update.</p>
     */
    inline void SetReasonCode(const Aws::String& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }

    /**
     * <p>If the job was updated, provides the reason code for the update.</p>
     */
    inline void SetReasonCode(Aws::String&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }

    /**
     * <p>If the job was updated, provides the reason code for the update.</p>
     */
    inline void SetReasonCode(const char* value) { m_reasonCodeHasBeenSet = true; m_reasonCode.assign(value); }

    /**
     * <p>If the job was updated, provides the reason code for the update.</p>
     */
    inline Job& WithReasonCode(const Aws::String& value) { SetReasonCode(value); return *this;}

    /**
     * <p>If the job was updated, provides the reason code for the update.</p>
     */
    inline Job& WithReasonCode(Aws::String&& value) { SetReasonCode(std::move(value)); return *this;}

    /**
     * <p>If the job was updated, provides the reason code for the update.</p>
     */
    inline Job& WithReasonCode(const char* value) { SetReasonCode(value); return *this;}


    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

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
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

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
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

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
    inline bool PresignedUrlConfigHasBeenSet() const { return m_presignedUrlConfigHasBeenSet; }

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
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }

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
     * <p>Configuration for criteria to abort the job.</p>
     */
    inline const AbortConfig& GetAbortConfig() const{ return m_abortConfig; }

    /**
     * <p>Configuration for criteria to abort the job.</p>
     */
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }

    /**
     * <p>Configuration for criteria to abort the job.</p>
     */
    inline void SetAbortConfig(const AbortConfig& value) { m_abortConfigHasBeenSet = true; m_abortConfig = value; }

    /**
     * <p>Configuration for criteria to abort the job.</p>
     */
    inline void SetAbortConfig(AbortConfig&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::move(value); }

    /**
     * <p>Configuration for criteria to abort the job.</p>
     */
    inline Job& WithAbortConfig(const AbortConfig& value) { SetAbortConfig(value); return *this;}

    /**
     * <p>Configuration for criteria to abort the job.</p>
     */
    inline Job& WithAbortConfig(AbortConfig&& value) { SetAbortConfig(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds since the epoch, when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in seconds since the epoch, when the job was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time, in seconds since the epoch, when the job was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time, in seconds since the epoch, when the job was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time, in seconds since the epoch, when the job was created.</p>
     */
    inline Job& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in seconds since the epoch, when the job was created.</p>
     */
    inline Job& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds since the epoch, when the job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in seconds since the epoch, when the job was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time, in seconds since the epoch, when the job was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time, in seconds since the epoch, when the job was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in seconds since the epoch, when the job was last updated.</p>
     */
    inline Job& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in seconds since the epoch, when the job was last updated.</p>
     */
    inline Job& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds since the epoch, when the job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }

    /**
     * <p>The time, in seconds since the epoch, when the job was completed.</p>
     */
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }

    /**
     * <p>The time, in seconds since the epoch, when the job was completed.</p>
     */
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }

    /**
     * <p>The time, in seconds since the epoch, when the job was completed.</p>
     */
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }

    /**
     * <p>The time, in seconds since the epoch, when the job was completed.</p>
     */
    inline Job& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}

    /**
     * <p>The time, in seconds since the epoch, when the job was completed.</p>
     */
    inline Job& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}


    /**
     * <p>Details about the job process.</p>
     */
    inline const JobProcessDetails& GetJobProcessDetails() const{ return m_jobProcessDetails; }

    /**
     * <p>Details about the job process.</p>
     */
    inline bool JobProcessDetailsHasBeenSet() const { return m_jobProcessDetailsHasBeenSet; }

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
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline const TimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline void SetTimeoutConfig(const TimeoutConfig& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = value; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline void SetTimeoutConfig(TimeoutConfig&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::move(value); }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline Job& WithTimeoutConfig(const TimeoutConfig& value) { SetTimeoutConfig(value); return *this;}

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline Job& WithTimeoutConfig(TimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}


    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline Job& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline Job& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}

    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is in public preview.</p>
     * 
     */
    inline Job& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}


    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const{ return m_jobTemplateArn; }

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline bool JobTemplateArnHasBeenSet() const { return m_jobTemplateArnHasBeenSet; }

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline void SetJobTemplateArn(const Aws::String& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = value; }

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline void SetJobTemplateArn(Aws::String&& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = std::move(value); }

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline void SetJobTemplateArn(const char* value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn.assign(value); }

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline Job& WithJobTemplateArn(const Aws::String& value) { SetJobTemplateArn(value); return *this;}

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline Job& WithJobTemplateArn(Aws::String&& value) { SetJobTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline Job& WithJobTemplateArn(const char* value) { SetJobTemplateArn(value); return *this;}


    /**
     * <p>The configuration for the criteria to retry the job.</p>
     */
    inline const JobExecutionsRetryConfig& GetJobExecutionsRetryConfig() const{ return m_jobExecutionsRetryConfig; }

    /**
     * <p>The configuration for the criteria to retry the job.</p>
     */
    inline bool JobExecutionsRetryConfigHasBeenSet() const { return m_jobExecutionsRetryConfigHasBeenSet; }

    /**
     * <p>The configuration for the criteria to retry the job.</p>
     */
    inline void SetJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = value; }

    /**
     * <p>The configuration for the criteria to retry the job.</p>
     */
    inline void SetJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = std::move(value); }

    /**
     * <p>The configuration for the criteria to retry the job.</p>
     */
    inline Job& WithJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { SetJobExecutionsRetryConfig(value); return *this;}

    /**
     * <p>The configuration for the criteria to retry the job.</p>
     */
    inline Job& WithJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { SetJobExecutionsRetryConfig(std::move(value)); return *this;}


    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDocumentParameters() const{ return m_documentParameters; }

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline bool DocumentParametersHasBeenSet() const { return m_documentParametersHasBeenSet; }

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline void SetDocumentParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_documentParametersHasBeenSet = true; m_documentParameters = value; }

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline void SetDocumentParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_documentParametersHasBeenSet = true; m_documentParameters = std::move(value); }

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline Job& WithDocumentParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetDocumentParameters(value); return *this;}

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline Job& WithDocumentParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetDocumentParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline Job& AddDocumentParameters(const Aws::String& key, const Aws::String& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline Job& AddDocumentParameters(Aws::String&& key, const Aws::String& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline Job& AddDocumentParameters(const Aws::String& key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline Job& AddDocumentParameters(Aws::String&& key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline Job& AddDocumentParameters(const char* key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline Job& AddDocumentParameters(Aws::String&& key, const char* value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline Job& AddDocumentParameters(const char* key, const char* value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, value); return *this; }


    /**
     * <p>Indicates whether a job is concurrent. Will be true when a job is rolling out
     * new job executions or canceling previously created executions, otherwise
     * false.</p>
     */
    inline bool GetIsConcurrent() const{ return m_isConcurrent; }

    /**
     * <p>Indicates whether a job is concurrent. Will be true when a job is rolling out
     * new job executions or canceling previously created executions, otherwise
     * false.</p>
     */
    inline bool IsConcurrentHasBeenSet() const { return m_isConcurrentHasBeenSet; }

    /**
     * <p>Indicates whether a job is concurrent. Will be true when a job is rolling out
     * new job executions or canceling previously created executions, otherwise
     * false.</p>
     */
    inline void SetIsConcurrent(bool value) { m_isConcurrentHasBeenSet = true; m_isConcurrent = value; }

    /**
     * <p>Indicates whether a job is concurrent. Will be true when a job is rolling out
     * new job executions or canceling previously created executions, otherwise
     * false.</p>
     */
    inline Job& WithIsConcurrent(bool value) { SetIsConcurrent(value); return *this;}


    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline const SchedulingConfig& GetSchedulingConfig() const{ return m_schedulingConfig; }

    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline bool SchedulingConfigHasBeenSet() const { return m_schedulingConfigHasBeenSet; }

    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline void SetSchedulingConfig(const SchedulingConfig& value) { m_schedulingConfigHasBeenSet = true; m_schedulingConfig = value; }

    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline void SetSchedulingConfig(SchedulingConfig&& value) { m_schedulingConfigHasBeenSet = true; m_schedulingConfig = std::move(value); }

    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline Job& WithSchedulingConfig(const SchedulingConfig& value) { SetSchedulingConfig(value); return *this;}

    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline Job& WithSchedulingConfig(SchedulingConfig&& value) { SetSchedulingConfig(std::move(value)); return *this;}

  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    TargetSelection m_targetSelection;
    bool m_targetSelectionHasBeenSet = false;

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    bool m_forceCanceled;
    bool m_forceCanceledHasBeenSet = false;

    Aws::String m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PresignedUrlConfig m_presignedUrlConfig;
    bool m_presignedUrlConfigHasBeenSet = false;

    JobExecutionsRolloutConfig m_jobExecutionsRolloutConfig;
    bool m_jobExecutionsRolloutConfigHasBeenSet = false;

    AbortConfig m_abortConfig;
    bool m_abortConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt;
    bool m_completedAtHasBeenSet = false;

    JobProcessDetails m_jobProcessDetails;
    bool m_jobProcessDetailsHasBeenSet = false;

    TimeoutConfig m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;

    Aws::String m_jobTemplateArn;
    bool m_jobTemplateArnHasBeenSet = false;

    JobExecutionsRetryConfig m_jobExecutionsRetryConfig;
    bool m_jobExecutionsRetryConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_documentParameters;
    bool m_documentParametersHasBeenSet = false;

    bool m_isConcurrent;
    bool m_isConcurrentHasBeenSet = false;

    SchedulingConfig m_schedulingConfig;
    bool m_schedulingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
