﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EksProperties.h>
#include <aws/batch/model/EcsProperties.h>
#include <aws/batch/model/PlatformCapability.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for <code>RegisterJobDefinition</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/RegisterJobDefinitionRequest">AWS
   * API Reference</a></p>
   */
  class RegisterJobDefinitionRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API RegisterJobDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterJobDefinition"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the job definition to register. It can be up to 128 letters long.
     * It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }
    inline RegisterJobDefinitionRequest& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}
    inline RegisterJobDefinitionRequest& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}
    inline RegisterJobDefinitionRequest& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job definition. For more information about multi-node parallel
     * jobs, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-job-def.html">Creating
     * a multi-node parallel job definition</a> in the <i>Batch User Guide</i>.</p>
     * <ul> <li> <p>If the value is <code>container</code>, then one of the following
     * is required: <code>containerProperties</code>, <code>ecsProperties</code>, or
     * <code>eksProperties</code>.</p> </li> <li> <p>If the value is
     * <code>multinode</code>, then <code>nodeProperties</code> is required.</p> </li>
     * </ul>  <p>If the job is run on Fargate resources, then
     * <code>multinode</code> isn't supported.</p> 
     */
    inline const JobDefinitionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const JobDefinitionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(JobDefinitionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RegisterJobDefinitionRequest& WithType(const JobDefinitionType& value) { SetType(value); return *this;}
    inline RegisterJobDefinitionRequest& WithType(JobDefinitionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default parameter substitution placeholders to set in the job definition.
     * Parameters are specified as a key-value pair mapping. Parameters in a
     * <code>SubmitJob</code> request override any corresponding parameter defaults
     * from the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline RegisterJobDefinitionRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline RegisterJobDefinitionRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline RegisterJobDefinitionRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline RegisterJobDefinitionRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline RegisterJobDefinitionRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline RegisterJobDefinitionRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline RegisterJobDefinitionRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline RegisterJobDefinitionRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline RegisterJobDefinitionRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scheduling priority for jobs that are submitted with this job definition.
     * This only affects jobs in job queues with a fair share policy. Jobs with a
     * higher scheduling priority are scheduled before jobs with a lower scheduling
     * priority.</p> <p>The minimum supported value is 0 and the maximum supported
     * value is 9999.</p>
     */
    inline int GetSchedulingPriority() const{ return m_schedulingPriority; }
    inline bool SchedulingPriorityHasBeenSet() const { return m_schedulingPriorityHasBeenSet; }
    inline void SetSchedulingPriority(int value) { m_schedulingPriorityHasBeenSet = true; m_schedulingPriority = value; }
    inline RegisterJobDefinitionRequest& WithSchedulingPriority(int value) { SetSchedulingPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with properties specific to Amazon ECS-based single-node
     * container-based jobs. If the job definition's <code>type</code> parameter is
     * <code>container</code>, then you must specify either
     * <code>containerProperties</code> or <code>nodeProperties</code>. This must not
     * be specified for Amazon EKS-based job definitions.</p>  <p>If the job runs
     * on Fargate resources, then you must not specify <code>nodeProperties</code>; use
     * only <code>containerProperties</code>.</p> 
     */
    inline const ContainerProperties& GetContainerProperties() const{ return m_containerProperties; }
    inline bool ContainerPropertiesHasBeenSet() const { return m_containerPropertiesHasBeenSet; }
    inline void SetContainerProperties(const ContainerProperties& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = value; }
    inline void SetContainerProperties(ContainerProperties&& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = std::move(value); }
    inline RegisterJobDefinitionRequest& WithContainerProperties(const ContainerProperties& value) { SetContainerProperties(value); return *this;}
    inline RegisterJobDefinitionRequest& WithContainerProperties(ContainerProperties&& value) { SetContainerProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with properties specific to multi-node parallel jobs. If you
     * specify node properties for a job, it becomes a multi-node parallel job. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-parallel-jobs.html">Multi-node
     * Parallel Jobs</a> in the <i>Batch User Guide</i>.</p>  <p>If the job runs
     * on Fargate resources, then you must not specify <code>nodeProperties</code>; use
     * <code>containerProperties</code> instead.</p>   <p>If the job runs
     * on Amazon EKS resources, then you must not specify
     * <code>nodeProperties</code>.</p> 
     */
    inline const NodeProperties& GetNodeProperties() const{ return m_nodeProperties; }
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }
    inline void SetNodeProperties(const NodeProperties& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }
    inline void SetNodeProperties(NodeProperties&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }
    inline RegisterJobDefinitionRequest& WithNodeProperties(const NodeProperties& value) { SetNodeProperties(value); return *this;}
    inline RegisterJobDefinitionRequest& WithNodeProperties(NodeProperties&& value) { SetNodeProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition. Any retry strategy that's specified during a <a>SubmitJob</a>
     * operation overrides the retry strategy defined here. If a job is terminated due
     * to a timeout, it isn't retried.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }
    inline RegisterJobDefinitionRequest& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}
    inline RegisterJobDefinitionRequest& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to propagate the tags from the job or job definition to the
     * corresponding Amazon ECS task. If no value is specified, the tags are not
     * propagated. Tags can only be propagated to the tasks during task creation. For
     * tags with the same name, job tags are given priority over job definitions tags.
     * If the total number of combined tags from the job and job definition is over 50,
     * the job is moved to the <code>FAILED</code> state.</p>  <p>If the job runs
     * on Amazon EKS resources, then you must not specify
     * <code>propagateTags</code>.</p> 
     */
    inline bool GetPropagateTags() const{ return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(bool value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline RegisterJobDefinitionRequest& WithPropagateTags(bool value) { SetPropagateTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout configuration for jobs that are submitted with this job
     * definition, after which Batch terminates your jobs if they have not finished. If
     * a job is terminated due to a timeout, it isn't retried. The minimum value for
     * the timeout is 60 seconds. Any timeout configuration that's specified during a
     * <a>SubmitJob</a> operation overrides the timeout configuration defined here. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const JobTimeout& GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(const JobTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline void SetTimeout(JobTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }
    inline RegisterJobDefinitionRequest& WithTimeout(const JobTimeout& value) { SetTimeout(value); return *this;}
    inline RegisterJobDefinitionRequest& WithTimeout(JobTimeout&& value) { SetTimeout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the job definition to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * Amazon Web Services Resources</a> in <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RegisterJobDefinitionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline RegisterJobDefinitionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline RegisterJobDefinitionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline RegisterJobDefinitionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RegisterJobDefinitionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RegisterJobDefinitionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline RegisterJobDefinitionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RegisterJobDefinitionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RegisterJobDefinitionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. To run the job on Fargate resources,
     * specify <code>FARGATE</code>.</p>  <p>If the job runs on Amazon EKS
     * resources, then you must not specify <code>platformCapabilities</code>.</p>
     * 
     */
    inline const Aws::Vector<PlatformCapability>& GetPlatformCapabilities() const{ return m_platformCapabilities; }
    inline bool PlatformCapabilitiesHasBeenSet() const { return m_platformCapabilitiesHasBeenSet; }
    inline void SetPlatformCapabilities(const Aws::Vector<PlatformCapability>& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities = value; }
    inline void SetPlatformCapabilities(Aws::Vector<PlatformCapability>&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities = std::move(value); }
    inline RegisterJobDefinitionRequest& WithPlatformCapabilities(const Aws::Vector<PlatformCapability>& value) { SetPlatformCapabilities(value); return *this;}
    inline RegisterJobDefinitionRequest& WithPlatformCapabilities(Aws::Vector<PlatformCapability>&& value) { SetPlatformCapabilities(std::move(value)); return *this;}
    inline RegisterJobDefinitionRequest& AddPlatformCapabilities(const PlatformCapability& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(value); return *this; }
    inline RegisterJobDefinitionRequest& AddPlatformCapabilities(PlatformCapability&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object with properties that are specific to Amazon EKS-based jobs. This
     * must not be specified for Amazon ECS based job definitions.</p>
     */
    inline const EksProperties& GetEksProperties() const{ return m_eksProperties; }
    inline bool EksPropertiesHasBeenSet() const { return m_eksPropertiesHasBeenSet; }
    inline void SetEksProperties(const EksProperties& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = value; }
    inline void SetEksProperties(EksProperties&& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = std::move(value); }
    inline RegisterJobDefinitionRequest& WithEksProperties(const EksProperties& value) { SetEksProperties(value); return *this;}
    inline RegisterJobDefinitionRequest& WithEksProperties(EksProperties&& value) { SetEksProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with properties that are specific to Amazon ECS-based jobs. This
     * must not be specified for Amazon EKS-based job definitions.</p>
     */
    inline const EcsProperties& GetEcsProperties() const{ return m_ecsProperties; }
    inline bool EcsPropertiesHasBeenSet() const { return m_ecsPropertiesHasBeenSet; }
    inline void SetEcsProperties(const EcsProperties& value) { m_ecsPropertiesHasBeenSet = true; m_ecsProperties = value; }
    inline void SetEcsProperties(EcsProperties&& value) { m_ecsPropertiesHasBeenSet = true; m_ecsProperties = std::move(value); }
    inline RegisterJobDefinitionRequest& WithEcsProperties(const EcsProperties& value) { SetEcsProperties(value); return *this;}
    inline RegisterJobDefinitionRequest& WithEcsProperties(EcsProperties&& value) { SetEcsProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    JobDefinitionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_schedulingPriority;
    bool m_schedulingPriorityHasBeenSet = false;

    ContainerProperties m_containerProperties;
    bool m_containerPropertiesHasBeenSet = false;

    NodeProperties m_nodeProperties;
    bool m_nodePropertiesHasBeenSet = false;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    bool m_propagateTags;
    bool m_propagateTagsHasBeenSet = false;

    JobTimeout m_timeout;
    bool m_timeoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<PlatformCapability> m_platformCapabilities;
    bool m_platformCapabilitiesHasBeenSet = false;

    EksProperties m_eksProperties;
    bool m_eksPropertiesHasBeenSet = false;

    EcsProperties m_ecsProperties;
    bool m_ecsPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
