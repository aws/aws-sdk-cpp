/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/chime/model/UpdateProxySessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
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
   Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
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




