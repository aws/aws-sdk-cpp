/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribeListeningSessionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribeListeningSessionDetails::MedicalScribeListeningSessionDetails(JsonView jsonValue) { *this = jsonValue; }

MedicalScribeListeningSessionDetails& MedicalScribeListeningSessionDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainId")) {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subscriptionId")) {
    m_subscriptionId = jsonValue.GetString("subscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("languageCode")) {
    m_languageCode = MedicalScribeLanguageCodeMapper::GetMedicalScribeLanguageCodeForName(jsonValue.GetString("languageCode"));
    m_languageCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaSampleRateHertz")) {
    m_mediaSampleRateHertz = jsonValue.GetInteger("mediaSampleRateHertz");
    m_mediaSampleRateHertzHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaEncoding")) {
    m_mediaEncoding = MedicalScribeMediaEncodingMapper::GetMedicalScribeMediaEncodingForName(jsonValue.GetString("mediaEncoding"));
    m_mediaEncodingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channelDefinitions")) {
    Aws::Utils::Array<JsonView> channelDefinitionsJsonList = jsonValue.GetArray("channelDefinitions");
    for (unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength();
         ++channelDefinitionsIndex) {
      m_channelDefinitions.push_back(channelDefinitionsJsonList[channelDefinitionsIndex].AsObject());
    }
    m_channelDefinitionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("postStreamActionSettings")) {
    m_postStreamActionSettings = jsonValue.GetObject("postStreamActionSettings");
    m_postStreamActionSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("postStreamActionResult")) {
    m_postStreamActionResult = jsonValue.GetObject("postStreamActionResult");
    m_postStreamActionResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encounterContextProvided")) {
    m_encounterContextProvided = jsonValue.GetBool("encounterContextProvided");
    m_encounterContextProvidedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamStatus")) {
    m_streamStatus = MedicalScribeStreamStatusMapper::GetMedicalScribeStreamStatusForName(jsonValue.GetString("streamStatus"));
    m_streamStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamCreationTime")) {
    m_streamCreationTime = jsonValue.GetDouble("streamCreationTime");
    m_streamCreationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamEndTime")) {
    m_streamEndTime = jsonValue.GetDouble("streamEndTime");
    m_streamEndTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeListeningSessionDetails::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_domainIdHasBeenSet) {
    payload.WithString("domainId", m_domainId);
  }

  if (m_subscriptionIdHasBeenSet) {
    payload.WithString("subscriptionId", m_subscriptionId);
  }

  if (m_languageCodeHasBeenSet) {
    payload.WithString("languageCode", MedicalScribeLanguageCodeMapper::GetNameForMedicalScribeLanguageCode(m_languageCode));
  }

  if (m_mediaSampleRateHertzHasBeenSet) {
    payload.WithInteger("mediaSampleRateHertz", m_mediaSampleRateHertz);
  }

  if (m_mediaEncodingHasBeenSet) {
    payload.WithString("mediaEncoding", MedicalScribeMediaEncodingMapper::GetNameForMedicalScribeMediaEncoding(m_mediaEncoding));
  }

  if (m_channelDefinitionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> channelDefinitionsJsonList(m_channelDefinitions.size());
    for (unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength();
         ++channelDefinitionsIndex) {
      channelDefinitionsJsonList[channelDefinitionsIndex].AsObject(m_channelDefinitions[channelDefinitionsIndex].Jsonize());
    }
    payload.WithArray("channelDefinitions", std::move(channelDefinitionsJsonList));
  }

  if (m_postStreamActionSettingsHasBeenSet) {
    payload.WithObject("postStreamActionSettings", m_postStreamActionSettings.Jsonize());
  }

  if (m_postStreamActionResultHasBeenSet) {
    payload.WithObject("postStreamActionResult", m_postStreamActionResult.Jsonize());
  }

  if (m_encounterContextProvidedHasBeenSet) {
    payload.WithBool("encounterContextProvided", m_encounterContextProvided);
  }

  if (m_streamStatusHasBeenSet) {
    payload.WithString("streamStatus", MedicalScribeStreamStatusMapper::GetNameForMedicalScribeStreamStatus(m_streamStatus));
  }

  if (m_streamCreationTimeHasBeenSet) {
    payload.WithDouble("streamCreationTime", m_streamCreationTime.SecondsWithMSPrecision());
  }

  if (m_streamEndTimeHasBeenSet) {
    payload.WithDouble("streamEndTime", m_streamEndTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
