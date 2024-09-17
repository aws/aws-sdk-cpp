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
    AWS_BATCH_API JobDetail();
    AWS_BATCH_API JobDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline JobDetail& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline JobDetail& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline JobDetail& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job name.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline JobDetail& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline JobDetail& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline JobDetail& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline JobDetail& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline JobDetail& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline JobDetail& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job queue that the job is associated
     * with.</p>
     */
    inline const Aws::String& GetJobQueue() const{ return m_jobQueue; }
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }
    inline void SetJobQueue(const Aws::String& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }
    inline void SetJobQueue(Aws::String&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::move(value); }
    inline void SetJobQueue(const char* value) { m_jobQueueHasBeenSet = true; m_jobQueue.assign(value); }
    inline JobDetail& WithJobQueue(const Aws::String& value) { SetJobQueue(value); return *this;}
    inline JobDetail& WithJobQueue(Aws::String&& value) { SetJobQueue(std::move(value)); return *this;}
    inline JobDetail& WithJobQueue(const char* value) { SetJobQueue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status for the job.</p>  <p>If your jobs don't progress to
     * <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * stuck in RUNNABLE status</a> in the troubleshooting section of the <i>Batch User
     * Guide</i>.</p> 
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline JobDetail& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline JobDetail& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The share identifier for the job.</p>
     */
    inline const Aws::String& GetShareIdentifier() const{ return m_shareIdentifier; }
    inline bool ShareIdentifierHasBeenSet() const { return m_shareIdentifierHasBeenSet; }
    inline void SetShareIdentifier(const Aws::String& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = value; }
    inline void SetShareIdentifier(Aws::String&& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = std::move(value); }
    inline void SetShareIdentifier(const char* value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier.assign(value); }
    inline JobDetail& WithShareIdentifier(const Aws::String& value) { SetShareIdentifier(value); return *this;}
    inline JobDetail& WithShareIdentifier(Aws::String&& value) { SetShareIdentifier(std::move(value)); return *this;}
    inline JobDetail& WithShareIdentifier(const char* value) { SetShareIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling policy of the job definition. This only affects jobs in job
     * queues with a fair share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline int GetSchedulingPriority() const{ return m_schedulingPriority; }
    inline bool SchedulingPriorityHasBeenSet() const { return m_schedulingPriorityHasBeenSet; }
    inline void SetSchedulingPriority(int value) { m_schedulingPriorityHasBeenSet = true; m_schedulingPriority = value; }
    inline JobDetail& WithSchedulingPriority(int value) { SetSchedulingPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline const Aws::Vector<AttemptDetail>& GetAttempts() const{ return m_attempts; }
    inline bool AttemptsHasBeenSet() const { return m_attemptsHasBeenSet; }
    inline void SetAttempts(const Aws::Vector<AttemptDetail>& value) { m_attemptsHasBeenSet = true; m_attempts = value; }
    inline void SetAttempts(Aws::Vector<AttemptDetail>&& value) { m_attemptsHasBeenSet = true; m_attempts = std::move(value); }
    inline JobDetail& WithAttempts(const Aws::Vector<AttemptDetail>& value) { SetAttempts(value); return *this;}
    inline JobDetail& WithAttempts(Aws::Vector<AttemptDetail>&& value) { SetAttempts(std::move(value)); return *this;}
    inline JobDetail& AddAttempts(const AttemptDetail& value) { m_attemptsHasBeenSet = true; m_attempts.push_back(value); return *this; }
    inline JobDetail& AddAttempts(AttemptDetail&& value) { m_attemptsHasBeenSet = true; m_attempts.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline JobDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline JobDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline JobDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
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
    inline long long GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline JobDetail& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }
    inline JobDetail& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}
    inline JobDetail& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was started. More
     * specifically, it's when the job transitioned from the <code>STARTING</code>
     * state to the <code>RUNNING</code> state. </p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }
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
    inline long long GetStoppedAt() const{ return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline JobDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of job IDs that this job depends on.</p>
     */
    inline const Aws::Vector<JobDependency>& GetDependsOn() const{ return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    inline void SetDependsOn(const Aws::Vector<JobDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }
    inline void SetDependsOn(Aws::Vector<JobDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }
    inline JobDetail& WithDependsOn(const Aws::Vector<JobDependency>& value) { SetDependsOn(value); return *this;}
    inline JobDetail& WithDependsOn(Aws::Vector<JobDependency>&& value) { SetDependsOn(std::move(value)); return *this;}
    inline JobDetail& AddDependsOn(const JobDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }
    inline JobDetail& AddDependsOn(JobDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job definition that this job uses.</p>
     */
    inline const Aws::String& GetJobDefinition() const{ return m_jobDefinition; }
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }
    inline void SetJobDefinition(const Aws::String& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::move(value); }
    inline void SetJobDefinition(const char* value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition.assign(value); }
    inline JobDetail& WithJobDefinition(const Aws::String& value) { SetJobDefinition(value); return *this;}
    inline JobDetail& WithJobDefinition(Aws::String&& value) { SetJobDefinition(std::move(value)); return *this;}
    inline JobDetail& WithJobDefinition(const char* value) { SetJobDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline JobDetail& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline JobDetail& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline JobDetail& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline JobDetail& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline JobDetail& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline JobDetail& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline JobDetail& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline JobDetail& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline JobDetail& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that represents the details for the container that's associated
     * with the job. If the details are for a multiple-container job, this object will
     * be empty. </p>
     */
    inline const ContainerDetail& GetContainer() const{ return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    inline void SetContainer(const ContainerDetail& value) { m_containerHasBeenSet = true; m_container = value; }
    inline void SetContainer(ContainerDetail&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }
    inline JobDetail& WithContainer(const ContainerDetail& value) { SetContainer(value); return *this;}
    inline JobDetail& WithContainer(ContainerDetail&& value) { SetContainer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the details of a node that's associated with a
     * multi-node parallel job.</p>
     */
    inline const NodeDetails& GetNodeDetails() const{ return m_nodeDetails; }
    inline bool NodeDetailsHasBeenSet() const { return m_nodeDetailsHasBeenSet; }
    inline void SetNodeDetails(const NodeDetails& value) { m_nodeDetailsHasBeenSet = true; m_nodeDetails = value; }
    inline void SetNodeDetails(NodeDetails&& value) { m_nodeDetailsHasBeenSet = true; m_nodeDetails = std::move(value); }
    inline JobDetail& WithNodeDetails(const NodeDetails& value) { SetNodeDetails(value); return *this;}
    inline JobDetail& WithNodeDetails(NodeDetails&& value) { SetNodeDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the node properties of a multi-node parallel
     * job.</p>  <p>This isn't applicable to jobs that are running on Fargate
     * resources.</p> 
     */
    inline const NodeProperties& GetNodeProperties() const{ return m_nodeProperties; }
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }
    inline void SetNodeProperties(const NodeProperties& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }
    inline void SetNodeProperties(NodeProperties&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }
    inline JobDetail& WithNodeProperties(const NodeProperties& value) { SetNodeProperties(value); return *this;}
    inline JobDetail& WithNodeProperties(NodeProperties&& value) { SetNodeProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array properties of the job, if it's an array job.</p>
     */
    inline const ArrayPropertiesDetail& GetArrayProperties() const{ return m_arrayProperties; }
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }
    inline void SetArrayProperties(const ArrayPropertiesDetail& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = value; }
    inline void SetArrayProperties(ArrayPropertiesDetail&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::move(value); }
    inline JobDetail& WithArrayProperties(const ArrayPropertiesDetail& value) { SetArrayProperties(value); return *this;}
    inline JobDetail& WithArrayProperties(ArrayPropertiesDetail&& value) { SetArrayProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout configuration for the job.</p>
     */
    inline const JobTimeout& GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(const JobTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline void SetTimeout(JobTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }
    inline JobDetail& WithTimeout(const JobTimeout& value) { SetTimeout(value); return *this;}
    inline JobDetail& WithTimeout(JobTimeout&& value) { SetTimeout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline JobDetail& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline JobDetail& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline JobDetail& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline JobDetail& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline JobDetail& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline JobDetail& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline JobDetail& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline JobDetail& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline JobDetail& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
    inline bool GetPropagateTags() const{ return m_propagateTags; }
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
    inline const Aws::Vector<PlatformCapability>& GetPlatformCapabilities() const{ return m_platformCapabilities; }
    inline bool PlatformCapabilitiesHasBeenSet() const { return m_platformCapabilitiesHasBeenSet; }
    inline void SetPlatformCapabilities(const Aws::Vector<PlatformCapability>& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities = value; }
    inline void SetPlatformCapabilities(Aws::Vector<PlatformCapability>&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities = std::move(value); }
    inline JobDetail& WithPlatformCapabilities(const Aws::Vector<PlatformCapability>& value) { SetPlatformCapabilities(value); return *this;}
    inline JobDetail& WithPlatformCapabilities(Aws::Vector<PlatformCapability>&& value) { SetPlatformCapabilities(std::move(value)); return *this;}
    inline JobDetail& AddPlatformCapabilities(const PlatformCapability& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(value); return *this; }
    inline JobDetail& AddPlatformCapabilities(PlatformCapability&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * </p>
     */
    inline const EksPropertiesDetail& GetEksProperties() const{ return m_eksProperties; }
    inline bool EksPropertiesHasBeenSet() const { return m_eksPropertiesHasBeenSet; }
    inline void SetEksProperties(const EksPropertiesDetail& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = value; }
    inline void SetEksProperties(EksPropertiesDetail&& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = std::move(value); }
    inline JobDetail& WithEksProperties(const EksPropertiesDetail& value) { SetEksProperties(value); return *this;}
    inline JobDetail& WithEksProperties(EksPropertiesDetail&& value) { SetEksProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline const Aws::Vector<EksAttemptDetail>& GetEksAttempts() const{ return m_eksAttempts; }
    inline bool EksAttemptsHasBeenSet() const { return m_eksAttemptsHasBeenSet; }
    inline void SetEksAttempts(const Aws::Vector<EksAttemptDetail>& value) { m_eksAttemptsHasBeenSet = true; m_eksAttempts = value; }
    inline void SetEksAttempts(Aws::Vector<EksAttemptDetail>&& value) { m_eksAttemptsHasBeenSet = true; m_eksAttempts = std::move(value); }
    inline JobDetail& WithEksAttempts(const Aws::Vector<EksAttemptDetail>& value) { SetEksAttempts(value); return *this;}
    inline JobDetail& WithEksAttempts(Aws::Vector<EksAttemptDetail>&& value) { SetEksAttempts(std::move(value)); return *this;}
    inline JobDetail& AddEksAttempts(const EksAttemptDetail& value) { m_eksAttemptsHasBeenSet = true; m_eksAttempts.push_back(value); return *this; }
    inline JobDetail& AddEksAttempts(EksAttemptDetail&& value) { m_eksAttemptsHasBeenSet = true; m_eksAttempts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object with properties that are specific to Amazon ECS-based jobs. </p>
     */
    inline const EcsPropertiesDetail& GetEcsProperties() const{ return m_ecsProperties; }
    inline bool EcsPropertiesHasBeenSet() const { return m_ecsPropertiesHasBeenSet; }
    inline void SetEcsProperties(const EcsPropertiesDetail& value) { m_ecsPropertiesHasBeenSet = true; m_ecsProperties = value; }
    inline void SetEcsProperties(EcsPropertiesDetail&& value) { m_ecsPropertiesHasBeenSet = true; m_ecsProperties = std::move(value); }
    inline JobDetail& WithEcsProperties(const EcsPropertiesDetail& value) { SetEcsProperties(value); return *this;}
    inline JobDetail& WithEcsProperties(EcsPropertiesDetail&& value) { SetEcsProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the job is canceled.</p>
     */
    inline bool GetIsCancelled() const{ return m_isCancelled; }
    inline bool IsCancelledHasBeenSet() const { return m_isCancelledHasBeenSet; }
    inline void SetIsCancelled(bool value) { m_isCancelledHasBeenSet = true; m_isCancelled = value; }
    inline JobDetail& WithIsCancelled(bool value) { SetIsCancelled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the job is terminated.</p>
     */
    inline bool GetIsTerminated() const{ return m_isTerminated; }
    inline bool IsTerminatedHasBeenSet() const { return m_isTerminatedHasBeenSet; }
    inline void SetIsTerminated(bool value) { m_isTerminatedHasBeenSet = true; m_isTerminated = value; }
    inline JobDetail& WithIsTerminated(bool value) { SetIsTerminated(value); return *this;}
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

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_shareIdentifier;
    bool m_shareIdentifierHasBeenSet = false;

    int m_schedulingPriority;
    bool m_schedulingPriorityHasBeenSet = false;

    Aws::Vector<AttemptDetail> m_attempts;
    bool m_attemptsHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    long long m_createdAt;
    bool m_createdAtHasBeenSet = false;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    long long m_startedAt;
    bool m_startedAtHasBeenSet = false;

    long long m_stoppedAt;
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

    bool m_propagateTags;
    bool m_propagateTagsHasBeenSet = false;

    Aws::Vector<PlatformCapability> m_platformCapabilities;
    bool m_platformCapabilitiesHasBeenSet = false;

    EksPropertiesDetail m_eksProperties;
    bool m_eksPropertiesHasBeenSet = false;

    Aws::Vector<EksAttemptDetail> m_eksAttempts;
    bool m_eksAttemptsHasBeenSet = false;

    EcsPropertiesDetail m_ecsProperties;
    bool m_ecsPropertiesHasBeenSet = false;

    bool m_isCancelled;
    bool m_isCancelledHasBeenSet = false;

    bool m_isTerminated;
    bool m_isTerminatedHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
