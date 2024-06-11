﻿/**
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
#include <aws/batch/model/EcsProperties.h>
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


    ///@{
    /**
     * <p>The name of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }
    inline JobDefinition& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}
    inline JobDefinition& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}
    inline JobDefinition& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }
    inline bool JobDefinitionArnHasBeenSet() const { return m_jobDefinitionArnHasBeenSet; }
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = value; }
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::move(value); }
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn.assign(value); }
    inline JobDefinition& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}
    inline JobDefinition& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}
    inline JobDefinition& WithJobDefinitionArn(const char* value) { SetJobDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the job definition.</p>
     */
    inline int GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline JobDefinition& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job definition.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline JobDefinition& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline JobDefinition& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline JobDefinition& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job definition. It's either <code>container</code> or
     * <code>multinode</code>. If the job is run on Fargate resources, then
     * <code>multinode</code> isn't supported. For more information about multi-node
     * parallel jobs, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/multi-node-job-def.html">Creating
     * a multi-node parallel job definition</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline JobDefinition& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline JobDefinition& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline JobDefinition& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling priority of the job definition. This only affects jobs in job
     * queues with a fair share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline int GetSchedulingPriority() const{ return m_schedulingPriority; }
    inline bool SchedulingPriorityHasBeenSet() const { return m_schedulingPriorityHasBeenSet; }
    inline void SetSchedulingPriority(int value) { m_schedulingPriorityHasBeenSet = true; m_schedulingPriority = value; }
    inline JobDefinition& WithSchedulingPriority(int value) { SetSchedulingPriority(value); return *this;}
    ///@}

    ///@{
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
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline JobDefinition& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline JobDefinition& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline JobDefinition& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline JobDefinition& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline JobDefinition& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline JobDefinition& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline JobDefinition& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline JobDefinition& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline JobDefinition& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }
    inline JobDefinition& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}
    inline JobDefinition& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with properties specific to Amazon ECS-based jobs. When
     * <code>containerProperties</code> is used in the job definition, it can't be used
     * in addition to <code>eksProperties</code>, <code>ecsProperties</code>, or
     * <code>nodeProperties</code>.</p>
     */
    inline const ContainerProperties& GetContainerProperties() const{ return m_containerProperties; }
    inline bool ContainerPropertiesHasBeenSet() const { return m_containerPropertiesHasBeenSet; }
    inline void SetContainerProperties(const ContainerProperties& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = value; }
    inline void SetContainerProperties(ContainerProperties&& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = std::move(value); }
    inline JobDefinition& WithContainerProperties(const ContainerProperties& value) { SetContainerProperties(value); return *this;}
    inline JobDefinition& WithContainerProperties(ContainerProperties&& value) { SetContainerProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout time for jobs that are submitted with this job definition. After
     * the amount of time you specify passes, Batch terminates your jobs if they aren't
     * finished.</p>
     */
    inline const JobTimeout& GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(const JobTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline void SetTimeout(JobTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }
    inline JobDefinition& WithTimeout(const JobTimeout& value) { SetTimeout(value); return *this;}
    inline JobDefinition& WithTimeout(JobTimeout&& value) { SetTimeout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with properties that are specific to multi-node parallel jobs. When
     * <code>nodeProperties</code> is used in the job definition, it can't be used in
     * addition to <code>containerProperties</code>, <code>ecsProperties</code>, or
     * <code>eksProperties</code>.</p>  <p>If the job runs on Fargate resources,
     * don't specify <code>nodeProperties</code>. Use <code>containerProperties</code>
     * instead.</p> 
     */
    inline const NodeProperties& GetNodeProperties() const{ return m_nodeProperties; }
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }
    inline void SetNodeProperties(const NodeProperties& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }
    inline void SetNodeProperties(NodeProperties&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }
    inline JobDefinition& WithNodeProperties(const NodeProperties& value) { SetNodeProperties(value); return *this;}
    inline JobDefinition& WithNodeProperties(NodeProperties&& value) { SetNodeProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline JobDefinition& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline JobDefinition& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline JobDefinition& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline JobDefinition& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline JobDefinition& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline JobDefinition& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline JobDefinition& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline JobDefinition& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline JobDefinition& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to propagate the tags from the job or job definition to the
     * corresponding Amazon ECS task. If no value is specified, the tags aren't
     * propagated. Tags can only be propagated to the tasks when the tasks are created.
     * For tags with the same name, job tags are given priority over job definitions
     * tags. If the total number of combined tags from the job and job definition is
     * over 50, the job is moved to the <code>FAILED</code> state.</p>
     */
    inline bool GetPropagateTags() const{ return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(bool value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline JobDefinition& WithPropagateTags(bool value) { SetPropagateTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform capabilities required by the job definition. If no value is
     * specified, it defaults to <code>EC2</code>. Jobs run on Fargate resources
     * specify <code>FARGATE</code>.</p>
     */
    inline const Aws::Vector<PlatformCapability>& GetPlatformCapabilities() const{ return m_platformCapabilities; }
    inline bool PlatformCapabilitiesHasBeenSet() const { return m_platformCapabilitiesHasBeenSet; }
    inline void SetPlatformCapabilities(const Aws::Vector<PlatformCapability>& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities = value; }
    inline void SetPlatformCapabilities(Aws::Vector<PlatformCapability>&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities = std::move(value); }
    inline JobDefinition& WithPlatformCapabilities(const Aws::Vector<PlatformCapability>& value) { SetPlatformCapabilities(value); return *this;}
    inline JobDefinition& WithPlatformCapabilities(Aws::Vector<PlatformCapability>&& value) { SetPlatformCapabilities(std::move(value)); return *this;}
    inline JobDefinition& AddPlatformCapabilities(const PlatformCapability& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(value); return *this; }
    inline JobDefinition& AddPlatformCapabilities(PlatformCapability&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains the properties for the Amazon ECS resources of a
     * job.When <code>ecsProperties</code> is used in the job definition, it can't be
     * used in addition to <code>containerProperties</code>,
     * <code>eksProperties</code>, or <code>nodeProperties</code>.</p>
     */
    inline const EcsProperties& GetEcsProperties() const{ return m_ecsProperties; }
    inline bool EcsPropertiesHasBeenSet() const { return m_ecsPropertiesHasBeenSet; }
    inline void SetEcsProperties(const EcsProperties& value) { m_ecsPropertiesHasBeenSet = true; m_ecsProperties = value; }
    inline void SetEcsProperties(EcsProperties&& value) { m_ecsPropertiesHasBeenSet = true; m_ecsProperties = std::move(value); }
    inline JobDefinition& WithEcsProperties(const EcsProperties& value) { SetEcsProperties(value); return *this;}
    inline JobDefinition& WithEcsProperties(EcsProperties&& value) { SetEcsProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with properties that are specific to Amazon EKS-based jobs. When
     * <code>eksProperties</code> is used in the job definition, it can't be used in
     * addition to <code>containerProperties</code>, <code>ecsProperties</code>, or
     * <code>nodeProperties</code>.</p>
     */
    inline const EksProperties& GetEksProperties() const{ return m_eksProperties; }
    inline bool EksPropertiesHasBeenSet() const { return m_eksPropertiesHasBeenSet; }
    inline void SetEksProperties(const EksProperties& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = value; }
    inline void SetEksProperties(EksProperties&& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = std::move(value); }
    inline JobDefinition& WithEksProperties(const EksProperties& value) { SetEksProperties(value); return *this;}
    inline JobDefinition& WithEksProperties(EksProperties&& value) { SetEksProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline const OrchestrationType& GetContainerOrchestrationType() const{ return m_containerOrchestrationType; }
    inline bool ContainerOrchestrationTypeHasBeenSet() const { return m_containerOrchestrationTypeHasBeenSet; }
    inline void SetContainerOrchestrationType(const OrchestrationType& value) { m_containerOrchestrationTypeHasBeenSet = true; m_containerOrchestrationType = value; }
    inline void SetContainerOrchestrationType(OrchestrationType&& value) { m_containerOrchestrationTypeHasBeenSet = true; m_containerOrchestrationType = std::move(value); }
    inline JobDefinition& WithContainerOrchestrationType(const OrchestrationType& value) { SetContainerOrchestrationType(value); return *this;}
    inline JobDefinition& WithContainerOrchestrationType(OrchestrationType&& value) { SetContainerOrchestrationType(std::move(value)); return *this;}
    ///@}
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

    EcsProperties m_ecsProperties;
    bool m_ecsPropertiesHasBeenSet = false;

    EksProperties m_eksProperties;
    bool m_eksPropertiesHasBeenSet = false;

    OrchestrationType m_containerOrchestrationType;
    bool m_containerOrchestrationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
