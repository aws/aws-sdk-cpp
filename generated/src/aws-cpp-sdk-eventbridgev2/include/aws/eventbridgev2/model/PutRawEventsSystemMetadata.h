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
 * <p>System metadata for PutRawEvents entries. ContentType is required because
 * PutRawEvents supports arbitrary binary formats.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/PutRawEventsSystemMetadata">AWS
 * API Reference</a></p>
 */
class PutRawEventsSystemMetadata {
 public:
  AWS_EVENTBRIDGEV2_API PutRawEventsSystemMetadata() = default;
  AWS_EVENTBRIDGEV2_API PutRawEventsSystemMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API PutRawEventsSystemMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Content type of the event data (e.g.,
   * &quot;application/cloudevents+json&quot;).</p>
   */
  inline const Aws::String& GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  template <typename ContentTypeT = Aws::String>
  void SetContentType(ContentTypeT&& value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = std::forward<ContentTypeT>(value);
  }
  template <typename ContentTypeT = Aws::String>
  PutRawEventsSystemMetadata& WithContentType(ContentTypeT&& value) {
    SetContentType(std::forward<ContentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Deduplication ID for FIFO deduplication.</p>
   */
  inline const Aws::String& GetDeduplicationId() const { return m_deduplicationId; }
  inline bool DeduplicationIdHasBeenSet() const { return m_deduplicationIdHasBeenSet; }
  template <typename DeduplicationIdT = Aws::String>
  void SetDeduplicationId(DeduplicationIdT&& value) {
    m_deduplicationIdHasBeenSet = true;
    m_deduplicationId = std::forward<DeduplicationIdT>(value);
  }
  template <typename DeduplicationIdT = Aws::String>
  PutRawEventsSystemMetadata& WithDeduplicationId(DeduplicationIdT&& value) {
    SetDeduplicationId(std::forward<DeduplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Event group ID for FIFO ordering.</p>
   */
  inline const Aws::String& GetEventGroupId() const { return m_eventGroupId; }
  inline bool EventGroupIdHasBeenSet() const { return m_eventGroupIdHasBeenSet; }
  template <typename EventGroupIdT = Aws::String>
  void SetEventGroupId(EventGroupIdT&& value) {
    m_eventGroupIdHasBeenSet = true;
    m_eventGroupId = std::forward<EventGroupIdT>(value);
  }
  template <typename EventGroupIdT = Aws::String>
  PutRawEventsSystemMetadata& WithEventGroupId(EventGroupIdT&& value) {
    SetEventGroupId(std::forward<EventGroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contentType;

  Aws::String m_deduplicationId;

  Aws::String m_eventGroupId;
  bool m_contentTypeHasBeenSet = false;
  bool m_deduplicationIdHasBeenSet = false;
  bool m_eventGroupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
