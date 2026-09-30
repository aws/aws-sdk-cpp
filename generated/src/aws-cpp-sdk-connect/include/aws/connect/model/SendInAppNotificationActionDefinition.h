/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ConfigurableNotificationPriority.h>
#include <aws/connect/model/LocaleCode.h>
#include <aws/connect/model/NotificationRecipientType.h>
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
 * <p>Information about the send in-app notification action.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SendInAppNotificationActionDefinition">AWS
 * API Reference</a></p>
 */
class SendInAppNotificationActionDefinition {
 public:
  AWS_CONNECT_API SendInAppNotificationActionDefinition() = default;
  AWS_CONNECT_API SendInAppNotificationActionDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API SendInAppNotificationActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Notification content. Supports variable injection. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
   * reference</a> in the <i>Connect Customer Administrators Guide</i>.</p>
   */
  inline const Aws::Map<LocaleCode, Aws::String>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Map<LocaleCode, Aws::String>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Map<LocaleCode, Aws::String>>
  SendInAppNotificationActionDefinition& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  inline SendInAppNotificationActionDefinition& AddContent(LocaleCode key, Aws::String value) {
    m_contentHasBeenSet = true;
    m_content.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Notification recipient.</p>
   */
  inline const NotificationRecipientType& GetRecipient() const { return m_recipient; }
  inline bool RecipientHasBeenSet() const { return m_recipientHasBeenSet; }
  template <typename RecipientT = NotificationRecipientType>
  void SetRecipient(RecipientT&& value) {
    m_recipientHasBeenSet = true;
    m_recipient = std::forward<RecipientT>(value);
  }
  template <typename RecipientT = NotificationRecipientType>
  SendInAppNotificationActionDefinition& WithRecipient(RecipientT&& value) {
    SetRecipient(std::forward<RecipientT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Recipients to exclude from notification.</p>
   */
  inline const NotificationRecipientType& GetExclusion() const { return m_exclusion; }
  inline bool ExclusionHasBeenSet() const { return m_exclusionHasBeenSet; }
  template <typename ExclusionT = NotificationRecipientType>
  void SetExclusion(ExclusionT&& value) {
    m_exclusionHasBeenSet = true;
    m_exclusion = std::forward<ExclusionT>(value);
  }
  template <typename ExclusionT = NotificationRecipientType>
  SendInAppNotificationActionDefinition& WithExclusion(ExclusionT&& value) {
    SetExclusion(std::forward<ExclusionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Notification priority.</p>
   */
  inline ConfigurableNotificationPriority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(ConfigurableNotificationPriority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline SendInAppNotificationActionDefinition& WithPriority(ConfigurableNotificationPriority value) {
    SetPriority(value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<LocaleCode, Aws::String> m_content;

  NotificationRecipientType m_recipient;

  NotificationRecipientType m_exclusion;

  ConfigurableNotificationPriority m_priority{ConfigurableNotificationPriority::NOT_SET};
  bool m_contentHasBeenSet = false;
  bool m_recipientHasBeenSet = false;
  bool m_exclusionHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
