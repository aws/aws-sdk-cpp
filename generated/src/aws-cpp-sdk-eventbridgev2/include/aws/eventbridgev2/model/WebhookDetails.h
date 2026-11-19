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
 * <p>Values EventBridge generated for a webhook EventSource.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/WebhookDetails">AWS
 * API Reference</a></p>
 */
class WebhookDetails {
 public:
  AWS_EVENTBRIDGEV2_API WebhookDetails() = default;
  AWS_EVENTBRIDGEV2_API WebhookDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API WebhookDetails& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The HTTPS URL to configure in the provider. The URL doesn't change for the
   * life of the EventSource.</p>
   */
  inline const Aws::String& GetWebhookUrl() const { return m_webhookUrl; }
  inline bool WebhookUrlHasBeenSet() const { return m_webhookUrlHasBeenSet; }
  template <typename WebhookUrlT = Aws::String>
  void SetWebhookUrl(WebhookUrlT&& value) {
    m_webhookUrlHasBeenSet = true;
    m_webhookUrl = std::forward<WebhookUrlT>(value);
  }
  template <typename WebhookUrlT = Aws::String>
  WebhookDetails& WithWebhookUrl(WebhookUrlT&& value) {
    SetWebhookUrl(std::forward<WebhookUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the AWS Secrets Manager secret, in your account, that holds the
   * secret.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  WebhookDetails& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_webhookUrl;

  Aws::String m_secretArn;
  bool m_webhookUrlHasBeenSet = false;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
