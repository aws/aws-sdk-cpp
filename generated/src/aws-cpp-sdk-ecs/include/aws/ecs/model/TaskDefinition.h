/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/NetworkMode.h>
#include <aws/ecs/model/TaskDefinitionStatus.h>
#include <aws/ecs/model/RuntimePlatform.h>
#include <aws/ecs/model/PidMode.h>
#include <aws/ecs/model/IpcMode.h>
#include <aws/ecs/model/ProxyConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/EphemeralStorage.h>
#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/ecs/model/Volume.h>
#include <aws/ecs/model/Attribute.h>
#include <aws/ecs/model/TaskDefinitionPlacementConstraint.h>
#include <aws/ecs/model/Compatibility.h>
#include <aws/ecs/model/InferenceAccelerator.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The details of a task definition which describes the container and volume
   * definitions of an Amazon Elastic Container Service task. You can specify which
   * Docker images to use, the required resources, and other configurations related
   * to launching the task definition through an Amazon ECS service or
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskDefinition">AWS
   * API Reference</a></p>
   */
  class TaskDefinition
  {
  public:
    AWS_ECS_API TaskDefinition() = default;
    AWS_ECS_API TaskDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the task definition.</p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const { return m_taskDefinitionArn; }
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }
    template<typename TaskDefinitionArnT = Aws::String>
    void SetTaskDefinitionArn(TaskDefinitionArnT&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::forward<TaskDefinitionArnT>(value); }
    template<typename TaskDefinitionArnT = Aws::String>
    TaskDefinition& WithTaskDefinitionArn(TaskDefinitionArnT&& value) { SetTaskDefinitionArn(std::forward<TaskDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainerDefinitions() const { return m_containerDefinitions; }
    inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }
    template<typename ContainerDefinitionsT = Aws::Vector<ContainerDefinition>>
    void SetContainerDefinitions(ContainerDefinitionsT&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = std::forward<ContainerDefinitionsT>(value); }
    template<typename ContainerDefinitionsT = Aws::Vector<ContainerDefinition>>
    TaskDefinition& WithContainerDefinitions(ContainerDefinitionsT&& value) { SetContainerDefinitions(std::forward<ContainerDefinitionsT>(value)); return *this;}
    template<typename ContainerDefinitionsT = ContainerDefinition>
    TaskDefinition& AddContainerDefinitions(ContainerDefinitionsT&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.emplace_back(std::forward<ContainerDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a family that this task definition is registered to. Up to 255
     * characters are allowed. Letters (both uppercase and lowercase letters), numbers,
     * hyphens (-), and underscores (_) are allowed.</p> <p>A family groups multiple
     * versions of a task definition. Amazon ECS gives the first task definition that
     * you registered to a family a revision number of 1. Amazon ECS gives sequential
     * revision numbers to each task definition that you add.</p>
     */
    inline const Aws::String& GetFamily() const { return m_family; }
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
    template<typename FamilyT = Aws::String>
    void SetFamily(FamilyT&& value) { m_familyHasBeenSet = true; m_family = std::forward<FamilyT>(value); }
    template<typename FamilyT = Aws::String>
    TaskDefinition& WithFamily(FamilyT&& value) { SetFamily(std::forward<FamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the Identity and Access
     * Management role that grants containers in the task permission to call Amazon Web
     * Services APIs on your behalf. For informationabout the required IAM roles for
     * Amazon ECS, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/security-ecs-iam-role-overview.html">IAM
     * roles for Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const { return m_taskRoleArn; }
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
    template<typename TaskRoleArnT = Aws::String>
    void SetTaskRoleArn(TaskRoleArnT&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::forward<TaskRoleArnT>(value); }
    template<typename TaskRoleArnT = Aws::String>
    TaskDefinition& WithTaskRoleArn(TaskRoleArnT&& value) { SetTaskRoleArn(std::forward<TaskRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make Amazon Web Services API calls on
     * your behalf. For informationabout the required IAM roles for Amazon ECS, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/security-ecs-iam-role-overview.html">IAM
     * roles for Amazon ECS</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    TaskDefinition& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * Linux instances, any network mode can be used. For Amazon ECS tasks on Amazon
     * EC2 Windows instances, <code>&lt;default&gt;</code> or <code>awsvpc</code> can
     * be used. If the network mode is set to <code>none</code>, you cannot specify
     * port mappings in your container definitions, and the tasks containers do not
     * have external connectivity. The <code>host</code> and <code>awsvpc</code>
     * network modes offer the highest networking performance for containers because
     * they use the EC2 network stack instead of the virtualized network stack provided
     * by the <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p>
     *  <p>When using the <code>host</code> network mode, you should not run
     * containers using the root user (UID 0). It is considered best practice to use a
     * non-root user.</p>  <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an elastic network interface, and you must specify a <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_NetworkConfiguration.html">NetworkConfiguration</a>
     * value when you create a service or run a task with the task definition. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If the network mode is <code>host</code>, you cannot run
     * multiple instantiations of the same task on a single container instance when
     * port mappings are used.</p>
     */
    inline NetworkMode GetNetworkMode() const { return m_networkMode; }
    inline bool NetworkModeHasBeenSet() const { return m_networkModeHasBeenSet; }
    inline void SetNetworkMode(NetworkMode value) { m_networkModeHasBeenSet = true; m_networkMode = value; }
    inline TaskDefinition& WithNetworkMode(NetworkMode value) { SetNetworkMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>. Each time that you register a
     * new revision of a task definition in the same family, the revision value always
     * increases by one. This is even if you deregistered previous revisions in this
     * family.</p>
     */
    inline int GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline TaskDefinition& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of data volume definitions for the task. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
     * data volumes in tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>The <code>host</code> and <code>sourcePath</code>
     * parameters aren't supported for tasks run on Fargate. </p> 
     */
    inline const Aws::Vector<Volume>& GetVolumes() const { return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    template<typename VolumesT = Aws::Vector<Volume>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<Volume>>
    TaskDefinition& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = Volume>
    TaskDefinition& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the task definition.</p>
     */
    inline TaskDefinitionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaskDefinitionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TaskDefinition& WithStatus(TaskDefinitionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container instance attributes required by your task. When an Amazon EC2
     * instance is registered to your cluster, the Amazon ECS container agent assigns
     * some standard attributes to the instance. You can apply custom attributes. These
     * are specified as key-value pairs using the Amazon ECS console or the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutAttributes.html">PutAttributes</a>
     * API. These attributes are used when determining task placement for tasks hosted
     * on Amazon EC2 instances. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p> 
     * <p>This parameter isn't supported for tasks run on Fargate.</p> 
     */
    inline const Aws::Vector<Attribute>& GetRequiresAttributes() const { return m_requiresAttributes; }
    inline bool RequiresAttributesHasBeenSet() const { return m_requiresAttributesHasBeenSet; }
    template<typename RequiresAttributesT = Aws::Vector<Attribute>>
    void SetRequiresAttributes(RequiresAttributesT&& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes = std::forward<RequiresAttributesT>(value); }
    template<typename RequiresAttributesT = Aws::Vector<Attribute>>
    TaskDefinition& WithRequiresAttributes(RequiresAttributesT&& value) { SetRequiresAttributes(std::forward<RequiresAttributesT>(value)); return *this;}
    template<typename RequiresAttributesT = Attribute>
    TaskDefinition& AddRequiresAttributes(RequiresAttributesT&& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes.emplace_back(std::forward<RequiresAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of placement constraint objects to use for tasks.</p>  <p>This
     * parameter isn't supported for tasks run on Fargate.</p> 
     */
    inline const Aws::Vector<TaskDefinitionPlacementConstraint>& GetPlacementConstraints() const { return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    template<typename PlacementConstraintsT = Aws::Vector<TaskDefinitionPlacementConstraint>>
    void SetPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::forward<PlacementConstraintsT>(value); }
    template<typename PlacementConstraintsT = Aws::Vector<TaskDefinitionPlacementConstraint>>
    TaskDefinition& WithPlacementConstraints(PlacementConstraintsT&& value) { SetPlacementConstraints(std::forward<PlacementConstraintsT>(value)); return *this;}
    template<typename PlacementConstraintsT = TaskDefinitionPlacementConstraint>
    TaskDefinition& AddPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.emplace_back(std::forward<PlacementConstraintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Amazon ECS validates the task definition parameters with those supported by
     * the launch type. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Compatibility>& GetCompatibilities() const { return m_compatibilities; }
    inline bool CompatibilitiesHasBeenSet() const { return m_compatibilitiesHasBeenSet; }
    template<typename CompatibilitiesT = Aws::Vector<Compatibility>>
    void SetCompatibilities(CompatibilitiesT&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities = std::forward<CompatibilitiesT>(value); }
    template<typename CompatibilitiesT = Aws::Vector<Compatibility>>
    TaskDefinition& WithCompatibilities(CompatibilitiesT&& value) { SetCompatibilities(std::forward<CompatibilitiesT>(value)); return *this;}
    inline TaskDefinition& AddCompatibilities(Compatibility value) { m_compatibilitiesHasBeenSet = true; m_compatibilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operating system that your task definitions are running on. A platform
     * family is specified only for tasks using the Fargate launch type. </p> <p>When
     * you specify a task in a service, this value must match the
     * <code>runtimePlatform</code> value of the service.</p>
     */
    inline const RuntimePlatform& GetRuntimePlatform() const { return m_runtimePlatform; }
    inline bool RuntimePlatformHasBeenSet() const { return m_runtimePlatformHasBeenSet; }
    template<typename RuntimePlatformT = RuntimePlatform>
    void SetRuntimePlatform(RuntimePlatformT&& value) { m_runtimePlatformHasBeenSet = true; m_runtimePlatform = std::forward<RuntimePlatformT>(value); }
    template<typename RuntimePlatformT = RuntimePlatform>
    TaskDefinition& WithRuntimePlatform(RuntimePlatformT&& value) { SetRuntimePlatform(std::forward<RuntimePlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task launch types the task definition was validated against. The valid
     * values are <code>EC2</code>, <code>FARGATE</code>, and <code>EXTERNAL</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Compatibility>& GetRequiresCompatibilities() const { return m_requiresCompatibilities; }
    inline bool RequiresCompatibilitiesHasBeenSet() const { return m_requiresCompatibilitiesHasBeenSet; }
    template<typename RequiresCompatibilitiesT = Aws::Vector<Compatibility>>
    void SetRequiresCompatibilities(RequiresCompatibilitiesT&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = std::forward<RequiresCompatibilitiesT>(value); }
    template<typename RequiresCompatibilitiesT = Aws::Vector<Compatibility>>
    TaskDefinition& WithRequiresCompatibilities(RequiresCompatibilitiesT&& value) { SetRequiresCompatibilities(std::forward<RequiresCompatibilitiesT>(value)); return *this;}
    inline TaskDefinition& AddRequiresCompatibilities(Compatibility value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of <code>cpu</code> units used by the task. If you use the EC2
     * launch type, this field is optional. Any value can be used. If you use the
     * Fargate launch type, this field is required. You must use one of the following
     * values. The value that you choose determines your range of valid values for the
     * <code>memory</code> parameter.</p> <p>If you're using the EC2 launch type or the
     * external launch type, this field is optional. Supported values are between
     * <code>128</code> CPU units (<code>0.125</code> vCPUs) and <code>196608</code>
     * CPU units (<code>192</code> vCPUs). </p> <p>This field is required for Fargate.
     * For information about the valid values, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#task_size">Task
     * size</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = Aws::String>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = Aws::String>
    TaskDefinition& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount (in MiB) of memory used by the task.</p> <p>If your tasks runs on
     * Amazon EC2 instances, you must specify either a task-level memory value or a
     * container-level memory value. This field is optional and any value can be used.
     * If a task-level memory value is specified, the container-level memory value is
     * optional. For more information regarding container-level memory and memory
     * reservation, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html">ContainerDefinition</a>.</p>
     * <p>If your tasks runs on Fargate, this field is required. You must use one of
     * the following values. The value you choose determines your range of valid values
     * for the <code>cpu</code> parameter.</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB),
     * 2048 (2 GB) - Available <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li>
     * <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) - Available
     * <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3
     * GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) - Available
     * <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and
     * 16384 (16 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB) - Available <code>cpu</code> values: 4096 (4 vCPU)</p>
     * </li> <li> <p>Between 16 GB and 60 GB in 4 GB increments - Available
     * <code>cpu</code> values: 8192 (8 vCPU)</p> <p>This option requires Linux
     * platform <code>1.4.0</code> or later.</p> </li> <li> <p>Between 32GB and 120 GB
     * in 8 GB increments - Available <code>cpu</code> values: 16384 (16 vCPU)</p>
     * <p>This option requires Linux platform <code>1.4.0</code> or later.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    TaskDefinition& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic Inference accelerator that's associated with the task.</p>
     */
    inline const Aws::Vector<InferenceAccelerator>& GetInferenceAccelerators() const { return m_inferenceAccelerators; }
    inline bool InferenceAcceleratorsHasBeenSet() const { return m_inferenceAcceleratorsHasBeenSet; }
    template<typename InferenceAcceleratorsT = Aws::Vector<InferenceAccelerator>>
    void SetInferenceAccelerators(InferenceAcceleratorsT&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = std::forward<InferenceAcceleratorsT>(value); }
    template<typename InferenceAcceleratorsT = Aws::Vector<InferenceAccelerator>>
    TaskDefinition& WithInferenceAccelerators(InferenceAcceleratorsT&& value) { SetInferenceAccelerators(std::forward<InferenceAcceleratorsT>(value)); return *this;}
    template<typename InferenceAcceleratorsT = InferenceAccelerator>
    TaskDefinition& AddInferenceAccelerators(InferenceAcceleratorsT&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.emplace_back(std::forward<InferenceAcceleratorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. On Fargate for Linux containers, the
     * only valid value is <code>task</code>. For example, monitoring sidecars might
     * need <code>pidMode</code> to access information about other containers running
     * in the same task.</p> <p>If <code>host</code> is specified, all containers
     * within the tasks that specified the <code>host</code> PID mode on the same
     * container instance share the same process namespace with the host Amazon EC2
     * instance.</p> <p>If <code>task</code> is specified, all containers within the
     * specified task share the same process namespace.</p> <p>If no value is
     * specified, the default is a private namespace for each container.</p> <p>If the
     * <code>host</code> PID mode is used, there's a heightened risk of undesired
     * process namespace exposure.</p>  <p>This parameter is not supported for
     * Windows containers.</p>   <p>This parameter is only supported for
     * tasks that are hosted on Fargate if the tasks are using platform version
     * <code>1.4.0</code> or later (Linux). This isn't supported for Windows containers
     * on Fargate.</p> 
     */
    inline PidMode GetPidMode() const { return m_pidMode; }
    inline bool PidModeHasBeenSet() const { return m_pidModeHasBeenSet; }
    inline void SetPidMode(PidMode value) { m_pidModeHasBeenSet = true; m_pidMode = value; }
    inline TaskDefinition& WithPidMode(PidMode value) { SetPidMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>. If
     * <code>host</code> is specified, then all containers within the tasks that
     * specified the <code>host</code> IPC mode on the same container instance share
     * the same IPC resources with the host Amazon EC2 instance. If <code>task</code>
     * is specified, all containers within the specified task share the same IPC
     * resources. If <code>none</code> is specified, then IPC resources within the
     * containers of a task are private and not shared with other containers in a task
     * or on the container instance. If no value is specified, then the IPC resource
     * namespace sharing depends on the Docker daemon setting on the container
     * instance.</p> <p>If the <code>host</code> IPC mode is used, be aware that there
     * is a heightened risk of undesired IPC namespace expose.</p> <p>If you are
     * setting namespaced kernel parameters using <code>systemControls</code> for the
     * containers in the task, the following will apply to your IPC resource namespace.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html">System
     * Controls</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     * <ul> <li> <p>For tasks that use the <code>host</code> IPC mode, IPC namespace
     * related <code>systemControls</code> are not supported.</p> </li> <li> <p>For
     * tasks that use the <code>task</code> IPC mode, IPC namespace related
     * <code>systemControls</code> will apply to all containers within a task.</p>
     * </li> </ul>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
     */
    inline IpcMode GetIpcMode() const { return m_ipcMode; }
    inline bool IpcModeHasBeenSet() const { return m_ipcModeHasBeenSet; }
    inline void SetIpcMode(IpcMode value) { m_ipcModeHasBeenSet = true; m_ipcMode = value; }
    inline TaskDefinition& WithIpcMode(IpcMode value) { SetIpcMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>Your Amazon ECS
     * container instances require at least version 1.26.0 of the container agent and
     * at least version 1.26.0-1 of the <code>ecs-init</code> package to use a proxy
     * configuration. If your container instances are launched from the Amazon ECS
     * optimized AMI version <code>20190301</code> or later, they contain the required
     * versions of the container agent and <code>ecs-init</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const ProxyConfiguration& GetProxyConfiguration() const { return m_proxyConfiguration; }
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    void SetProxyConfiguration(ProxyConfigurationT&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::forward<ProxyConfigurationT>(value); }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    TaskDefinition& WithProxyConfiguration(ProxyConfigurationT&& value) { SetProxyConfiguration(std::forward<ProxyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task definition was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const { return m_registeredAt; }
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }
    template<typename RegisteredAtT = Aws::Utils::DateTime>
    void SetRegisteredAt(RegisteredAtT&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::forward<RegisteredAtT>(value); }
    template<typename RegisteredAtT = Aws::Utils::DateTime>
    TaskDefinition& WithRegisteredAt(RegisteredAtT&& value) { SetRegisteredAt(std::forward<RegisteredAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task definition was
     * deregistered.</p>
     */
    inline const Aws::Utils::DateTime& GetDeregisteredAt() const { return m_deregisteredAt; }
    inline bool DeregisteredAtHasBeenSet() const { return m_deregisteredAtHasBeenSet; }
    template<typename DeregisteredAtT = Aws::Utils::DateTime>
    void SetDeregisteredAt(DeregisteredAtT&& value) { m_deregisteredAtHasBeenSet = true; m_deregisteredAt = std::forward<DeregisteredAtT>(value); }
    template<typename DeregisteredAtT = Aws::Utils::DateTime>
    TaskDefinition& WithDeregisteredAt(DeregisteredAtT&& value) { SetDeregisteredAt(std::forward<DeregisteredAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal that registered the task definition.</p>
     */
    inline const Aws::String& GetRegisteredBy() const { return m_registeredBy; }
    inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }
    template<typename RegisteredByT = Aws::String>
    void SetRegisteredBy(RegisteredByT&& value) { m_registeredByHasBeenSet = true; m_registeredBy = std::forward<RegisteredByT>(value); }
    template<typename RegisteredByT = Aws::String>
    TaskDefinition& WithRegisteredBy(RegisteredByT&& value) { SetRegisteredBy(std::forward<RegisteredByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ephemeral storage settings to use for tasks run with the task
     * definition.</p>
     */
    inline const EphemeralStorage& GetEphemeralStorage() const { return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    template<typename EphemeralStorageT = EphemeralStorage>
    void SetEphemeralStorage(EphemeralStorageT&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::forward<EphemeralStorageT>(value); }
    template<typename EphemeralStorageT = EphemeralStorage>
    TaskDefinition& WithEphemeralStorage(EphemeralStorageT&& value) { SetEphemeralStorage(std::forward<EphemeralStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables fault injection and allows for fault injection requests to be
     * accepted from the task's containers. The default value is
     * <code>false</code>.</p>
     */
    inline bool GetEnableFaultInjection() const { return m_enableFaultInjection; }
    inline bool EnableFaultInjectionHasBeenSet() const { return m_enableFaultInjectionHasBeenSet; }
    inline void SetEnableFaultInjection(bool value) { m_enableFaultInjectionHasBeenSet = true; m_enableFaultInjection = value; }
    inline TaskDefinition& WithEnableFaultInjection(bool value) { SetEnableFaultInjection(value); return *this;}
    ///@}
  private:

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet = false;

    Aws::Vector<ContainerDefinition> m_containerDefinitions;
    bool m_containerDefinitionsHasBeenSet = false;

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    NetworkMode m_networkMode{NetworkMode::NOT_SET};
    bool m_networkModeHasBeenSet = false;

    int m_revision{0};
    bool m_revisionHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

    TaskDefinitionStatus m_status{TaskDefinitionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Attribute> m_requiresAttributes;
    bool m_requiresAttributesHasBeenSet = false;

    Aws::Vector<TaskDefinitionPlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<Compatibility> m_compatibilities;
    bool m_compatibilitiesHasBeenSet = false;

    RuntimePlatform m_runtimePlatform;
    bool m_runtimePlatformHasBeenSet = false;

    Aws::Vector<Compatibility> m_requiresCompatibilities;
    bool m_requiresCompatibilitiesHasBeenSet = false;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::Vector<InferenceAccelerator> m_inferenceAccelerators;
    bool m_inferenceAcceleratorsHasBeenSet = false;

    PidMode m_pidMode{PidMode::NOT_SET};
    bool m_pidModeHasBeenSet = false;

    IpcMode m_ipcMode{IpcMode::NOT_SET};
    bool m_ipcModeHasBeenSet = false;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_registeredAt{};
    bool m_registeredAtHasBeenSet = false;

    Aws::Utils::DateTime m_deregisteredAt{};
    bool m_deregisteredAtHasBeenSet = false;

    Aws::String m_registeredBy;
    bool m_registeredByHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    bool m_enableFaultInjection{false};
    bool m_enableFaultInjectionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
