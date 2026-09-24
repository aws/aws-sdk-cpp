/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/EventSourceState.h>
#include <aws/eventbridgev2/model/EventSourceType.h>

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
 * <p>Summary of an EventSource, as returned by ListEventSources.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/EventSourceSummary">AWS
 * API Reference</a></p>
 */
class EventSourceSummary {
 public:
  AWS_EVENTBRIDGEV2_API EventSourceSummary() = default;
  AWS_EVENTBRIDGEV2_API EventSourceSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API EventSourceSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
  inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }
  template <typename EventSourceArnT = Aws::String>
  void SetEventSourceArn(EventSourceArnT&& value) {
    m_eventSourceArnHasBeenSet = true;
    m_eventSourceArn = std::forward<EventSourceArnT>(value);
  }
  template <typename EventSourceArnT = Aws::String>
  EventSourceSummary& WithEventSourceArn(EventSourceArnT&& value) {
    SetEventSourceArn(std::forward<EventSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  EventSourceSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
  inline bool EventBusArnHasBeenSet() const { return m_eventBusArnHasBeenSet; }
  template <typename EventBusArnT = Aws::String>
  void SetEventBusArn(EventBusArnT&& value) {
    m_eventBusArnHasBeenSet = true;
    m_eventBusArn = std::forward<EventBusArnT>(value);
  }
  template <typename EventBusArnT = Aws::String>
  EventSourceSummary& WithEventBusArn(EventBusArnT&& value) {
    SetEventBusArn(std::forward<EventBusArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline EventSourceType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EventSourceType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EventSourceSummary& WithType(EventSourceType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{

  inline EventSourceState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(EventSourceState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline EventSourceSummary& WithState(EventSourceState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>True when the bus owner has withdrawn this EventSource. Present only when
   * true, so a bus owner listing EventSources sees at a glance which ones they
   * revoked. See DescribeEventSourceResponse$Revoked.</p>
   */
  inline bool GetRevoked() const { return m_revoked; }
  inline bool RevokedHasBeenSet() const { return m_revokedHasBeenSet; }
  inline void SetRevoked(bool value) {
    m_revokedHasBeenSet = true;
    m_revoked = value;
  }
  inline EventSourceSummary& WithRevoked(bool value) {
    SetRevoked(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the EventSource was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  EventSourceSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the EventSource was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  EventSourceSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetEventSourceAccountId() const { return m_eventSourceAccountId; }
  inline bool EventSourceAccountIdHasBeenSet() const { return m_eventSourceAccountIdHasBeenSet; }
  template <typename EventSourceAccountIdT = Aws::String>
  void SetEventSourceAccountId(EventSourceAccountIdT&& value) {
    m_eventSourceAccountIdHasBeenSet = true;
    m_eventSourceAccountId = std::forward<EventSourceAccountIdT>(value);
  }
  template <typename EventSourceAccountIdT = Aws::String>
  EventSourceSummary& WithEventSourceAccountId(EventSourceAccountIdT&& value) {
    SetEventSourceAccountId(std::forward<EventSourceAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventSourceArn;

  Aws::String m_name;

  Aws::String m_eventBusArn;

  EventSourceType m_type{EventSourceType::NOT_SET};

  EventSourceState m_state{EventSourceState::NOT_SET};

  bool m_revoked{false};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_eventSourceAccountId;
  bool m_eventSourceArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_eventBusArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_revokedHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_eventSourceAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
