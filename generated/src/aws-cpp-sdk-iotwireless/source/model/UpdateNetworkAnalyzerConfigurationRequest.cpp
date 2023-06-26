/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateNetworkAnalyzerConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNetworkAnalyzerConfigurationRequest::UpdateNetworkAnalyzerConfigurationRequest() : 
    m_configurationNameHasBeenSet(false),
    m_traceContentHasBeenSet(false),
    m_wirelessDevicesToAddHasBeenSet(false),
    m_wirelessDevicesToRemoveHasBeenSet(false),
    m_wirelessGatewaysToAddHasBeenSet(false),
    m_wirelessGatewaysToRemoveHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_multicastGroupsToAddHasBeenSet(false),
    m_multicastGroupsToRemoveHasBeenSet(false)
{
}

Aws::String UpdateNetworkAnalyzerConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_traceContentHasBeenSet)
  {
   payload.WithObject("TraceContent", m_traceContent.Jsonize());

  }

  if(m_wirelessDevicesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wirelessDevicesToAddJsonList(m_wirelessDevicesToAdd.size());
   for(unsigned wirelessDevicesToAddIndex = 0; wirelessDevicesToAddIndex < wirelessDevicesToAddJsonList.GetLength(); ++wirelessDevicesToAddIndex)
   {
     wirelessDevicesToAddJsonList[wirelessDevicesToAddIndex].AsString(m_wirelessDevicesToAdd[wirelessDevicesToAddIndex]);
   }
   payload.WithArray("WirelessDevicesToAdd", std::move(wirelessDevicesToAddJsonList));

  }

  if(m_wirelessDevicesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wirelessDevicesToRemoveJsonList(m_wirelessDevicesToRemove.size());
   for(unsigned wirelessDevicesToRemoveIndex = 0; wirelessDevicesToRemoveIndex < wirelessDevicesToRemoveJsonList.GetLength(); ++wirelessDevicesToRemoveIndex)
   {
     wirelessDevicesToRemoveJsonList[wirelessDevicesToRemoveIndex].AsString(m_wirelessDevicesToRemove[wirelessDevicesToRemoveIndex]);
   }
   payload.WithArray("WirelessDevicesToRemove", std::move(wirelessDevicesToRemoveJsonList));

  }

  if(m_wirelessGatewaysToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wirelessGatewaysToAddJsonList(m_wirelessGatewaysToAdd.size());
   for(unsigned wirelessGatewaysToAddIndex = 0; wirelessGatewaysToAddIndex < wirelessGatewaysToAddJsonList.GetLength(); ++wirelessGatewaysToAddIndex)
   {
     wirelessGatewaysToAddJsonList[wirelessGatewaysToAddIndex].AsString(m_wirelessGatewaysToAdd[wirelessGatewaysToAddIndex]);
   }
   payload.WithArray("WirelessGatewaysToAdd", std::move(wirelessGatewaysToAddJsonList));

  }

  if(m_wirelessGatewaysToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wirelessGatewaysToRemoveJsonList(m_wirelessGatewaysToRemove.size());
   for(unsigned wirelessGatewaysToRemoveIndex = 0; wirelessGatewaysToRemoveIndex < wirelessGatewaysToRemoveJsonList.GetLength(); ++wirelessGatewaysToRemoveIndex)
   {
     wirelessGatewaysToRemoveJsonList[wirelessGatewaysToRemoveIndex].AsString(m_wirelessGatewaysToRemove[wirelessGatewaysToRemoveIndex]);
   }
   payload.WithArray("WirelessGatewaysToRemove", std::move(wirelessGatewaysToRemoveJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_multicastGroupsToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> multicastGroupsToAddJsonList(m_multicastGroupsToAdd.size());
   for(unsigned multicastGroupsToAddIndex = 0; multicastGroupsToAddIndex < multicastGroupsToAddJsonList.GetLength(); ++multicastGroupsToAddIndex)
   {
     multicastGroupsToAddJsonList[multicastGroupsToAddIndex].AsString(m_multicastGroupsToAdd[multicastGroupsToAddIndex]);
   }
   payload.WithArray("MulticastGroupsToAdd", std::move(multicastGroupsToAddJsonList));

  }

  if(m_multicastGroupsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> multicastGroupsToRemoveJsonList(m_multicastGroupsToRemove.size());
   for(unsigned multicastGroupsToRemoveIndex = 0; multicastGroupsToRemoveIndex < multicastGroupsToRemoveJsonList.GetLength(); ++multicastGroupsToRemoveIndex)
   {
     multicastGroupsToRemoveJsonList[multicastGroupsToRemoveIndex].AsString(m_multicastGroupsToRemove[multicastGroupsToRemoveIndex]);
   }
   payload.WithArray("MulticastGroupsToRemove", std::move(multicastGroupsToRemoveJsonList));

  }

  return payload.View().WriteReadable();
}




