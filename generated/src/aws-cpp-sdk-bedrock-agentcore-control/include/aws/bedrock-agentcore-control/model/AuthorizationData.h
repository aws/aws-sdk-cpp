/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/OAuth2AuthorizationData.h>

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
 * <p>Contains the authorization data that is returned when a gateway target is
 * configured with a credential provider with authorization code grant type and
 * requires user federation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AuthorizationData">AWS
 * API Reference</a></p>
 */
class AuthorizationData {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AuthorizationData() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AuthorizationData(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API AuthorizationData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>OAuth2 authorization data for the gateway target.</p>
   */
  inline const OAuth2AuthorizationData& GetOauth2() const { return m_oauth2; }
  inline bool Oauth2HasBeenSet() const { return m_oauth2HasBeenSet; }
  template <typename Oauth2T = OAuth2AuthorizationData>
  void SetOauth2(Oauth2T&& value) {
    m_oauth2HasBeenSet = true;
    m_oauth2 = std::forward<Oauth2T>(value);
  }
  template <typename Oauth2T = OAuth2AuthorizationData>
  AuthorizationData& WithOauth2(Oauth2T&& value) {
    SetOauth2(std::forward<Oauth2T>(value));
    return *this;
  }
  ///@}
 private:
  OAuth2AuthorizationData m_oauth2;
  bool m_oauth2HasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
