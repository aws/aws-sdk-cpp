/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessAgentCoreBrowserConfig.h>
#include <aws/bedrock-agentcore/model/HarnessAgentCoreCodeInterpreterConfig.h>
#include <aws/bedrock-agentcore/model/HarnessAgentCoreGatewayConfig.h>
#include <aws/bedrock-agentcore/model/HarnessInlineFunctionConfig.h>
#include <aws/bedrock-agentcore/model/HarnessRemoteMcpConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Configuration union for different tool types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessToolConfiguration">AWS
 * API Reference</a></p>
 */
class HarnessToolConfiguration {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessToolConfiguration() = default;
  AWS_BEDROCKAGENTCORE_API HarnessToolConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessToolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for remote MCP server.</p>
   */
  inline const HarnessRemoteMcpConfig& GetRemoteMcp() const { return m_remoteMcp; }
  inline bool RemoteMcpHasBeenSet() const { return m_remoteMcpHasBeenSet; }
  template <typename RemoteMcpT = HarnessRemoteMcpConfig>
  void SetRemoteMcp(RemoteMcpT&& value) {
    m_remoteMcpHasBeenSet = true;
    m_remoteMcp = std::forward<RemoteMcpT>(value);
  }
  template <typename RemoteMcpT = HarnessRemoteMcpConfig>
  HarnessToolConfiguration& WithRemoteMcp(RemoteMcpT&& value) {
    SetRemoteMcp(std::forward<RemoteMcpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for AgentCore Browser.</p>
   */
  inline const HarnessAgentCoreBrowserConfig& GetAgentCoreBrowser() const { return m_agentCoreBrowser; }
  inline bool AgentCoreBrowserHasBeenSet() const { return m_agentCoreBrowserHasBeenSet; }
  template <typename AgentCoreBrowserT = HarnessAgentCoreBrowserConfig>
  void SetAgentCoreBrowser(AgentCoreBrowserT&& value) {
    m_agentCoreBrowserHasBeenSet = true;
    m_agentCoreBrowser = std::forward<AgentCoreBrowserT>(value);
  }
  template <typename AgentCoreBrowserT = HarnessAgentCoreBrowserConfig>
  HarnessToolConfiguration& WithAgentCoreBrowser(AgentCoreBrowserT&& value) {
    SetAgentCoreBrowser(std::forward<AgentCoreBrowserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for AgentCore Gateway.</p>
   */
  inline const HarnessAgentCoreGatewayConfig& GetAgentCoreGateway() const { return m_agentCoreGateway; }
  inline bool AgentCoreGatewayHasBeenSet() const { return m_agentCoreGatewayHasBeenSet; }
  template <typename AgentCoreGatewayT = HarnessAgentCoreGatewayConfig>
  void SetAgentCoreGateway(AgentCoreGatewayT&& value) {
    m_agentCoreGatewayHasBeenSet = true;
    m_agentCoreGateway = std::forward<AgentCoreGatewayT>(value);
  }
  template <typename AgentCoreGatewayT = HarnessAgentCoreGatewayConfig>
  HarnessToolConfiguration& WithAgentCoreGateway(AgentCoreGatewayT&& value) {
    SetAgentCoreGateway(std::forward<AgentCoreGatewayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for an inline function tool.</p>
   */
  inline const HarnessInlineFunctionConfig& GetInlineFunction() const { return m_inlineFunction; }
  inline bool InlineFunctionHasBeenSet() const { return m_inlineFunctionHasBeenSet; }
  template <typename InlineFunctionT = HarnessInlineFunctionConfig>
  void SetInlineFunction(InlineFunctionT&& value) {
    m_inlineFunctionHasBeenSet = true;
    m_inlineFunction = std::forward<InlineFunctionT>(value);
  }
  template <typename InlineFunctionT = HarnessInlineFunctionConfig>
  HarnessToolConfiguration& WithInlineFunction(InlineFunctionT&& value) {
    SetInlineFunction(std::forward<InlineFunctionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for AgentCore Code Interpreter.</p>
   */
  inline const HarnessAgentCoreCodeInterpreterConfig& GetAgentCoreCodeInterpreter() const { return m_agentCoreCodeInterpreter; }
  inline bool AgentCoreCodeInterpreterHasBeenSet() const { return m_agentCoreCodeInterpreterHasBeenSet; }
  template <typename AgentCoreCodeInterpreterT = HarnessAgentCoreCodeInterpreterConfig>
  void SetAgentCoreCodeInterpreter(AgentCoreCodeInterpreterT&& value) {
    m_agentCoreCodeInterpreterHasBeenSet = true;
    m_agentCoreCodeInterpreter = std::forward<AgentCoreCodeInterpreterT>(value);
  }
  template <typename AgentCoreCodeInterpreterT = HarnessAgentCoreCodeInterpreterConfig>
  HarnessToolConfiguration& WithAgentCoreCodeInterpreter(AgentCoreCodeInterpreterT&& value) {
    SetAgentCoreCodeInterpreter(std::forward<AgentCoreCodeInterpreterT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessRemoteMcpConfig m_remoteMcp;

  HarnessAgentCoreBrowserConfig m_agentCoreBrowser;

  HarnessAgentCoreGatewayConfig m_agentCoreGateway;

  HarnessInlineFunctionConfig m_inlineFunction;

  HarnessAgentCoreCodeInterpreterConfig m_agentCoreCodeInterpreter;
  bool m_remoteMcpHasBeenSet = false;
  bool m_agentCoreBrowserHasBeenSet = false;
  bool m_agentCoreGatewayHasBeenSet = false;
  bool m_inlineFunctionHasBeenSet = false;
  bool m_agentCoreCodeInterpreterHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
