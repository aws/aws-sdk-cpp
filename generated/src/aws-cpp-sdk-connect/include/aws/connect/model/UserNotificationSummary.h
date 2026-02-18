/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/LocaleCode.h>
#include <aws/connect/model/NotificationPriority.h>
#include <aws/connect/model/NotificationSource.h>
#include <aws/connect/model/NotificationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Summary information about a notification for a specific user, including the
 * user's read status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserNotificationSummary">AWS
 * API Reference</a></p>
 */
class UserNotificationSummary {
 public:
  AWS_CONNECT_API UserNotificationSummary() = default;
  AWS_CONNECT_API UserNotificationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API UserNotificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the notification.</p>
   */
  inline const Aws::String& GetNotificationId() const { return m_notificationId; }
  inline bool NotificationIdHasBeenSet() const { return m_notificationIdHasBeenSet; }
  template <typename NotificationIdT = Aws::String>
  void SetNotificationId(NotificationIdT&& value) {
    m_notificationIdHasBeenSet = true;
    m_notificationId = std::forward<NotificationIdT>(value);
  }
  template <typename NotificationIdT = Aws::String>
  UserNotificationSummary& WithNotificationId(NotificationIdT&& value) {
    SetNotificationId(std::forward<NotificationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the notification for this user. Valid values are READ, UNREAD,
   * and HIDDEN.</p>
   */
  inline NotificationStatus GetNotificationStatus() const { return m_notificationStatus; }
  inline bool NotificationStatusHasBeenSet() const { return m_notificationStatusHasBeenSet; }
  inline void SetNotificationStatus(NotificationStatus value) {
    m_notificationStatusHasBeenSet = true;
    m_notificationStatus = value;
  }
  inline UserNotificationSummary& WithNotificationStatus(NotificationStatus value) {
    SetNotificationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  UserNotificationSummary& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the recipient user.</p>
   */
  inline const Aws::String& GetRecipientId() const { return m_recipientId; }
  inline bool RecipientIdHasBeenSet() const { return m_recipientIdHasBeenSet; }
  template <typename RecipientIdT = Aws::String>
  void SetRecipientId(RecipientIdT&& value) {
    m_recipientIdHasBeenSet = true;
    m_recipientId = std::forward<RecipientIdT>(value);
  }
  template <typename RecipientIdT = Aws::String>
  UserNotificationSummary& WithRecipientId(RecipientIdT&& value) {
    SetRecipientId(std::forward<RecipientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The localized content of the notification.</p>
   */
  inline const Aws::Map<LocaleCode, Aws::String>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Map<LocaleCode, Aws::String>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Map<LocaleCode, Aws::String>>
  UserNotificationSummary& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  inline UserNotificationSummary& AddContent(LocaleCode key, Aws::String value) {
    m_contentHasBeenSet = true;
    m_content.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority level of the notification.</p>
   */
  inline NotificationPriority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(NotificationPriority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline UserNotificationSummary& WithPriority(NotificationPriority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source that created the notification. Valid values are CUSTOMER, RULES,
   * and SYSTEM.</p>
   */
  inline NotificationSource GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(NotificationSource value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline UserNotificationSummary& WithSource(NotificationSource value) {
    SetSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the notification was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UserNotificationSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the notification expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  UserNotificationSummary& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_notificationId;

  NotificationStatus m_notificationStatus{NotificationStatus::NOT_SET};

  Aws::String m_instanceId;

  Aws::String m_recipientId;

  Aws::Map<LocaleCode, Aws::String> m_content;

  NotificationPriority m_priority{NotificationPriority::NOT_SET};

  NotificationSource m_source{NotificationSource::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_expiresAt{};
  bool m_notificationIdHasBeenSet = false;
  bool m_notificationStatusHasBeenSet = false;
  bool m_instanceIdHasBeenSet = false;
  bool m_recipientIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
