/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/UpdateMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMonitorRequest::UpdateMonitorRequest() : 
    m_monitorNameHasBeenSet(false),
    m_resourcesToAddHasBeenSet(false),
    m_resourcesToRemoveHasBeenSet(false),
    m_status(MonitorConfigState::NOT_SET),
    m_statusHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_maxCityNetworksToMonitor(0),
    m_maxCityNetworksToMonitorHasBeenSet(false),
    m_internetMeasurementsLogDeliveryHasBeenSet(false),
    m_trafficPercentageToMonitor(0),
    m_trafficPercentageToMonitorHasBeenSet(false),
    m_healthEventsConfigHasBeenSet(false)
{
}

Aws::String UpdateMonitorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourcesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesToAddJsonList(m_resourcesToAdd.size());
   for(unsigned resourcesToAddIndex = 0; resourcesToAddIndex < resourcesToAddJsonList.GetLength(); ++resourcesToAddIndex)
   {
     resourcesToAddJsonList[resourcesToAddIndex].AsString(m_resourcesToAdd[resourcesToAddIndex]);
   }
   payload.WithArray("ResourcesToAdd", std::move(resourcesToAddJsonList));

  }

  if(m_resourcesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesToRemoveJsonList(m_resourcesToRemove.size());
   for(unsigned resourcesToRemoveIndex = 0; resourcesToRemoveIndex < resourcesToRemoveJsonList.GetLength(); ++resourcesToRemoveIndex)
   {
     resourcesToRemoveJsonList[resourcesToRemoveIndex].AsString(m_resourcesToRemove[resourcesToRemoveIndex]);
   }
   payload.WithArray("ResourcesToRemove", std::move(resourcesToRemoveJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MonitorConfigStateMapper::GetNameForMonitorConfigState(m_status));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

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




