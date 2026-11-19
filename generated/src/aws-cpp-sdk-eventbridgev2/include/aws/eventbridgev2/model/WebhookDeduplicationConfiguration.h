/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/WebhookDeduplicationType.h>

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
 * <p>Deduplication settings for a webhook EventSource's events.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/WebhookDeduplicationConfiguration">AWS
 * API Reference</a></p>
 */
class WebhookDeduplicationConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API WebhookDeduplicationConfiguration() = default;
  AWS_EVENTBRIDGEV2_API WebhookDeduplicationConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API WebhookDeduplicationConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>How duplicate events are detected.</p>
   */
  inline WebhookDeduplicationType GetDeduplicationType() const { return m_deduplicationType; }
  inline bool DeduplicationTypeHasBeenSet() const { return m_deduplicationTypeHasBeenSet; }
  inline void SetDeduplicationType(WebhookDeduplicationType value) {
    m_deduplicationTypeHasBeenSet = true;
    m_deduplicationType = value;
  }
  inline WebhookDeduplicationConfiguration& WithDeduplicationType(WebhookDeduplicationType value) {
    SetDeduplicationType(value);
    return *this;
  }
  ///@}
 private:
  WebhookDeduplicationType m_deduplicationType{WebhookDeduplicationType::NOT_SET};
  bool m_deduplicationTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
