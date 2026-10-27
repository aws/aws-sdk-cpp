/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The GPU memory and compute limits for a container that shares a GPU by using
 * NVIDIA Multi-Process Service (MPS). Amazon ECS assigns the container a single
 * GPU that has enough memory available. Other containers that use MPS can share
 * the same GPU.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/NvidiaMpsAllocation">AWS
 * API Reference</a></p>
 */
class NvidiaMpsAllocation {
 public:
  AWS_ECS_API NvidiaMpsAllocation() = default;
  AWS_ECS_API NvidiaMpsAllocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API NvidiaMpsAllocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The amount of GPU memory, in MiB, to allocate to the container. Amazon ECS
   * assigns the container a GPU that has at least the specified amount of memory
   * available, and sets the <code>CUDA_MPS_PINNED_DEVICE_MEM_LIMIT</code>
   * environment variable in the container to limit its memory to this amount. The
   * memory must be available on a single GPU. If more than one container in a task
   * uses <code>nvidiaMps</code>, Amazon ECS assigns them the same GPU, which must
   * have enough memory available for all of them.</p>
   */
  inline int GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  inline void SetMemory(int value) {
    m_memoryHasBeenSet = true;
    m_memory = value;
  }
  inline NvidiaMpsAllocation& WithMemory(int value) {
    SetMemory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum percentage of the GPU's compute capacity that the container can
   * use. Amazon ECS sets the <code>CUDA_MPS_ACTIVE_THREAD_PERCENTAGE</code>
   * environment variable in the container to this value. This value is a limit, not
   * a reservation.</p> <p>If you don't specify this parameter, Amazon ECS doesn't
   * set <code>CUDA_MPS_ACTIVE_THREAD_PERCENTAGE</code>, and the active thread
   * percentage of the MPS server on the container instance applies. By default, this
   * is 100 percent.</p>
   */
  inline int GetMaxComputePercent() const { return m_maxComputePercent; }
  inline bool MaxComputePercentHasBeenSet() const { return m_maxComputePercentHasBeenSet; }
  inline void SetMaxComputePercent(int value) {
    m_maxComputePercentHasBeenSet = true;
    m_maxComputePercent = value;
  }
  inline NvidiaMpsAllocation& WithMaxComputePercent(int value) {
    SetMaxComputePercent(value);
    return *this;
  }
  ///@}
 private:
  int m_memory{0};

  int m_maxComputePercent{0};
  bool m_memoryHasBeenSet = false;
  bool m_maxComputePercentHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
