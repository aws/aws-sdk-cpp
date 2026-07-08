/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/RuntimePlatformOverride.h>

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
 * <p>Contains the runtime overrides that Amazon ECS automatically applies to a
 * service revision when the effective runtime configuration differs from the task
 * definition. This value is read-only.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceRevisionOverrides">AWS
 * API Reference</a></p>
 */
class ServiceRevisionOverrides {
 public:
  AWS_ECS_API ServiceRevisionOverrides() = default;
  AWS_ECS_API ServiceRevisionOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ServiceRevisionOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The runtime platform override that Amazon ECS automatically applies to the
   * service revision. You can't set this value.</p>
   */
  inline const RuntimePlatformOverride& GetRuntimePlatform() const { return m_runtimePlatform; }
  inline bool RuntimePlatformHasBeenSet() const { return m_runtimePlatformHasBeenSet; }
  template <typename RuntimePlatformT = RuntimePlatformOverride>
  void SetRuntimePlatform(RuntimePlatformT&& value) {
    m_runtimePlatformHasBeenSet = true;
    m_runtimePlatform = std::forward<RuntimePlatformT>(value);
  }
  template <typename RuntimePlatformT = RuntimePlatformOverride>
  ServiceRevisionOverrides& WithRuntimePlatform(RuntimePlatformT&& value) {
    SetRuntimePlatform(std::forward<RuntimePlatformT>(value));
    return *this;
  }
  ///@}
 private:
  RuntimePlatformOverride m_runtimePlatform;
  bool m_runtimePlatformHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
