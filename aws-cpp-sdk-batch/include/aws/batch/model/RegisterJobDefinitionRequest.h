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
#include <aws/batch/model/JobDefinitionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ContainerProperties.h>
#include <aws/batch/model/RetryStrategy.h>

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
    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the job definition to register. </p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the job definition to register. </p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }

    /**
     * <p>The name of the job definition to register. </p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }

    /**
     * <p>The name of the job definition to register. </p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the job definition to register. </p>
     */
    inline RegisterJobDefinitionRequest& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the job definition to register. </p>
     */
    inline RegisterJobDefinitionRequest& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the job definition to register. </p>
     */
    inline RegisterJobDefinitionRequest& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The type of job definition.</p>
     */
    inline const JobDefinitionType& GetType() const{ return m_type; }

    /**
     * <p>The type of job definition.</p>
     */
    inline void SetType(const JobDefinitionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of job definition.</p>
     */
    inline void SetType(JobDefinitionType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of job definition.</p>
     */
    inline RegisterJobDefinitionRequest& WithType(const JobDefinitionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of job definition.</p>
     */
    inline RegisterJobDefinitionRequest& WithType(JobDefinitionType&& value) { SetType(value); return *this;}

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
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

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
    inline RegisterJobDefinitionRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(value); return *this;}

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline RegisterJobDefinitionRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>An object with various properties specific for container-based jobs. This
     * parameter is required if the <code>type</code> parameter is
     * <code>container</code>.</p>
     */
    inline const ContainerProperties& GetContainerProperties() const{ return m_containerProperties; }

    /**
     * <p>An object with various properties specific for container-based jobs. This
     * parameter is required if the <code>type</code> parameter is
     * <code>container</code>.</p>
     */
    inline void SetContainerProperties(const ContainerProperties& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = value; }

    /**
     * <p>An object with various properties specific for container-based jobs. This
     * parameter is required if the <code>type</code> parameter is
     * <code>container</code>.</p>
     */
    inline void SetContainerProperties(ContainerProperties&& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = value; }

    /**
     * <p>An object with various properties specific for container-based jobs. This
     * parameter is required if the <code>type</code> parameter is
     * <code>container</code>.</p>
     */
    inline RegisterJobDefinitionRequest& WithContainerProperties(const ContainerProperties& value) { SetContainerProperties(value); return *this;}

    /**
     * <p>An object with various properties specific for container-based jobs. This
     * parameter is required if the <code>type</code> parameter is
     * <code>container</code>.</p>
     */
    inline RegisterJobDefinitionRequest& WithContainerProperties(ContainerProperties&& value) { SetContainerProperties(value); return *this;}

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here.</p>
     */
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here.</p>
     */
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here.</p>
     */
    inline RegisterJobDefinitionRequest& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that is specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here.</p>
     */
    inline RegisterJobDefinitionRequest& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(value); return *this;}

  private:
    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet;
    JobDefinitionType m_type;
    bool m_typeHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
    ContainerProperties m_containerProperties;
    bool m_containerPropertiesHasBeenSet;
    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
