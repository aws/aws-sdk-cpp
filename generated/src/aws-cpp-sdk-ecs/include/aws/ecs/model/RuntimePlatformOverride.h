/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

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
 * <p>The runtime platform that Amazon ECS applies to a service revision. This
 * value overrides the runtime platform specified in the task definition. You can't
 * set this value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RuntimePlatformOverride">AWS
 * API Reference</a></p>
 */
class RuntimePlatformOverride {
 public:
  AWS_ECS_API RuntimePlatformOverride() = default;
  AWS_ECS_API RuntimePlatformOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API RuntimePlatformOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CPU architecture that tasks in this service revision run on. This value
   * might differ from the architecture declared in the task definition—for example,
   * when Amazon ECS detects an architecture mismatch during an Amazon ECS Express
   * deployment and runs tasks on a different architecture. You can't set this
   * value.</p> <p>Valid values:</p> <ul> <li> <p> <code>X86_64</code> - The x86
   * 64-bit architecture.</p> </li> <li> <p> <code>ARM64</code> - The 64-bit ARM
   * architecture.</p> </li> </ul>
   */
  inline const Aws::String& GetCpuArchitecture() const { return m_cpuArchitecture; }
  inline bool CpuArchitectureHasBeenSet() const { return m_cpuArchitectureHasBeenSet; }
  template <typename CpuArchitectureT = Aws::String>
  void SetCpuArchitecture(CpuArchitectureT&& value) {
    m_cpuArchitectureHasBeenSet = true;
    m_cpuArchitecture = std::forward<CpuArchitectureT>(value);
  }
  template <typename CpuArchitectureT = Aws::String>
  RuntimePlatformOverride& WithCpuArchitecture(CpuArchitectureT&& value) {
    SetCpuArchitecture(std::forward<CpuArchitectureT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cpuArchitecture;
  bool m_cpuArchitectureHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
