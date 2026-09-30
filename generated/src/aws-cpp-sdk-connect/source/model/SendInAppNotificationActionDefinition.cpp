/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SendInAppNotificationActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

SendInAppNotificationActionDefinition::SendInAppNotificationActionDefinition(JsonView jsonValue) { *this = jsonValue; }

SendInAppNotificationActionDefinition& SendInAppNotificationActionDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Content")) {
    Aws::Map<Aws::String, JsonView> contentJsonMap = jsonValue.GetObject("Content").GetAllObjects();
    for (auto& contentItem : contentJsonMap) {
      m_content[LocaleCodeMapper::GetLocaleCodeForName(contentItem.first)] = contentItem.second.AsString();
    }
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Recipient")) {
    m_recipient = jsonValue.GetObject("Recipient");
    m_recipientHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Exclusion")) {
    m_exclusion = jsonValue.GetObject("Exclusion");
    m_exclusionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Priority")) {
    m_priority = ConfigurableNotificationPriorityMapper::GetConfigurableNotificationPriorityForName(jsonValue.GetString("Priority"));
    m_priorityHasBeenSet = true;
  }
  return *this;
}

JsonValue SendInAppNotificationActionDefinition::Jsonize() const {
  JsonValue payload;

  if (m_contentHasBeenSet) {
    JsonValue contentJsonMap;
    for (auto& contentItem : m_content) {
      contentJsonMap.WithString(LocaleCodeMapper::GetNameForLocaleCode(contentItem.first), contentItem.second);
    }
    payload.WithObject("Content", std::move(contentJsonMap));
  }

  if (m_recipientHasBeenSet) {
    payload.WithObject("Recipient", m_recipient.Jsonize());
  }

  if (m_exclusionHasBeenSet) {
    payload.WithObject("Exclusion", m_exclusion.Jsonize());
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("Priority", ConfigurableNotificationPriorityMapper::GetNameForConfigurableNotificationPriority(m_priority));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
