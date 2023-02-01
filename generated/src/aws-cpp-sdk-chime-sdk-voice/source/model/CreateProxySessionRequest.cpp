/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/CreateProxySessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProxySessionRequest::CreateProxySessionRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_participantPhoneNumbersHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_expiryMinutes(0),
    m_expiryMinutesHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_numberSelectionBehavior(NumberSelectionBehavior::NOT_SET),
    m_numberSelectionBehaviorHasBeenSet(false),
    m_geoMatchLevel(GeoMatchLevel::NOT_SET),
    m_geoMatchLevelHasBeenSet(false),
    m_geoMatchParamsHasBeenSet(false)
{
}

Aws::String CreateProxySessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_participantPhoneNumbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> participantPhoneNumbersJsonList(m_participantPhoneNumbers.size());
   for(unsigned participantPhoneNumbersIndex = 0; participantPhoneNumbersIndex < participantPhoneNumbersJsonList.GetLength(); ++participantPhoneNumbersIndex)
   {
     participantPhoneNumbersJsonList[participantPhoneNumbersIndex].AsString(m_participantPhoneNumbers[participantPhoneNumbersIndex]);
   }
   payload.WithArray("ParticipantPhoneNumbers", std::move(participantPhoneNumbersJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_expiryMinutesHasBeenSet)
  {
   payload.WithInteger("ExpiryMinutes", m_expiryMinutes);

  }

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(CapabilityMapper::GetNameForCapability(m_capabilities[capabilitiesIndex]));
   }
   payload.WithArray("Capabilities", std::move(capabilitiesJsonList));

  }

  if(m_numberSelectionBehaviorHasBeenSet)
  {
   payload.WithString("NumberSelectionBehavior", NumberSelectionBehaviorMapper::GetNameForNumberSelectionBehavior(m_numberSelectionBehavior));
  }

  if(m_geoMatchLevelHasBeenSet)
  {
   payload.WithString("GeoMatchLevel", GeoMatchLevelMapper::GetNameForGeoMatchLevel(m_geoMatchLevel));
  }

  if(m_geoMatchParamsHasBeenSet)
  {
   payload.WithObject("GeoMatchParams", m_geoMatchParams.Jsonize());

  }

  return payload.View().WriteReadable();
}




