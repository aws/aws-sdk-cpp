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
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ContainerOverrides.h>
#include <aws/batch/model/RetryStrategy.h>
#include <aws/batch/model/JobDependency.h>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API SubmitJobRequest : public BatchRequest
  {
  public:
    SubmitJobRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the job. A name must be 1 to 128 characters in length.</p>
     * <p>Pattern: ^[a-zA-Z0-9_]+$</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job. A name must be 1 to 128 characters in length.</p>
     * <p>Pattern: ^[a-zA-Z0-9_]+$</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job. A name must be 1 to 128 characters in length.</p>
     * <p>Pattern: ^[a-zA-Z0-9_]+$</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job. A name must be 1 to 128 characters in length.</p>
     * <p>Pattern: ^[a-zA-Z0-9_]+$</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job. A name must be 1 to 128 characters in length.</p>
     * <p>Pattern: ^[a-zA-Z0-9_]+$</p>
     */
    inline SubmitJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job. A name must be 1 to 128 characters in length.</p>
     * <p>Pattern: ^[a-zA-Z0-9_]+$</p>
     */
    inline SubmitJobRequest& WithJobName(Aws::String&& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job. A name must be 1 to 128 characters in length.</p>
     * <p>Pattern: ^[a-zA-Z0-9_]+$</p>
     */
    inline SubmitJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}

    /**
     * <p>The job queue into which the job will be submitted. You can specify either
     * the name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline const Aws::String& GetJobQueue() const{ return m_jobQueue; }

    /**
     * <p>The job queue into which the job will be submitted. You can specify either
     * the name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline void SetJobQueue(const Aws::String& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

    /**
     * <p>The job queue into which the job will be submitted. You can specify either
     * the name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline void SetJobQueue(Aws::String&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

    /**
     * <p>The job queue into which the job will be submitted. You can specify either
     * the name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline void SetJobQueue(const char* value) { m_jobQueueHasBeenSet = true; m_jobQueue.assign(value); }

    /**
     * <p>The job queue into which the job will be submitted. You can specify either
     * the name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline SubmitJobRequest& WithJobQueue(const Aws::String& value) { SetJobQueue(value); return *this;}

    /**
     * <p>The job queue into which the job will be submitted. You can specify either
     * the name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline SubmitJobRequest& WithJobQueue(Aws::String&& value) { SetJobQueue(value); return *this;}

    /**
     * <p>The job queue into which the job will be submitted. You can specify either
     * the name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline SubmitJobRequest& WithJobQueue(const char* value) { SetJobQueue(value); return *this;}

    /**
     * <p>A list of job IDs on which this job depends. A job can depend upon a maximum
     * of 100 jobs. </p>
     */
    inline const Aws::Vector<JobDependency>& GetDependsOn() const{ return m_dependsOn; }

    /**
     * <p>A list of job IDs on which this job depends. A job can depend upon a maximum
     * of 100 jobs. </p>
     */
    inline void SetDependsOn(const Aws::Vector<JobDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>A list of job IDs on which this job depends. A job can depend upon a maximum
     * of 100 jobs. </p>
     */
    inline void SetDependsOn(Aws::Vector<JobDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>A list of job IDs on which this job depends. A job can depend upon a maximum
     * of 100 jobs. </p>
     */
    inline SubmitJobRequest& WithDependsOn(const Aws::Vector<JobDependency>& value) { SetDependsOn(value); return *this;}

    /**
     * <p>A list of job IDs on which this job depends. A job can depend upon a maximum
     * of 100 jobs. </p>
     */
    inline SubmitJobRequest& WithDependsOn(Aws::Vector<JobDependency>&& value) { SetDependsOn(value); return *this;}

    /**
     * <p>A list of job IDs on which this job depends. A job can depend upon a maximum
     * of 100 jobs. </p>
     */
    inline SubmitJobRequest& AddDependsOn(const JobDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>A list of job IDs on which this job depends. A job can depend upon a maximum
     * of 100 jobs. </p>
     */
    inline SubmitJobRequest& AddDependsOn(JobDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>The job definition used by this job. This value can be either a
     * <code>name:revision</code> or the Amazon Resource Name (ARN) for the job
     * definition.</p>
     */
    inline const Aws::String& GetJobDefinition() const{ return m_jobDefinition; }

    /**
     * <p>The job definition used by this job. This value can be either a
     * <code>name:revision</code> or the Amazon Resource Name (ARN) for the job
     * definition.</p>
     */
    inline void SetJobDefinition(const Aws::String& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }

    /**
     * <p>The job definition used by this job. This value can be either a
     * <code>name:revision</code> or the Amazon Resource Name (ARN) for the job
     * definition.</p>
     */
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }

    /**
     * <p>The job definition used by this job. This value can be either a
     * <code>name:revision</code> or the Amazon Resource Name (ARN) for the job
     * definition.</p>
     */
    inline void SetJobDefinition(const char* value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition.assign(value); }

    /**
     * <p>The job definition used by this job. This value can be either a
     * <code>name:revision</code> or the Amazon Resource Name (ARN) for the job
     * definition.</p>
     */
    inline SubmitJobRequest& WithJobDefinition(const Aws::String& value) { SetJobDefinition(value); return *this;}

    /**
     * <p>The job definition used by this job. This value can be either a
     * <code>name:revision</code> or the Amazon Resource Name (ARN) for the job
     * definition.</p>
     */
    inline SubmitJobRequest& WithJobDefinition(Aws::String&& value) { SetJobDefinition(value); return *this;}

    /**
     * <p>The job definition used by this job. This value can be either a
     * <code>name:revision</code> or the Amazon Resource Name (ARN) for the job
     * definition.</p>
     */
    inline SubmitJobRequest& WithJobDefinition(const char* value) { SetJobDefinition(value); return *this;}

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(value); return *this;}

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified job definition and the overrides it should receive.
     * You can override the default command for a container (that is specified in the
     * job definition or the Docker image) with a <code>command</code> override. You
     * can also override existing environment variables (that are specified in the job
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p>
     */
    inline const ContainerOverrides& GetContainerOverrides() const{ return m_containerOverrides; }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified job definition and the overrides it should receive.
     * You can override the default command for a container (that is specified in the
     * job definition or the Docker image) with a <code>command</code> override. You
     * can also override existing environment variables (that are specified in the job
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p>
     */
    inline void SetContainerOverrides(const ContainerOverrides& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified job definition and the overrides it should receive.
     * You can override the default command for a container (that is specified in the
     * job definition or the Docker image) with a <code>command</code> override. You
     * can also override existing environment variables (that are specified in the job
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p>
     */
    inline void SetContainerOverrides(ContainerOverrides&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified job definition and the overrides it should receive.
     * You can override the default command for a container (that is specified in the
     * job definition or the Docker image) with a <code>command</code> override. You
     * can also override existing environment variables (that are specified in the job
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p>
     */
    inline SubmitJobRequest& WithContainerOverrides(const ContainerOverrides& value) { SetContainerOverrides(value); return *this;}

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified job definition and the overrides it should receive.
     * You can override the default command for a container (that is specified in the
     * job definition or the Docker image) with a <code>command</code> override. You
     * can also override existing environment variables (that are specified in the job
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p>
     */
    inline SubmitJobRequest& WithContainerOverrides(ContainerOverrides&& value) { SetContainerOverrides(value); return *this;}

    /**
     * <p>The retry strategy to use for failed jobs from this <a>SubmitJob</a>
     * operation. When a retry strategy is specified here, it overrides the retry
     * strategy defined in the job definition.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }

    /**
     * <p>The retry strategy to use for failed jobs from this <a>SubmitJob</a>
     * operation. When a retry strategy is specified here, it overrides the retry
     * strategy defined in the job definition.</p>
     */
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for failed jobs from this <a>SubmitJob</a>
     * operation. When a retry strategy is specified here, it overrides the retry
     * strategy defined in the job definition.</p>
     */
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for failed jobs from this <a>SubmitJob</a>
     * operation. When a retry strategy is specified here, it overrides the retry
     * strategy defined in the job definition.</p>
     */
    inline SubmitJobRequest& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The retry strategy to use for failed jobs from this <a>SubmitJob</a>
     * operation. When a retry strategy is specified here, it overrides the retry
     * strategy defined in the job definition.</p>
     */
    inline SubmitJobRequest& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(value); return *this;}

  private:
    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;
    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet;
    Aws::Vector<JobDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet;
    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
    ContainerOverrides m_containerOverrides;
    bool m_containerOverridesHasBeenSet;
    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
