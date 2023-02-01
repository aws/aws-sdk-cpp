/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/RetryStrategy.h>
#include <aws/batch/model/ContainerProperties.h>
#include <aws/batch/model/JobTimeout.h>
#include <aws/batch/model/NodeProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EksProperties.h>
#include <aws/batch/model/OrchestrationType.h>
#include <aws/batch/model/PlatformCapability.h>
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
   * <p>An object that represents an Batch job definition.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobDefinition">AWS
   * API Reference</a></p>
   */
  class JobDefinition
  {
  public:
    AWS_BATCH_API JobDefinition();
    AWS_BATCH_API JobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the job definition.</p>
     */
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }

    /**
     * <p>The name of the job definition.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }

    /**
     * <p>The name of the job definition.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the job definition.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the job definition.</p>
     */
    inline JobDefinition& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the job definition.</p>
     */
    inline JobDefinition& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition.</p>
     */
    inline JobDefinition& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition.</p>
     */
    inline bool JobDefinitionArnHasBeenSet() const { return m_jobDefinitionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition.</p>
     */
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition.</p>
     */
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition.</p>
     */
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition.</p>
     */
    inline JobDefinition& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition.</p>
     */
    inline JobDefinition& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition.</p>
     */
    inline JobDefinition& WithJobDefinitionArn(const char* value) { SetJobDefinitionArn(value); return *this;}


    /**
     * <p>The revision of the job definition.</p>
     */
    inline int GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the job definition.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The revision of the job definition.</p>
     */
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision of the job definition.</p>
     */
    inline JobDefinition& WithRevision(int value) { SetRevision(value); return *this;}


    /**
     * <p>The status of the job definition.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job definition.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the job definition.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the job definition.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the job definition.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the job definition.</p>
     */
    inline JobDefinition& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job definition.</p>
     */
    inline JobDefinition& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the job definition.</p>
     */
    inline JobDefinition& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The type of job definition. It's either <code>container</code> or
     * <code>multinode</code>. If the job is run on Fargate resources, then
     * <code>multinode</code> isn't supported. For more information about multi-node
     * parallel jobs, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-job-def.html">Creating
     * a multi-node parallel job definition</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of job definition. It's either <code>container</code> or
     * <code>multinode</code>. If the job is run on Fargate resources, then
     * <code>multinode</code> isn't supported. For more information about multi-node
     * parallel jobs, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-job-def.html">Creating
     * a multi-node parallel job definition</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of job definition. It's either <code>container</code> or
     * <code>multinode</code>. If the job is run on Fargate resources, then
     * <code>multinode</code> isn't supported. For more information about multi-node
     * parallel jobs, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-job-def.html">Creating
     * a multi-node parallel job definition</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of job definition. It's either <code>container</code> or
     * <code>multinode</code>. If the job is run on Fargate resources, then
     * <code>multinode</code> isn't supported. For more information about multi-node
     * parallel jobs, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-job-def.html">Creating
     * a multi-node parallel job definition</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of job definition. It's either <code>container</code> or
     * <code>multinode</code>. If the job is run on Fargate resources, then
     * <code>multinode</code> isn't supported. For more information about multi-node
     * parallel jobs, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-job-def.html">Creating
     * a multi-node parallel job definition</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of job definition. It's either <code>container</code> or
     * <code>multinode</code>. If the job is run on Fargate resources, then
     * <code>multinode</code> isn't supported. For more information about multi-node
     * parallel jobs, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-job-def.html">Creating
     * a multi-node parallel job definition</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of job definition. It's either <code>container</code> or
     * <code>multinode</code>. If the job is run on Fargate resources, then
     * <code>multinode</code> isn't supported. For more information about multi-node
     * parallel jobs, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-job-def.html">Creating
     * a multi-node parallel job definition</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of job definition. It's either <code>container</code> or
     * <code>multinode</code>. If the job is run on Fargate resources, then
     * <code>multinode</code> isn't supported. For more information about multi-node
     * parallel jobs, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-job-def.html">Creating
     * a multi-node parallel job definition</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The scheduling priority of the job definition. This only affects jobs in job
     * queues with a fair share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline int GetSchedulingPriority() const{ return m_schedulingPriority; }

    /**
     * <p>The scheduling priority of the job definition. This only affects jobs in job
     * queues with a fair share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline bool SchedulingPriorityHasBeenSet() const { return m_schedulingPriorityHasBeenSet; }

    /**
     * <p>The scheduling priority of the job definition. This only affects jobs in job
     * queues with a fair share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline void SetSchedulingPriority(int value) { m_schedulingPriorityHasBeenSet = true; m_schedulingPriority = value; }

    /**
     * <p>The scheduling priority of the job definition. This only affects jobs in job
     * queues with a fair share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline JobDefinition& WithSchedulingPriority(int value) { SetSchedulingPriority(value); return *this;}


    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * definition parameters</a> in the <i>Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition.</p>
     */
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition.</p>
     */
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition.</p>
     */
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition.</p>
     */
    inline JobDefinition& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition.</p>
     */
    inline JobDefinition& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}


    /**
     * <p>An object with various properties specific to Amazon ECS based jobs. Valid
     * values are <code>containerProperties</code>, <code>eksProperties</code>, and
     * <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline const ContainerProperties& GetContainerProperties() const{ return m_containerProperties; }

    /**
     * <p>An object with various properties specific to Amazon ECS based jobs. Valid
     * values are <code>containerProperties</code>, <code>eksProperties</code>, and
     * <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline bool ContainerPropertiesHasBeenSet() const { return m_containerPropertiesHasBeenSet; }

    /**
     * <p>An object with various properties specific to Amazon ECS based jobs. Valid
     * values are <code>containerProperties</code>, <code>eksProperties</code>, and
     * <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline void SetContainerProperties(const ContainerProperties& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = value; }

    /**
     * <p>An object with various properties specific to Amazon ECS based jobs. Valid
     * values are <code>containerProperties</code>, <code>eksProperties</code>, and
     * <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline void SetContainerProperties(ContainerProperties&& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = std::move(value); }

    /**
     * <p>An object with various properties specific to Amazon ECS based jobs. Valid
     * values are <code>containerProperties</code>, <code>eksProperties</code>, and
     * <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline JobDefinition& WithContainerProperties(const ContainerProperties& value) { SetContainerProperties(value); return *this;}

    /**
     * <p>An object with various properties specific to Amazon ECS based jobs. Valid
     * values are <code>containerProperties</code>, <code>eksProperties</code>, and
     * <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline JobDefinition& WithContainerProperties(ContainerProperties&& value) { SetContainerProperties(std::move(value)); return *this;}


    /**
     * <p>The timeout time for jobs that are submitted with this job definition. After
     * the amount of time you specify passes, Batch terminates your jobs if they aren't
     * finished.</p>
     */
    inline const JobTimeout& GetTimeout() const{ return m_timeout; }

    /**
     * <p>The timeout time for jobs that are submitted with this job definition. After
     * the amount of time you specify passes, Batch terminates your jobs if they aren't
     * finished.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The timeout time for jobs that are submitted with this job definition. After
     * the amount of time you specify passes, Batch terminates your jobs if they aren't
     * finished.</p>
     */
    inline void SetTimeout(const JobTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The timeout time for jobs that are submitted with this job definition. After
     * the amount of time you specify passes, Batch terminates your jobs if they aren't
     * finished.</p>
     */
    inline void SetTimeout(JobTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }

    /**
     * <p>The timeout time for jobs that are submitted with this job definition. After
     * the amount of time you specify passes, Batch terminates your jobs if they aren't
     * finished.</p>
     */
    inline JobDefinition& WithTimeout(const JobTimeout& value) { SetTimeout(value); return *this;}

    /**
     * <p>The timeout time for jobs that are submitted with this job definition. After
     * the amount of time you specify passes, Batch terminates your jobs if they aren't
     * finished.</p>
     */
    inline JobDefinition& WithTimeout(JobTimeout&& value) { SetTimeout(std::move(value)); return *this;}


    /**
     * <p>An object with various properties that are specific to multi-node parallel
     * jobs. Valid values are <code>containerProperties</code>,
     * <code>eksProperties</code>, and <code>nodeProperties</code>. Only one can be
     * specified.</p>  <p>If the job runs on Fargate resources, don't specify
     * <code>nodeProperties</code>. Use <code>containerProperties</code> instead.</p>
     * 
     */
    inline const NodeProperties& GetNodeProperties() const{ return m_nodeProperties; }

    /**
     * <p>An object with various properties that are specific to multi-node parallel
     * jobs. Valid values are <code>containerProperties</code>,
     * <code>eksProperties</code>, and <code>nodeProperties</code>. Only one can be
     * specified.</p>  <p>If the job runs on Fargate resources, don't specify
     * <code>nodeProperties</code>. Use <code>containerProperties</code> instead.</p>
     * 
     */
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }

    /**
     * <p>An object with various properties that are specific to multi-node parallel
     * jobs. Valid values are <code>containerProperties</code>,
     * <code>eksProperties</code>, and <code>nodeProperties</code>. Only one can be
     * specified.</p>  <p>If the job runs on Fargate resources, don't specify
     * <code>nodeProperties</code>. Use <code>containerProperties</code> instead.</p>
     * 
     */
    inline void SetNodeProperties(const NodeProperties& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }

    /**
     * <p>An object with various properties that are specific to multi-node parallel
     * jobs. Valid values are <code>containerProperties</code>,
     * <code>eksProperties</code>, and <code>nodeProperties</code>. Only one can be
     * specified.</p>  <p>If the job runs on Fargate resources, don't specify
     * <code>nodeProperties</code>. Use <code>containerProperties</code> instead.</p>
     * 
     */
    inline void SetNodeProperties(NodeProperties&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }

    /**
     * <p>An object with various properties that are specific to multi-node parallel
     * jobs. Valid values are <code>containerProperties</code>,
     * <code>eksProperties</code>, and <code>nodeProperties</code>. Only one can be
     * specified.</p>  <p>If the job runs on Fargate resources, don't specify
     * <code>nodeProperties</code>. Use <code>containerProperties</code> instead.</p>
     * 
     */
    inline JobDefinition& WithNodeProperties(const NodeProperties& value) { SetNodeProperties(value); return *this;}

    /**
     * <p>An object with various properties that are specific to multi-node parallel
     * jobs. Valid values are <code>containerProperties</code>,
     * <code>eksProperties</code>, and <code>nodeProperties</code>. Only one can be
     * specified.</p>  <p>If the job runs on Fargate resources, don't specify
     * <code>nodeProperties</code>. Use <code>containerProperties</code> instead.</p>
     * 
     */
    inline JobDefinition& WithNodeProperties(NodeProperties&& value) { SetNodeProperties(std::move(value)); return *this;}


    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline JobDefinition& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline JobDefinition& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline JobDefinition& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline JobDefinition& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline JobDefinition& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline JobDefinition& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline JobDefinition& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline JobDefinition& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline JobDefinition& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline JobDefinition& WithPropagateTags(bool value) { SetPropagateTags(value); return *this;}


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
    inline JobDefinition& WithPlatformCapabilities(const Aws::Vector<PlatformCapability>& value) { SetPlatformCapabilities(value); return *this;}

    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline JobDefinition& WithPlatformCapabilities(Aws::Vector<PlatformCapability>&& value) { SetPlatformCapabilities(std::move(value)); return *this;}

    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline JobDefinition& AddPlatformCapabilities(const PlatformCapability& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(value); return *this; }

    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline JobDefinition& AddPlatformCapabilities(PlatformCapability&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Valid values are <code>containerProperties</code>, <code>eksProperties</code>,
     * and <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline const EksProperties& GetEksProperties() const{ return m_eksProperties; }

    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Valid values are <code>containerProperties</code>, <code>eksProperties</code>,
     * and <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline bool EksPropertiesHasBeenSet() const { return m_eksPropertiesHasBeenSet; }

    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Valid values are <code>containerProperties</code>, <code>eksProperties</code>,
     * and <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline void SetEksProperties(const EksProperties& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = value; }

    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Valid values are <code>containerProperties</code>, <code>eksProperties</code>,
     * and <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline void SetEksProperties(EksProperties&& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = std::move(value); }

    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Valid values are <code>containerProperties</code>, <code>eksProperties</code>,
     * and <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline JobDefinition& WithEksProperties(const EksProperties& value) { SetEksProperties(value); return *this;}

    /**
     * <p>An object with various properties that are specific to Amazon EKS based jobs.
     * Valid values are <code>containerProperties</code>, <code>eksProperties</code>,
     * and <code>nodeProperties</code>. Only one can be specified.</p>
     */
    inline JobDefinition& WithEksProperties(EksProperties&& value) { SetEksProperties(std::move(value)); return *this;}


    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline const OrchestrationType& GetContainerOrchestrationType() const{ return m_containerOrchestrationType; }

    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline bool ContainerOrchestrationTypeHasBeenSet() const { return m_containerOrchestrationTypeHasBeenSet; }

    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline void SetContainerOrchestrationType(const OrchestrationType& value) { m_containerOrchestrationTypeHasBeenSet = true; m_containerOrchestrationType = value; }

    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline void SetContainerOrchestrationType(OrchestrationType&& value) { m_containerOrchestrationTypeHasBeenSet = true; m_containerOrchestrationType = std::move(value); }

    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline JobDefinition& WithContainerOrchestrationType(const OrchestrationType& value) { SetContainerOrchestrationType(value); return *this;}

    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline JobDefinition& WithContainerOrchestrationType(OrchestrationType&& value) { SetContainerOrchestrationType(std::move(value)); return *this;}

  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    Aws::String m_jobDefinitionArn;
    bool m_jobDefinitionArnHasBeenSet = false;

    int m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    int m_schedulingPriority;
    bool m_schedulingPriorityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    ContainerProperties m_containerProperties;
    bool m_containerPropertiesHasBeenSet = false;

    JobTimeout m_timeout;
    bool m_timeoutHasBeenSet = false;

    NodeProperties m_nodeProperties;
    bool m_nodePropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_propagateTags;
    bool m_propagateTagsHasBeenSet = false;

    Aws::Vector<PlatformCapability> m_platformCapabilities;
    bool m_platformCapabilitiesHasBeenSet = false;

    EksProperties m_eksProperties;
    bool m_eksPropertiesHasBeenSet = false;

    OrchestrationType m_containerOrchestrationType;
    bool m_containerOrchestrationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
