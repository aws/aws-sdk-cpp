/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GpuSharingMode.h>

#include <utility>

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
 * <p>The state of a GPU on a container instance, including its sharing mode and
 * the memory that's available for new containers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GpuDevice">AWS API
 * Reference</a></p>
 */
class GpuDevice {
 public:
  AWS_ECS_API GpuDevice() = default;
  AWS_ECS_API GpuDevice(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GpuDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the GPU. This ID matches the GPU IDs in the <code>gpuIds</code> of
   * the containers that Amazon ECS assigned to the GPU.</p>
   */
  inline const Aws::String& GetGpuId() const { return m_gpuId; }
  inline bool GpuIdHasBeenSet() const { return m_gpuIdHasBeenSet; }
  template <typename GpuIdT = Aws::String>
  void SetGpuId(GpuIdT&& value) {
    m_gpuIdHasBeenSet = true;
    m_gpuId = std::forward<GpuIdT>(value);
  }
  template <typename GpuIdT = Aws::String>
  GpuDevice& WithGpuId(GpuIdT&& value) {
    SetGpuId(std::forward<GpuIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the GPU is shared between containers.</p> <p>Valid values:</p> <ul> <li>
   * <p> <code>IDLE</code> - No containers are assigned to the GPU, and all of its
   * memory is available.</p> </li> <li> <p> <code>NVIDIA_MPS</code> - One or more
   * containers share the GPU by using NVIDIA Multi-Process Service (MPS).</p> </li>
   * <li> <p> <code>DEDICATED</code> - One container has exclusive use of the
   * GPU.</p> </li> </ul>
   */
  inline GpuSharingMode GetSharingMode() const { return m_sharingMode; }
  inline bool SharingModeHasBeenSet() const { return m_sharingModeHasBeenSet; }
  inline void SetSharingMode(GpuSharingMode value) {
    m_sharingModeHasBeenSet = true;
    m_sharingMode = value;
  }
  inline GpuDevice& WithSharingMode(GpuSharingMode value) {
    SetSharingMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount of GPU memory, in MiB, that the Amazon ECS container agent
   * reported for the GPU. This is the memory that's available to containers, and it
   * can be less than the nominal memory of the GPU.</p>
   */
  inline int GetTotalMemoryInMiB() const { return m_totalMemoryInMiB; }
  inline bool TotalMemoryInMiBHasBeenSet() const { return m_totalMemoryInMiBHasBeenSet; }
  inline void SetTotalMemoryInMiB(int value) {
    m_totalMemoryInMiBHasBeenSet = true;
    m_totalMemoryInMiB = value;
  }
  inline GpuDevice& WithTotalMemoryInMiB(int value) {
    SetTotalMemoryInMiB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of GPU memory, in MiB, that's available to allocate to new
   * containers that use the <code>nvidiaMps</code> sharing strategy. Amazon ECS
   * calculates this value from the memory that it allocated to containers on the
   * GPU, not from the memory that the containers use.</p>
   */
  inline int GetRemainingMemoryInMiB() const { return m_remainingMemoryInMiB; }
  inline bool RemainingMemoryInMiBHasBeenSet() const { return m_remainingMemoryInMiBHasBeenSet; }
  inline void SetRemainingMemoryInMiB(int value) {
    m_remainingMemoryInMiBHasBeenSet = true;
    m_remainingMemoryInMiB = value;
  }
  inline GpuDevice& WithRemainingMemoryInMiB(int value) {
    SetRemainingMemoryInMiB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of containers that Amazon ECS assigned to the GPU. This value is
   * <code>0</code> when the sharing mode is <code>IDLE</code> and <code>1</code>
   * when the sharing mode is <code>DEDICATED</code>. Amazon ECS counts the
   * containers that it assigned to the GPU, not the processes that are running on
   * it.</p>
   */
  inline int GetContainerCount() const { return m_containerCount; }
  inline bool ContainerCountHasBeenSet() const { return m_containerCountHasBeenSet; }
  inline void SetContainerCount(int value) {
    m_containerCountHasBeenSet = true;
    m_containerCount = value;
  }
  inline GpuDevice& WithContainerCount(int value) {
    SetContainerCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_gpuId;

  GpuSharingMode m_sharingMode{GpuSharingMode::NOT_SET};

  int m_totalMemoryInMiB{0};

  int m_remainingMemoryInMiB{0};

  int m_containerCount{0};
  bool m_gpuIdHasBeenSet = false;
  bool m_sharingModeHasBeenSet = false;
  bool m_totalMemoryInMiBHasBeenSet = false;
  bool m_remainingMemoryInMiBHasBeenSet = false;
  bool m_containerCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
