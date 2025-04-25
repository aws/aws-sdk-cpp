/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/NetworkMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/PidMode.h>
#include <aws/ecs/model/IpcMode.h>
#include <aws/ecs/model/ProxyConfiguration.h>
#include <aws/ecs/model/EphemeralStorage.h>
#include <aws/ecs/model/RuntimePlatform.h>
#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/ecs/model/Volume.h>
#include <aws/ecs/model/TaskDefinitionPlacementConstraint.h>
#include <aws/ecs/model/Compatibility.h>
#include <aws/ecs/model/Tag.h>
#include <aws/ecs/model/InferenceAccelerator.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class RegisterTaskDefinitionRequest : public ECSRequest
  {
  public:
    AWS_ECS_API RegisterTaskDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterTaskDefinition"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>You must specify a <code>family</code> for a task definition. You can use it
     * track multiple versions of the same task definition. The <code>family</code> is
     * used as a name for your task definition. Up to 255 letters (uppercase and
     * lowercase), numbers, underscores, and hyphens are allowed.</p>
     */
    inline const Aws::String& GetFamily() const { return m_family; }
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
    template<typename FamilyT = Aws::String>
    void SetFamily(FamilyT&& value) { m_familyHasBeenSet = true; m_family = std::forward<FamilyT>(value); }
    template<typename FamilyT = Aws::String>
    RegisterTaskDefinitionRequest& WithFamily(FamilyT&& value) { SetFamily(std::forward<FamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const { return m_taskRoleArn; }
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
    template<typename TaskRoleArnT = Aws::String>
    void SetTaskRoleArn(TaskRoleArnT&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::forward<TaskRoleArnT>(value); }
    template<typename TaskRoleArnT = Aws::String>
    RegisterTaskDefinitionRequest& WithTaskRoleArn(TaskRoleArnT&& value) { SetTaskRoleArn(std::forward<TaskRoleArnT>(value)); return *this;}
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
    RegisterTaskDefinitionRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
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
    inline RegisterTaskDefinitionRequest& WithNetworkMode(NetworkMode value) { SetNetworkMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainerDefinitions() const { return m_containerDefinitions; }
    inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }
    template<typename ContainerDefinitionsT = Aws::Vector<ContainerDefinition>>
    void SetContainerDefinitions(ContainerDefinitionsT&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = std::forward<ContainerDefinitionsT>(value); }
    template<typename ContainerDefinitionsT = Aws::Vector<ContainerDefinition>>
    RegisterTaskDefinitionRequest& WithContainerDefinitions(ContainerDefinitionsT&& value) { SetContainerDefinitions(std::forward<ContainerDefinitionsT>(value)); return *this;}
    template<typename ContainerDefinitionsT = ContainerDefinition>
    RegisterTaskDefinitionRequest& AddContainerDefinitions(ContainerDefinitionsT&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.emplace_back(std::forward<ContainerDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of volume definitions in JSON format that containers in your task
     * might use.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const { return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    template<typename VolumesT = Aws::Vector<Volume>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<Volume>>
    RegisterTaskDefinitionRequest& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = Volume>
    RegisterTaskDefinitionRequest& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints for each task. This limit includes constraints in
     * the task definition and those specified at runtime.</p>
     */
    inline const Aws::Vector<TaskDefinitionPlacementConstraint>& GetPlacementConstraints() const { return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    template<typename PlacementConstraintsT = Aws::Vector<TaskDefinitionPlacementConstraint>>
    void SetPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::forward<PlacementConstraintsT>(value); }
    template<typename PlacementConstraintsT = Aws::Vector<TaskDefinitionPlacementConstraint>>
    RegisterTaskDefinitionRequest& WithPlacementConstraints(PlacementConstraintsT&& value) { SetPlacementConstraints(std::forward<PlacementConstraintsT>(value)); return *this;}
    template<typename PlacementConstraintsT = TaskDefinitionPlacementConstraint>
    RegisterTaskDefinitionRequest& AddPlacementConstraints(PlacementConstraintsT&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.emplace_back(std::forward<PlacementConstraintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The task launch type that Amazon ECS validates the task definition against. A
     * client exception is returned if the task definition doesn't validate against the
     * compatibilities specified. If no value is specified, the parameter is omitted
     * from the response.</p>
     */
    inline const Aws::Vector<Compatibility>& GetRequiresCompatibilities() const { return m_requiresCompatibilities; }
    inline bool RequiresCompatibilitiesHasBeenSet() const { return m_requiresCompatibilitiesHasBeenSet; }
    template<typename RequiresCompatibilitiesT = Aws::Vector<Compatibility>>
    void SetRequiresCompatibilities(RequiresCompatibilitiesT&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = std::forward<RequiresCompatibilitiesT>(value); }
    template<typename RequiresCompatibilitiesT = Aws::Vector<Compatibility>>
    RegisterTaskDefinitionRequest& WithRequiresCompatibilities(RequiresCompatibilitiesT&& value) { SetRequiresCompatibilities(std::forward<RequiresCompatibilitiesT>(value)); return *this;}
    inline RegisterTaskDefinitionRequest& AddRequiresCompatibilities(Compatibility value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units (for example, <code>1024</code>) or as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>) in a task definition.
     * String values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p>  <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p>  <p>If you're using the EC2 launch
     * type or external launch type, this field is optional. Supported values are
     * between <code>128</code> CPU units (<code>0.125</code> vCPUs) and
     * <code>196608</code> CPU units (<code>192</code> vCPUs). If you do not specify a
     * value, the parameter is ignored.</p> <p>This field is required for Fargate. For
     * information about the valid values, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#task_size">Task
     * size</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = Aws::String>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = Aws::String>
    RegisterTaskDefinitionRequest& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB (for example ,<code>1024</code>) or as a string using GB (for
     * example, <code>1GB</code> or <code>1 GB</code>) in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p>  <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p>  <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values. This determines your range of
     * supported values for the <code>cpu</code> parameter.</p> <p>The CPU units cannot
     * be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul> <li>
     * <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values:
     * 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between
     * 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB and 60 GB in 4 GB increments -
     * Available <code>cpu</code> values: 8192 (8 vCPU)</p> <p>This option requires
     * Linux platform <code>1.4.0</code> or later.</p> </li> <li> <p>Between 32GB and
     * 120 GB in 8 GB increments - Available <code>cpu</code> values: 16384 (16
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    RegisterTaskDefinitionRequest& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define both
     * of them.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RegisterTaskDefinitionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RegisterTaskDefinitionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    inline RegisterTaskDefinitionRequest& WithPidMode(PidMode value) { SetPidMode(value); return *this;}
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
    inline RegisterTaskDefinitionRequest& WithIpcMode(IpcMode value) { SetIpcMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>For tasks hosted on
     * Amazon EC2 instances, the container instances require at least version
     * <code>1.26.0</code> of the container agent and at least version
     * <code>1.26.0-1</code> of the <code>ecs-init</code> package to use a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-ami-versions.html">Amazon
     * ECS-optimized AMI versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline const ProxyConfiguration& GetProxyConfiguration() const { return m_proxyConfiguration; }
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    void SetProxyConfiguration(ProxyConfigurationT&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::forward<ProxyConfigurationT>(value); }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    RegisterTaskDefinitionRequest& WithProxyConfiguration(ProxyConfigurationT&& value) { SetProxyConfiguration(std::forward<ProxyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline const Aws::Vector<InferenceAccelerator>& GetInferenceAccelerators() const { return m_inferenceAccelerators; }
    inline bool InferenceAcceleratorsHasBeenSet() const { return m_inferenceAcceleratorsHasBeenSet; }
    template<typename InferenceAcceleratorsT = Aws::Vector<InferenceAccelerator>>
    void SetInferenceAccelerators(InferenceAcceleratorsT&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = std::forward<InferenceAcceleratorsT>(value); }
    template<typename InferenceAcceleratorsT = Aws::Vector<InferenceAccelerator>>
    RegisterTaskDefinitionRequest& WithInferenceAccelerators(InferenceAcceleratorsT&& value) { SetInferenceAccelerators(std::forward<InferenceAcceleratorsT>(value)); return *this;}
    template<typename InferenceAcceleratorsT = InferenceAccelerator>
    RegisterTaskDefinitionRequest& AddInferenceAccelerators(InferenceAcceleratorsT&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.emplace_back(std::forward<InferenceAcceleratorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
     * data volumes in tasks</a> in the <i>Amazon ECS Developer Guide</i>.</p> 
     * <p>For tasks using the Fargate launch type, the task requires the following
     * platforms:</p> <ul> <li> <p>Linux platform version <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Windows platform version <code>1.0.0</code> or
     * later.</p> </li> </ul> 
     */
    inline const EphemeralStorage& GetEphemeralStorage() const { return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    template<typename EphemeralStorageT = EphemeralStorage>
    void SetEphemeralStorage(EphemeralStorageT&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::forward<EphemeralStorageT>(value); }
    template<typename EphemeralStorageT = EphemeralStorage>
    RegisterTaskDefinitionRequest& WithEphemeralStorage(EphemeralStorageT&& value) { SetEphemeralStorage(std::forward<EphemeralStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system that your tasks definitions run on. A platform family is
     * specified only for tasks using the Fargate launch type. </p>
     */
    inline const RuntimePlatform& GetRuntimePlatform() const { return m_runtimePlatform; }
    inline bool RuntimePlatformHasBeenSet() const { return m_runtimePlatformHasBeenSet; }
    template<typename RuntimePlatformT = RuntimePlatform>
    void SetRuntimePlatform(RuntimePlatformT&& value) { m_runtimePlatformHasBeenSet = true; m_runtimePlatform = std::forward<RuntimePlatformT>(value); }
    template<typename RuntimePlatformT = RuntimePlatform>
    RegisterTaskDefinitionRequest& WithRuntimePlatform(RuntimePlatformT&& value) { SetRuntimePlatform(std::forward<RuntimePlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables fault injection when you register your task definition and allows for
     * fault injection requests to be accepted from the task's containers. The default
     * value is <code>false</code>.</p>
     */
    inline bool GetEnableFaultInjection() const { return m_enableFaultInjection; }
    inline bool EnableFaultInjectionHasBeenSet() const { return m_enableFaultInjectionHasBeenSet; }
    inline void SetEnableFaultInjection(bool value) { m_enableFaultInjectionHasBeenSet = true; m_enableFaultInjection = value; }
    inline RegisterTaskDefinitionRequest& WithEnableFaultInjection(bool value) { SetEnableFaultInjection(value); return *this;}
    ///@}
  private:

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    NetworkMode m_networkMode{NetworkMode::NOT_SET};
    bool m_networkModeHasBeenSet = false;

    Aws::Vector<ContainerDefinition> m_containerDefinitions;
    bool m_containerDefinitionsHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::Vector<TaskDefinitionPlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<Compatibility> m_requiresCompatibilities;
    bool m_requiresCompatibilitiesHasBeenSet = false;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    PidMode m_pidMode{PidMode::NOT_SET};
    bool m_pidModeHasBeenSet = false;

    IpcMode m_ipcMode{IpcMode::NOT_SET};
    bool m_ipcModeHasBeenSet = false;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet = false;

    Aws::Vector<InferenceAccelerator> m_inferenceAccelerators;
    bool m_inferenceAcceleratorsHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    RuntimePlatform m_runtimePlatform;
    bool m_runtimePlatformHasBeenSet = false;

    bool m_enableFaultInjection{false};
    bool m_enableFaultInjectionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
