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
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ArrayProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ContainerOverrides.h>
#include <aws/batch/model/NodeOverrides.h>
#include <aws/batch/model/RetryStrategy.h>
#include <aws/batch/model/JobTimeout.h>
#include <aws/batch/model/JobDependency.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the job. The first character must be alphanumeric, and up to 128
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. </p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job. The first character must be alphanumeric, and up to 128
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. </p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job. The first character must be alphanumeric, and up to 128
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. </p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job. The first character must be alphanumeric, and up to 128
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. </p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job. The first character must be alphanumeric, and up to 128
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. </p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job. The first character must be alphanumeric, and up to 128
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. </p>
     */
    inline SubmitJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job. The first character must be alphanumeric, and up to 128
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. </p>
     */
    inline SubmitJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job. The first character must be alphanumeric, and up to 128
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. </p>
     */
    inline SubmitJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The job queue into which the job is submitted. You can specify either the
     * name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline const Aws::String& GetJobQueue() const{ return m_jobQueue; }

    /**
     * <p>The job queue into which the job is submitted. You can specify either the
     * name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }

    /**
     * <p>The job queue into which the job is submitted. You can specify either the
     * name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline void SetJobQueue(const Aws::String& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

    /**
     * <p>The job queue into which the job is submitted. You can specify either the
     * name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline void SetJobQueue(Aws::String&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::move(value); }

    /**
     * <p>The job queue into which the job is submitted. You can specify either the
     * name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline void SetJobQueue(const char* value) { m_jobQueueHasBeenSet = true; m_jobQueue.assign(value); }

    /**
     * <p>The job queue into which the job is submitted. You can specify either the
     * name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline SubmitJobRequest& WithJobQueue(const Aws::String& value) { SetJobQueue(value); return *this;}

    /**
     * <p>The job queue into which the job is submitted. You can specify either the
     * name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline SubmitJobRequest& WithJobQueue(Aws::String&& value) { SetJobQueue(std::move(value)); return *this;}

    /**
     * <p>The job queue into which the job is submitted. You can specify either the
     * name or the Amazon Resource Name (ARN) of the queue. </p>
     */
    inline SubmitJobRequest& WithJobQueue(const char* value) { SetJobQueue(value); return *this;}


    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/array_jobs.html">Array
     * Jobs</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline const ArrayProperties& GetArrayProperties() const{ return m_arrayProperties; }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/array_jobs.html">Array
     * Jobs</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/array_jobs.html">Array
     * Jobs</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetArrayProperties(const ArrayProperties& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = value; }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/array_jobs.html">Array
     * Jobs</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetArrayProperties(ArrayProperties&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::move(value); }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/array_jobs.html">Array
     * Jobs</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline SubmitJobRequest& WithArrayProperties(const ArrayProperties& value) { SetArrayProperties(value); return *this;}

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/array_jobs.html">Array
     * Jobs</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline SubmitJobRequest& WithArrayProperties(ArrayProperties&& value) { SetArrayProperties(std::move(value)); return *this;}


    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline const Aws::Vector<JobDependency>& GetDependsOn() const{ return m_dependsOn; }

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline void SetDependsOn(const Aws::Vector<JobDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline void SetDependsOn(Aws::Vector<JobDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline SubmitJobRequest& WithDependsOn(const Aws::Vector<JobDependency>& value) { SetDependsOn(value); return *this;}

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline SubmitJobRequest& WithDependsOn(Aws::Vector<JobDependency>&& value) { SetDependsOn(std::move(value)); return *this;}

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline SubmitJobRequest& AddDependsOn(const JobDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline SubmitJobRequest& AddDependsOn(JobDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }


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
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }

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
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::move(value); }

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
    inline SubmitJobRequest& WithJobDefinition(Aws::String&& value) { SetJobDefinition(std::move(value)); return *this;}

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
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

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
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

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
    inline SubmitJobRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline SubmitJobRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


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
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }

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
    inline void SetContainerOverrides(ContainerOverrides&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::move(value); }

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
    inline SubmitJobRequest& WithContainerOverrides(ContainerOverrides&& value) { SetContainerOverrides(std::move(value)); return *this;}


    /**
     * <p>A list of node overrides in JSON format that specify the node range to target
     * and the container overrides for that node range.</p>
     */
    inline const NodeOverrides& GetNodeOverrides() const{ return m_nodeOverrides; }

    /**
     * <p>A list of node overrides in JSON format that specify the node range to target
     * and the container overrides for that node range.</p>
     */
    inline bool NodeOverridesHasBeenSet() const { return m_nodeOverridesHasBeenSet; }

    /**
     * <p>A list of node overrides in JSON format that specify the node range to target
     * and the container overrides for that node range.</p>
     */
    inline void SetNodeOverrides(const NodeOverrides& value) { m_nodeOverridesHasBeenSet = true; m_nodeOverrides = value; }

    /**
     * <p>A list of node overrides in JSON format that specify the node range to target
     * and the container overrides for that node range.</p>
     */
    inline void SetNodeOverrides(NodeOverrides&& value) { m_nodeOverridesHasBeenSet = true; m_nodeOverrides = std::move(value); }

    /**
     * <p>A list of node overrides in JSON format that specify the node range to target
     * and the container overrides for that node range.</p>
     */
    inline SubmitJobRequest& WithNodeOverrides(const NodeOverrides& value) { SetNodeOverrides(value); return *this;}

    /**
     * <p>A list of node overrides in JSON format that specify the node range to target
     * and the container overrides for that node range.</p>
     */
    inline SubmitJobRequest& WithNodeOverrides(NodeOverrides&& value) { SetNodeOverrides(std::move(value)); return *this;}


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
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }

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
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }

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
    inline SubmitJobRequest& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}


    /**
     * <p>The timeout configuration for this <a>SubmitJob</a> operation. You can
     * specify a timeout duration after which AWS Batch terminates your jobs if they
     * have not finished. If a job is terminated due to a timeout, it is not retried.
     * The minimum value for the timeout is 60 seconds. This configuration overrides
     * any timeout configuration specified in the job definition. For array jobs, child
     * jobs have the same timeout configuration as the parent job. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const JobTimeout& GetTimeout() const{ return m_timeout; }

    /**
     * <p>The timeout configuration for this <a>SubmitJob</a> operation. You can
     * specify a timeout duration after which AWS Batch terminates your jobs if they
     * have not finished. If a job is terminated due to a timeout, it is not retried.
     * The minimum value for the timeout is 60 seconds. This configuration overrides
     * any timeout configuration specified in the job definition. For array jobs, child
     * jobs have the same timeout configuration as the parent job. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The timeout configuration for this <a>SubmitJob</a> operation. You can
     * specify a timeout duration after which AWS Batch terminates your jobs if they
     * have not finished. If a job is terminated due to a timeout, it is not retried.
     * The minimum value for the timeout is 60 seconds. This configuration overrides
     * any timeout configuration specified in the job definition. For array jobs, child
     * jobs have the same timeout configuration as the parent job. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetTimeout(const JobTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The timeout configuration for this <a>SubmitJob</a> operation. You can
     * specify a timeout duration after which AWS Batch terminates your jobs if they
     * have not finished. If a job is terminated due to a timeout, it is not retried.
     * The minimum value for the timeout is 60 seconds. This configuration overrides
     * any timeout configuration specified in the job definition. For array jobs, child
     * jobs have the same timeout configuration as the parent job. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetTimeout(JobTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }

    /**
     * <p>The timeout configuration for this <a>SubmitJob</a> operation. You can
     * specify a timeout duration after which AWS Batch terminates your jobs if they
     * have not finished. If a job is terminated due to a timeout, it is not retried.
     * The minimum value for the timeout is 60 seconds. This configuration overrides
     * any timeout configuration specified in the job definition. For array jobs, child
     * jobs have the same timeout configuration as the parent job. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline SubmitJobRequest& WithTimeout(const JobTimeout& value) { SetTimeout(value); return *this;}

    /**
     * <p>The timeout configuration for this <a>SubmitJob</a> operation. You can
     * specify a timeout duration after which AWS Batch terminates your jobs if they
     * have not finished. If a job is terminated due to a timeout, it is not retried.
     * The minimum value for the timeout is 60 seconds. This configuration overrides
     * any timeout configuration specified in the job definition. For array jobs, child
     * jobs have the same timeout configuration as the parent job. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline SubmitJobRequest& WithTimeout(JobTimeout&& value) { SetTimeout(std::move(value)); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet;

    ArrayProperties m_arrayProperties;
    bool m_arrayPropertiesHasBeenSet;

    Aws::Vector<JobDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet;

    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;

    ContainerOverrides m_containerOverrides;
    bool m_containerOverridesHasBeenSet;

    NodeOverrides m_nodeOverrides;
    bool m_nodeOverridesHasBeenSet;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet;

    JobTimeout m_timeout;
    bool m_timeoutHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
