/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/batch/model/AttemptDetail.h>
#include <aws/batch/model/JobDependency.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
    JobDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    JobDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

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
    inline JobDetail& WithJobName(Aws::String&& value) { SetJobName(value); return *this;}

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
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID for the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

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
    inline JobDetail& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

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
    inline void SetJobQueue(const Aws::String& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue with which the job is
     * associated.</p>
     */
    inline void SetJobQueue(Aws::String&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

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
    inline JobDetail& WithJobQueue(Aws::String&& value) { SetJobQueue(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue with which the job is
     * associated.</p>
     */
    inline JobDetail& WithJobQueue(const char* value) { SetJobQueue(value); return *this;}

    /**
     * <p>The current status for the job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status for the job.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status for the job.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status for the job.</p>
     */
    inline JobDetail& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status for the job.</p>
     */
    inline JobDetail& WithStatus(JobStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline const Aws::Vector<AttemptDetail>& GetAttempts() const{ return m_attempts; }

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline void SetAttempts(const Aws::Vector<AttemptDetail>& value) { m_attemptsHasBeenSet = true; m_attempts = value; }

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline void SetAttempts(Aws::Vector<AttemptDetail>&& value) { m_attemptsHasBeenSet = true; m_attempts = value; }

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline JobDetail& WithAttempts(const Aws::Vector<AttemptDetail>& value) { SetAttempts(value); return *this;}

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline JobDetail& WithAttempts(Aws::Vector<AttemptDetail>&& value) { SetAttempts(value); return *this;}

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline JobDetail& AddAttempts(const AttemptDetail& value) { m_attemptsHasBeenSet = true; m_attempts.push_back(value); return *this; }

    /**
     * <p>A list of job attempts associated with this job.</p>
     */
    inline JobDetail& AddAttempts(AttemptDetail&& value) { m_attemptsHasBeenSet = true; m_attempts.push_back(value); return *this; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

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
    inline JobDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job. </p>
     */
    inline JobDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

    /**
     * <p>The Unix timestamp for when the job was created (when the task entered the
     * <code>PENDING</code> state). </p>
     */
    inline long long GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp for when the job was created (when the task entered the
     * <code>PENDING</code> state). </p>
     */
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp for when the job was created (when the task entered the
     * <code>PENDING</code> state). </p>
     */
    inline JobDetail& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }

    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline JobDetail& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The retry strategy to use for this job if an attempt fails.</p>
     */
    inline JobDetail& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The Unix timestamp for when the job was started (when the task transitioned
     * from the <code>PENDING</code> state to the <code>RUNNING</code> state). </p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The Unix timestamp for when the job was started (when the task transitioned
     * from the <code>PENDING</code> state to the <code>RUNNING</code> state). </p>
     */
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The Unix timestamp for when the job was started (when the task transitioned
     * from the <code>PENDING</code> state to the <code>RUNNING</code> state). </p>
     */
    inline JobDetail& WithStartedAt(long long value) { SetStartedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for when the job was stopped (when the task transitioned
     * from the <code>RUNNING</code> state to the <code>STOPPED</code> state).</p>
     */
    inline long long GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The Unix timestamp for when the job was stopped (when the task transitioned
     * from the <code>RUNNING</code> state to the <code>STOPPED</code> state).</p>
     */
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }

    /**
     * <p>The Unix timestamp for when the job was stopped (when the task transitioned
     * from the <code>RUNNING</code> state to the <code>STOPPED</code> state).</p>
     */
    inline JobDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline const Aws::Vector<JobDependency>& GetDependsOn() const{ return m_dependsOn; }

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline void SetDependsOn(const Aws::Vector<JobDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline void SetDependsOn(Aws::Vector<JobDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline JobDetail& WithDependsOn(const Aws::Vector<JobDependency>& value) { SetDependsOn(value); return *this;}

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline JobDetail& WithDependsOn(Aws::Vector<JobDependency>&& value) { SetDependsOn(value); return *this;}

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline JobDetail& AddDependsOn(const JobDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>A list of job names or IDs on which this job depends.</p>
     */
    inline JobDetail& AddDependsOn(JobDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline const Aws::String& GetJobDefinition() const{ return m_jobDefinition; }

    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline void SetJobDefinition(const Aws::String& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }

    /**
     * <p>The job definition that is used by this job.</p>
     */
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }

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
    inline JobDetail& WithJobDefinition(Aws::String&& value) { SetJobDefinition(value); return *this;}

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
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

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
    inline JobDetail& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(value); return *this;}

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders or override any corresponding parameter defaults from the job
     * definition. </p>
     */
    inline JobDetail& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline const ContainerDetail& GetContainer() const{ return m_container; }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline void SetContainer(const ContainerDetail& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline void SetContainer(ContainerDetail&& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline JobDetail& WithContainer(const ContainerDetail& value) { SetContainer(value); return *this;}

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline JobDetail& WithContainer(ContainerDetail&& value) { SetContainer(value); return *this;}

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
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
