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


    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline JobDetail& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline JobDetail& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline JobDetail& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The job name.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The job name.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The job name.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The job name.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The job name.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The job name.</p>
     */
    inline JobDetail& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The job name.</p>
     */
    inline JobDetail& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The job name.</p>
     */
    inline JobDetail& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID.</p>
     */
    inline JobDetail& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline JobDetail& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline JobDetail& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the job queue that the job is associated
     * with.</p>
     */
    inline const Aws::String& GetJobQueue() const{ return m_jobQueue; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue that the job is associated
     * with.</p>
     */
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue that the job is associated
     * with.</p>
     */
    inline void SetJobQueue(const Aws::String& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue that the job is associated
     * with.</p>
     */
    inline void SetJobQueue(Aws::String&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue that the job is associated
     * with.</p>
     */
    inline void SetJobQueue(const char* value) { m_jobQueueHasBeenSet = true; m_jobQueue.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue that the job is associated
     * with.</p>
     */
    inline JobDetail& WithJobQueue(const Aws::String& value) { SetJobQueue(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue that the job is associated
     * with.</p>
     */
    inline JobDetail& WithJobQueue(Aws::String&& value) { SetJobQueue(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue that the job is associated
     * with.</p>
     */
    inline JobDetail& WithJobQueue(const char* value) { SetJobQueue(value); return *this;}


    /**
     * <p>The current status for the job.</p>  <p>If your jobs don't progress to
     * <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * stuck in RUNNABLE status</a> in the troubleshooting section of the <i>Batch User
     * Guide</i>.</p> 
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status for the job.</p>  <p>If your jobs don't progress to
     * <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * stuck in RUNNABLE status</a> in the troubleshooting section of the <i>Batch User
     * Guide</i>.</p> 
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status for the job.</p>  <p>If your jobs don't progress to
     * <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * stuck in RUNNABLE status</a> in the troubleshooting section of the <i>Batch User
     * Guide</i>.</p> 
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status for the job.</p>  <p>If your jobs don't progress to
     * <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * stuck in RUNNABLE status</a> in the troubleshooting section of the <i>Batch User
     * Guide</i>.</p> 
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status for the job.</p>  <p>If your jobs don't progress to
     * <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * stuck in RUNNABLE status</a> in the troubleshooting section of the <i>Batch User
     * Guide</i>.</p> 
     */
    inline JobDetail& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status for the job.</p>  <p>If your jobs don't progress to
     * <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * stuck in RUNNABLE status</a> in the troubleshooting section of the <i>Batch User
     * Guide</i>.</p> 
     */
    inline JobDetail& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The share identifier for the job.</p>
     */
    inline const Aws::String& GetShareIdentifier() const{ return m_shareIdentifier; }

    /**
     * <p>The share identifier for the job.</p>
     */
    inline bool ShareIdentifierHasBeenSet() const { return m_shareIdentifierHasBeenSet; }

    /**
     * <p>The share identifier for the job.</p>
     */
    inline void SetShareIdentifier(const Aws::String& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = value; }

    /**
     * <p>The share identifier for the job.</p>
     */
    inline void SetShareIdentifier(Aws::String&& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = std::move(value); }

    /**
     * <p>The share identifier for the job.</p>
     */
    inline void SetShareIdentifier(const char* value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier.assign(value); }

    /**
     * <p>The share identifier for the job.</p>
     */
    inline JobDetail& WithShareIdentifier(const Aws::String& value) { SetShareIdentifier(value); return *this;}

    /**
     * <p>The share identifier for the job.</p>
     */
    inline JobDetail& WithShareIdentifier(Aws::String&& value) { SetShareIdentifier(std::move(value)); return *this;}

    /**
     * <p>The share identifier for the job.</p>
     */
    inline JobDetail& WithShareIdentifier(const char* value) { SetShareIdentifier(value); return *this;}


    /**
     * <p>The scheduling policy of the job definition. This only affects jobs in job
     * queues with a fair share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline int GetSchedulingPriority() const{ return m_schedulingPriority; }

    /**
     * <p>The scheduling policy of the job definition. This only affects jobs in job
     * queues with a fair share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline bool SchedulingPriorityHasBeenSet() const { return m_schedulingPriorityHasBeenSet; }

    /**
     * <p>The scheduling policy of the job definition. This only affects jobs in job
     * queues with a fair share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline void SetSchedulingPriority(int value) { m_schedulingPriorityHasBeenSet = true; m_schedulingPriority = value; }

    /**
     * <p>The scheduling policy of the job definition. This only affects jobs in job
     * queues with a fair share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline JobDetail& WithSchedulingPriority(int value) { SetSchedulingPriority(value); return *this;}


    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline const Aws::Vector<AttemptDetail>& GetAttempts() const{ return m_attempts; }

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline bool AttemptsHasBeenSet() const { return m_attemptsHasBeenSet; }

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline void SetAttempts(const Aws::Vector<AttemptDetail>& value) { m_attemptsHasBeenSet = true; m_attempts = value; }

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline void SetAttempts(Aws::Vector<AttemptDetail>&& value) { m_attemptsHasBeenSet = true; m_attempts = std::move(value); }

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline JobDetail& WithAttempts(const Aws::Vector<AttemptDetail>& value) { SetAttempts(value); return *this;}

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline JobDetail& WithAttempts(Aws::Vector<AttemptDetail>&& value) { SetAttempts(std::move(value)); return *this;}

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline JobDetail& AddAttempts(const AttemptDetail& value) { m_attemptsHasBeenSet = true; m_attempts.push_back(value); return *this; }

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline JobDetail& AddAttempts(AttemptDetail&& value) { m_attemptsHasBeenSet = true; m_attempts.push_back(std::move(value)); return *this; }


    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline JobDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline JobDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline JobDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was created. For
     * non-array jobs and parent array jobs, this is when the job entered the
     * <code>SUBMITTED</code> state. This is specifically at the time <a>SubmitJob</a>
     * was called. For array child jobs, this is when the child job was spawned by its
     * parent and entered the <code>PENDING</code> state.</p>
     */
    inline long long GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was created. For
     * non-array jobs and parent array jobs, this is when the job entered the
     * <code>SUBMITTED</code> state. This is specifically at the time <a>SubmitJob</a>
     * was called. For array child jobs, this is when the child job was spawned by its
     * parent and entered the <code>PENDING</code> state.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was created. For
     * non-array jobs and parent array jobs, this is when the job entered the
     * <code>SUBMITTED</code> state. This is specifically at the time <a>SubmitJob</a>
     * was called. For array child jobs, this is when the child job was spawned by its
     * parent and entered the <code>PENDING</code> state.</p>
     */
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was created. For
     * non-array jobs and parent array jobs, this is when the job entered the
     * <code>SUBMITTED</code> state. This is specifically at the time <a>SubmitJob</a>
     * was called. For array child jobs, this is when the child job was spawned by its
     * parent and entered the <code>PENDING</code> state.</p>
     */
    inline JobDetail& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}


    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }

    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }

    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }

    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline JobDetail& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline JobDetail& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was started. More
     * specifically, it's when the job transitioned from the <code>STARTING</code>
     * state to the <code>RUNNING</code> state. This parameter isn't provided for child
     * jobs of array jobs or multi-node parallel jobs.</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was started. More
     * specifically, it's when the job transitioned from the <code>STARTING</code>
     * state to the <code>RUNNING</code> state. This parameter isn't provided for child
     * jobs of array jobs or multi-node parallel jobs.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was started. More
     * specifically, it's when the job transitioned from the <code>STARTING</code>
     * state to the <code>RUNNING</code> state. This parameter isn't provided for child
     * jobs of array jobs or multi-node parallel jobs.</p>
     */
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was started. More
     * specifically, it's when the job transitioned from the <code>STARTING</code>
     * state to the <code>RUNNING</code> state. This parameter isn't provided for child
     * jobs of array jobs or multi-node parallel jobs.</p>
     */
    inline JobDetail& WithStartedAt(long long value) { SetStartedAt(value); return *this;}


    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was stopped. More
     * specifically, it's when the job transitioned from the <code>RUNNING</code> state
     * to a terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline long long GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was stopped. More
     * specifically, it's when the job transitioned from the <code>RUNNING</code> state
     * to a terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was stopped. More
     * specifically, it's when the job transitioned from the <code>RUNNING</code> state
     * to a terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was stopped. More
     * specifically, it's when the job transitioned from the <code>RUNNING</code> state
     * to a terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline JobDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}


    /**
     * <p>A list of job IDs that this job depends on.</p>
     */
    inline const Aws::Vector<JobDependency>& GetDependsOn() const{ return m_dependsOn; }

    /**
     * <p>A list of job IDs that this job depends on.</p>
     */
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }

    /**
     * <p>A list of job IDs that this job depends on.</p>
     */
    inline void SetDependsOn(const Aws::Vector<JobDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>A list of job IDs that this job depends on.</p>
     */
    inline void SetDependsOn(Aws::Vector<JobDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }

    /**
     * <p>A list of job IDs that this job depends on.</p>
     */
    inline JobDetail& WithDependsOn(const Aws::Vector<JobDependency>& value) { SetDependsOn(value); return *this;}

    /**
     * <p>A list of job IDs that this job depends on.</p>
     */
    inline JobDetail& WithDependsOn(Aws::Vector<JobDependency>&& value) { SetDependsOn(std::move(value)); return *this;}

    /**
     * <p>A list of job IDs that this job depends on.</p>
     */
    inline JobDetail& AddDependsOn(const JobDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>A list of job IDs that this job depends on.</p>
     */
    inline JobDetail& AddDependsOn(JobDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the job definition that this job uses.</p>
     */
    inline const Aws::String& GetJobDefinition() const{ return m_jobDefinition; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition that this job uses.</p>
     */
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition that this job uses.</p>
     */
    inline void SetJobDefinition(const Aws::String& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition that this job uses.</p>
     */
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition that this job uses.</p>
     */
    inline void SetJobDefinition(const char* value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition that this job uses.</p>
     */
    inline JobDetail& WithJobDefinition(const Aws::String& value) { SetJobDefinition(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition that this job uses.</p>
     */
    inline JobDetail& WithJobDefinition(Aws::String&& value) { SetJobDefinition(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job definition that this job uses.</p>
     */
    inline JobDetail& WithJobDefinition(const char* value) { SetJobDefinition(value); return *this;}


    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline JobDetail& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline JobDetail& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline JobDetail& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline JobDetail& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline JobDetail& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline JobDetail& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline JobDetail& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline JobDetail& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional parameters that are passed to the job that replace parameter
     * substitution placeholders or override any corresponding parameter defaults from
     * the job definition.</p>
     */
    inline JobDetail& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>An object that represents the details for the container that's associated
     * with the job.</p>
     */
    inline const ContainerDetail& GetContainer() const{ return m_container; }

    /**
     * <p>An object that represents the details for the container that's associated
     * with the job.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>An object that represents the details for the container that's associated
     * with the job.</p>
     */
    inline void SetContainer(const ContainerDetail& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>An object that represents the details for the container that's associated
     * with the job.</p>
     */
    inline void SetContainer(ContainerDetail&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>An object that represents the details for the container that's associated
     * with the job.</p>
     */
    inline JobDetail& WithContainer(const ContainerDetail& value) { SetContainer(value); return *this;}

    /**
     * <p>An object that represents the details for the container that's associated
     * with the job.</p>
     */
    inline JobDetail& WithContainer(ContainerDetail&& value) { SetContainer(std::move(value)); return *this;}


    /**
     * <p>An object that represents the details of a node that's associated with a
     * multi-node parallel job.</p>
     */
    inline const NodeDetails& GetNodeDetails() const{ return m_nodeDetails; }

    /**
     * <p>An object that represents the details of a node that's associated with a
     * multi-node parallel job.</p>
     */
    inline bool NodeDetailsHasBeenSet() const { return m_nodeDetailsHasBeenSet; }

    /**
     * <p>An object that represents the details of a node that's associated with a
     * multi-node parallel job.</p>
     */
    inline void SetNodeDetails(const NodeDetails& value) { m_nodeDetailsHasBeenSet = true; m_nodeDetails = value; }

    /**
     * <p>An object that represents the details of a node that's associated with a
     * multi-node parallel job.</p>
     */
    inline void SetNodeDetails(NodeDetails&& value) { m_nodeDetailsHasBeenSet = true; m_nodeDetails = std::move(value); }

    /**
     * <p>An object that represents the details of a node that's associated with a
     * multi-node parallel job.</p>
     */
    inline JobDetail& WithNodeDetails(const NodeDetails& value) { SetNodeDetails(value); return *this;}

    /**
     * <p>An object that represents the details of a node that's associated with a
     * multi-node parallel job.</p>
     */
    inline JobDetail& WithNodeDetails(NodeDetails&& value) { SetNodeDetails(std::move(value)); return *this;}


    /**
     * <p>An object that represents the node properties of a multi-node parallel
     * job.</p>  <p>This isn't applicable to jobs that are running on Fargate
     * resources.</p> 
     */
    inline const NodeProperties& GetNodeProperties() const{ return m_nodeProperties; }

    /**
     * <p>An object that represents the node properties of a multi-node parallel
     * job.</p>  <p>This isn't applicable to jobs that are running on Fargate
     * resources.</p> 
     */
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }

    /**
     * <p>An object that represents the node properties of a multi-node parallel
     * job.</p>  <p>This isn't applicable to jobs that are running on Fargate
     * resources.</p> 
     */
    inline void SetNodeProperties(const NodeProperties& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }

    /**
     * <p>An object that represents the node properties of a multi-node parallel
     * job.</p>  <p>This isn't applicable to jobs that are running on Fargate
     * resources.</p> 
     */
    inline void SetNodeProperties(NodeProperties&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }

    /**
     * <p>An object that represents the node properties of a multi-node parallel
     * job.</p>  <p>This isn't applicable to jobs that are running on Fargate
     * resources.</p> 
     */
    inline JobDetail& WithNodeProperties(const NodeProperties& value) { SetNodeProperties(value); return *this;}

    /**
     * <p>An object that represents the node properties of a multi-node parallel
     * job.</p>  <p>This isn't applicable to jobs that are running on Fargate
     * resources.</p> 
     */
    inline JobDetail& WithNodeProperties(NodeProperties&& value) { SetNodeProperties(std::move(value)); return *this;}


    /**
     * <p>The array properties of the job, if it's an array job.</p>
     */
    inline const ArrayPropertiesDetail& GetArrayProperties() const{ return m_arrayProperties; }

    /**
     * <p>The array properties of the job, if it's an array job.</p>
     */
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }

    /**
     * <p>The array properties of the job, if it's an array job.</p>
     */
    inline void SetArrayProperties(const ArrayPropertiesDetail& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = value; }

    /**
     * <p>The array properties of the job, if it's an array job.</p>
     */
    inline void SetArrayProperties(ArrayPropertiesDetail&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::move(value); }

    /**
     * <p>The array properties of the job, if it's an array job.</p>
     */
    inline JobDetail& WithArrayProperties(const ArrayPropertiesDetail& value) { SetArrayProperties(value); return *this;}

    /**
     * <p>The array properties of the job, if it's an array job.</p>
     */
    inline JobDetail& WithArrayProperties(ArrayPropertiesDetail&& value) { SetArrayProperties(std::move(value)); return *this;}


    /**
     * <p>The timeout configuration for the job.</p>
     */
    inline const JobTimeout& GetTimeout() const{ return m_timeout; }

    /**
     * <p>The timeout configuration for the job.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The timeout configuration for the job.</p>
     */
    inline void SetTimeout(const JobTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The timeout configuration for the job.</p>
     */
    inline void SetTimeout(JobTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }

    /**
     * <p>The timeout configuration for the job.</p>
     */
    inline JobDetail& WithTimeout(const JobTimeout& value) { SetTimeout(value); return *this;}

    /**
     * <p>The timeout configuration for the job.</p>
     */
    inline JobDetail& WithTimeout(JobTimeout&& value) { SetTimeout(std::move(value)); return *this;}


    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline JobDetail& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline JobDetail& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline JobDetail& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline JobDetail& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline JobDetail& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline JobDetail& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline JobDetail& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline JobDetail& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are applied to the job.</p>
     */
    inline JobDetail& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether to propagate the tags from the job or job definition to the
     * corresponding Amazon ECS task. If no value is specified, the tags aren't
     * propagated. Tags can only be propagated to the tasks when the tasks are created.
     * For tags with the same name, job tags are given priority over job definitions
     * tags. If the total number of combined tags from the job and job definition is
     * over 50, the job is moved to the <code>FAILED</code> state.</p>
     */
    inline bool GetPropagateTags() const{ return m_propagateTags; }

    /**
     * <p>Specifies whether to propagate the tags from the job or job definition to the
     * corresponding Amazon ECS task. If no value is specified, the tags aren't
     * propagated. Tags can only be propagated to the tasks when the tasks are created.
     * For tags with the same name, job tags are given priority over job definitions
     * tags. If the total number of combined tags from the job and job definition is
     * over 50, the job is moved to the <code>FAILED</code> state.</p>
     */
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }

    /**
     * <p>Specifies whether to propagate the tags from the job or job definition to the
     * corresponding Amazon ECS task. If no value is specified, the tags aren't
     * propagated. Tags can only be propagated to the tasks when the tasks are created.
     * For tags with the same name, job tags are given priority over job definitions
     * tags. If the total number of combined tags from the job and job definition is
     * over 50, the job is moved to the <code>FAILED</code> state.</p>
     */
    inline void SetPropagateTags(bool value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }

    /**
     * <p>Specifies whether to propagate the tags from the job or job definition to the
     * corresponding Amazon ECS task. If no value is specified, the tags aren't
     * propagated. Tags can only be propagated to the tasks when the tasks are created.
     * For tags with the same name, job tags are given priority over job definitions
     * tags. If the total number of combined tags from the job and job definition is
     * over 50, the job is moved to the <code>FAILED</code> state.</p>
     */
    inline JobDetail& WithPropagateTags(bool value) { SetPropagateTags(value); return *this;}


    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline const Aws::Vector<PlatformCapability>& GetPlatformCapabilities() const{ return m_platformCapabilities; }

    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline bool PlatformCapabilitiesHasBeenSet() const { return m_platformCapabilitiesHasBeenSet; }

    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline void SetPlatformCapabilities(const Aws::Vector<PlatformCapability>& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities = value; }

    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline void SetPlatformCapabilities(Aws::Vector<PlatformCapability>&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities = std::move(value); }

    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline JobDetail& WithPlatformCapabilities(const Aws::Vector<PlatformCapability>& value) { SetPlatformCapabilities(value); return *this;}

    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline JobDetail& WithPlatformCapabilities(Aws::Vector<PlatformCapability>&& value) { SetPlatformCapabilities(std::move(value)); return *this;}

    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline JobDetail& AddPlatformCapabilities(const PlatformCapability& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(value); return *this; }

    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline JobDetail& AddPlatformCapabilities(PlatformCapability&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Only one of <code>container</code>, <code>eksProperties</code>, or
     * <code>nodeDetails</code> is specified.</p>
     */
    inline const EksPropertiesDetail& GetEksProperties() const{ return m_eksProperties; }

    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Only one of <code>container</code>, <code>eksProperties</code>, or
     * <code>nodeDetails</code> is specified.</p>
     */
    inline bool EksPropertiesHasBeenSet() const { return m_eksPropertiesHasBeenSet; }

    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Only one of <code>container</code>, <code>eksProperties</code>, or
     * <code>nodeDetails</code> is specified.</p>
     */
    inline void SetEksProperties(const EksPropertiesDetail& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = value; }

    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Only one of <code>container</code>, <code>eksProperties</code>, or
     * <code>nodeDetails</code> is specified.</p>
     */
    inline void SetEksProperties(EksPropertiesDetail&& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = std::move(value); }

    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Only one of <code>container</code>, <code>eksProperties</code>, or
     * <code>nodeDetails</code> is specified.</p>
     */
    inline JobDetail& WithEksProperties(const EksPropertiesDetail& value) { SetEksProperties(value); return *this;}

    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Only one of <code>container</code>, <code>eksProperties</code>, or
     * <code>nodeDetails</code> is specified.</p>
     */
    inline JobDetail& WithEksProperties(EksPropertiesDetail&& value) { SetEksProperties(std::move(value)); return *this;}


    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline const Aws::Vector<EksAttemptDetail>& GetEksAttempts() const{ return m_eksAttempts; }

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline bool EksAttemptsHasBeenSet() const { return m_eksAttemptsHasBeenSet; }

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline void SetEksAttempts(const Aws::Vector<EksAttemptDetail>& value) { m_eksAttemptsHasBeenSet = true; m_eksAttempts = value; }

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline void SetEksAttempts(Aws::Vector<EksAttemptDetail>&& value) { m_eksAttemptsHasBeenSet = true; m_eksAttempts = std::move(value); }

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline JobDetail& WithEksAttempts(const Aws::Vector<EksAttemptDetail>& value) { SetEksAttempts(value); return *this;}

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline JobDetail& WithEksAttempts(Aws::Vector<EksAttemptDetail>&& value) { SetEksAttempts(std::move(value)); return *this;}

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline JobDetail& AddEksAttempts(const EksAttemptDetail& value) { m_eksAttemptsHasBeenSet = true; m_eksAttempts.push_back(value); return *this; }

    /**
     * <p>A list of job attempts that are associated with this job.</p>
     */
    inline JobDetail& AddEksAttempts(EksAttemptDetail&& value) { m_eksAttemptsHasBeenSet = true; m_eksAttempts.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the job is canceled.</p>
     */
    inline bool GetIsCancelled() const{ return m_isCancelled; }

    /**
     * <p>Indicates whether the job is canceled.</p>
     */
    inline bool IsCancelledHasBeenSet() const { return m_isCancelledHasBeenSet; }

    /**
     * <p>Indicates whether the job is canceled.</p>
     */
    inline void SetIsCancelled(bool value) { m_isCancelledHasBeenSet = true; m_isCancelled = value; }

    /**
     * <p>Indicates whether the job is canceled.</p>
     */
    inline JobDetail& WithIsCancelled(bool value) { SetIsCancelled(value); return *this;}


    /**
     * <p>Indicates whether the job is terminated.</p>
     */
    inline bool GetIsTerminated() const{ return m_isTerminated; }

    /**
     * <p>Indicates whether the job is terminated.</p>
     */
    inline bool IsTerminatedHasBeenSet() const { return m_isTerminatedHasBeenSet; }

    /**
     * <p>Indicates whether the job is terminated.</p>
     */
    inline void SetIsTerminated(bool value) { m_isTerminatedHasBeenSet = true; m_isTerminated = value; }

    /**
     * <p>Indicates whether the job is terminated.</p>
     */
    inline JobDetail& WithIsTerminated(bool value) { SetIsTerminated(value); return *this;}

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

    bool m_isCancelled;
    bool m_isCancelledHasBeenSet = false;

    bool m_isTerminated;
    bool m_isTerminatedHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
