﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/UpdateEndpointGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEndpointGroupRequest::UpdateEndpointGroupRequest() : 
    m_endpointGroupArnHasBeenSet(false),
    m_endpointConfigurationsHasBeenSet(false),
    m_trafficDialPercentage(0.0),
    m_trafficDialPercentageHasBeenSet(false),
    m_healthCheckPort(0),
    m_healthCheckPortHasBeenSet(false),
    m_healthCheckProtocol(HealthCheckProtocol::NOT_SET),
    m_healthCheckProtocolHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_healthCheckIntervalSeconds(0),
    m_healthCheckIntervalSecondsHasBeenSet(false),
    m_thresholdCount(0),
    m_thresholdCountHasBeenSet(false),
    m_portOverridesHasBeenSet(false)
{
}

Aws::String UpdateEndpointGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointGroupArnHasBeenSet)
  {
   payload.WithString("EndpointGroupArn", m_endpointGroupArn);

  }

  if(m_endpointConfigurationsHasBeenSet)
  {
   Array<JsonValue> endpointConfigurationsJsonList(m_endpointConfigurations.size());
   for(unsigned endpointConfigurationsIndex = 0; endpointConfigurationsIndex < endpointConfigurationsJsonList.GetLength(); ++endpointConfigurationsIndex)
   {
     endpointConfigurationsJsonList[endpointConfigurationsIndex].AsObject(m_endpointConfigurations[endpointConfigurationsIndex].Jsonize());
   }
   payload.WithArray("EndpointConfigurations", std::move(endpointConfigurationsJsonList));

  }

  if(m_trafficDialPercentageHasBeenSet)
  {
   payload.WithDouble("TrafficDialPercentage", m_trafficDialPercentage);

  }

  if(m_healthCheckPortHasBeenSet)
  {
   payload.WithInteger("HealthCheckPort", m_healthCheckPort);

  }

  if(m_healthCheckProtocolHasBeenSet)
  {
   payload.WithString("HealthCheckProtocol", HealthCheckProtocolMapper::GetNameForHealthCheckProtocol(m_healthCheckProtocol));
  }

  if(m_healthCheckPathHasBeenSet)
  {
   payload.WithString("HealthCheckPath", m_healthCheckPath);

  }

  if(m_healthCheckIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("HealthCheckIntervalSeconds", m_healthCheckIntervalSeconds);

  }

  if(m_thresholdCountHasBeenSet)
  {
   payload.WithInteger("ThresholdCount", m_thresholdCount);

  }

  if(m_portOverridesHasBeenSet)
  {
   Array<JsonValue> portOverridesJsonList(m_portOverrides.size());
   for(unsigned portOverridesIndex = 0; portOverridesIndex < portOverridesJsonList.GetLength(); ++portOverridesIndex)
   {
     portOverridesJsonList[portOverridesIndex].AsObject(m_portOverrides[portOverridesIndex].Jsonize());
   }
   payload.WithArray("PortOverrides", std::move(portOverridesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEndpointGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.UpdateEndpointGroup"));
  return headers;

}




