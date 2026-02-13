/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NotificationSearchSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

NotificationSearchSummary::NotificationSearchSummary(JsonView jsonValue) { *this = jsonValue; }

NotificationSearchSummary& NotificationSearchSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceId")) {
    m_instanceId = jsonValue.GetString("InstanceId");
    m_instanceIdHasBeenSet = true;
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
  if (jsonValue.ValueExists("Recipients")) {
    Aws::Utils::Array<JsonView> recipientsJsonList = jsonValue.GetArray("Recipients");
    for (unsigned recipientsIndex = 0; recipientsIndex < recipientsJsonList.GetLength(); ++recipientsIndex) {
      m_recipients.push_back(recipientsJsonList[recipientsIndex].AsString());
    }
    m_recipientsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetDouble("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedRegion")) {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue NotificationSearchSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_instanceIdHasBeenSet) {
    payload.WithString("InstanceId", m_instanceId);
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

  if (m_recipientsHasBeenSet) {
    Aws::Utils::Array<JsonValue> recipientsJsonList(m_recipients.size());
    for (unsigned recipientsIndex = 0; recipientsIndex < recipientsJsonList.GetLength(); ++recipientsIndex) {
      recipientsJsonList[recipientsIndex].AsString(m_recipients[recipientsIndex]);
    }
    payload.WithArray("Recipients", std::move(recipientsJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("ExpiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if (m_lastModifiedRegionHasBeenSet) {
    payload.WithString("LastModifiedRegion", m_lastModifiedRegion);
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
