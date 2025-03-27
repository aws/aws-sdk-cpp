/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/RetryStrategy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ContainerDetail.h>
#include <aws/batch/model/NodeDetails.h>
#include <aws/batch/model/NodeProperties.h>
#include <aws/batch/model/ArrayPropertiesDetail.h>
#include <aws/batch/model/JobTimeout.h>
#include <aws/batch/model/EksPropertiesDetail.h>
#include <aws/batch/model/EcsPropertiesDetail.h>
#include <aws/batch/model/ConsumableResourceProperties.h>
#include <aws/batch/model/AttemptDetail.h>
#include <aws/batch/model/JobDependency.h>
#include <aws/batch/model/PlatformCapability.h>
#include <aws/batch/model/EksAttemptDetail.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents an Batch job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobDetail">AWS API
   * Reference</a></p>
   */
  class JobDetail
  {
  public:
    AWS_BATCH_API JobDetail() = default;
    AWS_BATCH_API JobDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    JobDetail& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job name.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    JobDetail& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    JobDetail& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job queue that the job is associated
     * with.</p>
     */
    inline const Aws::String& GetJobQueue() const { return m_jobQueue; }
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }
    template<typename JobQueueT = Aws::String>
    void SetJobQueue(JobQueueT&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::forward<JobQueueT>(value); }
    template<typename JobQueueT = Aws::String>
    JobDetail& WithJobQueue(JobQueueT&& value) { SetJobQueue(std::forward<JobQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status for the job.</p>  <p>If your jobs don't progress to
     * <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * stuck in RUNNABLE status</a> in the troubleshooting section of the <i>Batch User
     * Guide</i>.</p> 
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JobDetail& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The share identifier for the job.</p>
     */
    inline const Aws::String& GetShareIdentifier() const { return m_shareIdentifier; }
    inline bool ShareIdentifierHasBeenSet() const { return m_shareIdentifierHasBeenSet; }
    template<typename ShareIdentifierT = Aws::String>
    void SetShareIdentifier(ShareIdentifierT&& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = std::forward<ShareIdentifierT>(value); }
    template<typename ShareIdentifierT = Aws::String>
    JobDetail& WithShareIdentifier(ShareIdentifierT&& value) { SetShareIdentifier(std::forward<ShareIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling policy of the job definition. This only affects jobs in job
     * queues with a fair-share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline int GetSchedulingPriority() const { return m_schedulingPriority; }
    inline bool SchedulingPriorityHasBeenSet() const { return m_schedulingPriorityHasBeenSet; }
    inline void SetSchedulingPriority(int value) { m_schedulingPriorityHasBeenSet = true; m_schedulingPriority = value; }
    inline JobDetail& WithSchedulingPriority(int value) { SetSchedulingPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline const Aws::Vector<AttemptDetail>& GetAttempts() const { return m_attempts; }
    inline bool AttemptsHasBeenSet() const { return m_attemptsHasBeenSet; }
    template<typename AttemptsT = Aws::Vector<AttemptDetail>>
    void SetAttempts(AttemptsT&& value) { m_attemptsHasBeenSet = true; m_attempts = std::forward<AttemptsT>(value); }
    template<typename AttemptsT = Aws::Vector<AttemptDetail>>
    JobDetail& WithAttempts(AttemptsT&& value) { SetAttempts(std::forward<AttemptsT>(value)); return *this;}
    template<typename AttemptsT = AttemptDetail>
    JobDetail& AddAttempts(AttemptsT&& value) { m_attemptsHasBeenSet = true; m_attempts.emplace_back(std::forward<AttemptsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p> <ul> <li> <p>
     * <code>CAPACITY:INSUFFICIENT_INSTANCE_CAPACITY</code> - All compute environments
     * have insufficient capacity to service the job.</p> </li> <li> <p>
     * <code>MISCONFIGURATION:COMPUTE_ENVIRONMENT_MAX_RESOURCE</code> - All compute
     * environments have a <code>maxVcpu</code> setting that is smaller than the job
     * requirements.</p> </li> <li> <p>
     * <code>MISCONFIGURATION:JOB_RESOURCE_REQUIREMENT</code> - All compute
     * environments have no connected instances that meet the job requirements.</p>
     * </li> <li> <p> <code>MISCONFIGURATION:SERVICE_ROLE_PERMISSIONS</code> - All
     * compute environments have problems with the service role permissions.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    JobDetail& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was created. For
     * non-array jobs and parent array jobs, this is when the job entered the
     * <code>SUBMITTED</code> state. This is specifically at the time <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_SubmitJob.html">SubmitJob</a>
     * was called. For array child jobs, this is when the child job was spawned by its
     * parent and entered the <code>PENDING</code> state.</p>
     */
    inline long long GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline JobDetail& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const { return m_retryStrategy; }
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
    template<typename RetryStrategyT = RetryStrategy>
    void SetRetryStrategy(RetryStrategyT&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::forward<RetryStrategyT>(value); }
    template<typename RetryStrategyT = RetryStrategy>
    JobDetail& WithRetryStrategy(RetryStrategyT&& value) { SetRetryStrategy(std::forward<RetryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was started. More
     * specifically, it's when the job transitioned from the <code>STARTING</code>
     * state to the <code>RUNNING</code> state. </p>
     */
    inline long long GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline JobDetail& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was stopped. More
     * specifically, it's when the job transitioned from the <code>RUNNING</code> state
     * to a terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline long long GetStoppedAt() const { return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline JobDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of job IDs that this job depends on.</p>
     */
    inline const Aws::Vector<JobDependency>& GetDependsOn() const { return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    template<typename DependsOnT = Aws::Vector<JobDependency>>
    void SetDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::forward<DependsOnT>(value); }
    template<typename DependsOnT = Aws::Vector<JobDependency>>
    JobDetail& WithDependsOn(DependsOnT&& value) { SetDependsOn(std::forward<DependsOnT>(value)); return *this;}
    template<typename DependsOnT = JobDependency>
    JobDetail& AddDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.emplace_back(std::forward<DependsOnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job definition that this job uses.</p>
     */
    inline const Aws::String& GetJobDefinition() const { return m_jobDefinition; }
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }
    template<typename JobDefinitionT = Aws::String>
    void SetJobDefinition(JobDefinitionT&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::forward<JobDefinitionT>(value); }
    template<typename JobDefinitionT = Aws::String>
    JobDetail& WithJobDefinition(JobDefinitionT&& value) { SetJobDefinition(std::forward<JobDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    JobDetail& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    JobDetail& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An object that represents the details for the container that's associated
     * with the job. If the details are for a multiple-container job, this object will
     * be empty. </p>
     */
    inline const ContainerDetail& GetContainer() const { return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    template<typename ContainerT = ContainerDetail>
    void SetContainer(ContainerT&& value) { m_containerHasBeenSet = true; m_container = std::forward<ContainerT>(value); }
    template<typename ContainerT = ContainerDetail>
    JobDetail& WithContainer(ContainerT&& value) { SetContainer(std::forward<ContainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the details of a node that's associated with a
     * multi-node parallel job.</p>
     */
    inline const NodeDetails& GetNodeDetails() const { return m_nodeDetails; }
    inline bool NodeDetailsHasBeenSet() const { return m_nodeDetailsHasBeenSet; }
    template<typename NodeDetailsT = NodeDetails>
    void SetNodeDetails(NodeDetailsT&& value) { m_nodeDetailsHasBeenSet = true; m_nodeDetails = std::forward<NodeDetailsT>(value); }
    template<typename NodeDetailsT = NodeDetails>
    JobDetail& WithNodeDetails(NodeDetailsT&& value) { SetNodeDetails(std::forward<NodeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the node properties of a multi-node parallel
     * job.</p>  <p>This isn't applicable to jobs that are running on Fargate
     * resources.</p> 
     */
    inline const NodeProperties& GetNodeProperties() const { return m_nodeProperties; }
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }
    template<typename NodePropertiesT = NodeProperties>
    void SetNodeProperties(NodePropertiesT&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::forward<NodePropertiesT>(value); }
    template<typename NodePropertiesT = NodeProperties>
    JobDetail& WithNodeProperties(NodePropertiesT&& value) { SetNodeProperties(std::forward<NodePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array properties of the job, if it's an array job.</p>
     */
    inline const ArrayPropertiesDetail& GetArrayProperties() const { return m_arrayProperties; }
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }
    template<typename ArrayPropertiesT = ArrayPropertiesDetail>
    void SetArrayProperties(ArrayPropertiesT&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::forward<ArrayPropertiesT>(value); }
    template<typename ArrayPropertiesT = ArrayPropertiesDetail>
    JobDetail& WithArrayProperties(ArrayPropertiesT&& value) { SetArrayProperties(std::forward<ArrayPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout configuration for the job.</p>
     */
    inline const JobTimeout& GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    template<typename TimeoutT = JobTimeout>
    void SetTimeout(TimeoutT&& value) { m_timeoutHasBeenSet = true; m_timeout = std::forward<TimeoutT>(value); }
    template<typename TimeoutT = JobTimeout>
    JobDetail& WithTimeout(TimeoutT&& value) { SetTimeout(std::forward<TimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    JobDetail& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    JobDetail& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to propagate the tags from the job or job definition to the
     * corresponding Amazon ECS task. If no value is specified, the tags aren't
     * propagated. Tags can only be propagated to the tasks when the tasks are created.
     * For tags with the same name, job tags are given priority over job definitions
     * tags. If the total number of combined tags from the job and job definition is
     * over 50, the job is moved to the <code>FAILED</code> state.</p>
     */
    inline bool GetPropagateTags() const { return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(bool value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline JobDetail& WithPropagateTags(bool value) { SetPropagateTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline const Aws::Vector<PlatformCapability>& GetPlatformCapabilities() const { return m_platformCapabilities; }
    inline bool PlatformCapabilitiesHasBeenSet() const { return m_platformCapabilitiesHasBeenSet; }
    template<typename PlatformCapabilitiesT = Aws::Vector<PlatformCapability>>
    void SetPlatformCapabilities(PlatformCapabilitiesT&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities = std::forward<PlatformCapabilitiesT>(value); }
    template<typename PlatformCapabilitiesT = Aws::Vector<PlatformCapability>>
    JobDetail& WithPlatformCapabilities(PlatformCapabilitiesT&& value) { SetPlatformCapabilities(std::forward<PlatformCapabilitiesT>(value)); return *this;}
    inline JobDetail& AddPlatformCapabilities(PlatformCapability value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * </p>
     */
    inline const EksPropertiesDetail& GetEksProperties() const { return m_eksProperties; }
    inline bool EksPropertiesHasBeenSet() const { return m_eksPropertiesHasBeenSet; }
    template<typename EksPropertiesT = EksPropertiesDetail>
    void SetEksProperties(EksPropertiesT&& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = std::forward<EksPropertiesT>(value); }
    template<typename EksPropertiesT = EksPropertiesDetail>
    JobDetail& WithEksProperties(EksPropertiesT&& value) { SetEksProperties(std::forward<EksPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline const Aws::Vector<EksAttemptDetail>& GetEksAttempts() const { return m_eksAttempts; }
    inline bool EksAttemptsHasBeenSet() const { return m_eksAttemptsHasBeenSet; }
    template<typename EksAttemptsT = Aws::Vector<EksAttemptDetail>>
    void SetEksAttempts(EksAttemptsT&& value) { m_eksAttemptsHasBeenSet = true; m_eksAttempts = std::forward<EksAttemptsT>(value); }
    template<typename EksAttemptsT = Aws::Vector<EksAttemptDetail>>
    JobDetail& WithEksAttempts(EksAttemptsT&& value) { SetEksAttempts(std::forward<EksAttemptsT>(value)); return *this;}
    template<typename EksAttemptsT = EksAttemptDetail>
    JobDetail& AddEksAttempts(EksAttemptsT&& value) { m_eksAttemptsHasBeenSet = true; m_eksAttempts.emplace_back(std::forward<EksAttemptsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object with properties that are specific to Amazon ECS-based jobs. </p>
     */
    inline const EcsPropertiesDetail& GetEcsProperties() const { return m_ecsProperties; }
    inline bool EcsPropertiesHasBeenSet() const { return m_ecsPropertiesHasBeenSet; }
    template<typename EcsPropertiesT = EcsPropertiesDetail>
    void SetEcsProperties(EcsPropertiesT&& value) { m_ecsPropertiesHasBeenSet = true; m_ecsProperties = std::forward<EcsPropertiesT>(value); }
    template<typename EcsPropertiesT = EcsPropertiesDetail>
    JobDetail& WithEcsProperties(EcsPropertiesT&& value) { SetEcsProperties(std::forward<EcsPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the job is canceled.</p>
     */
    inline bool GetIsCancelled() const { return m_isCancelled; }
    inline bool IsCancelledHasBeenSet() const { return m_isCancelledHasBeenSet; }
    inline void SetIsCancelled(bool value) { m_isCancelledHasBeenSet = true; m_isCancelled = value; }
    inline JobDetail& WithIsCancelled(bool value) { SetIsCancelled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the job is terminated.</p>
     */
    inline bool GetIsTerminated() const { return m_isTerminated; }
    inline bool IsTerminatedHasBeenSet() const { return m_isTerminatedHasBeenSet; }
    inline void SetIsTerminated(bool value) { m_isTerminatedHasBeenSet = true; m_isTerminated = value; }
    inline JobDetail& WithIsTerminated(bool value) { SetIsTerminated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of consumable resources required by the job.</p>
     */
    inline const ConsumableResourceProperties& GetConsumableResourceProperties() const { return m_consumableResourceProperties; }
    inline bool ConsumableResourcePropertiesHasBeenSet() const { return m_consumableResourcePropertiesHasBeenSet; }
    template<typename ConsumableResourcePropertiesT = ConsumableResourceProperties>
    void SetConsumableResourceProperties(ConsumableResourcePropertiesT&& value) { m_consumableResourcePropertiesHasBeenSet = true; m_consumableResourceProperties = std::forward<ConsumableResourcePropertiesT>(value); }
    template<typename ConsumableResourcePropertiesT = ConsumableResourceProperties>
    JobDetail& WithConsumableResourceProperties(ConsumableResourcePropertiesT&& value) { SetConsumableResourceProperties(std::forward<ConsumableResourcePropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_shareIdentifier;
    bool m_shareIdentifierHasBeenSet = false;

    int m_schedulingPriority{0};
    bool m_schedulingPriorityHasBeenSet = false;

    Aws::Vector<AttemptDetail> m_attempts;
    bool m_attemptsHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    long long m_createdAt{0};
    bool m_createdAtHasBeenSet = false;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    long long m_startedAt{0};
    bool m_startedAtHasBeenSet = false;

    long long m_stoppedAt{0};
    bool m_stoppedAtHasBeenSet = false;

    Aws::Vector<JobDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    ContainerDetail m_container;
    bool m_containerHasBeenSet = false;

    NodeDetails m_nodeDetails;
    bool m_nodeDetailsHasBeenSet = false;

    NodeProperties m_nodeProperties;
    bool m_nodePropertiesHasBeenSet = false;

    ArrayPropertiesDetail m_arrayProperties;
    bool m_arrayPropertiesHasBeenSet = false;

    JobTimeout m_timeout;
    bool m_timeoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_propagateTags{false};
    bool m_propagateTagsHasBeenSet = false;

    Aws::Vector<PlatformCapability> m_platformCapabilities;
    bool m_platformCapabilitiesHasBeenSet = false;

    EksPropertiesDetail m_eksProperties;
    bool m_eksPropertiesHasBeenSet = false;

    Aws::Vector<EksAttemptDetail> m_eksAttempts;
    bool m_eksAttemptsHasBeenSet = false;

    EcsPropertiesDetail m_ecsProperties;
    bool m_ecsPropertiesHasBeenSet = false;

    bool m_isCancelled{false};
    bool m_isCancelledHasBeenSet = false;

    bool m_isTerminated{false};
    bool m_isTerminatedHasBeenSet = false;

    ConsumableResourceProperties m_consumableResourceProperties;
    bool m_consumableResourcePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
