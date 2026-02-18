/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateNotificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateNotificationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("ExpiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if (m_recipientsHasBeenSet) {
    Aws::Utils::Array<JsonValue> recipientsJsonList(m_recipients.size());
    for (unsigned recipientsIndex = 0; recipientsIndex < recipientsJsonList.GetLength(); ++recipientsIndex) {
      recipientsJsonList[recipientsIndex].AsString(m_recipients[recipientsIndex]);
    }
    payload.WithArray("Recipients", std::move(recipientsJsonList));
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("Priority", ConfigurableNotificationPriorityMapper::GetNameForConfigurableNotificationPriority(m_priority));
  }

  if (m_contentHasBeenSet) {
    JsonValue contentJsonMap;
    for (auto& contentItem : m_content) {
      contentJsonMap.WithString(LocaleCodeMapper::GetNameForLocaleCode(contentItem.first), contentItem.second);
    }
    payload.WithObject("Content", std::move(contentJsonMap));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_predefinedNotificationIdHasBeenSet) {
    payload.WithString("PredefinedNotificationId", m_predefinedNotificationId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
