/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/BuildLifecycleHooks.h>

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
 * <p>The lifecycle hooks that AgentCore Runtime runs at fixed points in the
 * runtime's lifecycle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/RuntimeHooksConfiguration">AWS
 * API Reference</a></p>
 */
class RuntimeHooksConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API RuntimeHooksConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API RuntimeHooksConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API RuntimeHooksConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The hooks that run when you create or update the AgentCore Runtime, before
   * any sessions are created.</p>
   */
  inline const BuildLifecycleHooks& GetBuild() const { return m_build; }
  inline bool BuildHasBeenSet() const { return m_buildHasBeenSet; }
  template <typename BuildT = BuildLifecycleHooks>
  void SetBuild(BuildT&& value) {
    m_buildHasBeenSet = true;
    m_build = std::forward<BuildT>(value);
  }
  template <typename BuildT = BuildLifecycleHooks>
  RuntimeHooksConfiguration& WithBuild(BuildT&& value) {
    SetBuild(std::forward<BuildT>(value));
    return *this;
  }
  ///@}
 private:
  BuildLifecycleHooks m_build;
  bool m_buildHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
