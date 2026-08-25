/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/UpdateAgentSpaceRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAgentSpaceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_localeHasBeenSet) {
    payload.WithString("locale", m_locale);
  }

  if (m_preferencesHasBeenSet) {
    JsonValue preferencesJsonMap;
    for (auto& preferencesItem : m_preferences) {
      preferencesJsonMap.WithBool(AgentSpacePreferenceKeyMapper::GetNameForAgentSpacePreferenceKey(preferencesItem.first),
                                  preferencesItem.second);
    }
    payload.WithObject("preferences", std::move(preferencesJsonMap));
  }

  return payload.View().WriteReadable();
}
