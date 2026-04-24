/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessGatewayOutboundAuth.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Configuration for AgentCore Gateway.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessAgentCoreGatewayConfig">AWS
 * API Reference</a></p>
 */
class HarnessAgentCoreGatewayConfig {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessAgentCoreGatewayConfig() = default;
  AWS_BEDROCKAGENTCORE_API HarnessAgentCoreGatewayConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessAgentCoreGatewayConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the desired AgentCore Gateway.</p>
   */
  inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
  inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
  template <typename GatewayArnT = Aws::String>
  void SetGatewayArn(GatewayArnT&& value) {
    m_gatewayArnHasBeenSet = true;
    m_gatewayArn = std::forward<GatewayArnT>(value);
  }
  template <typename GatewayArnT = Aws::String>
  HarnessAgentCoreGatewayConfig& WithGatewayArn(GatewayArnT&& value) {
    SetGatewayArn(std::forward<GatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How Loopy authenticates to this Gateway. Defaults to AWS_IAM (SigV4) if
   * omitted.</p>
   */
  inline const HarnessGatewayOutboundAuth& GetOutboundAuth() const { return m_outboundAuth; }
  inline bool OutboundAuthHasBeenSet() const { return m_outboundAuthHasBeenSet; }
  template <typename OutboundAuthT = HarnessGatewayOutboundAuth>
  void SetOutboundAuth(OutboundAuthT&& value) {
    m_outboundAuthHasBeenSet = true;
    m_outboundAuth = std::forward<OutboundAuthT>(value);
  }
  template <typename OutboundAuthT = HarnessGatewayOutboundAuth>
  HarnessAgentCoreGatewayConfig& WithOutboundAuth(OutboundAuthT&& value) {
    SetOutboundAuth(std::forward<OutboundAuthT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayArn;

  HarnessGatewayOutboundAuth m_outboundAuth;
  bool m_gatewayArnHasBeenSet = false;
  bool m_outboundAuthHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
