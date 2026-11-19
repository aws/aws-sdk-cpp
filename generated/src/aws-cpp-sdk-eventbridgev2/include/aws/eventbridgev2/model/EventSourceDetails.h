/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/WebhookDetails.h>

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
 * <p>Values EventBridge generated for an EventSource that depend on its type. Only
 * the member for the EventSource's type is set. Returned in responses only. You
 * never supply these values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/EventSourceDetails">AWS
 * API Reference</a></p>
 */
class EventSourceDetails {
 public:
  AWS_EVENTBRIDGEV2_API EventSourceDetails() = default;
  AWS_EVENTBRIDGEV2_API EventSourceDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API EventSourceDetails& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Values generated for a webhook EventSource.</p>
   */
  inline const WebhookDetails& GetWebhookDetails() const { return m_webhookDetails; }
  inline bool WebhookDetailsHasBeenSet() const { return m_webhookDetailsHasBeenSet; }
  template <typename WebhookDetailsT = WebhookDetails>
  void SetWebhookDetails(WebhookDetailsT&& value) {
    m_webhookDetailsHasBeenSet = true;
    m_webhookDetails = std::forward<WebhookDetailsT>(value);
  }
  template <typename WebhookDetailsT = WebhookDetails>
  EventSourceDetails& WithWebhookDetails(WebhookDetailsT&& value) {
    SetWebhookDetails(std::forward<WebhookDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  WebhookDetails m_webhookDetails;
  bool m_webhookDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
