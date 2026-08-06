/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntimeStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Summary information about an agent runtime version associated with a capacity
 * provider. This is returned by
 * <code>ListAgentRuntimeVersionsByCapacityProvider</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AgentRuntimeVersionSummary">AWS
 * API Reference</a></p>
 */
class AgentRuntimeVersionSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AgentRuntimeVersionSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AgentRuntimeVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API AgentRuntimeVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the agent runtime.</p>
   */
  inline const Aws::String& GetAgentRuntimeArn() const { return m_agentRuntimeArn; }
  inline bool AgentRuntimeArnHasBeenSet() const { return m_agentRuntimeArnHasBeenSet; }
  template <typename AgentRuntimeArnT = Aws::String>
  void SetAgentRuntimeArn(AgentRuntimeArnT&& value) {
    m_agentRuntimeArnHasBeenSet = true;
    m_agentRuntimeArn = std::forward<AgentRuntimeArnT>(value);
  }
  template <typename AgentRuntimeArnT = Aws::String>
  AgentRuntimeVersionSummary& WithAgentRuntimeArn(AgentRuntimeArnT&& value) {
    SetAgentRuntimeArn(std::forward<AgentRuntimeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the agent runtime.</p>
   */
  inline const Aws::String& GetAgentRuntimeVersion() const { return m_agentRuntimeVersion; }
  inline bool AgentRuntimeVersionHasBeenSet() const { return m_agentRuntimeVersionHasBeenSet; }
  template <typename AgentRuntimeVersionT = Aws::String>
  void SetAgentRuntimeVersion(AgentRuntimeVersionT&& value) {
    m_agentRuntimeVersionHasBeenSet = true;
    m_agentRuntimeVersion = std::forward<AgentRuntimeVersionT>(value);
  }
  template <typename AgentRuntimeVersionT = Aws::String>
  AgentRuntimeVersionSummary& WithAgentRuntimeVersion(AgentRuntimeVersionT&& value) {
    SetAgentRuntimeVersion(std::forward<AgentRuntimeVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the agent runtime version.</p>
   */
  inline AgentRuntimeStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AgentRuntimeStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AgentRuntimeVersionSummary& WithStatus(AgentRuntimeStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentRuntimeArn;

  Aws::String m_agentRuntimeVersion;

  AgentRuntimeStatus m_status{AgentRuntimeStatus::NOT_SET};
  bool m_agentRuntimeArnHasBeenSet = false;
  bool m_agentRuntimeVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
