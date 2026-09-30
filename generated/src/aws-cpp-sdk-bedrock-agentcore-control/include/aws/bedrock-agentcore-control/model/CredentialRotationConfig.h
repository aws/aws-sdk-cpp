/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CoinbaseCdpRotationTargets.h>

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
 * <p>Specifies the service-managed credentials to rotate. Provide the member that
 * matches the payment connector's <code>type</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CredentialRotationConfig">AWS
 * API Reference</a></p>
 */
class CredentialRotationConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CredentialRotationConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CredentialRotationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CredentialRotationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The credentials to rotate for a Coinbase CDP payment connector.</p>
   */
  inline const CoinbaseCdpRotationTargets& GetCoinbaseCDP() const { return m_coinbaseCDP; }
  inline bool CoinbaseCDPHasBeenSet() const { return m_coinbaseCDPHasBeenSet; }
  template <typename CoinbaseCDPT = CoinbaseCdpRotationTargets>
  void SetCoinbaseCDP(CoinbaseCDPT&& value) {
    m_coinbaseCDPHasBeenSet = true;
    m_coinbaseCDP = std::forward<CoinbaseCDPT>(value);
  }
  template <typename CoinbaseCDPT = CoinbaseCdpRotationTargets>
  CredentialRotationConfig& WithCoinbaseCDP(CoinbaseCDPT&& value) {
    SetCoinbaseCDP(std::forward<CoinbaseCDPT>(value));
    return *this;
  }
  ///@}
 private:
  CoinbaseCdpRotationTargets m_coinbaseCDP;
  bool m_coinbaseCDPHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
