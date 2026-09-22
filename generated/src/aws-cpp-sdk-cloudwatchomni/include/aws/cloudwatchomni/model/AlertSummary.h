/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AlertStateInfo.h>
#include <aws/cloudwatchomni/model/NotificationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Summary representation of an alert used in list responses.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/AlertSummary">AWS
 * API Reference</a></p>
 */
class AlertSummary {
 public:
  AWS_CLOUDWATCHOMNI_API AlertSummary() = default;
  AWS_CLOUDWATCHOMNI_API AlertSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API AlertSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the alert.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AlertSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stable alert identifier (see {@link Alert#alertId}). Use it to address
   * the alert; it is also the ARN's resource id.</p>
   */
  inline const Aws::String& GetAlertId() const { return m_alertId; }
  inline bool AlertIdHasBeenSet() const { return m_alertIdHasBeenSet; }
  template <typename AlertIdT = Aws::String>
  void SetAlertId(AlertIdT&& value) {
    m_alertIdHasBeenSet = true;
    m_alertId = std::forward<AlertIdT>(value);
  }
  template <typename AlertIdT = Aws::String>
  AlertSummary& WithAlertId(AlertIdT&& value) {
    SetAlertId(std::forward<AlertIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the space the alert belongs to.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  AlertSummary& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the access profile associated with the alert.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  AlertSummary& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether notifications are enabled.</p>
   */
  inline NotificationStatus GetNotificationStatus() const { return m_notificationStatus; }
  inline bool NotificationStatusHasBeenSet() const { return m_notificationStatusHasBeenSet; }
  inline void SetNotificationStatus(NotificationStatus value) {
    m_notificationStatusHasBeenSet = true;
    m_notificationStatus = value;
  }
  inline AlertSummary& WithNotificationStatus(NotificationStatus value) {
    SetNotificationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Live evaluation state (read-only, system-managed).</p>
   */
  inline const AlertStateInfo& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = AlertStateInfo>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = AlertStateInfo>
  AlertSummary& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the alert was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AlertSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the alert was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AlertSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the alert.</p>
   */
  inline const Aws::String& GetAlertArn() const { return m_alertArn; }
  inline bool AlertArnHasBeenSet() const { return m_alertArnHasBeenSet; }
  template <typename AlertArnT = Aws::String>
  void SetAlertArn(AlertArnT&& value) {
    m_alertArnHasBeenSet = true;
    m_alertArn = std::forward<AlertArnT>(value);
  }
  template <typename AlertArnT = Aws::String>
  AlertSummary& WithAlertArn(AlertArnT&& value) {
    SetAlertArn(std::forward<AlertArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_alertId;

  Aws::String m_spaceId;

  Aws::String m_profileId;

  NotificationStatus m_notificationStatus{NotificationStatus::NOT_SET};

  AlertStateInfo m_state;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_alertArn;
  bool m_nameHasBeenSet = false;
  bool m_alertIdHasBeenSet = false;
  bool m_spaceIdHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
  bool m_notificationStatusHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_alertArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
