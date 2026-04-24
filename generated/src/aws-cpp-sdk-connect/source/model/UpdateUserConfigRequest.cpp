/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateUserConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateUserConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_autoAcceptConfigsHasBeenSet) {
    Aws::Utils::Array<JsonValue> autoAcceptConfigsJsonList(m_autoAcceptConfigs.size());
    for (unsigned autoAcceptConfigsIndex = 0; autoAcceptConfigsIndex < autoAcceptConfigsJsonList.GetLength(); ++autoAcceptConfigsIndex) {
      autoAcceptConfigsJsonList[autoAcceptConfigsIndex].AsObject(m_autoAcceptConfigs[autoAcceptConfigsIndex].Jsonize());
    }
    payload.WithArray("AutoAcceptConfigs", std::move(autoAcceptConfigsJsonList));
  }

  if (m_afterContactWorkConfigsHasBeenSet) {
    Aws::Utils::Array<JsonValue> afterContactWorkConfigsJsonList(m_afterContactWorkConfigs.size());
    for (unsigned afterContactWorkConfigsIndex = 0; afterContactWorkConfigsIndex < afterContactWorkConfigsJsonList.GetLength();
         ++afterContactWorkConfigsIndex) {
      afterContactWorkConfigsJsonList[afterContactWorkConfigsIndex].AsObject(
          m_afterContactWorkConfigs[afterContactWorkConfigsIndex].Jsonize());
    }
    payload.WithArray("AfterContactWorkConfigs", std::move(afterContactWorkConfigsJsonList));
  }

  if (m_phoneNumberConfigsHasBeenSet) {
    Aws::Utils::Array<JsonValue> phoneNumberConfigsJsonList(m_phoneNumberConfigs.size());
    for (unsigned phoneNumberConfigsIndex = 0; phoneNumberConfigsIndex < phoneNumberConfigsJsonList.GetLength();
         ++phoneNumberConfigsIndex) {
      phoneNumberConfigsJsonList[phoneNumberConfigsIndex].AsObject(m_phoneNumberConfigs[phoneNumberConfigsIndex].Jsonize());
    }
    payload.WithArray("PhoneNumberConfigs", std::move(phoneNumberConfigsJsonList));
  }

  if (m_persistentConnectionConfigsHasBeenSet) {
    Aws::Utils::Array<JsonValue> persistentConnectionConfigsJsonList(m_persistentConnectionConfigs.size());
    for (unsigned persistentConnectionConfigsIndex = 0; persistentConnectionConfigsIndex < persistentConnectionConfigsJsonList.GetLength();
         ++persistentConnectionConfigsIndex) {
      persistentConnectionConfigsJsonList[persistentConnectionConfigsIndex].AsObject(
          m_persistentConnectionConfigs[persistentConnectionConfigsIndex].Jsonize());
    }
    payload.WithArray("PersistentConnectionConfigs", std::move(persistentConnectionConfigsJsonList));
  }

  if (m_voiceEnhancementConfigsHasBeenSet) {
    Aws::Utils::Array<JsonValue> voiceEnhancementConfigsJsonList(m_voiceEnhancementConfigs.size());
    for (unsigned voiceEnhancementConfigsIndex = 0; voiceEnhancementConfigsIndex < voiceEnhancementConfigsJsonList.GetLength();
         ++voiceEnhancementConfigsIndex) {
      voiceEnhancementConfigsJsonList[voiceEnhancementConfigsIndex].AsObject(
          m_voiceEnhancementConfigs[voiceEnhancementConfigsIndex].Jsonize());
    }
    payload.WithArray("VoiceEnhancementConfigs", std::move(voiceEnhancementConfigsJsonList));
  }

  return payload.View().WriteReadable();
}
