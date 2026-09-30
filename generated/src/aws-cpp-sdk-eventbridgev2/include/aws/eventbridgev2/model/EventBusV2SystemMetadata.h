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
 * <p>Customer-controllable system metadata attached to events forwarded to the
 * downstream event bus.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/EventBusV2SystemMetadata">AWS
 * API Reference</a></p>
 */
class EventBusV2SystemMetadata {
 public:
  AWS_EVENTBRIDGEV2_API EventBusV2SystemMetadata() = default;
  AWS_EVENTBRIDGEV2_API EventBusV2SystemMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API EventBusV2SystemMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Event group ID for FIFO ordering on the downstream bus. Accepts a literal or
   * a JSONata expression.</p>
   */
  inline const Aws::String& GetEventGroupId() const { return m_eventGroupId; }
  inline bool EventGroupIdHasBeenSet() const { return m_eventGroupIdHasBeenSet; }
  template <typename EventGroupIdT = Aws::String>
  void SetEventGroupId(EventGroupIdT&& value) {
    m_eventGroupIdHasBeenSet = true;
    m_eventGroupId = std::forward<EventGroupIdT>(value);
  }
  template <typename EventGroupIdT = Aws::String>
  EventBusV2SystemMetadata& WithEventGroupId(EventGroupIdT&& value) {
    SetEventGroupId(std::forward<EventGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Deduplication ID for FIFO deduplication on the downstream bus. Accepts a
   * literal or a JSONata expression.</p>
   */
  inline const Aws::String& GetDeduplicationId() const { return m_deduplicationId; }
  inline bool DeduplicationIdHasBeenSet() const { return m_deduplicationIdHasBeenSet; }
  template <typename DeduplicationIdT = Aws::String>
  void SetDeduplicationId(DeduplicationIdT&& value) {
    m_deduplicationIdHasBeenSet = true;
    m_deduplicationId = std::forward<DeduplicationIdT>(value);
  }
  template <typename DeduplicationIdT = Aws::String>
  EventBusV2SystemMetadata& WithDeduplicationId(DeduplicationIdT&& value) {
    SetDeduplicationId(std::forward<DeduplicationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventGroupId;

  Aws::String m_deduplicationId;
  bool m_eventGroupIdHasBeenSet = false;
  bool m_deduplicationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
