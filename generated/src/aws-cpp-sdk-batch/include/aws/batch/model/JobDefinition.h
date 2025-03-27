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
#include <aws/batch/model/EcsProperties.h>
#include <aws/batch/model/EksProperties.h>
#include <aws/batch/model/OrchestrationType.h>
#include <aws/batch/model/ConsumableResourceProperties.h>
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
    AWS_BATCH_API JobDefinition() = default;
    AWS_BATCH_API JobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    JobDefinition& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const { return m_jobDefinitionArn; }
    inline bool JobDefinitionArnHasBeenSet() const { return m_jobDefinitionArnHasBeenSet; }
    template<typename JobDefinitionArnT = Aws::String>
    void SetJobDefinitionArn(JobDefinitionArnT&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::forward<JobDefinitionArnT>(value); }
    template<typename JobDefinitionArnT = Aws::String>
    JobDefinition& WithJobDefinitionArn(JobDefinitionArnT&& value) { SetJobDefinitionArn(std::forward<JobDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the job definition.</p>
     */
    inline int GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline JobDefinition& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job definition.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    JobDefinition& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    JobDefinition& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling priority of the job definition. This only affects jobs in job
     * queues with a fair-share policy. Jobs with a higher scheduling priority are
     * scheduled before jobs with a lower scheduling priority.</p>
     */
    inline int GetSchedulingPriority() const { return m_schedulingPriority; }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    JobDefinition& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    JobDefinition& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The retry strategy to use for failed jobs that are submitted with this job
     * definition.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const { return m_retryStrategy; }
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
    template<typename RetryStrategyT = RetryStrategy>
    void SetRetryStrategy(RetryStrategyT&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::forward<RetryStrategyT>(value); }
    template<typename RetryStrategyT = RetryStrategy>
    JobDefinition& WithRetryStrategy(RetryStrategyT&& value) { SetRetryStrategy(std::forward<RetryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with properties specific to Amazon ECS-based jobs. When
     * <code>containerProperties</code> is used in the job definition, it can't be used
     * in addition to <code>eksProperties</code>, <code>ecsProperties</code>, or
     * <code>nodeProperties</code>.</p>
     */
    inline const ContainerProperties& GetContainerProperties() const { return m_containerProperties; }
    inline bool ContainerPropertiesHasBeenSet() const { return m_containerPropertiesHasBeenSet; }
    template<typename ContainerPropertiesT = ContainerProperties>
    void SetContainerProperties(ContainerPropertiesT&& value) { m_containerPropertiesHasBeenSet = true; m_containerProperties = std::forward<ContainerPropertiesT>(value); }
    template<typename ContainerPropertiesT = ContainerProperties>
    JobDefinition& WithContainerProperties(ContainerPropertiesT&& value) { SetContainerProperties(std::forward<ContainerPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout time for jobs that are submitted with this job definition. After
     * the amount of time you specify passes, Batch terminates your jobs if they aren't
     * finished.</p>
     */
    inline const JobTimeout& GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    template<typename TimeoutT = JobTimeout>
    void SetTimeout(TimeoutT&& value) { m_timeoutHasBeenSet = true; m_timeout = std::forward<TimeoutT>(value); }
    template<typename TimeoutT = JobTimeout>
    JobDefinition& WithTimeout(TimeoutT&& value) { SetTimeout(std::forward<TimeoutT>(value)); return *this;}
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
    inline const NodeProperties& GetNodeProperties() const { return m_nodeProperties; }
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }
    template<typename NodePropertiesT = NodeProperties>
    void SetNodeProperties(NodePropertiesT&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::forward<NodePropertiesT>(value); }
    template<typename NodePropertiesT = NodeProperties>
    JobDefinition& WithNodeProperties(NodePropertiesT&& value) { SetNodeProperties(std::forward<NodePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are applied to the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    JobDefinition& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    JobDefinition& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    inline bool GetPropagateTags() const { return m_propagateTags; }
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
    inline const Aws::Vector<PlatformCapability>& GetPlatformCapabilities() const { return m_platformCapabilities; }
    inline bool PlatformCapabilitiesHasBeenSet() const { return m_platformCapabilitiesHasBeenSet; }
    template<typename PlatformCapabilitiesT = Aws::Vector<PlatformCapability>>
    void SetPlatformCapabilities(PlatformCapabilitiesT&& value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities = std::forward<PlatformCapabilitiesT>(value); }
    template<typename PlatformCapabilitiesT = Aws::Vector<PlatformCapability>>
    JobDefinition& WithPlatformCapabilities(PlatformCapabilitiesT&& value) { SetPlatformCapabilities(std::forward<PlatformCapabilitiesT>(value)); return *this;}
    inline JobDefinition& AddPlatformCapabilities(PlatformCapability value) { m_platformCapabilitiesHasBeenSet = true; m_platformCapabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains the properties for the Amazon ECS resources of a
     * job.When <code>ecsProperties</code> is used in the job definition, it can't be
     * used in addition to <code>containerProperties</code>,
     * <code>eksProperties</code>, or <code>nodeProperties</code>.</p>
     */
    inline const EcsProperties& GetEcsProperties() const { return m_ecsProperties; }
    inline bool EcsPropertiesHasBeenSet() const { return m_ecsPropertiesHasBeenSet; }
    template<typename EcsPropertiesT = EcsProperties>
    void SetEcsProperties(EcsPropertiesT&& value) { m_ecsPropertiesHasBeenSet = true; m_ecsProperties = std::forward<EcsPropertiesT>(value); }
    template<typename EcsPropertiesT = EcsProperties>
    JobDefinition& WithEcsProperties(EcsPropertiesT&& value) { SetEcsProperties(std::forward<EcsPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object with properties that are specific to Amazon EKS-based jobs. When
     * <code>eksProperties</code> is used in the job definition, it can't be used in
     * addition to <code>containerProperties</code>, <code>ecsProperties</code>, or
     * <code>nodeProperties</code>.</p>
     */
    inline const EksProperties& GetEksProperties() const { return m_eksProperties; }
    inline bool EksPropertiesHasBeenSet() const { return m_eksPropertiesHasBeenSet; }
    template<typename EksPropertiesT = EksProperties>
    void SetEksProperties(EksPropertiesT&& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = std::forward<EksPropertiesT>(value); }
    template<typename EksPropertiesT = EksProperties>
    JobDefinition& WithEksProperties(EksPropertiesT&& value) { SetEksProperties(std::forward<EksPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline OrchestrationType GetContainerOrchestrationType() const { return m_containerOrchestrationType; }
    inline bool ContainerOrchestrationTypeHasBeenSet() const { return m_containerOrchestrationTypeHasBeenSet; }
    inline void SetContainerOrchestrationType(OrchestrationType value) { m_containerOrchestrationTypeHasBeenSet = true; m_containerOrchestrationType = value; }
    inline JobDefinition& WithContainerOrchestrationType(OrchestrationType value) { SetContainerOrchestrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of consumable resources required by the job.</p>
     */
    inline const ConsumableResourceProperties& GetConsumableResourceProperties() const { return m_consumableResourceProperties; }
    inline bool ConsumableResourcePropertiesHasBeenSet() const { return m_consumableResourcePropertiesHasBeenSet; }
    template<typename ConsumableResourcePropertiesT = ConsumableResourceProperties>
    void SetConsumableResourceProperties(ConsumableResourcePropertiesT&& value) { m_consumableResourcePropertiesHasBeenSet = true; m_consumableResourceProperties = std::forward<ConsumableResourcePropertiesT>(value); }
    template<typename ConsumableResourcePropertiesT = ConsumableResourceProperties>
    JobDefinition& WithConsumableResourceProperties(ConsumableResourcePropertiesT&& value) { SetConsumableResourceProperties(std::forward<ConsumableResourcePropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    Aws::String m_jobDefinitionArn;
    bool m_jobDefinitionArnHasBeenSet = false;

    int m_revision{0};
    bool m_revisionHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    int m_schedulingPriority{0};
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

    bool m_propagateTags{false};
    bool m_propagateTagsHasBeenSet = false;

    Aws::Vector<PlatformCapability> m_platformCapabilities;
    bool m_platformCapabilitiesHasBeenSet = false;

    EcsProperties m_ecsProperties;
    bool m_ecsPropertiesHasBeenSet = false;

    EksProperties m_eksProperties;
    bool m_eksPropertiesHasBeenSet = false;

    OrchestrationType m_containerOrchestrationType{OrchestrationType::NOT_SET};
    bool m_containerOrchestrationTypeHasBeenSet = false;

    ConsumableResourceProperties m_consumableResourceProperties;
    bool m_consumableResourcePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
