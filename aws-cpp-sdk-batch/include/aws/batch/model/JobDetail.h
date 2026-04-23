/*
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
#include <aws/batch/model/AttemptDetail.h>
#include <aws/batch/model/JobDependency.h>
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
   * <p>An object representing an AWS Batch job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobDetail">AWS API
   * Reference</a></p>
   */
  class AWS_BATCH_API JobDetail
  {
  public:
    JobDetail();
    JobDetail(Aws::Utils::Json::JsonView jsonValue);
    JobDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline JobDetail& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline JobDetail& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline JobDetail& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The ID for the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for the job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID for the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID for the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID for the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID for the job.</p>
     */
    inline JobDetail& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for the job.</p>
     */
    inline JobDetail& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for the job.</p>
     */
    inline JobDetail& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the job queue with which the job is
     * associated.</p>
     */
    inline const Aws::String& GetJobQueue() const{ return m_jobQueue; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue with which the job is
     * associated.</p>
     */
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue with which the job is
     * associated.</p>
     */
    inline void SetJobQueue(const Aws::String& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue with which the job is
     * associated.</p>
     */
    inline void SetJobQueue(Aws::String&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue with which the job is
     * associated.</p>
     */
    inline void SetJobQueue(const char* value) { m_jobQueueHasBeenSet = true; m_jobQueue.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue with which the job is
     * associated.</p>
     */
    inline JobDetail& WithJobQueue(const Aws::String& value) { SetJobQueue(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue with which the job is
     * associated.</p>
     */
    inline JobDetail& WithJobQueue(Aws::String&& value) { SetJobQueue(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue with which the job is
     * associated.</p>
     */
    inline JobDetail& WithJobQueue(const char* value) { SetJobQueue(value); return *this;}


    /**
     * <p>The current status for the job. </p> <note> <p>If your jobs do not progress
     * to <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * Stuck in <code>RUNNABLE</code> Status</a> in the troubleshooting section of the
     * <i>AWS Batch User Guide</i>.</p> </note>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status for the job. </p> <note> <p>If your jobs do not progress
     * to <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * Stuck in <code>RUNNABLE</code> Status</a> in the troubleshooting section of the
     * <i>AWS Batch User Guide</i>.</p> </note>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status for the job. </p> <note> <p>If your jobs do not progress
     * to <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * Stuck in <code>RUNNABLE</code> Status</a> in the troubleshooting section of the
     * <i>AWS Batch User Guide</i>.</p> </note>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status for the job. </p> <note> <p>If your jobs do not progress
     * to <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * Stuck in <code>RUNNABLE</code> Status</a> in the troubleshooting section of the
     * <i>AWS Batch User Guide</i>.</p> </note>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status for the job. </p> <note> <p>If your jobs do not progress
     * to <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * Stuck in <code>RUNNABLE</code> Status</a> in the troubleshooting section of the
     * <i>AWS Batch User Guide</i>.</p> </note>
     */
    inline JobDetail& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status for the job. </p> <note> <p>If your jobs do not progress
     * to <code>STARTING</code>, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#job_stuck_in_runnable">Jobs
     * Stuck in <code>RUNNABLE</code> Status</a> in the troubleshooting section of the
     * <i>AWS Batch User Guide</i>.</p> </note>
     */
    inline JobDetail& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline const Aws::Vector<AttemptDetail>& GetAttempts() const{ return m_attempts; }

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline bool AttemptsHasBeenSet() const { return m_attemptsHasBeenSet; }

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline void SetAttempts(const Aws::Vector<AttemptDetail>& value) { m_attemptsHasBeenSet = true; m_attempts = value; }

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline void SetAttempts(Aws::Vector<AttemptDetail>&& value) { m_attemptsHasBeenSet = true; m_attempts = std::move(value); }

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline JobDetail& WithAttempts(const Aws::Vector<AttemptDetail>& value) { SetAttempts(value); return *this;}

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline JobDetail& WithAttempts(Aws::Vector<AttemptDetail>&& value) { SetAttempts(std::move(value)); return *this;}

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline JobDetail& AddAttempts(const AttemptDetail& value) { m_attemptsHasBeenSet = true; m_attempts.push_back(value); return *this; }

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline JobDetail& AddAttempts(AttemptDetail&& value) { m_attemptsHasBeenSet = true; m_attempts.push_back(std::move(value)); return *this; }


    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline JobDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline JobDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline JobDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was
     * created. For non-array jobs and parent array jobs, this is when the job entered
     * the <code>SUBMITTED</code> state (at the time <a>SubmitJob</a> was called). For
     * array child jobs, this is when the child job was spawned by its parent and
     * entered the <code>PENDING</code> state.</p>
     */
    inline long long GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was
     * created. For non-array jobs and parent array jobs, this is when the job entered
     * the <code>SUBMITTED</code> state (at the time <a>SubmitJob</a> was called). For
     * array child jobs, this is when the child job was spawned by its parent and
     * entered the <code>PENDING</code> state.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was
     * created. For non-array jobs and parent array jobs, this is when the job entered
     * the <code>SUBMITTED</code> state (at the time <a>SubmitJob</a> was called). For
     * array child jobs, this is when the child job was spawned by its parent and
     * entered the <code>PENDING</code> state.</p>
     */
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was
     * created. For non-array jobs and parent array jobs, this is when the job entered
     * the <code>SUBMITTED</code> state (at the time <a>SubmitJob</a> was called). For
     * array child jobs, this is when the child job was spawned by its parent and
     * entered the <code>PENDING</code> state.</p>
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
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was started
     * (when the job transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state).</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was started
     * (when the job transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state).</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was started
     * (when the job transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state).</p>
     */
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was started
     * (when the job transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state).</p>
     */
    inline JobDetail& WithStartedAt(long long value) { SetStartedAt(value); return *this;}


    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was stopped
     * (when the job transitioned from the <code>RUNNING</code> state to a terminal
     * state, such as <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline long long GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was stopped
     * (when the job transitioned from the <code>RUNNING</code> state to a terminal
     * state, such as <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was stopped
     * (when the job transitioned from the <code>RUNNING</code> state to a terminal
     * state, such as <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the job was stopped
     * (when the job transitioned from the <code>RUNNING</code> state to a terminal
     * state, such as <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline JobDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}


    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline const Aws::Vector<JobDependency>& GetDependsOn() const{ return m_dependsOn; }

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline void SetDependsOn(const Aws::Vector<JobDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline void SetDependsOn(Aws::Vector<JobDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline JobDetail& WithDependsOn(const Aws::Vector<JobDependency>& value) { SetDependsOn(value); return *this;}

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline JobDetail& WithDependsOn(Aws::Vector<JobDependency>&& value) { SetDependsOn(std::move(value)); return *this;}

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline JobDetail& AddDependsOn(const JobDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline JobDetail& AddDependsOn(JobDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }


    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline const Aws::String& GetJobDefinition() const{ return m_jobDefinition; }

    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }

    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline void SetJobDefinition(const Aws::String& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }

    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::move(value); }

    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline void SetJobDefinition(const char* value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition.assign(value); }

    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline JobDetail& WithJobDefinition(const Aws::String& value) { SetJobDefinition(value); return *this;}

    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline JobDetail& WithJobDefinition(Aws::String&& value) { SetJobDefinition(std::move(value)); return *this;}

    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline JobDetail& WithJobDefinition(const char* value) { SetJobDefinition(value); return *this;}


    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline const ContainerDetail& GetContainer() const{ return m_container; }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline void SetContainer(const ContainerDetail& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline void SetContainer(ContainerDetail&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline JobDetail& WithContainer(const ContainerDetail& value) { SetContainer(value); return *this;}

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline JobDetail& WithContainer(ContainerDetail&& value) { SetContainer(std::move(value)); return *this;}


    /**
     * <p>An object representing the details of a node that is associated with a
     * multi-node parallel job.</p>
     */
    inline const NodeDetails& GetNodeDetails() const{ return m_nodeDetails; }

    /**
     * <p>An object representing the details of a node that is associated with a
     * multi-node parallel job.</p>
     */
    inline bool NodeDetailsHasBeenSet() const { return m_nodeDetailsHasBeenSet; }

    /**
     * <p>An object representing the details of a node that is associated with a
     * multi-node parallel job.</p>
     */
    inline void SetNodeDetails(const NodeDetails& value) { m_nodeDetailsHasBeenSet = true; m_nodeDetails = value; }

    /**
     * <p>An object representing the details of a node that is associated with a
     * multi-node parallel job.</p>
     */
    inline void SetNodeDetails(NodeDetails&& value) { m_nodeDetailsHasBeenSet = true; m_nodeDetails = std::move(value); }

    /**
     * <p>An object representing the details of a node that is associated with a
     * multi-node parallel job.</p>
     */
    inline JobDetail& WithNodeDetails(const NodeDetails& value) { SetNodeDetails(value); return *this;}

    /**
     * <p>An object representing the details of a node that is associated with a
     * multi-node parallel job.</p>
     */
    inline JobDetail& WithNodeDetails(NodeDetails&& value) { SetNodeDetails(std::move(value)); return *this;}


    /**
     * <p>An object representing the node properties of a multi-node parallel job.</p>
     */
    inline const NodeProperties& GetNodeProperties() const{ return m_nodeProperties; }

    /**
     * <p>An object representing the node properties of a multi-node parallel job.</p>
     */
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }

    /**
     * <p>An object representing the node properties of a multi-node parallel job.</p>
     */
    inline void SetNodeProperties(const NodeProperties& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }

    /**
     * <p>An object representing the node properties of a multi-node parallel job.</p>
     */
    inline void SetNodeProperties(NodeProperties&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }

    /**
     * <p>An object representing the node properties of a multi-node parallel job.</p>
     */
    inline JobDetail& WithNodeProperties(const NodeProperties& value) { SetNodeProperties(value); return *this;}

    /**
     * <p>An object representing the node properties of a multi-node parallel job.</p>
     */
    inline JobDetail& WithNodeProperties(NodeProperties&& value) { SetNodeProperties(std::move(value)); return *this;}


    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline const ArrayPropertiesDetail& GetArrayProperties() const{ return m_arrayProperties; }

    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }

    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline void SetArrayProperties(const ArrayPropertiesDetail& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = value; }

    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline void SetArrayProperties(ArrayPropertiesDetail&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::move(value); }

    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline JobDetail& WithArrayProperties(const ArrayPropertiesDetail& value) { SetArrayProperties(value); return *this;}

    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline JobDetail& WithArrayProperties(ArrayPropertiesDetail&& value) { SetArrayProperties(std::move(value)); return *this;}


    /**
     * <p>The timeout configuration for the job. </p>
     */
    inline const JobTimeout& GetTimeout() const{ return m_timeout; }

    /**
     * <p>The timeout configuration for the job. </p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The timeout configuration for the job. </p>
     */
    inline void SetTimeout(const JobTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The timeout configuration for the job. </p>
     */
    inline void SetTimeout(JobTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }

    /**
     * <p>The timeout configuration for the job. </p>
     */
    inline JobDetail& WithTimeout(const JobTimeout& value) { SetTimeout(value); return *this;}

    /**
     * <p>The timeout configuration for the job. </p>
     */
    inline JobDetail& WithTimeout(JobTimeout&& value) { SetTimeout(std::move(value)); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet;

    JobStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<AttemptDetail> m_attempts;
    bool m_attemptsHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    long long m_createdAt;
    bool m_createdAtHasBeenSet;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet;

    long long m_startedAt;
    bool m_startedAtHasBeenSet;

    long long m_stoppedAt;
    bool m_stoppedAtHasBeenSet;

    Aws::Vector<JobDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet;

    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;

    ContainerDetail m_container;
    bool m_containerHasBeenSet;

    NodeDetails m_nodeDetails;
    bool m_nodeDetailsHasBeenSet;

    NodeProperties m_nodeProperties;
    bool m_nodePropertiesHasBeenSet;

    ArrayPropertiesDetail m_arrayProperties;
    bool m_arrayPropertiesHasBeenSet;

    JobTimeout m_timeout;
    bool m_timeoutHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
