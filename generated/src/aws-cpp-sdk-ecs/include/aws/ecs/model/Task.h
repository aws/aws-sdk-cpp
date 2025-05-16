/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/Connectivity.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/HealthStatus.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/TaskOverride.h>
#include <aws/ecs/model/TaskStopCode.h>
#include <aws/ecs/model/EphemeralStorage.h>
#include <aws/ecs/model/TaskEphemeralStorage.h>
#include <aws/ecs/model/Attachment.h>
#include <aws/ecs/model/Attribute.h>
#include <aws/ecs/model/Container.h>
#include <aws/ecs/model/InferenceAccelerator.h>
#include <aws/ecs/model/Tag.h>
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
   * <p>Details on a task in a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Task">AWS API
   * Reference</a></p>
   */
  class Task
  {
  public:
    AWS_ECS_API Task() = default;
    AWS_ECS_API Task(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Task& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Elastic Network Adapter that's associated with the task if the task uses
     * the <code>awsvpc</code> network mode.</p>
     */
    inline const Aws::Vector<Attachment>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<Attachment>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<Attachment>>
    Task& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = Attachment>
    Task& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes of the task</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Attribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Attribute>>
    Task& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Attribute>
    Task& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the task.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Task& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider that's associated with the task.</p>
     */
    inline const Aws::String& GetCapacityProviderName() const { return m_capacityProviderName; }
    inline bool CapacityProviderNameHasBeenSet() const { return m_capacityProviderNameHasBeenSet; }
    template<typename CapacityProviderNameT = Aws::String>
    void SetCapacityProviderName(CapacityProviderNameT&& value) { m_capacityProviderNameHasBeenSet = true; m_capacityProviderName = std::forward<CapacityProviderNameT>(value); }
    template<typename CapacityProviderNameT = Aws::String>
    Task& WithCapacityProviderName(CapacityProviderNameT&& value) { SetCapacityProviderName(std::forward<CapacityProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the cluster that hosts the task.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    Task& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connectivity status of a task.</p>
     */
    inline Connectivity GetConnectivity() const { return m_connectivity; }
    inline bool ConnectivityHasBeenSet() const { return m_connectivityHasBeenSet; }
    inline void SetConnectivity(Connectivity value) { m_connectivityHasBeenSet = true; m_connectivity = value; }
    inline Task& WithConnectivity(Connectivity value) { SetConnectivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task last went into
     * <code>CONNECTED</code> status.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectivityAt() const { return m_connectivityAt; }
    inline bool ConnectivityAtHasBeenSet() const { return m_connectivityAtHasBeenSet; }
    template<typename ConnectivityAtT = Aws::Utils::DateTime>
    void SetConnectivityAt(ConnectivityAtT&& value) { m_connectivityAtHasBeenSet = true; m_connectivityAt = std::forward<ConnectivityAtT>(value); }
    template<typename ConnectivityAtT = Aws::Utils::DateTime>
    Task& WithConnectivityAt(ConnectivityAtT&& value) { SetConnectivityAt(std::forward<ConnectivityAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the container instances that host the task.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const { return m_containerInstanceArn; }
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }
    template<typename ContainerInstanceArnT = Aws::String>
    void SetContainerInstanceArn(ContainerInstanceArnT&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::forward<ContainerInstanceArnT>(value); }
    template<typename ContainerInstanceArnT = Aws::String>
    Task& WithContainerInstanceArn(ContainerInstanceArnT&& value) { SetContainerInstanceArn(std::forward<ContainerInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The containers that's associated with the task.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<Container>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<Container>>
    Task& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = Container>
    Task& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU units used by the task as expressed in a task definition.
     * It can be expressed as an integer using CPU units (for example,
     * <code>1024</code>). It can also be expressed as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>). String values are
     * converted to an integer that indicates the CPU units when the task definition is
     * registered.</p> <p>If you're using the EC2 launch type or the external launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>196608</code> CPU units
     * (<code>192</code> vCPUs). If you do not specify a value, the parameter is
     * ignored.</p> <p>This field is required for Fargate. For information about the
     * valid values, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#task_size">Task
     * size</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = Aws::String>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = Aws::String>
    Task& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Task& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired status of the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline const Aws::String& GetDesiredStatus() const { return m_desiredStatus; }
    inline bool DesiredStatusHasBeenSet() const { return m_desiredStatusHasBeenSet; }
    template<typename DesiredStatusT = Aws::String>
    void SetDesiredStatus(DesiredStatusT&& value) { m_desiredStatusHasBeenSet = true; m_desiredStatus = std::forward<DesiredStatusT>(value); }
    template<typename DesiredStatusT = Aws::String>
    Task& WithDesiredStatus(DesiredStatusT&& value) { SetDesiredStatus(std::forward<DesiredStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether execute command functionality is turned on for this task.
     * If <code>true</code>, execute command functionality is turned on all the
     * containers in the task.</p>
     */
    inline bool GetEnableExecuteCommand() const { return m_enableExecuteCommand; }
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }
    inline Task& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStoppedAt() const { return m_executionStoppedAt; }
    inline bool ExecutionStoppedAtHasBeenSet() const { return m_executionStoppedAtHasBeenSet; }
    template<typename ExecutionStoppedAtT = Aws::Utils::DateTime>
    void SetExecutionStoppedAt(ExecutionStoppedAtT&& value) { m_executionStoppedAtHasBeenSet = true; m_executionStoppedAt = std::forward<ExecutionStoppedAtT>(value); }
    template<typename ExecutionStoppedAtT = Aws::Utils::DateTime>
    Task& WithExecutionStoppedAt(ExecutionStoppedAtT&& value) { SetExecutionStoppedAt(std::forward<ExecutionStoppedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task group that's associated with the task.</p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    Task& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status for the task. It's determined by the health of the
     * essential containers in the task. If all essential containers in the task are
     * reporting as <code>HEALTHY</code>, the task status also reports as
     * <code>HEALTHY</code>. If any essential containers in the task are reporting as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>, the task status also reports as
     * <code>UNHEALTHY</code> or <code>UNKNOWN</code>.</p>  <p>The Amazon ECS
     * container agent doesn't monitor or report on Docker health checks that are
     * embedded in a container image and not specified in the container definition. For
     * example, this includes those specified in a parent image or from the image's
     * Dockerfile. Health check parameters that are specified in a container definition
     * override any Docker health checks that are found in the container image.</p>
     * 
     */
    inline HealthStatus GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(HealthStatus value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline Task& WithHealthStatus(HealthStatus value) { SetHealthStatus(value); return *this;}
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
    Task& WithInferenceAccelerators(InferenceAcceleratorsT&& value) { SetInferenceAccelerators(std::forward<InferenceAcceleratorsT>(value)); return *this;}
    template<typename InferenceAcceleratorsT = InferenceAccelerator>
    Task& AddInferenceAccelerators(InferenceAcceleratorsT&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.emplace_back(std::forward<InferenceAcceleratorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last known status for the task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle.html">Task
     * Lifecycle</a>.</p>
     */
    inline const Aws::String& GetLastStatus() const { return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    template<typename LastStatusT = Aws::String>
    void SetLastStatus(LastStatusT&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::forward<LastStatusT>(value); }
    template<typename LastStatusT = Aws::String>
    Task& WithLastStatus(LastStatusT&& value) { SetLastStatus(std::forward<LastStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The infrastructure where your task runs on. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline LaunchType GetLaunchType() const { return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(LaunchType value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline Task& WithLaunchType(LaunchType value) { SetLaunchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory (in MiB) that the task uses as expressed in a task
     * definition. It can be expressed as an integer using MiB (for example,
     * <code>1024</code>). If it's expressed as a string using GB (for example,
     * <code>1GB</code> or <code>1 GB</code>), it's converted to an integer indicating
     * the MiB when the task definition is registered.</p> <p>If you use the EC2 launch
     * type, this field is optional.</p> <p>If you use the Fargate launch type, this
     * field is required. You must use one of the following values. The value that you
     * choose determines the range of supported values for the <code>cpu</code>
     * parameter.</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available
     * <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5
     * vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144
     * (6 GB), 7168 (7 GB), 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1
     * vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of
     * 1024 (1 GB) - Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li>
     * <p>Between 8192 (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB
     * and 60 GB in 4 GB increments - Available <code>cpu</code> values: 8192 (8
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Between 32GB and 120 GB in 8 GB increments - Available
     * <code>cpu</code> values: 16384 (16 vCPU)</p> <p>This option requires Linux
     * platform <code>1.4.0</code> or later.</p> </li> </ul>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    Task& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more container overrides.</p>
     */
    inline const TaskOverride& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = TaskOverride>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = TaskOverride>
    Task& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform version where your task runs on. A platform version is only
     * specified for tasks that use the Fargate launch type. If you didn't specify one,
     * the <code>LATEST</code> platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * Platform Versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    Task& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system that your tasks are running on. A platform family is
     * specified only for tasks that use the Fargate launch type. </p> <p> All tasks
     * that run as part of this service must use the same <code>platformFamily</code>
     * value as the service (for example, <code>LINUX.</code>).</p>
     */
    inline const Aws::String& GetPlatformFamily() const { return m_platformFamily; }
    inline bool PlatformFamilyHasBeenSet() const { return m_platformFamilyHasBeenSet; }
    template<typename PlatformFamilyT = Aws::String>
    void SetPlatformFamily(PlatformFamilyT&& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = std::forward<PlatformFamilyT>(value); }
    template<typename PlatformFamilyT = Aws::String>
    Task& WithPlatformFamily(PlatformFamilyT&& value) { SetPlatformFamily(std::forward<PlatformFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the container image pull began.</p>
     */
    inline const Aws::Utils::DateTime& GetPullStartedAt() const { return m_pullStartedAt; }
    inline bool PullStartedAtHasBeenSet() const { return m_pullStartedAtHasBeenSet; }
    template<typename PullStartedAtT = Aws::Utils::DateTime>
    void SetPullStartedAt(PullStartedAtT&& value) { m_pullStartedAtHasBeenSet = true; m_pullStartedAt = std::forward<PullStartedAtT>(value); }
    template<typename PullStartedAtT = Aws::Utils::DateTime>
    Task& WithPullStartedAt(PullStartedAtT&& value) { SetPullStartedAt(std::forward<PullStartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the container image pull completed.</p>
     */
    inline const Aws::Utils::DateTime& GetPullStoppedAt() const { return m_pullStoppedAt; }
    inline bool PullStoppedAtHasBeenSet() const { return m_pullStoppedAtHasBeenSet; }
    template<typename PullStoppedAtT = Aws::Utils::DateTime>
    void SetPullStoppedAt(PullStoppedAtT&& value) { m_pullStoppedAtHasBeenSet = true; m_pullStoppedAt = std::forward<PullStoppedAtT>(value); }
    template<typename PullStoppedAtT = Aws::Utils::DateTime>
    Task& WithPullStoppedAt(PullStoppedAtT&& value) { SetPullStoppedAt(std::forward<PullStoppedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    Task& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service.</p>
     */
    inline const Aws::String& GetStartedBy() const { return m_startedBy; }
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }
    template<typename StartedByT = Aws::String>
    void SetStartedBy(StartedByT&& value) { m_startedByHasBeenSet = true; m_startedBy = std::forward<StartedByT>(value); }
    template<typename StartedByT = Aws::String>
    Task& WithStartedBy(StartedByT&& value) { SetStartedBy(std::forward<StartedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stop code indicating why a task was stopped. The
     * <code>stoppedReason</code> might contain additional details. </p> <p>For more
     * information about stop code, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/stopped-task-error-codes.html">Stopped
     * tasks error codes</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline TaskStopCode GetStopCode() const { return m_stopCode; }
    inline bool StopCodeHasBeenSet() const { return m_stopCodeHasBeenSet; }
    inline void SetStopCode(TaskStopCode value) { m_stopCodeHasBeenSet = true; m_stopCode = value; }
    inline Task& WithStopCode(TaskStopCode value) { SetStopCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task was stopped. More specifically,
     * it's for the time when the task transitioned from the <code>RUNNING</code> state
     * to the <code>STOPPED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const { return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    template<typename StoppedAtT = Aws::Utils::DateTime>
    void SetStoppedAt(StoppedAtT&& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = std::forward<StoppedAtT>(value); }
    template<typename StoppedAtT = Aws::Utils::DateTime>
    Task& WithStoppedAt(StoppedAtT&& value) { SetStoppedAt(std::forward<StoppedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the task was stopped.</p>
     */
    inline const Aws::String& GetStoppedReason() const { return m_stoppedReason; }
    inline bool StoppedReasonHasBeenSet() const { return m_stoppedReasonHasBeenSet; }
    template<typename StoppedReasonT = Aws::String>
    void SetStoppedReason(StoppedReasonT&& value) { m_stoppedReasonHasBeenSet = true; m_stoppedReason = std::forward<StoppedReasonT>(value); }
    template<typename StoppedReasonT = Aws::String>
    Task& WithStoppedReason(StoppedReasonT&& value) { SetStoppedReason(std::forward<StoppedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task stops. More specifically, it's
     * for the time when the task transitions from the <code>RUNNING</code> state to
     * <code>STOPPING</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppingAt() const { return m_stoppingAt; }
    inline bool StoppingAtHasBeenSet() const { return m_stoppingAtHasBeenSet; }
    template<typename StoppingAtT = Aws::Utils::DateTime>
    void SetStoppingAt(StoppingAtT&& value) { m_stoppingAtHasBeenSet = true; m_stoppingAt = std::forward<StoppingAtT>(value); }
    template<typename StoppingAtT = Aws::Utils::DateTime>
    Task& WithStoppingAt(StoppingAtT&& value) { SetStoppingAt(std::forward<StoppingAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * the task. Each tag consists of a key and an optional value. You define both the
     * key and value.</p> <p>The following basic restrictions apply to tags:</p> <ul>
     * <li> <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each
     * resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for either keys or values as it is reserved for Amazon Web
     * Services use. You cannot edit or delete tag keys or values with this prefix.
     * Tags with this prefix do not count against your tags per resource limit.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Task& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Task& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    Task& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the task definition that creates the task.</p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const { return m_taskDefinitionArn; }
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }
    template<typename TaskDefinitionArnT = Aws::String>
    void SetTaskDefinitionArn(TaskDefinitionArnT&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::forward<TaskDefinitionArnT>(value); }
    template<typename TaskDefinitionArnT = Aws::String>
    Task& WithTaskDefinitionArn(TaskDefinitionArnT&& value) { SetTaskDefinitionArn(std::forward<TaskDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version counter for the task. Every time a task experiences a change that
     * starts a CloudWatch event, the version counter is incremented. If you replicate
     * your Amazon ECS task state with CloudWatch Events, you can compare the version
     * of a task reported by the Amazon ECS API actions with the version reported in
     * CloudWatch Events for the task (inside the <code>detail</code> object) to verify
     * that the version in your event stream is current.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline Task& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ephemeral storage settings for the task.</p>
     */
    inline const EphemeralStorage& GetEphemeralStorage() const { return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    template<typename EphemeralStorageT = EphemeralStorage>
    void SetEphemeralStorage(EphemeralStorageT&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::forward<EphemeralStorageT>(value); }
    template<typename EphemeralStorageT = EphemeralStorage>
    Task& WithEphemeralStorage(EphemeralStorageT&& value) { SetEphemeralStorage(std::forward<EphemeralStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Fargate ephemeral storage settings for the task.</p>
     */
    inline const TaskEphemeralStorage& GetFargateEphemeralStorage() const { return m_fargateEphemeralStorage; }
    inline bool FargateEphemeralStorageHasBeenSet() const { return m_fargateEphemeralStorageHasBeenSet; }
    template<typename FargateEphemeralStorageT = TaskEphemeralStorage>
    void SetFargateEphemeralStorage(FargateEphemeralStorageT&& value) { m_fargateEphemeralStorageHasBeenSet = true; m_fargateEphemeralStorage = std::forward<FargateEphemeralStorageT>(value); }
    template<typename FargateEphemeralStorageT = TaskEphemeralStorage>
    Task& WithFargateEphemeralStorage(FargateEphemeralStorageT&& value) { SetFargateEphemeralStorage(std::forward<FargateEphemeralStorageT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Attachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_capacityProviderName;
    bool m_capacityProviderNameHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Connectivity m_connectivity{Connectivity::NOT_SET};
    bool m_connectivityHasBeenSet = false;

    Aws::Utils::DateTime m_connectivityAt{};
    bool m_connectivityAtHasBeenSet = false;

    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet = false;

    Aws::Vector<Container> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_desiredStatus;
    bool m_desiredStatusHasBeenSet = false;

    bool m_enableExecuteCommand{false};
    bool m_enableExecuteCommandHasBeenSet = false;

    Aws::Utils::DateTime m_executionStoppedAt{};
    bool m_executionStoppedAtHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    HealthStatus m_healthStatus{HealthStatus::NOT_SET};
    bool m_healthStatusHasBeenSet = false;

    Aws::Vector<InferenceAccelerator> m_inferenceAccelerators;
    bool m_inferenceAcceleratorsHasBeenSet = false;

    Aws::String m_lastStatus;
    bool m_lastStatusHasBeenSet = false;

    LaunchType m_launchType{LaunchType::NOT_SET};
    bool m_launchTypeHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    TaskOverride m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_platformFamily;
    bool m_platformFamilyHasBeenSet = false;

    Aws::Utils::DateTime m_pullStartedAt{};
    bool m_pullStartedAtHasBeenSet = false;

    Aws::Utils::DateTime m_pullStoppedAt{};
    bool m_pullStoppedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    TaskStopCode m_stopCode{TaskStopCode::NOT_SET};
    bool m_stopCodeHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedAt{};
    bool m_stoppedAtHasBeenSet = false;

    Aws::String m_stoppedReason;
    bool m_stoppedReasonHasBeenSet = false;

    Aws::Utils::DateTime m_stoppingAt{};
    bool m_stoppingAtHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    TaskEphemeralStorage m_fargateEphemeralStorage;
    bool m_fargateEphemeralStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
