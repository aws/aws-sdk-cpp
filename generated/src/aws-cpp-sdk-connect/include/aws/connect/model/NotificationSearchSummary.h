/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/LocaleCode.h>
#include <aws/connect/model/NotificationPriority.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Summary information about a notification returned from a search
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/NotificationSearchSummary">AWS
 * API Reference</a></p>
 */
class NotificationSearchSummary {
 public:
  AWS_CONNECT_API NotificationSearchSummary() = default;
  AWS_CONNECT_API NotificationSearchSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API NotificationSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the notification.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  NotificationSearchSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the notification.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  NotificationSearchSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
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
  NotificationSearchSummary& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
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
  NotificationSearchSummary& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  inline NotificationSearchSummary& AddContent(LocaleCode key, Aws::String value) {
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
  inline NotificationSearchSummary& WithPriority(NotificationPriority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of recipient Amazon Resource Names (ARNs).</p>
   */
  inline const Aws::Vector<Aws::String>& GetRecipients() const { return m_recipients; }
  inline bool RecipientsHasBeenSet() const { return m_recipientsHasBeenSet; }
  template <typename RecipientsT = Aws::Vector<Aws::String>>
  void SetRecipients(RecipientsT&& value) {
    m_recipientsHasBeenSet = true;
    m_recipients = std::forward<RecipientsT>(value);
  }
  template <typename RecipientsT = Aws::Vector<Aws::String>>
  NotificationSearchSummary& WithRecipients(RecipientsT&& value) {
    SetRecipients(std::forward<RecipientsT>(value));
    return *this;
  }
  template <typename RecipientsT = Aws::String>
  NotificationSearchSummary& AddRecipients(RecipientsT&& value) {
    m_recipientsHasBeenSet = true;
    m_recipients.emplace_back(std::forward<RecipientsT>(value));
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
  NotificationSearchSummary& WithCreatedAt(CreatedAtT&& value) {
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
  NotificationSearchSummary& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region where the notification was last modified.</p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  NotificationSearchSummary& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the notification was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  NotificationSearchSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the notification.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  NotificationSearchSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  NotificationSearchSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_instanceId;

  Aws::Map<LocaleCode, Aws::String> m_content;

  NotificationPriority m_priority{NotificationPriority::NOT_SET};

  Aws::Vector<Aws::String> m_recipients;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_expiresAt{};

  Aws::String m_lastModifiedRegion;

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_instanceIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_recipientsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_lastModifiedRegionHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
