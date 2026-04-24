/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribeConfigurationEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribeConfigurationEvent::MedicalScribeConfigurationEvent(JsonView jsonValue) { *this = jsonValue; }

MedicalScribeConfigurationEvent& MedicalScribeConfigurationEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("postStreamActionSettings")) {
    m_postStreamActionSettings = jsonValue.GetObject("postStreamActionSettings");
    m_postStreamActionSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channelDefinitions")) {
    Aws::Utils::Array<JsonView> channelDefinitionsJsonList = jsonValue.GetArray("channelDefinitions");
    for (unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength();
         ++channelDefinitionsIndex) {
      m_channelDefinitions.push_back(channelDefinitionsJsonList[channelDefinitionsIndex].AsObject());
    }
    m_channelDefinitionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encounterContext")) {
    m_encounterContext = jsonValue.GetObject("encounterContext");
    m_encounterContextHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeConfigurationEvent::Jsonize() const {
  JsonValue payload;

  if (m_postStreamActionSettingsHasBeenSet) {
    payload.WithObject("postStreamActionSettings", m_postStreamActionSettings.Jsonize());
  }

  if (m_channelDefinitionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> channelDefinitionsJsonList(m_channelDefinitions.size());
    for (unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength();
         ++channelDefinitionsIndex) {
      channelDefinitionsJsonList[channelDefinitionsIndex].AsObject(m_channelDefinitions[channelDefinitionsIndex].Jsonize());
    }
    payload.WithArray("channelDefinitions", std::move(channelDefinitionsJsonList));
  }

  if (m_encounterContextHasBeenSet) {
    payload.WithObject("encounterContext", m_encounterContext.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
