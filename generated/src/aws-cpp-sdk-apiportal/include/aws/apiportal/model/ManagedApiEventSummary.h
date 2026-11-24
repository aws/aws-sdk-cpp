/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/EventStatus.h>
#include <aws/apiportal/model/EventType.h>
#include <aws/apiportal/model/WafApiSecurityEventDetail.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>Summary of a single security event attributed to a managed API. This is the
 * list view; full per-event detail will come from GetManagedApiEvent in
 * future.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ManagedApiEventSummary">AWS
 * API Reference</a></p>
 */
class ManagedApiEventSummary {
 public:
  AWS_APIPORTAL_API ManagedApiEventSummary() = default;
  AWS_APIPORTAL_API ManagedApiEventSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ManagedApiEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Event identifier; row identity and input to GetManagedApiEvent.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  ManagedApiEventSummary& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Always WAF_API_SECURITY today.</p>
   */
  inline EventType GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  inline void SetEventType(EventType value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = value;
  }
  inline ManagedApiEventSummary& WithEventType(EventType value) {
    SetEventType(value);
    return *this;
  }
  ///@}

  ///@{

  inline EventStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EventStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ManagedApiEventSummary& WithStatus(EventStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detail specific to a WAF API-security event; populated when eventType is
   * WAF_API_SECURITY.</p>
   */
  inline const WafApiSecurityEventDetail& GetWafApiSecurityEventDetail() const { return m_wafApiSecurityEventDetail; }
  inline bool WafApiSecurityEventDetailHasBeenSet() const { return m_wafApiSecurityEventDetailHasBeenSet; }
  template <typename WafApiSecurityEventDetailT = WafApiSecurityEventDetail>
  void SetWafApiSecurityEventDetail(WafApiSecurityEventDetailT&& value) {
    m_wafApiSecurityEventDetailHasBeenSet = true;
    m_wafApiSecurityEventDetail = std::forward<WafApiSecurityEventDetailT>(value);
  }
  template <typename WafApiSecurityEventDetailT = WafApiSecurityEventDetail>
  ManagedApiEventSummary& WithWafApiSecurityEventDetail(WafApiSecurityEventDetailT&& value) {
    SetWafApiSecurityEventDetail(std::forward<WafApiSecurityEventDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the event was first observed.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  ManagedApiEventSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the event completed; absent while it is still in progress.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  ManagedApiEventSummary& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the event was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ManagedApiEventSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  EventType m_eventType{EventType::NOT_SET};

  EventStatus m_status{EventStatus::NOT_SET};

  WafApiSecurityEventDetail m_wafApiSecurityEventDetail;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_eventIdHasBeenSet = false;
  bool m_eventTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_wafApiSecurityEventDetailHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
