/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/GatewayPolicyEngineMode.h>
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
 * <p>The configuration for a policy engine associated with a gateway. A policy
 * engine is a collection of policies that evaluates and authorizes agent tool
 * calls. When associated with a gateway, the policy engine intercepts all agent
 * requests and determines whether to allow or deny each action based on the
 * defined policies.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GatewayPolicyEngineConfiguration">AWS
 * API Reference</a></p>
 */
class GatewayPolicyEngineConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GatewayPolicyEngineConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GatewayPolicyEngineConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API GatewayPolicyEngineConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the policy engine. The policy engine contains Cedar policies that
   * define fine-grained authorization rules specifying who can perform what actions
   * on which resources as agents interact through the gateway.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GatewayPolicyEngineConfiguration& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enforcement mode for the policy engine. Valid values include:</p> <ul>
   * <li> <p> <code>LOG_ONLY</code> - The policy engine evaluates each action against
   * your policies and adds traces on whether tool calls would be allowed or denied,
   * but does not enforce the decision. Use this mode to test and validate policies
   * before enabling enforcement.</p> </li> <li> <p> <code>ENFORCE</code> - The
   * policy engine evaluates actions against your policies and enforces decisions by
   * allowing or denying agent operations. Test and validate policies in
   * <code>LOG_ONLY</code> mode before enabling enforcement to avoid unintended
   * denials or adversely affecting production traffic.</p> </li> </ul>
   */
  inline GatewayPolicyEngineMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(GatewayPolicyEngineMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline GatewayPolicyEngineConfiguration& WithMode(GatewayPolicyEngineMode value) {
    SetMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  GatewayPolicyEngineMode m_mode{GatewayPolicyEngineMode::NOT_SET};
  bool m_modeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
