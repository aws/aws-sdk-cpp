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
    AWS_IOT_API Job() = default;
    AWS_IOT_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An ARN identifying the job with format
     * "arn:aws:iot:region:account:job/jobId".</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    Job& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    Job& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
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
    inline TargetSelection GetTargetSelection() const { return m_targetSelection; }
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }
    inline void SetTargetSelection(TargetSelection value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }
    inline Job& WithTargetSelection(TargetSelection value) { SetTargetSelection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job, one of <code>IN_PROGRESS</code>,
     * <code>CANCELED</code>, <code>DELETION_IN_PROGRESS</code> or
     * <code>COMPLETED</code>. </p>
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Job& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Will be <code>true</code> if the job was canceled with the optional
     * <code>force</code> parameter set to <code>true</code>.</p>
     */
    inline bool GetForceCanceled() const { return m_forceCanceled; }
    inline bool ForceCanceledHasBeenSet() const { return m_forceCanceledHasBeenSet; }
    inline void SetForceCanceled(bool value) { m_forceCanceledHasBeenSet = true; m_forceCanceled = value; }
    inline Job& WithForceCanceled(bool value) { SetForceCanceled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job was updated, provides the reason code for the update.</p>
     */
    inline const Aws::String& GetReasonCode() const { return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    template<typename ReasonCodeT = Aws::String>
    void SetReasonCode(ReasonCodeT&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::forward<ReasonCodeT>(value); }
    template<typename ReasonCodeT = Aws::String>
    Job& WithReasonCode(ReasonCodeT&& value) { SetReasonCode(std::forward<ReasonCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job was updated, describes the reason for the update.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    Job& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IoT things and thing groups to which the job should be sent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    Job& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Aws::String>
    Job& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A short text description of the job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Job& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for pre-signed S3 URLs.</p>
     */
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const { return m_presignedUrlConfig; }
    inline bool PresignedUrlConfigHasBeenSet() const { return m_presignedUrlConfigHasBeenSet; }
    template<typename PresignedUrlConfigT = PresignedUrlConfig>
    void SetPresignedUrlConfig(PresignedUrlConfigT&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::forward<PresignedUrlConfigT>(value); }
    template<typename PresignedUrlConfigT = PresignedUrlConfig>
    Job& WithPresignedUrlConfig(PresignedUrlConfigT&& value) { SetPresignedUrlConfig(std::forward<PresignedUrlConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to create a staged rollout of a job.</p>
     */
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const { return m_jobExecutionsRolloutConfig; }
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }
    template<typename JobExecutionsRolloutConfigT = JobExecutionsRolloutConfig>
    void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfigT&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::forward<JobExecutionsRolloutConfigT>(value); }
    template<typename JobExecutionsRolloutConfigT = JobExecutionsRolloutConfig>
    Job& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfigT&& value) { SetJobExecutionsRolloutConfig(std::forward<JobExecutionsRolloutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for criteria to abort the job.</p>
     */
    inline const AbortConfig& GetAbortConfig() const { return m_abortConfig; }
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }
    template<typename AbortConfigT = AbortConfig>
    void SetAbortConfig(AbortConfigT&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::forward<AbortConfigT>(value); }
    template<typename AbortConfigT = AbortConfig>
    Job& WithAbortConfig(AbortConfigT&& value) { SetAbortConfig(std::forward<AbortConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Job& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    Job& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    Job& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the job process.</p>
     */
    inline const JobProcessDetails& GetJobProcessDetails() const { return m_jobProcessDetails; }
    inline bool JobProcessDetailsHasBeenSet() const { return m_jobProcessDetailsHasBeenSet; }
    template<typename JobProcessDetailsT = JobProcessDetails>
    void SetJobProcessDetails(JobProcessDetailsT&& value) { m_jobProcessDetailsHasBeenSet = true; m_jobProcessDetails = std::forward<JobProcessDetailsT>(value); }
    template<typename JobProcessDetailsT = JobProcessDetails>
    Job& WithJobProcessDetails(JobProcessDetailsT&& value) { SetJobProcessDetails(std::forward<JobProcessDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline const TimeoutConfig& GetTimeoutConfig() const { return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    template<typename TimeoutConfigT = TimeoutConfig>
    void SetTimeoutConfig(TimeoutConfigT&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::forward<TimeoutConfigT>(value); }
    template<typename TimeoutConfigT = TimeoutConfig>
    Job& WithTimeoutConfig(TimeoutConfigT&& value) { SetTimeoutConfig(std::forward<TimeoutConfigT>(value)); return *this;}
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
    inline const Aws::String& GetNamespaceId() const { return m_namespaceId; }
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
    template<typename NamespaceIdT = Aws::String>
    void SetNamespaceId(NamespaceIdT&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::forward<NamespaceIdT>(value); }
    template<typename NamespaceIdT = Aws::String>
    Job& WithNamespaceId(NamespaceIdT&& value) { SetNamespaceId(std::forward<NamespaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const { return m_jobTemplateArn; }
    inline bool JobTemplateArnHasBeenSet() const { return m_jobTemplateArnHasBeenSet; }
    template<typename JobTemplateArnT = Aws::String>
    void SetJobTemplateArn(JobTemplateArnT&& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = std::forward<JobTemplateArnT>(value); }
    template<typename JobTemplateArnT = Aws::String>
    Job& WithJobTemplateArn(JobTemplateArnT&& value) { SetJobTemplateArn(std::forward<JobTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the criteria to retry the job.</p>
     */
    inline const JobExecutionsRetryConfig& GetJobExecutionsRetryConfig() const { return m_jobExecutionsRetryConfig; }
    inline bool JobExecutionsRetryConfigHasBeenSet() const { return m_jobExecutionsRetryConfigHasBeenSet; }
    template<typename JobExecutionsRetryConfigT = JobExecutionsRetryConfig>
    void SetJobExecutionsRetryConfig(JobExecutionsRetryConfigT&& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = std::forward<JobExecutionsRetryConfigT>(value); }
    template<typename JobExecutionsRetryConfigT = JobExecutionsRetryConfig>
    Job& WithJobExecutionsRetryConfig(JobExecutionsRetryConfigT&& value) { SetJobExecutionsRetryConfig(std::forward<JobExecutionsRetryConfigT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetDocumentParameters() const { return m_documentParameters; }
    inline bool DocumentParametersHasBeenSet() const { return m_documentParametersHasBeenSet; }
    template<typename DocumentParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetDocumentParameters(DocumentParametersT&& value) { m_documentParametersHasBeenSet = true; m_documentParameters = std::forward<DocumentParametersT>(value); }
    template<typename DocumentParametersT = Aws::Map<Aws::String, Aws::String>>
    Job& WithDocumentParameters(DocumentParametersT&& value) { SetDocumentParameters(std::forward<DocumentParametersT>(value)); return *this;}
    template<typename DocumentParametersKeyT = Aws::String, typename DocumentParametersValueT = Aws::String>
    Job& AddDocumentParameters(DocumentParametersKeyT&& key, DocumentParametersValueT&& value) {
      m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::forward<DocumentParametersKeyT>(key), std::forward<DocumentParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates whether a job is concurrent. Will be true when a job is rolling out
     * new job executions or canceling previously created executions, otherwise
     * false.</p>
     */
    inline bool GetIsConcurrent() const { return m_isConcurrent; }
    inline bool IsConcurrentHasBeenSet() const { return m_isConcurrentHasBeenSet; }
    inline void SetIsConcurrent(bool value) { m_isConcurrentHasBeenSet = true; m_isConcurrent = value; }
    inline Job& WithIsConcurrent(bool value) { SetIsConcurrent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline const SchedulingConfig& GetSchedulingConfig() const { return m_schedulingConfig; }
    inline bool SchedulingConfigHasBeenSet() const { return m_schedulingConfigHasBeenSet; }
    template<typename SchedulingConfigT = SchedulingConfig>
    void SetSchedulingConfig(SchedulingConfigT&& value) { m_schedulingConfigHasBeenSet = true; m_schedulingConfig = std::forward<SchedulingConfigT>(value); }
    template<typename SchedulingConfigT = SchedulingConfig>
    Job& WithSchedulingConfig(SchedulingConfigT&& value) { SetSchedulingConfig(std::forward<SchedulingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the next seven maintenance window occurrences and their start
     * times.</p>
     */
    inline const Aws::Vector<ScheduledJobRollout>& GetScheduledJobRollouts() const { return m_scheduledJobRollouts; }
    inline bool ScheduledJobRolloutsHasBeenSet() const { return m_scheduledJobRolloutsHasBeenSet; }
    template<typename ScheduledJobRolloutsT = Aws::Vector<ScheduledJobRollout>>
    void SetScheduledJobRollouts(ScheduledJobRolloutsT&& value) { m_scheduledJobRolloutsHasBeenSet = true; m_scheduledJobRollouts = std::forward<ScheduledJobRolloutsT>(value); }
    template<typename ScheduledJobRolloutsT = Aws::Vector<ScheduledJobRollout>>
    Job& WithScheduledJobRollouts(ScheduledJobRolloutsT&& value) { SetScheduledJobRollouts(std::forward<ScheduledJobRolloutsT>(value)); return *this;}
    template<typename ScheduledJobRolloutsT = ScheduledJobRollout>
    Job& AddScheduledJobRollouts(ScheduledJobRolloutsT&& value) { m_scheduledJobRolloutsHasBeenSet = true; m_scheduledJobRollouts.emplace_back(std::forward<ScheduledJobRolloutsT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetDestinationPackageVersions() const { return m_destinationPackageVersions; }
    inline bool DestinationPackageVersionsHasBeenSet() const { return m_destinationPackageVersionsHasBeenSet; }
    template<typename DestinationPackageVersionsT = Aws::Vector<Aws::String>>
    void SetDestinationPackageVersions(DestinationPackageVersionsT&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions = std::forward<DestinationPackageVersionsT>(value); }
    template<typename DestinationPackageVersionsT = Aws::Vector<Aws::String>>
    Job& WithDestinationPackageVersions(DestinationPackageVersionsT&& value) { SetDestinationPackageVersions(std::forward<DestinationPackageVersionsT>(value)); return *this;}
    template<typename DestinationPackageVersionsT = Aws::String>
    Job& AddDestinationPackageVersions(DestinationPackageVersionsT&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions.emplace_back(std::forward<DestinationPackageVersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    TargetSelection m_targetSelection{TargetSelection::NOT_SET};
    bool m_targetSelectionHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    bool m_forceCanceled{false};
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
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

    bool m_isConcurrent{false};
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
