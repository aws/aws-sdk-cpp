/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/LifecycleHook.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The lifecycle hooks that run when you create or update the AgentCore Runtime,
 * before any sessions are created.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/BuildLifecycleHooks">AWS
 * API Reference</a></p>
 */
class BuildLifecycleHooks {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API BuildLifecycleHooks() = default;
  AWS_BEDROCKAGENTCORECONTROL_API BuildLifecycleHooks(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API BuildLifecycleHooks& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The hook that warms up your agent before any sessions are created. Use this
   * hook to load the resources that your sessions need, such as models, libraries,
   * or caches. Your hook must complete within 120 seconds.</p>
   */
  inline const LifecycleHook& GetWarmup() const { return m_warmup; }
  inline bool WarmupHasBeenSet() const { return m_warmupHasBeenSet; }
  template <typename WarmupT = LifecycleHook>
  void SetWarmup(WarmupT&& value) {
    m_warmupHasBeenSet = true;
    m_warmup = std::forward<WarmupT>(value);
  }
  template <typename WarmupT = LifecycleHook>
  BuildLifecycleHooks& WithWarmup(WarmupT&& value) {
    SetWarmup(std::forward<WarmupT>(value));
    return *this;
  }
  ///@}
 private:
  LifecycleHook m_warmup;
  bool m_warmupHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
