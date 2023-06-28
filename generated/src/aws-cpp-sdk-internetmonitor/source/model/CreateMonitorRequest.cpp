/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/CreateMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMonitorRequest::CreateMonitorRequest() : 
    m_monitorNameHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false),
    m_maxCityNetworksToMonitor(0),
    m_maxCityNetworksToMonitorHasBeenSet(false),
    m_internetMeasurementsLogDeliveryHasBeenSet(false),
    m_trafficPercentageToMonitor(0),
    m_trafficPercentageToMonitorHasBeenSet(false),
    m_healthEventsConfigHasBeenSet(false)
{
}

Aws::String CreateMonitorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitorNameHasBeenSet)
  {
   payload.WithString("MonitorName", m_monitorName);

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_maxCityNetworksToMonitorHasBeenSet)
  {
   payload.WithInteger("MaxCityNetworksToMonitor", m_maxCityNetworksToMonitor);

  }

  if(m_internetMeasurementsLogDeliveryHasBeenSet)
  {
   payload.WithObject("InternetMeasurementsLogDelivery", m_internetMeasurementsLogDelivery.Jsonize());

  }

  if(m_trafficPercentageToMonitorHasBeenSet)
  {
   payload.WithInteger("TrafficPercentageToMonitor", m_trafficPercentageToMonitor);

  }

  if(m_healthEventsConfigHasBeenSet)
  {
   payload.WithObject("HealthEventsConfig", m_healthEventsConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




