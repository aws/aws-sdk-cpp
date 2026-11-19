/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
 * <p>The output of an AWS Billing x402 payment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AwsBillingX402PaymentOutput">AWS
 * API Reference</a></p>
 */
class AwsBillingX402PaymentOutput {
 public:
  AWS_BEDROCKAGENTCORE_API AwsBillingX402PaymentOutput() = default;
  AWS_BEDROCKAGENTCORE_API AwsBillingX402PaymentOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AwsBillingX402PaymentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The x402 protocol version. This is the same value as the <code>version</code>
   * in the request.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  AwsBillingX402PaymentOutput& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment token, a signed JSON Web Token (JWT). Include it when you retry
   * your request to the seller. Treat the payment token as a credential: don't log
   * or share it.</p>
   */
  inline const Aws::String& GetPaymentToken() const { return m_paymentToken; }
  inline bool PaymentTokenHasBeenSet() const { return m_paymentTokenHasBeenSet; }
  template <typename PaymentTokenT = Aws::String>
  void SetPaymentToken(PaymentTokenT&& value) {
    m_paymentTokenHasBeenSet = true;
    m_paymentToken = std::forward<PaymentTokenT>(value);
  }
  template <typename PaymentTokenT = Aws::String>
  AwsBillingX402PaymentOutput& WithPaymentToken(PaymentTokenT&& value) {
    SetPaymentToken(std::forward<PaymentTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  Aws::String m_paymentToken;
  bool m_versionHasBeenSet = false;
  bool m_paymentTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
