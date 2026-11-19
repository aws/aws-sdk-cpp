/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>The provider sends the secret as the value of an HTTP header.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/WebhookStaticTokenAuthConfiguration">AWS
 * API Reference</a></p>
 */
class WebhookStaticTokenAuthConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API WebhookStaticTokenAuthConfiguration() = default;
  AWS_EVENTBRIDGEV2_API WebhookStaticTokenAuthConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API WebhookStaticTokenAuthConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the header that carries the secret, for example X-Webhook-Secret.
   * Reserved names are rejected: the names EventBridge's edge writes, such as Host
   * and the X-Forwarded-* family, and the hop-by-hop and framing names an HTTP
   * intermediary may rewrite, such as Connection and Content-Length. Authorization
   * is allowed.</p>
   */
  inline const Aws::String& GetTokenHttpHeader() const { return m_tokenHttpHeader; }
  inline bool TokenHttpHeaderHasBeenSet() const { return m_tokenHttpHeaderHasBeenSet; }
  template <typename TokenHttpHeaderT = Aws::String>
  void SetTokenHttpHeader(TokenHttpHeaderT&& value) {
    m_tokenHttpHeaderHasBeenSet = true;
    m_tokenHttpHeader = std::forward<TokenHttpHeaderT>(value);
  }
  template <typename TokenHttpHeaderT = Aws::String>
  WebhookStaticTokenAuthConfiguration& WithTokenHttpHeader(TokenHttpHeaderT&& value) {
    SetTokenHttpHeader(std::forward<TokenHttpHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token the provider sends in the header. If you omit it, EventBridge
   * generates one. EventBridge stores the token only in AWS Secrets Manager and
   * never returns it, including from DescribeEventSource. EventBridge compares it
   * against the entire header value, so a provider that sends Authorization: Bearer
   * &lt;token&gt; needs SecretValue to include the "Bearer " prefix.</p>
   */
  inline const Aws::String& GetSecretValue() const { return m_secretValue; }
  inline bool SecretValueHasBeenSet() const { return m_secretValueHasBeenSet; }
  template <typename SecretValueT = Aws::String>
  void SetSecretValue(SecretValueT&& value) {
    m_secretValueHasBeenSet = true;
    m_secretValue = std::forward<SecretValueT>(value);
  }
  template <typename SecretValueT = Aws::String>
  WebhookStaticTokenAuthConfiguration& WithSecretValue(SecretValueT&& value) {
    SetSecretValue(std::forward<SecretValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tokenHttpHeader;

  Aws::String m_secretValue;
  bool m_tokenHttpHeaderHasBeenSet = false;
  bool m_secretValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
