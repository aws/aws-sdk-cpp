/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The overrides associated with a task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskOverride">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API TaskOverride
  {
  public:
    TaskOverride();
    TaskOverride(Aws::Utils::Json::JsonView jsonValue);
    TaskOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline const Aws::Vector<ContainerOverride>& GetContainerOverrides() const{ return m_containerOverrides; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline void SetContainerOverrides(const Aws::Vector<ContainerOverride>& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline void SetContainerOverrides(Aws::Vector<ContainerOverride>&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::move(value); }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& WithContainerOverrides(const Aws::Vector<ContainerOverride>& value) { SetContainerOverrides(value); return *this;}

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& WithContainerOverrides(Aws::Vector<ContainerOverride>&& value) { SetContainerOverrides(std::move(value)); return *this;}

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& AddContainerOverrides(const ContainerOverride& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides.push_back(value); return *this; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& AddContainerOverrides(ContainerOverride&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides.push_back(std::move(value)); return *this; }


    /**
     * <p>The cpu override for the task.</p>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }

    /**
     * <p>The cpu override for the task.</p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The cpu override for the task.</p>
     */
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The cpu override for the task.</p>
     */
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }

    /**
     * <p>The cpu override for the task.</p>
     */
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }

    /**
     * <p>The cpu override for the task.</p>
     */
    inline TaskOverride& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}

    /**
     * <p>The cpu override for the task.</p>
     */
    inline TaskOverride& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}

    /**
     * <p>The cpu override for the task.</p>
     */
    inline TaskOverride& WithCpu(const char* value) { SetCpu(value); return *this;}


    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline const Aws::Vector<InferenceAcceleratorOverride>& GetInferenceAcceleratorOverrides() const{ return m_inferenceAcceleratorOverrides; }

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline bool InferenceAcceleratorOverridesHasBeenSet() const { return m_inferenceAcceleratorOverridesHasBeenSet; }

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline void SetInferenceAcceleratorOverrides(const Aws::Vector<InferenceAcceleratorOverride>& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides = value; }

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline void SetInferenceAcceleratorOverrides(Aws::Vector<InferenceAcceleratorOverride>&& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides = std::move(value); }

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline TaskOverride& WithInferenceAcceleratorOverrides(const Aws::Vector<InferenceAcceleratorOverride>& value) { SetInferenceAcceleratorOverrides(value); return *this;}

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline TaskOverride& WithInferenceAcceleratorOverrides(Aws::Vector<InferenceAcceleratorOverride>&& value) { SetInferenceAcceleratorOverrides(std::move(value)); return *this;}

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline TaskOverride& AddInferenceAcceleratorOverrides(const InferenceAcceleratorOverride& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides.push_back(value); return *this; }

    /**
     * <p>The Elastic Inference accelerator override for the task.</p>
     */
    inline TaskOverride& AddInferenceAcceleratorOverrides(InferenceAcceleratorOverride&& value) { m_inferenceAcceleratorOverridesHasBeenSet = true; m_inferenceAcceleratorOverrides.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task.</p>
     */
    inline TaskOverride& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task.</p>
     */
    inline TaskOverride& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution IAM role override for
     * the task.</p>
     */
    inline TaskOverride& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The memory override for the task.</p>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }

    /**
     * <p>The memory override for the task.</p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The memory override for the task.</p>
     */
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The memory override for the task.</p>
     */
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

    /**
     * <p>The memory override for the task.</p>
     */
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

    /**
     * <p>The memory override for the task.</p>
     */
    inline TaskOverride& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

    /**
     * <p>The memory override for the task.</p>
     */
    inline TaskOverride& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

    /**
     * <p>The memory override for the task.</p>
     */
    inline TaskOverride& WithMemory(const char* value) { SetMemory(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline TaskOverride& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline TaskOverride& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that containers in this task
     * can assume. All containers in this task are granted the permissions that are
     * specified in this role.</p>
     */
    inline TaskOverride& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}

  private:

    Aws::Vector<ContainerOverride> m_containerOverrides;
    bool m_containerOverridesHasBeenSet;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet;

    Aws::Vector<InferenceAcceleratorOverride> m_inferenceAcceleratorOverrides;
    bool m_inferenceAcceleratorOverridesHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    Aws::String m_memory;
    bool m_memoryHasBeenSet;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
