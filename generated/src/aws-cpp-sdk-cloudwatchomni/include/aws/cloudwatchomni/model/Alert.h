/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AlertStateInfo.h>
#include <aws/cloudwatchomni/model/NotificationRule.h>
#include <aws/cloudwatchomni/model/NotificationStatus.h>
#include <aws/cloudwatchomni/model/Rule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Full alert entity, returned by both CreateAlert and GetAlert. A create and a
 * read of the same alert describe it identically except for {@code state}, which
 * only the read paths populate. UpdateAlert returns an empty
 * response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/Alert">AWS
 * API Reference</a></p>
 */
class Alert {
 public:
  AWS_CLOUDWATCHOMNI_API Alert() = default;
  AWS_CLOUDWATCHOMNI_API Alert(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API Alert& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  Alert& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stable alert identifier (see {@link AlertId}), minted on create and
   * immutable across updates. Use it (not {@code name}) to address the alert on
   * GetAlert/UpdateAlert/DeleteAlert; it is also the ARN's resource id.</p>
   */
  inline const Aws::String& GetAlertId() const { return m_alertId; }
  inline bool AlertIdHasBeenSet() const { return m_alertIdHasBeenSet; }
  template <typename AlertIdT = Aws::String>
  void SetAlertId(AlertIdT&& value) {
    m_alertIdHasBeenSet = true;
    m_alertId = std::forward<AlertIdT>(value);
  }
  template <typename AlertIdT = Aws::String>
  Alert& WithAlertId(AlertIdT&& value) {
    SetAlertId(std::forward<AlertIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description of the alert.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Alert& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID that owns the alert.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  Alert& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
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
  Alert& WithSpaceId(SpaceIdT&& value) {
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
  Alert& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rule that defines how the alert is evaluated.</p>
   */
  inline const Rule& GetRule() const { return m_rule; }
  inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
  template <typename RuleT = Rule>
  void SetRule(RuleT&& value) {
    m_ruleHasBeenSet = true;
    m_rule = std::forward<RuleT>(value);
  }
  template <typename RuleT = Rule>
  Alert& WithRule(RuleT&& value) {
    SetRule(std::forward<RuleT>(value));
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
  inline Alert& WithNotificationStatus(NotificationStatus value) {
    SetNotificationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Live evaluation state (read-only, system-managed). Populated by GetAlert.
   * ListAlerts reports state on <code>AlertSummary</code> instead, where it stays
   * required.</p> <p>Absent on CreateAlert: a newly created alert has never been
   * evaluated, so any state reported there would be a default rather than an
   * observation. Call GetAlert for live state. Not @required for that reason —
   * GetAlert always populates it.</p> <p><code>contributorSummary</code> is nested
   * inside this member, so it too is absent on CreateAlert.</p>
   */
  inline const AlertStateInfo& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = AlertStateInfo>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = AlertStateInfo>
  Alert& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The notification rules for the alert.</p>
   */
  inline const Aws::Vector<NotificationRule>& GetNotificationRules() const { return m_notificationRules; }
  inline bool NotificationRulesHasBeenSet() const { return m_notificationRulesHasBeenSet; }
  template <typename NotificationRulesT = Aws::Vector<NotificationRule>>
  void SetNotificationRules(NotificationRulesT&& value) {
    m_notificationRulesHasBeenSet = true;
    m_notificationRules = std::forward<NotificationRulesT>(value);
  }
  template <typename NotificationRulesT = Aws::Vector<NotificationRule>>
  Alert& WithNotificationRules(NotificationRulesT&& value) {
    SetNotificationRules(std::forward<NotificationRulesT>(value));
    return *this;
  }
  template <typename NotificationRulesT = NotificationRule>
  Alert& AddNotificationRules(NotificationRulesT&& value) {
    m_notificationRulesHasBeenSet = true;
    m_notificationRules.emplace_back(std::forward<NotificationRulesT>(value));
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
  Alert& WithCreatedAt(CreatedAtT&& value) {
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
  Alert& WithUpdatedAt(UpdatedAtT&& value) {
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
  Alert& WithAlertArn(AlertArnT&& value) {
    SetAlertArn(std::forward<AlertArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_alertId;

  Aws::String m_description;

  Aws::String m_accountId;

  Aws::String m_spaceId;

  Aws::String m_profileId;

  Rule m_rule;

  NotificationStatus m_notificationStatus{NotificationStatus::NOT_SET};

  AlertStateInfo m_state;

  Aws::Vector<NotificationRule> m_notificationRules;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_alertArn;
  bool m_nameHasBeenSet = false;
  bool m_alertIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_spaceIdHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
  bool m_ruleHasBeenSet = false;
  bool m_notificationStatusHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_notificationRulesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_alertArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
