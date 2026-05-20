/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CryptoX402PaymentOutput.h>

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
 * <p>The payment output details, which vary by payment type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/PaymentOutput">AWS
 * API Reference</a></p>
 */
class PaymentOutput {
 public:
  AWS_BEDROCKAGENTCORE_API PaymentOutput() = default;
  AWS_BEDROCKAGENTCORE_API PaymentOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API PaymentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Output from a crypto X402 payment.</p>
   */
  inline const CryptoX402PaymentOutput& GetCryptoX402() const { return m_cryptoX402; }
  inline bool CryptoX402HasBeenSet() const { return m_cryptoX402HasBeenSet; }
  template <typename CryptoX402T = CryptoX402PaymentOutput>
  void SetCryptoX402(CryptoX402T&& value) {
    m_cryptoX402HasBeenSet = true;
    m_cryptoX402 = std::forward<CryptoX402T>(value);
  }
  template <typename CryptoX402T = CryptoX402PaymentOutput>
  PaymentOutput& WithCryptoX402(CryptoX402T&& value) {
    SetCryptoX402(std::forward<CryptoX402T>(value));
    return *this;
  }
  ///@}
 private:
  CryptoX402PaymentOutput m_cryptoX402;
  bool m_cryptoX402HasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
