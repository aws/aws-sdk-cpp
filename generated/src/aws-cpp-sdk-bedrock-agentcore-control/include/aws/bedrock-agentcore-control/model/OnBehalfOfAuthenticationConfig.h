/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/OnBehalfOfClientAuthenticationMethod.h>

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
 * <p>Specifies the client authentication method to use for the on-behalf-of token
 * exchange.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/OnBehalfOfAuthenticationConfig">AWS
 * API Reference</a></p>
 */
class OnBehalfOfAuthenticationConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API OnBehalfOfAuthenticationConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API OnBehalfOfAuthenticationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API OnBehalfOfAuthenticationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The client authentication method to use during the on-behalf-of token
   * exchange. The <code>NO_CLIENT</code> option omits the <code>clientId</code> and
   * <code>clientSecret</code> during the on-behalf-of token exchange with the
   * identity provider.</p>
   */
  inline OnBehalfOfClientAuthenticationMethod GetClientAuthenticationMethod() const { return m_clientAuthenticationMethod; }
  inline bool ClientAuthenticationMethodHasBeenSet() const { return m_clientAuthenticationMethodHasBeenSet; }
  inline void SetClientAuthenticationMethod(OnBehalfOfClientAuthenticationMethod value) {
    m_clientAuthenticationMethodHasBeenSet = true;
    m_clientAuthenticationMethod = value;
  }
  inline OnBehalfOfAuthenticationConfig& WithClientAuthenticationMethod(OnBehalfOfClientAuthenticationMethod value) {
    SetClientAuthenticationMethod(value);
    return *this;
  }
  ///@}
 private:
  OnBehalfOfClientAuthenticationMethod m_clientAuthenticationMethod{OnBehalfOfClientAuthenticationMethod::NOT_SET};
  bool m_clientAuthenticationMethodHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
