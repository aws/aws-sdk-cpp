/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/RuntimeTargetConfiguration.h>

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
 * <p>The HTTP target configuration for a gateway target. Contains the
 * configuration for HTTP-based target endpoints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HttpTargetConfiguration">AWS
 * API Reference</a></p>
 */
class HttpTargetConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HttpTargetConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HttpTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HttpTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AgentCore Runtime target configuration for HTTP-based communication with
   * an agent runtime.</p>
   */
  inline const RuntimeTargetConfiguration& GetAgentcoreRuntime() const { return m_agentcoreRuntime; }
  inline bool AgentcoreRuntimeHasBeenSet() const { return m_agentcoreRuntimeHasBeenSet; }
  template <typename AgentcoreRuntimeT = RuntimeTargetConfiguration>
  void SetAgentcoreRuntime(AgentcoreRuntimeT&& value) {
    m_agentcoreRuntimeHasBeenSet = true;
    m_agentcoreRuntime = std::forward<AgentcoreRuntimeT>(value);
  }
  template <typename AgentcoreRuntimeT = RuntimeTargetConfiguration>
  HttpTargetConfiguration& WithAgentcoreRuntime(AgentcoreRuntimeT&& value) {
    SetAgentcoreRuntime(std::forward<AgentcoreRuntimeT>(value));
    return *this;
  }
  ///@}
 private:
  RuntimeTargetConfiguration m_agentcoreRuntime;
  bool m_agentcoreRuntimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
