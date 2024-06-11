﻿/**
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
#include <aws/iot/model/ScheduledJobRollout.h>
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


    ///@{
    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline Job& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline Job& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline Job& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline Job& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline Job& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline Job& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
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
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }
    inline void SetTargetSelection(const TargetSelection& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }
    inline void SetTargetSelection(TargetSelection&& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = std::move(value); }
    inline Job& WithTargetSelection(const TargetSelection& value) { SetTargetSelection(value); return *this;}
    inline Job& WithTargetSelection(TargetSelection&& value) { SetTargetSelection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, <code>DELETION_IN_PROGRESS</code> or
     * <code>COMPLETED</code>. </p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Job& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline Job& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Will be <code>true</code> if the job was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline bool GetForceCanceled() const{ return m_forceCanceled; }
    inline bool ForceCanceledHasBeenSet() const { return m_forceCanceledHasBeenSet; }
    inline void SetForceCanceled(bool value) { m_forceCanceledHasBeenSet = true; m_forceCanceled = value; }
    inline Job& WithForceCanceled(bool value) { SetForceCanceled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job was updated, provides the reason code for the update.</p>
     */
    inline const Aws::String& GetReasonCode() const{ return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    inline void SetReasonCode(const Aws::String& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }
    inline void SetReasonCode(Aws::String&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }
    inline void SetReasonCode(const char* value) { m_reasonCodeHasBeenSet = true; m_reasonCode.assign(value); }
    inline Job& WithReasonCode(const Aws::String& value) { SetReasonCode(value); return *this;}
    inline Job& WithReasonCode(Aws::String&& value) { SetReasonCode(std::move(value)); return *this;}
    inline Job& WithReasonCode(const char* value) { SetReasonCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline Job& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline Job& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline Job& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IoT things and thing groups to which the job should be sent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline Job& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}
    inline Job& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}
    inline Job& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline Job& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    inline Job& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A short text description of the job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Job& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Job& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Job& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for pre-signed S3 URLs.</p>
     */
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const{ return m_presignedUrlConfig; }
    inline bool PresignedUrlConfigHasBeenSet() const { return m_presignedUrlConfigHasBeenSet; }
    inline void SetPresignedUrlConfig(const PresignedUrlConfig& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = value; }
    inline void SetPresignedUrlConfig(PresignedUrlConfig&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::move(value); }
    inline Job& WithPresignedUrlConfig(const PresignedUrlConfig& value) { SetPresignedUrlConfig(value); return *this;}
    inline Job& WithPresignedUrlConfig(PresignedUrlConfig&& value) { SetPresignedUrlConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to create a staged rollout of a job.</p>
     */
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const{ return m_jobExecutionsRolloutConfig; }
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }
    inline void SetJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = value; }
    inline void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::move(value); }
    inline Job& WithJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { SetJobExecutionsRolloutConfig(value); return *this;}
    inline Job& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { SetJobExecutionsRolloutConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for criteria to abort the job.</p>
     */
    inline const AbortConfig& GetAbortConfig() const{ return m_abortConfig; }
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }
    inline void SetAbortConfig(const AbortConfig& value) { m_abortConfigHasBeenSet = true; m_abortConfig = value; }
    inline void SetAbortConfig(AbortConfig&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::move(value); }
    inline Job& WithAbortConfig(const AbortConfig& value) { SetAbortConfig(value); return *this;}
    inline Job& WithAbortConfig(AbortConfig&& value) { SetAbortConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Job& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Job& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline Job& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline Job& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }
    inline Job& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}
    inline Job& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the job process.</p>
     */
    inline const JobProcessDetails& GetJobProcessDetails() const{ return m_jobProcessDetails; }
    inline bool JobProcessDetailsHasBeenSet() const { return m_jobProcessDetailsHasBeenSet; }
    inline void SetJobProcessDetails(const JobProcessDetails& value) { m_jobProcessDetailsHasBeenSet = true; m_jobProcessDetails = value; }
    inline void SetJobProcessDetails(JobProcessDetails&& value) { m_jobProcessDetailsHasBeenSet = true; m_jobProcessDetails = std::move(value); }
    inline Job& WithJobProcessDetails(const JobProcessDetails& value) { SetJobProcessDetails(value); return *this;}
    inline Job& WithJobProcessDetails(JobProcessDetails&& value) { SetJobProcessDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline const TimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    inline void SetTimeoutConfig(const TimeoutConfig& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = value; }
    inline void SetTimeoutConfig(TimeoutConfig&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::move(value); }
    inline Job& WithTimeoutConfig(const TimeoutConfig& value) { SetTimeoutConfig(value); return *this;}
    inline Job& WithTimeoutConfig(TimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is only supported by IoT
     * Greengrass at this time. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/setting-up.html">Setting
     * up IoT Greengrass core devices.</a> </p> 
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }
    inline Job& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}
    inline Job& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}
    inline Job& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const{ return m_jobTemplateArn; }
    inline bool JobTemplateArnHasBeenSet() const { return m_jobTemplateArnHasBeenSet; }
    inline void SetJobTemplateArn(const Aws::String& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = value; }
    inline void SetJobTemplateArn(Aws::String&& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = std::move(value); }
    inline void SetJobTemplateArn(const char* value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn.assign(value); }
    inline Job& WithJobTemplateArn(const Aws::String& value) { SetJobTemplateArn(value); return *this;}
    inline Job& WithJobTemplateArn(Aws::String&& value) { SetJobTemplateArn(std::move(value)); return *this;}
    inline Job& WithJobTemplateArn(const char* value) { SetJobTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the criteria to retry the job.</p>
     */
    inline const JobExecutionsRetryConfig& GetJobExecutionsRetryConfig() const{ return m_jobExecutionsRetryConfig; }
    inline bool JobExecutionsRetryConfigHasBeenSet() const { return m_jobExecutionsRetryConfigHasBeenSet; }
    inline void SetJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = value; }
    inline void SetJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = std::move(value); }
    inline Job& WithJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { SetJobExecutionsRetryConfig(value); return *this;}
    inline Job& WithJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { SetJobExecutionsRetryConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map that pairs the patterns that need to be replaced in a managed
     * template job document schema. You can use the description of each key as a
     * guidance to specify the inputs during runtime when creating a job.</p> 
     * <p> <code>documentParameters</code> can only be used when creating jobs from
     * Amazon Web Services managed templates. This parameter can't be used with custom
     * job templates or to create jobs from them.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDocumentParameters() const{ return m_documentParameters; }
    inline bool DocumentParametersHasBeenSet() const { return m_documentParametersHasBeenSet; }
    inline void SetDocumentParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_documentParametersHasBeenSet = true; m_documentParameters = value; }
    inline void SetDocumentParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_documentParametersHasBeenSet = true; m_documentParameters = std::move(value); }
    inline Job& WithDocumentParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetDocumentParameters(value); return *this;}
    inline Job& WithDocumentParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetDocumentParameters(std::move(value)); return *this;}
    inline Job& AddDocumentParameters(const Aws::String& key, const Aws::String& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, value); return *this; }
    inline Job& AddDocumentParameters(Aws::String&& key, const Aws::String& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), value); return *this; }
    inline Job& AddDocumentParameters(const Aws::String& key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, std::move(value)); return *this; }
    inline Job& AddDocumentParameters(Aws::String&& key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline Job& AddDocumentParameters(const char* key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, std::move(value)); return *this; }
    inline Job& AddDocumentParameters(Aws::String&& key, const char* value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), value); return *this; }
    inline Job& AddDocumentParameters(const char* key, const char* value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether a job is concurrent. Will be true when a job is rolling out
     * new job executions or canceling previously created executions, otherwise
     * false.</p>
     */
    inline bool GetIsConcurrent() const{ return m_isConcurrent; }
    inline bool IsConcurrentHasBeenSet() const { return m_isConcurrentHasBeenSet; }
    inline void SetIsConcurrent(bool value) { m_isConcurrentHasBeenSet = true; m_isConcurrent = value; }
    inline Job& WithIsConcurrent(bool value) { SetIsConcurrent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline const SchedulingConfig& GetSchedulingConfig() const{ return m_schedulingConfig; }
    inline bool SchedulingConfigHasBeenSet() const { return m_schedulingConfigHasBeenSet; }
    inline void SetSchedulingConfig(const SchedulingConfig& value) { m_schedulingConfigHasBeenSet = true; m_schedulingConfig = value; }
    inline void SetSchedulingConfig(SchedulingConfig&& value) { m_schedulingConfigHasBeenSet = true; m_schedulingConfig = std::move(value); }
    inline Job& WithSchedulingConfig(const SchedulingConfig& value) { SetSchedulingConfig(value); return *this;}
    inline Job& WithSchedulingConfig(SchedulingConfig&& value) { SetSchedulingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the next seven maintenance window occurrences and their start
     * times.</p>
     */
    inline const Aws::Vector<ScheduledJobRollout>& GetScheduledJobRollouts() const{ return m_scheduledJobRollouts; }
    inline bool ScheduledJobRolloutsHasBeenSet() const { return m_scheduledJobRolloutsHasBeenSet; }
    inline void SetScheduledJobRollouts(const Aws::Vector<ScheduledJobRollout>& value) { m_scheduledJobRolloutsHasBeenSet = true; m_scheduledJobRollouts = value; }
    inline void SetScheduledJobRollouts(Aws::Vector<ScheduledJobRollout>&& value) { m_scheduledJobRolloutsHasBeenSet = true; m_scheduledJobRollouts = std::move(value); }
    inline Job& WithScheduledJobRollouts(const Aws::Vector<ScheduledJobRollout>& value) { SetScheduledJobRollouts(value); return *this;}
    inline Job& WithScheduledJobRollouts(Aws::Vector<ScheduledJobRollout>&& value) { SetScheduledJobRollouts(std::move(value)); return *this;}
    inline Job& AddScheduledJobRollouts(const ScheduledJobRollout& value) { m_scheduledJobRolloutsHasBeenSet = true; m_scheduledJobRollouts.push_back(value); return *this; }
    inline Job& AddScheduledJobRollouts(ScheduledJobRollout&& value) { m_scheduledJobRolloutsHasBeenSet = true; m_scheduledJobRollouts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The package version Amazon Resource Names (ARNs) that are installed on the
     * device when the job successfully completes. The package version must be in
     * either the Published or Deprecated state when the job deploys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.The package version must be in either the Published or
     * Deprecated state when the job deploys. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p> <p> <b>Note:</b>The following Length Constraints
     * relates to a single ARN. Up to 25 package version ARNs are allowed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationPackageVersions() const{ return m_destinationPackageVersions; }
    inline bool DestinationPackageVersionsHasBeenSet() const { return m_destinationPackageVersionsHasBeenSet; }
    inline void SetDestinationPackageVersions(const Aws::Vector<Aws::String>& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions = value; }
    inline void SetDestinationPackageVersions(Aws::Vector<Aws::String>&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions = std::move(value); }
    inline Job& WithDestinationPackageVersions(const Aws::Vector<Aws::String>& value) { SetDestinationPackageVersions(value); return *this;}
    inline Job& WithDestinationPackageVersions(Aws::Vector<Aws::String>&& value) { SetDestinationPackageVersions(std::move(value)); return *this;}
    inline Job& AddDestinationPackageVersions(const Aws::String& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions.push_back(value); return *this; }
    inline Job& AddDestinationPackageVersions(Aws::String&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions.push_back(std::move(value)); return *this; }
    inline Job& AddDestinationPackageVersions(const char* value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions.push_back(value); return *this; }
    ///@}
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

    Aws::Vector<ScheduledJobRollout> m_scheduledJobRollouts;
    bool m_scheduledJobRolloutsHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationPackageVersions;
    bool m_destinationPackageVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
