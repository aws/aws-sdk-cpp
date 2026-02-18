/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ConfigurableNotificationPriority.h>
#include <aws/connect/model/LocaleCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class CreateNotificationRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateNotificationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateNotification"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  CreateNotificationRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the notification should expire and no longer be displayed
   * to users. If not specified, defaults to one week from creation.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  CreateNotificationRequest& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of Amazon Resource Names (ARNs) identifying the recipients of the
   * notification. Can include user ARNs or instance ARNs to target all users in an
   * instance. Maximum of 200 recipients.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRecipients() const { return m_recipients; }
  inline bool RecipientsHasBeenSet() const { return m_recipientsHasBeenSet; }
  template <typename RecipientsT = Aws::Vector<Aws::String>>
  void SetRecipients(RecipientsT&& value) {
    m_recipientsHasBeenSet = true;
    m_recipients = std::forward<RecipientsT>(value);
  }
  template <typename RecipientsT = Aws::Vector<Aws::String>>
  CreateNotificationRequest& WithRecipients(RecipientsT&& value) {
    SetRecipients(std::forward<RecipientsT>(value));
    return *this;
  }
  template <typename RecipientsT = Aws::String>
  CreateNotificationRequest& AddRecipients(RecipientsT&& value) {
    m_recipientsHasBeenSet = true;
    m_recipients.emplace_back(std::forward<RecipientsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority level of the notification. Valid values are HIGH and LOW. High
   * priority notifications are displayed above low priority notifications.</p>
   */
  inline ConfigurableNotificationPriority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(ConfigurableNotificationPriority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline CreateNotificationRequest& WithPriority(ConfigurableNotificationPriority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The localized content of the notification. A map where keys are locale codes
   * and values are the notification text in that locale. Content supports links.
   * Maximum 250 characters per locale.</p>
   */
  inline const Aws::Map<LocaleCode, Aws::String>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Map<LocaleCode, Aws::String>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Map<LocaleCode, Aws::String>>
  CreateNotificationRequest& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  inline CreateNotificationRequest& AddContent(LocaleCode key, Aws::String value) {
    m_contentHasBeenSet = true;
    m_content.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource. For
   * example, <code>{ "Tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateNotificationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateNotificationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPredefinedNotificationId() const { return m_predefinedNotificationId; }
  inline bool PredefinedNotificationIdHasBeenSet() const { return m_predefinedNotificationIdHasBeenSet; }
  template <typename PredefinedNotificationIdT = Aws::String>
  void SetPredefinedNotificationId(PredefinedNotificationIdT&& value) {
    m_predefinedNotificationIdHasBeenSet = true;
    m_predefinedNotificationId = std::forward<PredefinedNotificationIdT>(value);
  }
  template <typename PredefinedNotificationIdT = Aws::String>
  CreateNotificationRequest& WithPredefinedNotificationId(PredefinedNotificationIdT&& value) {
    SetPredefinedNotificationId(std::forward<PredefinedNotificationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field. For more information about idempotency, see <a
   * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateNotificationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::Utils::DateTime m_expiresAt{};

  Aws::Vector<Aws::String> m_recipients;

  ConfigurableNotificationPriority m_priority{ConfigurableNotificationPriority::NOT_SET};

  Aws::Map<LocaleCode, Aws::String> m_content;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_predefinedNotificationId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_instanceIdHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_recipientsHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_predefinedNotificationIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
