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
#include <aws/batch/model/JobDefinitionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ContainerProperties.h>
#include <aws/batch/model/NodeProperties.h>
#include <aws/batch/model/RetryStrategy.h>
#include <aws/batch/model/JobTimeout.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API RegisterJobDefinitionRequest : public BatchRequest
  {
  public:
    RegisterJobDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterJobDefinition"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the job definition to register. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the job definition to register. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }

    /**
     * <p>The name of the job definition to register. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }

    /**
     * <p>The name of the job definition to register. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the job definition to register. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the job definition to register. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline RegisterJobDefinitionRequest& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the job definition to register. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline RegisterJobDefinitionRequest& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition to register. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline RegisterJobDefinitionRequest& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>The type of job definition.</p>
     */
    inline const JobDefinitionType& GetType() const{ return m_type; }

    /**
     * <p>The type of job definition.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of job definition.</p>
     */
    inline void SetType(const JobDefinitionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of job definition.</p>
     */
    inline void SetType(JobDefinitionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of job definition.</p>
     */
    inline RegisterJobDefinitionRequest& WithType(const JobDefinitionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of job definition.</p>
     */
    inline RegisterJobDefinitionRequest& WithType(JobDefinitionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>An object with various properties specific to single-node container-based
     * jobs. If the job definition's <code>type</code> parameter is
     * <code>container</code>, then you must specify either
     * <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline const ContainerProperties& GetContainerProperties() const{ return m_containerProperties; }

    /**
     * <p>An object with various properties specific to single-node container-based
     * jobs. If the job definition's <code>type</code> parameter is
     * <code>container</code>, then you must specify either
     * <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline bool ContainerPropertiesHasBeenSet() const { return m_containerPropertiesHasBeenSet; }

    /**
     * <p>An object with various properties specific to single-node container-based
     * jobs. If the job definition's <code>type</code> parameter is
     * <code>container</code>, then you must specify either
     * <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline void SetContainerProperties(const ContainerProperties& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = value; }

    /**
     * <p>An object with various properties specific to single-node container-based
     * jobs. If the job definition's <code>type</code> parameter is
     * <code>container</code>, then you must specify either
     * <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline void SetContainerProperties(ContainerProperties&& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = std::move(value); }

    /**
     * <p>An object with various properties specific to single-node container-based
     * jobs. If the job definition's <code>type</code> parameter is
     * <code>container</code>, then you must specify either
     * <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline RegisterJobDefinitionRequest& WithContainerProperties(const ContainerProperties& value) { SetContainerProperties(value); return *this;}

    /**
     * <p>An object with various properties specific to single-node container-based
     * jobs. If the job definition's <code>type</code> parameter is
     * <code>container</code>, then you must specify either
     * <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline RegisterJobDefinitionRequest& WithContainerProperties(ContainerProperties&& value) { SetContainerProperties(std::move(value)); return *this;}


    /**
     * <p>An object with various properties specific to multi-node parallel jobs. If
     * you specify node properties for a job, it becomes a multi-node parallel job. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-parallel-jobs.html">Multi-node
     * Parallel Jobs</a> in the <i>AWS Batch User Guide</i>. If the job definition's
     * <code>type</code> parameter is <code>container</code>, then you must specify
     * either <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline const NodeProperties& GetNodeProperties() const{ return m_nodeProperties; }

    /**
     * <p>An object with various properties specific to multi-node parallel jobs. If
     * you specify node properties for a job, it becomes a multi-node parallel job. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-parallel-jobs.html">Multi-node
     * Parallel Jobs</a> in the <i>AWS Batch User Guide</i>. If the job definition's
     * <code>type</code> parameter is <code>container</code>, then you must specify
     * either <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }

    /**
     * <p>An object with various properties specific to multi-node parallel jobs. If
     * you specify node properties for a job, it becomes a multi-node parallel job. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-parallel-jobs.html">Multi-node
     * Parallel Jobs</a> in the <i>AWS Batch User Guide</i>. If the job definition's
     * <code>type</code> parameter is <code>container</code>, then you must specify
     * either <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline void SetNodeProperties(const NodeProperties& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }

    /**
     * <p>An object with various properties specific to multi-node parallel jobs. If
     * you specify node properties for a job, it becomes a multi-node parallel job. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-parallel-jobs.html">Multi-node
     * Parallel Jobs</a> in the <i>AWS Batch User Guide</i>. If the job definition's
     * <code>type</code> parameter is <code>container</code>, then you must specify
     * either <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline void SetNodeProperties(NodeProperties&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }

    /**
     * <p>An object with various properties specific to multi-node parallel jobs. If
     * you specify node properties for a job, it becomes a multi-node parallel job. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-parallel-jobs.html">Multi-node
     * Parallel Jobs</a> in the <i>AWS Batch User Guide</i>. If the job definition's
     * <code>type</code> parameter is <code>container</code>, then you must specify
     * either <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline RegisterJobDefinitionRequest& WithNodeProperties(const NodeProperties& value) { SetNodeProperties(value); return *this;}

    /**
     * <p>An object with various properties specific to multi-node parallel jobs. If
     * you specify node properties for a job, it becomes a multi-node parallel job. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-parallel-jobs.html">Multi-node
     * Parallel Jobs</a> in the <i>AWS Batch User Guide</i>. If the job definition's
     * <code>type</code> parameter is <code>container</code>, then you must specify
     * either <code>containerProperties</code> or <code>nodeProperties</code>.</p>
     */
    inline RegisterJobDefinitionRequest& WithNodeProperties(NodeProperties&& value) { SetNodeProperties(std::move(value)); return *this;}


    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here. If a job is terminated due
     * to a timeout, it is not retried. </p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here. If a job is terminated due
     * to a timeout, it is not retried. </p>
     */
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here. If a job is terminated due
     * to a timeout, it is not retried. </p>
     */
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here. If a job is terminated due
     * to a timeout, it is not retried. </p>
     */
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here. If a job is terminated due
     * to a timeout, it is not retried. </p>
     */
    inline RegisterJobDefinitionRequest& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here. If a job is terminated due
     * to a timeout, it is not retried. </p>
     */
    inline RegisterJobDefinitionRequest& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}


    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition, after which AWS Batch terminates your jobs if they have not
     * finished. If a job is terminated due to a timeout, it is not retried. The
     * minimum value for the timeout is 60 seconds. Any timeout configuration that is
     * specified during a <a>SubmitJob</a> operation overrides the timeout
     * configuration defined here. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const JobTimeout& GetTimeout() const{ return m_timeout; }

    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition, after which AWS Batch terminates your jobs if they have not
     * finished. If a job is terminated due to a timeout, it is not retried. The
     * minimum value for the timeout is 60 seconds. Any timeout configuration that is
     * specified during a <a>SubmitJob</a> operation overrides the timeout
     * configuration defined here. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition, after which AWS Batch terminates your jobs if they have not
     * finished. If a job is terminated due to a timeout, it is not retried. The
     * minimum value for the timeout is 60 seconds. Any timeout configuration that is
     * specified during a <a>SubmitJob</a> operation overrides the timeout
     * configuration defined here. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetTimeout(const JobTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition, after which AWS Batch terminates your jobs if they have not
     * finished. If a job is terminated due to a timeout, it is not retried. The
     * minimum value for the timeout is 60 seconds. Any timeout configuration that is
     * specified during a <a>SubmitJob</a> operation overrides the timeout
     * configuration defined here. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetTimeout(JobTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }

    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition, after which AWS Batch terminates your jobs if they have not
     * finished. If a job is terminated due to a timeout, it is not retried. The
     * minimum value for the timeout is 60 seconds. Any timeout configuration that is
     * specified during a <a>SubmitJob</a> operation overrides the timeout
     * configuration defined here. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline RegisterJobDefinitionRequest& WithTimeout(const JobTimeout& value) { SetTimeout(value); return *this;}

    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition, after which AWS Batch terminates your jobs if they have not
     * finished. If a job is terminated due to a timeout, it is not retried. The
     * minimum value for the timeout is 60 seconds. Any timeout configuration that is
     * specified during a <a>SubmitJob</a> operation overrides the timeout
     * configuration defined here. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline RegisterJobDefinitionRequest& WithTimeout(JobTimeout&& value) { SetTimeout(std::move(value)); return *this;}

  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet;

    JobDefinitionType m_type;
    bool m_typeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;

    ContainerProperties m_containerProperties;
    bool m_containerPropertiesHasBeenSet;

    NodeProperties m_nodeProperties;
    bool m_nodePropertiesHasBeenSet;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet;

    JobTimeout m_timeout;
    bool m_timeoutHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
