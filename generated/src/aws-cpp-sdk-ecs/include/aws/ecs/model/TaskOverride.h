/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/EphemeralStorage.h>
#include <aws/ecs/model/ContainerOverride.h>
#include <aws/ecs/model/InferenceAcceleratorOverride.h>
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
   * <p>The overrides that are associated with a task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskOverride">AWS
   * API Reference</a></p>
   */
  class TaskOverride
  {
  public:
    AWS_ECS_API TaskOverride() = default;
    AWS_ECS_API TaskOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more container overrides that are sent to a task.</p>
     */
    inline const Aws::Vector<ContainerOverride>& GetContainerOverrides() const { return m_containerOverrides; }
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }
    template<typename ContainerOverridesT = Aws::Vector<ContainerOverride>>
    void SetContainerOverrides(ContainerOverridesT&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::forward<ContainerOverridesT>(value); }
    template<typename ContainerOverridesT = Aws::Vector<ContainerOverride>>
    TaskOverride& WithContainerOverrides(ContainerOverridesT&& value) { SetContainerOverrides(std::forward<ContainerOverridesT>(value)); return *this;}
    template<typename ContainerOverridesT = ContainerOverride>
    TaskOverride& AddContainerOverrides(ContainerOverridesT&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides.emplace_back(std::forward<ContainerOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CPU override for the task.</p>
     */
    inline const Aws::String& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = Aws::String>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = Aws::String>
    TaskOverride& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline const Aws::Vector<InferenceAcceleratorOverride>& GetInferenceAcceleratorOverrides() const { return m_inferenceAcceleratorOverrides; }
    inline bool InferenceAcceleratorOverridesHasBeenSet() const { return m_inferenceAcceleratorOverridesHasBeenSet; }
    template<typename InferenceAcceleratorOverridesT = Aws::Vector<InferenceAcceleratorOverride>>
    void SetInferenceAcceleratorOverrides(InferenceAcceleratorOverridesT&& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides = std::forward<InferenceAcceleratorOverridesT>(value); }
    template<typename InferenceAcceleratorOverridesT = Aws::Vector<InferenceAcceleratorOverride>>
    TaskOverride& WithInferenceAcceleratorOverrides(InferenceAcceleratorOverridesT&& value) { SetInferenceAcceleratorOverrides(std::forward<InferenceAcceleratorOverridesT>(value)); return *this;}
    template<typename InferenceAcceleratorOverridesT = InferenceAcceleratorOverride>
    TaskOverride& AddInferenceAcceleratorOverrides(InferenceAcceleratorOverridesT&& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides.emplace_back(std::forward<InferenceAcceleratorOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role override for the
     * task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    TaskOverride& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory override for the task.</p>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    TaskOverride& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role that containers in this task can
     * assume. All containers in this task are granted the permissions that are
     * specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Role for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const { return m_taskRoleArn; }
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
    template<typename TaskRoleArnT = Aws::String>
    void SetTaskRoleArn(TaskRoleArnT&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::forward<TaskRoleArnT>(value); }
    template<typename TaskRoleArnT = Aws::String>
    TaskOverride& WithTaskRoleArn(TaskRoleArnT&& value) { SetTaskRoleArn(std::forward<TaskRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ephemeral storage setting override for the task.</p>  <p>This
     * parameter is only supported for tasks hosted on Fargate that use the following
     * platform versions:</p> <ul> <li> <p>Linux platform version <code>1.4.0</code> or
     * later.</p> </li> <li> <p>Windows platform version <code>1.0.0</code> or
     * later.</p> </li> </ul> 
     */
    inline const EphemeralStorage& GetEphemeralStorage() const { return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    template<typename EphemeralStorageT = EphemeralStorage>
    void SetEphemeralStorage(EphemeralStorageT&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::forward<EphemeralStorageT>(value); }
    template<typename EphemeralStorageT = EphemeralStorage>
    TaskOverride& WithEphemeralStorage(EphemeralStorageT&& value) { SetEphemeralStorage(std::forward<EphemeralStorageT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerOverride> m_containerOverrides;
    bool m_containerOverridesHasBeenSet = false;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::Vector<InferenceAcceleratorOverride> m_inferenceAcceleratorOverrides;
    bool m_inferenceAcceleratorOverridesHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
