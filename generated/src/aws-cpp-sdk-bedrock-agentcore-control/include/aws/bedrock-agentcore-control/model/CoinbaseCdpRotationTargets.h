/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CoinbaseCdpSecret.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Specifies the service-managed Coinbase CDP secrets to rotate.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CoinbaseCdpRotationTargets">AWS
 * API Reference</a></p>
 */
class CoinbaseCdpRotationTargets {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CoinbaseCdpRotationTargets() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CoinbaseCdpRotationTargets(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CoinbaseCdpRotationTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The secrets to rotate. Specify at least one value. Each secret that you
   * specify is rotated independently.</p> <ul> <li> <p> <code>API_KEY</code> - The
   * API key that the payment connector uses to call Coinbase CDP. Rotate it as
   * routine maintenance, or if you suspect that it is compromised.</p> </li> <li>
   * <p> <code>WALLET_SECRET</code> - The wallet secret that signs transactions.
   * Rotate it only if it is lost or compromised. Coinbase CDP allows one wallet
   * secret per project, so it is replaced in place and signing can be briefly
   * interrupted.</p> </li> </ul>
   */
  inline const Aws::Vector<CoinbaseCdpSecret>& GetSecrets() const { return m_secrets; }
  inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }
  template <typename SecretsT = Aws::Vector<CoinbaseCdpSecret>>
  void SetSecrets(SecretsT&& value) {
    m_secretsHasBeenSet = true;
    m_secrets = std::forward<SecretsT>(value);
  }
  template <typename SecretsT = Aws::Vector<CoinbaseCdpSecret>>
  CoinbaseCdpRotationTargets& WithSecrets(SecretsT&& value) {
    SetSecrets(std::forward<SecretsT>(value));
    return *this;
  }
  inline CoinbaseCdpRotationTargets& AddSecrets(CoinbaseCdpSecret value) {
    m_secretsHasBeenSet = true;
    m_secrets.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CoinbaseCdpSecret> m_secrets;
  bool m_secretsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
