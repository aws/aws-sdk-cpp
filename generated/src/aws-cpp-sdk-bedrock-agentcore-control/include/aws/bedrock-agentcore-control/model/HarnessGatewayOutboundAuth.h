/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/OAuthCredentialProvider.h>
#include <aws/bedrock-agentcore-control/model/Unit.h>

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
 * <p>Authentication method for calling a Gateway.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessGatewayOutboundAuth">AWS
 * API Reference</a></p>
 */
class HarnessGatewayOutboundAuth {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessGatewayOutboundAuth() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessGatewayOutboundAuth(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessGatewayOutboundAuth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>SigV4-sign requests using the agent's execution role.</p>
   */
  inline const Unit& GetAwsIam() const { return m_awsIam; }
  inline bool AwsIamHasBeenSet() const { return m_awsIamHasBeenSet; }
  template <typename AwsIamT = Unit>
  void SetAwsIam(AwsIamT&& value) {
    m_awsIamHasBeenSet = true;
    m_awsIam = std::forward<AwsIamT>(value);
  }
  template <typename AwsIamT = Unit>
  HarnessGatewayOutboundAuth& WithAwsIam(AwsIamT&& value) {
    SetAwsIam(std::forward<AwsIamT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>No authentication.</p>
   */
  inline const Unit& GetNone() const { return m_none; }
  inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }
  template <typename NoneT = Unit>
  void SetNone(NoneT&& value) {
    m_noneHasBeenSet = true;
    m_none = std::forward<NoneT>(value);
  }
  template <typename NoneT = Unit>
  HarnessGatewayOutboundAuth& WithNone(NoneT&& value) {
    SetNone(std::forward<NoneT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const OAuthCredentialProvider& GetOauth() const { return m_oauth; }
  inline bool OauthHasBeenSet() const { return m_oauthHasBeenSet; }
  template <typename OauthT = OAuthCredentialProvider>
  void SetOauth(OauthT&& value) {
    m_oauthHasBeenSet = true;
    m_oauth = std::forward<OauthT>(value);
  }
  template <typename OauthT = OAuthCredentialProvider>
  HarnessGatewayOutboundAuth& WithOauth(OauthT&& value) {
    SetOauth(std::forward<OauthT>(value));
    return *this;
  }
  ///@}
 private:
  Unit m_awsIam;

  Unit m_none;

  OAuthCredentialProvider m_oauth;
  bool m_awsIamHasBeenSet = false;
  bool m_noneHasBeenSet = false;
  bool m_oauthHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
