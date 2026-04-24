/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserSearchSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

UserSearchSummary::UserSearchSummary(JsonView jsonValue) { *this = jsonValue; }

UserSearchSummary& UserSearchSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DirectoryUserId")) {
    m_directoryUserId = jsonValue.GetString("DirectoryUserId");
    m_directoryUserIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HierarchyGroupId")) {
    m_hierarchyGroupId = jsonValue.GetString("HierarchyGroupId");
    m_hierarchyGroupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdentityInfo")) {
    m_identityInfo = jsonValue.GetObject("IdentityInfo");
    m_identityInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PhoneConfig")) {
    m_phoneConfig = jsonValue.GetObject("PhoneConfig");
    m_phoneConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingProfileId")) {
    m_routingProfileId = jsonValue.GetString("RoutingProfileId");
    m_routingProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SecurityProfileIds")) {
    Aws::Utils::Array<JsonView> securityProfileIdsJsonList = jsonValue.GetArray("SecurityProfileIds");
    for (unsigned securityProfileIdsIndex = 0; securityProfileIdsIndex < securityProfileIdsJsonList.GetLength();
         ++securityProfileIdsIndex) {
      m_securityProfileIds.push_back(securityProfileIdsJsonList[securityProfileIdsIndex].AsString());
    }
    m_securityProfileIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Username")) {
    m_username = jsonValue.GetString("Username");
    m_usernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoAcceptConfigs")) {
    Aws::Utils::Array<JsonView> autoAcceptConfigsJsonList = jsonValue.GetArray("AutoAcceptConfigs");
    for (unsigned autoAcceptConfigsIndex = 0; autoAcceptConfigsIndex < autoAcceptConfigsJsonList.GetLength(); ++autoAcceptConfigsIndex) {
      m_autoAcceptConfigs.push_back(autoAcceptConfigsJsonList[autoAcceptConfigsIndex].AsObject());
    }
    m_autoAcceptConfigsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AfterContactWorkConfigs")) {
    Aws::Utils::Array<JsonView> afterContactWorkConfigsJsonList = jsonValue.GetArray("AfterContactWorkConfigs");
    for (unsigned afterContactWorkConfigsIndex = 0; afterContactWorkConfigsIndex < afterContactWorkConfigsJsonList.GetLength();
         ++afterContactWorkConfigsIndex) {
      m_afterContactWorkConfigs.push_back(afterContactWorkConfigsJsonList[afterContactWorkConfigsIndex].AsObject());
    }
    m_afterContactWorkConfigsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PhoneNumberConfigs")) {
    Aws::Utils::Array<JsonView> phoneNumberConfigsJsonList = jsonValue.GetArray("PhoneNumberConfigs");
    for (unsigned phoneNumberConfigsIndex = 0; phoneNumberConfigsIndex < phoneNumberConfigsJsonList.GetLength();
         ++phoneNumberConfigsIndex) {
      m_phoneNumberConfigs.push_back(phoneNumberConfigsJsonList[phoneNumberConfigsIndex].AsObject());
    }
    m_phoneNumberConfigsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PersistentConnectionConfigs")) {
    Aws::Utils::Array<JsonView> persistentConnectionConfigsJsonList = jsonValue.GetArray("PersistentConnectionConfigs");
    for (unsigned persistentConnectionConfigsIndex = 0; persistentConnectionConfigsIndex < persistentConnectionConfigsJsonList.GetLength();
         ++persistentConnectionConfigsIndex) {
      m_persistentConnectionConfigs.push_back(persistentConnectionConfigsJsonList[persistentConnectionConfigsIndex].AsObject());
    }
    m_persistentConnectionConfigsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VoiceEnhancementConfigs")) {
    Aws::Utils::Array<JsonView> voiceEnhancementConfigsJsonList = jsonValue.GetArray("VoiceEnhancementConfigs");
    for (unsigned voiceEnhancementConfigsIndex = 0; voiceEnhancementConfigsIndex < voiceEnhancementConfigsJsonList.GetLength();
         ++voiceEnhancementConfigsIndex) {
      m_voiceEnhancementConfigs.push_back(voiceEnhancementConfigsJsonList[voiceEnhancementConfigsIndex].AsObject());
    }
    m_voiceEnhancementConfigsHasBeenSet = true;
  }
  return *this;
}

JsonValue UserSearchSummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_directoryUserIdHasBeenSet) {
    payload.WithString("DirectoryUserId", m_directoryUserId);
  }

  if (m_hierarchyGroupIdHasBeenSet) {
    payload.WithString("HierarchyGroupId", m_hierarchyGroupId);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_identityInfoHasBeenSet) {
    payload.WithObject("IdentityInfo", m_identityInfo.Jsonize());
  }

  if (m_phoneConfigHasBeenSet) {
    payload.WithObject("PhoneConfig", m_phoneConfig.Jsonize());
  }

  if (m_routingProfileIdHasBeenSet) {
    payload.WithString("RoutingProfileId", m_routingProfileId);
  }

  if (m_securityProfileIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityProfileIdsJsonList(m_securityProfileIds.size());
    for (unsigned securityProfileIdsIndex = 0; securityProfileIdsIndex < securityProfileIdsJsonList.GetLength();
         ++securityProfileIdsIndex) {
      securityProfileIdsJsonList[securityProfileIdsIndex].AsString(m_securityProfileIds[securityProfileIdsIndex]);
    }
    payload.WithArray("SecurityProfileIds", std::move(securityProfileIdsJsonList));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("Username", m_username);
  }

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

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
