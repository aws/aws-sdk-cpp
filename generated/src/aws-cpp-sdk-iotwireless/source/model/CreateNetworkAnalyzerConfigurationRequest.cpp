/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/CreateNetworkAnalyzerConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNetworkAnalyzerConfigurationRequest::CreateNetworkAnalyzerConfigurationRequest() : 
    m_nameHasBeenSet(false),
    m_traceContentHasBeenSet(false),
    m_wirelessDevicesHasBeenSet(false),
    m_wirelessGatewaysHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_multicastGroupsHasBeenSet(false)
{
}

Aws::String CreateNetworkAnalyzerConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_traceContentHasBeenSet)
  {
   payload.WithObject("TraceContent", m_traceContent.Jsonize());

  }

  if(m_wirelessDevicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wirelessDevicesJsonList(m_wirelessDevices.size());
   for(unsigned wirelessDevicesIndex = 0; wirelessDevicesIndex < wirelessDevicesJsonList.GetLength(); ++wirelessDevicesIndex)
   {
     wirelessDevicesJsonList[wirelessDevicesIndex].AsString(m_wirelessDevices[wirelessDevicesIndex]);
   }
   payload.WithArray("WirelessDevices", std::move(wirelessDevicesJsonList));

  }

  if(m_wirelessGatewaysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wirelessGatewaysJsonList(m_wirelessGateways.size());
   for(unsigned wirelessGatewaysIndex = 0; wirelessGatewaysIndex < wirelessGatewaysJsonList.GetLength(); ++wirelessGatewaysIndex)
   {
     wirelessGatewaysJsonList[wirelessGatewaysIndex].AsString(m_wirelessGateways[wirelessGatewaysIndex]);
   }
   payload.WithArray("WirelessGateways", std::move(wirelessGatewaysJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_multicastGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> multicastGroupsJsonList(m_multicastGroups.size());
   for(unsigned multicastGroupsIndex = 0; multicastGroupsIndex < multicastGroupsJsonList.GetLength(); ++multicastGroupsIndex)
   {
     multicastGroupsJsonList[multicastGroupsIndex].AsString(m_multicastGroups[multicastGroupsIndex]);
   }
   payload.WithArray("MulticastGroups", std::move(multicastGroupsJsonList));

  }

  return payload.View().WriteReadable();
}




