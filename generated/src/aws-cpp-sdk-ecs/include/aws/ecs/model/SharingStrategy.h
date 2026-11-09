/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/NvidiaMpsAllocation.h>

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
 * <p>The strategy that a container uses to share a GPU with other containers.
 * Specify exactly one member.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SharingStrategy">AWS
 * API Reference</a></p>
 */
class SharingStrategy {
 public:
  AWS_ECS_API SharingStrategy() = default;
  AWS_ECS_API SharingStrategy(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API SharingStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Shares a GPU between containers by using NVIDIA Multi-Process Service (MPS).
   * You specify the GPU memory to allocate to the container and, optionally, the
   * maximum percentage of the GPU's compute capacity that the container can use.</p>
   */
  inline const NvidiaMpsAllocation& GetNvidiaMps() const { return m_nvidiaMps; }
  inline bool NvidiaMpsHasBeenSet() const { return m_nvidiaMpsHasBeenSet; }
  template <typename NvidiaMpsT = NvidiaMpsAllocation>
  void SetNvidiaMps(NvidiaMpsT&& value) {
    m_nvidiaMpsHasBeenSet = true;
    m_nvidiaMps = std::forward<NvidiaMpsT>(value);
  }
  template <typename NvidiaMpsT = NvidiaMpsAllocation>
  SharingStrategy& WithNvidiaMps(NvidiaMpsT&& value) {
    SetNvidiaMps(std::forward<NvidiaMpsT>(value));
    return *this;
  }
  ///@}
 private:
  NvidiaMpsAllocation m_nvidiaMps;
  bool m_nvidiaMpsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
