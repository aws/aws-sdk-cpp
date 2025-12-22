/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs-realtime/model/ExchangedParticipantToken.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ivsrealtime {
namespace Model {

ExchangedParticipantToken::ExchangedParticipantToken(JsonView jsonValue) { *this = jsonValue; }

ExchangedParticipantToken& ExchangedParticipantToken::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capabilities")) {
    Aws::Utils::Array<JsonView> capabilitiesJsonList = jsonValue.GetArray("capabilities");
    for (unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex) {
      m_capabilities.push_back(
          ParticipantTokenCapabilityMapper::GetParticipantTokenCapabilityForName(capabilitiesJsonList[capabilitiesIndex].AsString()));
    }
    m_capabilitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributes")) {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for (auto& attributesItem : attributesJsonMap) {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expirationTime")) {
    m_expirationTime = jsonValue.GetString("expirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ExchangedParticipantToken::Jsonize() const {
  JsonValue payload;

  if (m_capabilitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
    for (unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex) {
      capabilitiesJsonList[capabilitiesIndex].AsString(
          ParticipantTokenCapabilityMapper::GetNameForParticipantTokenCapability(m_capabilities[capabilitiesIndex]));
    }
    payload.WithArray("capabilities", std::move(capabilitiesJsonList));
  }

  if (m_attributesHasBeenSet) {
    JsonValue attributesJsonMap;
    for (auto& attributesItem : m_attributes) {
      attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
    }
    payload.WithObject("attributes", std::move(attributesJsonMap));
  }

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  if (m_expirationTimeHasBeenSet) {
    payload.WithString("expirationTime", m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace ivsrealtime
}  // namespace Aws
