/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/WebhookBasicHttpAuthConfiguration.h>
#include <aws/eventbridgev2/model/WebhookHmacAuthConfiguration.h>
#include <aws/eventbridgev2/model/WebhookStaticTokenAuthConfiguration.h>

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
 * <p>How the provider authenticates its webhook requests. Exactly one variant must
 * be set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/WebhookAuthConfiguration">AWS
 * API Reference</a></p>
 */
class WebhookAuthConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API WebhookAuthConfiguration() = default;
  AWS_EVENTBRIDGEV2_API WebhookAuthConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API WebhookAuthConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The provider sends a static token in an HTTP header.</p>
   */
  inline const WebhookStaticTokenAuthConfiguration& GetStaticTokenAuthConfiguration() const { return m_staticTokenAuthConfiguration; }
  inline bool StaticTokenAuthConfigurationHasBeenSet() const { return m_staticTokenAuthConfigurationHasBeenSet; }
  template <typename StaticTokenAuthConfigurationT = WebhookStaticTokenAuthConfiguration>
  void SetStaticTokenAuthConfiguration(StaticTokenAuthConfigurationT&& value) {
    m_staticTokenAuthConfigurationHasBeenSet = true;
    m_staticTokenAuthConfiguration = std::forward<StaticTokenAuthConfigurationT>(value);
  }
  template <typename StaticTokenAuthConfigurationT = WebhookStaticTokenAuthConfiguration>
  WebhookAuthConfiguration& WithStaticTokenAuthConfiguration(StaticTokenAuthConfigurationT&& value) {
    SetStaticTokenAuthConfiguration(std::forward<StaticTokenAuthConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider uses HTTP Basic authentication.</p>
   */
  inline const WebhookBasicHttpAuthConfiguration& GetBasicHttpAuthConfiguration() const { return m_basicHttpAuthConfiguration; }
  inline bool BasicHttpAuthConfigurationHasBeenSet() const { return m_basicHttpAuthConfigurationHasBeenSet; }
  template <typename BasicHttpAuthConfigurationT = WebhookBasicHttpAuthConfiguration>
  void SetBasicHttpAuthConfiguration(BasicHttpAuthConfigurationT&& value) {
    m_basicHttpAuthConfigurationHasBeenSet = true;
    m_basicHttpAuthConfiguration = std::forward<BasicHttpAuthConfigurationT>(value);
  }
  template <typename BasicHttpAuthConfigurationT = WebhookBasicHttpAuthConfiguration>
  WebhookAuthConfiguration& WithBasicHttpAuthConfiguration(BasicHttpAuthConfigurationT&& value) {
    SetBasicHttpAuthConfiguration(std::forward<BasicHttpAuthConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider signs each request with an HMAC of the secret.</p>
   */
  inline const WebhookHmacAuthConfiguration& GetHmacAuthConfiguration() const { return m_hmacAuthConfiguration; }
  inline bool HmacAuthConfigurationHasBeenSet() const { return m_hmacAuthConfigurationHasBeenSet; }
  template <typename HmacAuthConfigurationT = WebhookHmacAuthConfiguration>
  void SetHmacAuthConfiguration(HmacAuthConfigurationT&& value) {
    m_hmacAuthConfigurationHasBeenSet = true;
    m_hmacAuthConfiguration = std::forward<HmacAuthConfigurationT>(value);
  }
  template <typename HmacAuthConfigurationT = WebhookHmacAuthConfiguration>
  WebhookAuthConfiguration& WithHmacAuthConfiguration(HmacAuthConfigurationT&& value) {
    SetHmacAuthConfiguration(std::forward<HmacAuthConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  WebhookStaticTokenAuthConfiguration m_staticTokenAuthConfiguration;

  WebhookBasicHttpAuthConfiguration m_basicHttpAuthConfiguration;

  WebhookHmacAuthConfiguration m_hmacAuthConfiguration;
  bool m_staticTokenAuthConfigurationHasBeenSet = false;
  bool m_basicHttpAuthConfigurationHasBeenSet = false;
  bool m_hmacAuthConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
