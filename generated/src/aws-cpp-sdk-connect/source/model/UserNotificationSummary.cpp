/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserNotificationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

UserNotificationSummary::UserNotificationSummary(JsonView jsonValue) { *this = jsonValue; }

UserNotificationSummary& UserNotificationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NotificationId")) {
    m_notificationId = jsonValue.GetString("NotificationId");
    m_notificationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotificationStatus")) {
    m_notificationStatus = NotificationStatusMapper::GetNotificationStatusForName(jsonValue.GetString("NotificationStatus"));
    m_notificationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceId")) {
    m_instanceId = jsonValue.GetString("InstanceId");
    m_instanceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecipientId")) {
    m_recipientId = jsonValue.GetString("RecipientId");
    m_recipientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Content")) {
    Aws::Map<Aws::String, JsonView> contentJsonMap = jsonValue.GetObject("Content").GetAllObjects();
    for (auto& contentItem : contentJsonMap) {
      m_content[LocaleCodeMapper::GetLocaleCodeForName(contentItem.first)] = contentItem.second.AsString();
    }
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Priority")) {
    m_priority = NotificationPriorityMapper::GetNotificationPriorityForName(jsonValue.GetString("Priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = NotificationSourceMapper::GetNotificationSourceForName(jsonValue.GetString("Source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetDouble("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue UserNotificationSummary::Jsonize() const {
  JsonValue payload;

  if (m_notificationIdHasBeenSet) {
    payload.WithString("NotificationId", m_notificationId);
  }

  if (m_notificationStatusHasBeenSet) {
    payload.WithString("NotificationStatus", NotificationStatusMapper::GetNameForNotificationStatus(m_notificationStatus));
  }

  if (m_instanceIdHasBeenSet) {
    payload.WithString("InstanceId", m_instanceId);
  }

  if (m_recipientIdHasBeenSet) {
    payload.WithString("RecipientId", m_recipientId);
  }

  if (m_contentHasBeenSet) {
    JsonValue contentJsonMap;
    for (auto& contentItem : m_content) {
      contentJsonMap.WithString(LocaleCodeMapper::GetNameForLocaleCode(contentItem.first), contentItem.second);
    }
    payload.WithObject("Content", std::move(contentJsonMap));
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("Priority", NotificationPriorityMapper::GetNameForNotificationPriority(m_priority));
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("Source", NotificationSourceMapper::GetNameForNotificationSource(m_source));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("ExpiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
