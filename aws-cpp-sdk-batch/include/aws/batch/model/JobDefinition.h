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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/RetryStrategy.h>
#include <aws/batch/model/ContainerProperties.h>
#include <aws/batch/model/JobTimeout.h>
#include <aws/batch/model/NodeProperties.h>
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
   * <p>An object representing an AWS Batch job definition.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API JobDefinition
  {
  public:
    JobDefinition();
    JobDefinition(Aws::Utils::Json::JsonView jsonValue);
    JobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the job definition. </p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the job definition. </p>
     */
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }

    /**
     * <p>The name of the job definition. </p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }

    /**
     * <p>The name of the job definition. </p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the job definition. </p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the job definition. </p>
     */
    inline JobDefinition& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the job definition. </p>
     */
    inline JobDefinition& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition. </p>
     */
    inline JobDefinition& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the job definition. </p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition. </p>
     */
    inline bool JobDefinitionArnHasBeenSet() const { return m_jobDefinitionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition. </p>
     */
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition. </p>
     */
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition. </p>
     */
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition. </p>
     */
    inline JobDefinition& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition. </p>
     */
    inline JobDefinition& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the job definition. </p>
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
     * <p>The type of job definition.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of job definition.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of job definition.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of job definition.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of job definition.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of job definition.</p>
     */
    inline JobDefinition& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of job definition.</p>
     */
    inline JobDefinition& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of job definition.</p>
     */
    inline JobDefinition& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline JobDefinition& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline JobDefinition& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline JobDefinition& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Default parameters or parameter substitution placeholders that are set in the
     * job definition. Parameters are specified as a key-value pair mapping. Parameters
     * in a <code>SubmitJob</code> request override any corresponding parameter
     * defaults from the job definition. For more information about specifying
     * parameters, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_definition_parameters.html">Job
     * Definition Parameters</a> in the <i>AWS Batch User Guide</i>.</p>
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
     * <p>An object with various properties specific to container-based jobs. </p>
     */
    inline const ContainerProperties& GetContainerProperties() const{ return m_containerProperties; }

    /**
     * <p>An object with various properties specific to container-based jobs. </p>
     */
    inline bool ContainerPropertiesHasBeenSet() const { return m_containerPropertiesHasBeenSet; }

    /**
     * <p>An object with various properties specific to container-based jobs. </p>
     */
    inline void SetContainerProperties(const ContainerProperties& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = value; }

    /**
     * <p>An object with various properties specific to container-based jobs. </p>
     */
    inline void SetContainerProperties(ContainerProperties&& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = std::move(value); }

    /**
     * <p>An object with various properties specific to container-based jobs. </p>
     */
    inline JobDefinition& WithContainerProperties(const ContainerProperties& value) { SetContainerProperties(value); return *this;}

    /**
     * <p>An object with various properties specific to container-based jobs. </p>
     */
    inline JobDefinition& WithContainerProperties(ContainerProperties&& value) { SetContainerProperties(std::move(value)); return *this;}


    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition. You can specify a timeout duration after which AWS Batch terminates
     * your jobs if they have not finished.</p>
     */
    inline const JobTimeout& GetTimeout() const{ return m_timeout; }

    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition. You can specify a timeout duration after which AWS Batch terminates
     * your jobs if they have not finished.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition. You can specify a timeout duration after which AWS Batch terminates
     * your jobs if they have not finished.</p>
     */
    inline void SetTimeout(const JobTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition. You can specify a timeout duration after which AWS Batch terminates
     * your jobs if they have not finished.</p>
     */
    inline void SetTimeout(JobTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }

    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition. You can specify a timeout duration after which AWS Batch terminates
     * your jobs if they have not finished.</p>
     */
    inline JobDefinition& WithTimeout(const JobTimeout& value) { SetTimeout(value); return *this;}

    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition. You can specify a timeout duration after which AWS Batch terminates
     * your jobs if they have not finished.</p>
     */
    inline JobDefinition& WithTimeout(JobTimeout&& value) { SetTimeout(std::move(value)); return *this;}


    /**
     * <p>An object with various properties specific to multi-node parallel jobs.</p>
     */
    inline const NodeProperties& GetNodeProperties() const{ return m_nodeProperties; }

    /**
     * <p>An object with various properties specific to multi-node parallel jobs.</p>
     */
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }

    /**
     * <p>An object with various properties specific to multi-node parallel jobs.</p>
     */
    inline void SetNodeProperties(const NodeProperties& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }

    /**
     * <p>An object with various properties specific to multi-node parallel jobs.</p>
     */
    inline void SetNodeProperties(NodeProperties&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }

    /**
     * <p>An object with various properties specific to multi-node parallel jobs.</p>
     */
    inline JobDefinition& WithNodeProperties(const NodeProperties& value) { SetNodeProperties(value); return *this;}

    /**
     * <p>An object with various properties specific to multi-node parallel jobs.</p>
     */
    inline JobDefinition& WithNodeProperties(NodeProperties&& value) { SetNodeProperties(std::move(value)); return *this;}

  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet;

    Aws::String m_jobDefinitionArn;
    bool m_jobDefinitionArnHasBeenSet;

    int m_revision;
    bool m_revisionHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet;

    ContainerProperties m_containerProperties;
    bool m_containerPropertiesHasBeenSet;

    JobTimeout m_timeout;
    bool m_timeoutHasBeenSet;

    NodeProperties m_nodeProperties;
    bool m_nodePropertiesHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
