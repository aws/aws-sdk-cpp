/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/NotificationRule.h>
#include <aws/cloudwatchomni/model/Rule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class UpdateAlertRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API UpdateAlertRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAlert"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  UpdateAlertRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alert to update.</p>
   */
  inline const Aws::String& GetAlertId() const { return m_alertId; }
  inline bool AlertIdHasBeenSet() const { return m_alertIdHasBeenSet; }
  template <typename AlertIdT = Aws::String>
  void SetAlertId(AlertIdT&& value) {
    m_alertIdHasBeenSet = true;
    m_alertId = std::forward<AlertIdT>(value);
  }
  template <typename AlertIdT = Aws::String>
  UpdateAlertRequest& WithAlertId(AlertIdT&& value) {
    SetAlertId(std::forward<AlertIdT>(value));
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
  UpdateAlertRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new display name for the alert. Omit to leave the name unchanged
   * (apply-if-present / PATCH). Same constraints as CreateAlert.name; the name is
   * not the alert's identity, so a rename never changes the alertId.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateAlertRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description of the alert. Omit to leave unchanged.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateAlertRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rule that defines how the alert is evaluated. Omit to leave unchanged.
   * Each sub-block is replaced whole when present: {@code query}, {@code condition},
   * {@code evaluation} and {@code noData} are applied only when supplied, and within
   * a supplied block an omitted optional member is cleared to unset (null/absent)
   * rather than preserved from the stored alert or defaulted. See {@link
   * AlertCondition} and {@link AlertEvaluation}.</p>
   */
  inline const Rule& GetRule() const { return m_rule; }
  inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
  template <typename RuleT = Rule>
  void SetRule(RuleT&& value) {
    m_ruleHasBeenSet = true;
    m_rule = std::forward<RuleT>(value);
  }
  template <typename RuleT = Rule>
  UpdateAlertRequest& WithRule(RuleT&& value) {
    SetRule(std::forward<RuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether actions (notifications) are enabled for this alert. Omitted = leave
   * existing value unchanged.</p>
   */
  inline bool GetNotificationsEnabled() const { return m_notificationsEnabled; }
  inline bool NotificationsEnabledHasBeenSet() const { return m_notificationsEnabledHasBeenSet; }
  inline void SetNotificationsEnabled(bool value) {
    m_notificationsEnabledHasBeenSet = true;
    m_notificationsEnabled = value;
  }
  inline UpdateAlertRequest& WithNotificationsEnabled(bool value) {
    SetNotificationsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Replaces the entire notification rule list when present; full-replace, not
   * merge. Omitted = leave existing rules unchanged. An empty list clears all rules
   * (the alert keeps evaluating; only notifications stop).</p>
   */
  inline const Aws::Vector<NotificationRule>& GetNotificationRules() const { return m_notificationRules; }
  inline bool NotificationRulesHasBeenSet() const { return m_notificationRulesHasBeenSet; }
  template <typename NotificationRulesT = Aws::Vector<NotificationRule>>
  void SetNotificationRules(NotificationRulesT&& value) {
    m_notificationRulesHasBeenSet = true;
    m_notificationRules = std::forward<NotificationRulesT>(value);
  }
  template <typename NotificationRulesT = Aws::Vector<NotificationRule>>
  UpdateAlertRequest& WithNotificationRules(NotificationRulesT&& value) {
    SetNotificationRules(std::forward<NotificationRulesT>(value));
    return *this;
  }
  template <typename NotificationRulesT = NotificationRule>
  UpdateAlertRequest& AddNotificationRules(NotificationRulesT&& value) {
    m_notificationRulesHasBeenSet = true;
    m_notificationRules.emplace_back(std::forward<NotificationRulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_alertId;

  Aws::String m_profileId;

  Aws::String m_name;

  Aws::String m_description;

  Rule m_rule;

  bool m_notificationsEnabled{false};

  Aws::Vector<NotificationRule> m_notificationRules;
  bool m_spaceIdHasBeenSet = false;
  bool m_alertIdHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ruleHasBeenSet = false;
  bool m_notificationsEnabledHasBeenSet = false;
  bool m_notificationRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
