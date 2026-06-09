/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EmbeddedCryptoWallet.h>

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
 * <p>Details specific to the instrument type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/PaymentInstrumentDetails">AWS
 * API Reference</a></p>
 */
class PaymentInstrumentDetails {
 public:
  AWS_BEDROCKAGENTCORE_API PaymentInstrumentDetails() = default;
  AWS_BEDROCKAGENTCORE_API PaymentInstrumentDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API PaymentInstrumentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Embedded crypto wallet managed directly by end user.</p>
   */
  inline const EmbeddedCryptoWallet& GetEmbeddedCryptoWallet() const { return m_embeddedCryptoWallet; }
  inline bool EmbeddedCryptoWalletHasBeenSet() const { return m_embeddedCryptoWalletHasBeenSet; }
  template <typename EmbeddedCryptoWalletT = EmbeddedCryptoWallet>
  void SetEmbeddedCryptoWallet(EmbeddedCryptoWalletT&& value) {
    m_embeddedCryptoWalletHasBeenSet = true;
    m_embeddedCryptoWallet = std::forward<EmbeddedCryptoWalletT>(value);
  }
  template <typename EmbeddedCryptoWalletT = EmbeddedCryptoWallet>
  PaymentInstrumentDetails& WithEmbeddedCryptoWallet(EmbeddedCryptoWalletT&& value) {
    SetEmbeddedCryptoWallet(std::forward<EmbeddedCryptoWalletT>(value));
    return *this;
  }
  ///@}
 private:
  EmbeddedCryptoWallet m_embeddedCryptoWallet;
  bool m_embeddedCryptoWalletHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
