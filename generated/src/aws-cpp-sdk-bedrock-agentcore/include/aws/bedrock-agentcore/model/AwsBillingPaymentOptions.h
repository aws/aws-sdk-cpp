/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/DpopJwk.h>

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
 * <p>Optional settings for an AWS Billing payment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AwsBillingPaymentOptions">AWS
 * API Reference</a></p>
 */
class AwsBillingPaymentOptions {
 public:
  AWS_BEDROCKAGENTCORE_API AwsBillingPaymentOptions() = default;
  AWS_BEDROCKAGENTCORE_API AwsBillingPaymentOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AwsBillingPaymentOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The agent's public key for Demonstrating Proof of Possession (DPoP), as
   * described in RFC 9449. If you specify a key, the payment token is bound to it,
   * and the seller can verify that the token is presented by the holder of the
   * matching private key. If you don't specify a key, the payment token isn't bound
   * to a key.</p>
   */
  inline const DpopJwk& GetDpopJwk() const { return m_dpopJwk; }
  inline bool DpopJwkHasBeenSet() const { return m_dpopJwkHasBeenSet; }
  template <typename DpopJwkT = DpopJwk>
  void SetDpopJwk(DpopJwkT&& value) {
    m_dpopJwkHasBeenSet = true;
    m_dpopJwk = std::forward<DpopJwkT>(value);
  }
  template <typename DpopJwkT = DpopJwk>
  AwsBillingPaymentOptions& WithDpopJwk(DpopJwkT&& value) {
    SetDpopJwk(std::forward<DpopJwkT>(value));
    return *this;
  }
  ///@}
 private:
  DpopJwk m_dpopJwk;
  bool m_dpopJwkHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
