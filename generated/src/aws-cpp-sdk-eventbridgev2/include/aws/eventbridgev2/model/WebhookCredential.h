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
 * <p>A new webhook credential. Exactly one variant must be set.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/WebhookCredential">AWS
 * API Reference</a></p>
 */
class WebhookCredential {
 public:
  AWS_EVENTBRIDGEV2_API WebhookCredential() = default;
  AWS_EVENTBRIDGEV2_API WebhookCredential(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API WebhookCredential& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The new token for static token authentication.</p>
   */
  inline const Aws::String& GetStaticTokenSecretValue() const { return m_staticTokenSecretValue; }
  inline bool StaticTokenSecretValueHasBeenSet() const { return m_staticTokenSecretValueHasBeenSet; }
  template <typename StaticTokenSecretValueT = Aws::String>
  void SetStaticTokenSecretValue(StaticTokenSecretValueT&& value) {
    m_staticTokenSecretValueHasBeenSet = true;
    m_staticTokenSecretValue = std::forward<StaticTokenSecretValueT>(value);
  }
  template <typename StaticTokenSecretValueT = Aws::String>
  WebhookCredential& WithStaticTokenSecretValue(StaticTokenSecretValueT&& value) {
    SetStaticTokenSecretValue(std::forward<StaticTokenSecretValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new password for HTTP Basic authentication. The username does not
   * change.</p>
   */
  inline const Aws::String& GetBasicHttpPassword() const { return m_basicHttpPassword; }
  inline bool BasicHttpPasswordHasBeenSet() const { return m_basicHttpPasswordHasBeenSet; }
  template <typename BasicHttpPasswordT = Aws::String>
  void SetBasicHttpPassword(BasicHttpPasswordT&& value) {
    m_basicHttpPasswordHasBeenSet = true;
    m_basicHttpPassword = std::forward<BasicHttpPasswordT>(value);
  }
  template <typename BasicHttpPasswordT = Aws::String>
  WebhookCredential& WithBasicHttpPassword(BasicHttpPasswordT&& value) {
    SetBasicHttpPassword(std::forward<BasicHttpPasswordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new HMAC secret, in the SecretEncoding of the EventSource. With BASE64,
   * EventBridge removes a leading "whsec_". The key must be 16 to 512 bytes; with
   * BASE64 SecretEncoding, this is measured after decoding.</p>
   */
  inline const Aws::String& GetHmacSecretValue() const { return m_hmacSecretValue; }
  inline bool HmacSecretValueHasBeenSet() const { return m_hmacSecretValueHasBeenSet; }
  template <typename HmacSecretValueT = Aws::String>
  void SetHmacSecretValue(HmacSecretValueT&& value) {
    m_hmacSecretValueHasBeenSet = true;
    m_hmacSecretValue = std::forward<HmacSecretValueT>(value);
  }
  template <typename HmacSecretValueT = Aws::String>
  WebhookCredential& WithHmacSecretValue(HmacSecretValueT&& value) {
    SetHmacSecretValue(std::forward<HmacSecretValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_staticTokenSecretValue;

  Aws::String m_basicHttpPassword;

  Aws::String m_hmacSecretValue;
  bool m_staticTokenSecretValueHasBeenSet = false;
  bool m_basicHttpPasswordHasBeenSet = false;
  bool m_hmacSecretValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
