/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/UpdateProxySessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProxySessionRequest::UpdateProxySessionRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_proxySessionIdHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_expiryMinutes(0),
    m_expiryMinutesHasBeenSet(false)
{
}

Aws::String UpdateProxySessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(CapabilityMapper::GetNameForCapability(m_capabilities[capabilitiesIndex]));
   }
   payload.WithArray("Capabilities", std::move(capabilitiesJsonList));

  }

  if(m_expiryMinutesHasBeenSet)
  {
   payload.WithInteger("ExpiryMinutes", m_expiryMinutes);

  }

  return payload.View().WriteReadable();
}




