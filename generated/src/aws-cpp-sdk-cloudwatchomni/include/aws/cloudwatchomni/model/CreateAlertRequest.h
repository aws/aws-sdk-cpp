/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/NotificationRule.h>
#include <aws/cloudwatchomni/model/Rule.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class CreateAlertRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API CreateAlertRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAlert"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique ID of the space to create the alert in.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  CreateAlertRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the access profile the alert uses to evaluate its query and execute
   * notifications. The caller supplies it: there is no managed alert profile, and
   * the service does not pick one on the caller's behalf.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  CreateAlertRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Alert name, for display. Max 256 (the AlarmName budget). Not the alert's
   * identity: the backend mints a separate uuid as the {@link AlertId}, so the name
   * need not be unique within a space and addressing an alert never depends on it.
   * UpdateAlert accepts a new name to rename the alert.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateAlertRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  CreateAlertRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  CreateAlertRequest& WithRule(RuleT&& value) {
    SetRule(std::forward<RuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether actions (notifications) are enabled for this alert. Defaults to true
   * when omitted.</p>
   */
  inline bool GetNotificationsEnabled() const { return m_notificationsEnabled; }
  inline bool NotificationsEnabledHasBeenSet() const { return m_notificationsEnabledHasBeenSet; }
  inline void SetNotificationsEnabled(bool value) {
    m_notificationsEnabledHasBeenSet = true;
    m_notificationsEnabled = value;
  }
  inline CreateAlertRequest& WithNotificationsEnabled(bool value) {
    SetNotificationsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the alert.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateAlertRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateAlertRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The notification rules that determine when and where notifications are
   * sent.</p>
   */
  inline const Aws::Vector<NotificationRule>& GetNotificationRules() const { return m_notificationRules; }
  inline bool NotificationRulesHasBeenSet() const { return m_notificationRulesHasBeenSet; }
  template <typename NotificationRulesT = Aws::Vector<NotificationRule>>
  void SetNotificationRules(NotificationRulesT&& value) {
    m_notificationRulesHasBeenSet = true;
    m_notificationRules = std::forward<NotificationRulesT>(value);
  }
  template <typename NotificationRulesT = Aws::Vector<NotificationRule>>
  CreateAlertRequest& WithNotificationRules(NotificationRulesT&& value) {
    SetNotificationRules(std::forward<NotificationRulesT>(value));
    return *this;
  }
  template <typename NotificationRulesT = NotificationRule>
  CreateAlertRequest& AddNotificationRules(NotificationRulesT&& value) {
    m_notificationRulesHasBeenSet = true;
    m_notificationRules.emplace_back(std::forward<NotificationRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for safe retries. Retrying with the same token within the
   * idempotency window returns the original alert instead of creating a
   * duplicate.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAlertRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_profileId;

  Aws::String m_name;

  Aws::String m_description;

  Rule m_rule;

  bool m_notificationsEnabled{false};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::Vector<NotificationRule> m_notificationRules;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_spaceIdHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ruleHasBeenSet = false;
  bool m_notificationsEnabledHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_notificationRulesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
