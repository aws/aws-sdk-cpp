/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/SubscriptionEvent.h>
#include <aws/customer-profiles/model/SubscriptionEventType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Represents a single segment membership event. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/SubscriptionEventItem">AWS
 * API Reference</a></p>
 */
class SubscriptionEventItem {
 public:
  AWS_CUSTOMERPROFILES_API SubscriptionEventItem() = default;
  AWS_CUSTOMERPROFILES_API SubscriptionEventItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API SubscriptionEventItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of a customer profile.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  SubscriptionEventItem& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the membership change was detected. </p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  SubscriptionEventItem& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of event that triggered the membership change. The following are
   * valid values: </p> <ul> <li> <p> <b>LIVE</b>: Real-time event triggered by a
   * profile or calculated attribute change (Classic segments only). </p> </li> <li>
   * <p> <b>SCHEDULE</b>: Event generated during a scheduled execution. </p> </li>
   * </ul>
   */
  inline SubscriptionEventType GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  inline void SetEventType(SubscriptionEventType value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = value;
  }
  inline SubscriptionEventItem& WithEventType(SubscriptionEventType value) {
    SetEventType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the profile joined or left the segment. The following are valid
   * values: </p> <ul> <li> <p> <b>JOINED</b>: The profile joined the segment. </p>
   * </li> <li> <p> <b>LEFT</b>: The profile left the segment. </p> </li> </ul>
   */
  inline SubscriptionEvent GetEvent() const { return m_event; }
  inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
  inline void SetEvent(SubscriptionEvent value) {
    m_eventHasBeenSet = true;
    m_event = value;
  }
  inline SubscriptionEventItem& WithEvent(SubscriptionEvent value) {
    SetEvent(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  Aws::Utils::DateTime m_updatedAt{};

  SubscriptionEventType m_eventType{SubscriptionEventType::NOT_SET};

  SubscriptionEvent m_event{SubscriptionEvent::NOT_SET};
  bool m_profileIdHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_eventTypeHasBeenSet = false;
  bool m_eventHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
