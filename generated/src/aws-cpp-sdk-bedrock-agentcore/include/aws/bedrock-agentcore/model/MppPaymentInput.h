/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Contains the payment challenge from a 402 Payment Required response. Forward
 * the raw <code>WWW-Authenticate: Payment</code> header value verbatim. In
 * response, you receive a payment credential that satisfies the challenge. Provide
 * exactly one challenge per request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MppPaymentInput">AWS
 * API Reference</a></p>
 */
class MppPaymentInput {
 public:
  AWS_BEDROCKAGENTCORE_API MppPaymentInput() = default;
  AWS_BEDROCKAGENTCORE_API MppPaymentInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MppPaymentInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The MPP protocol version, for example "1" or "2".</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  MppPaymentInput& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The raw <code>WWW-Authenticate: Payment</code> header value from the 402
   * response, passed verbatim. Provide exactly one entry. The service uses this
   * value to generate the payment credential.</p>
   */
  inline const Aws::Vector<Aws::String>& GetWwwAuthenticateHeaders() const { return m_wwwAuthenticateHeaders; }
  inline bool WwwAuthenticateHeadersHasBeenSet() const { return m_wwwAuthenticateHeadersHasBeenSet; }
  template <typename WwwAuthenticateHeadersT = Aws::Vector<Aws::String>>
  void SetWwwAuthenticateHeaders(WwwAuthenticateHeadersT&& value) {
    m_wwwAuthenticateHeadersHasBeenSet = true;
    m_wwwAuthenticateHeaders = std::forward<WwwAuthenticateHeadersT>(value);
  }
  template <typename WwwAuthenticateHeadersT = Aws::Vector<Aws::String>>
  MppPaymentInput& WithWwwAuthenticateHeaders(WwwAuthenticateHeadersT&& value) {
    SetWwwAuthenticateHeaders(std::forward<WwwAuthenticateHeadersT>(value));
    return *this;
  }
  template <typename WwwAuthenticateHeadersT = Aws::String>
  MppPaymentInput& AddWwwAuthenticateHeaders(WwwAuthenticateHeadersT&& value) {
    m_wwwAuthenticateHeadersHasBeenSet = true;
    m_wwwAuthenticateHeaders.emplace_back(std::forward<WwwAuthenticateHeadersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Authorizes the service to sign a payment whose blockchain network (gas) fees
   * are charged to your wallet, on top of the payment amount.</p> <p>The challenge
   * indicates who sponsors the network fees. When the challenge does not sponsor
   * them, the service signs the payment only if this field is <code>true</code>.
   * Otherwise it returns a validation error, so you can decide whether to pay the
   * fees or obtain a challenge that sponsors them.</p> <p>Optional. When omitted or
   * <code>false</code>, you decline to pay network fees. This field has no effect on
   * challenges that already sponsor the fees.</p>
   */
  inline bool GetBuyerPaysGasFees() const { return m_buyerPaysGasFees; }
  inline bool BuyerPaysGasFeesHasBeenSet() const { return m_buyerPaysGasFeesHasBeenSet; }
  inline void SetBuyerPaysGasFees(bool value) {
    m_buyerPaysGasFeesHasBeenSet = true;
    m_buyerPaysGasFees = value;
  }
  inline MppPaymentInput& WithBuyerPaysGasFees(bool value) {
    SetBuyerPaysGasFees(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  Aws::Vector<Aws::String> m_wwwAuthenticateHeaders;

  bool m_buyerPaysGasFees{false};
  bool m_versionHasBeenSet = false;
  bool m_wwwAuthenticateHeadersHasBeenSet = false;
  bool m_buyerPaysGasFeesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
