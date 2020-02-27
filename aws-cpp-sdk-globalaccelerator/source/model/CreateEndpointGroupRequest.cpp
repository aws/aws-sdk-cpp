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

#include <aws/globalaccelerator/model/CreateEndpointGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEndpointGroupRequest::CreateEndpointGroupRequest() : 
    m_listenerArnHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
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
    m_idempotencyToken(Aws::Utils::UUID::RandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String CreateEndpointGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_listenerArnHasBeenSet)
  {
   payload.WithString("ListenerArn", m_listenerArn);

  }

  if(m_endpointGroupRegionHasBeenSet)
  {
   payload.WithString("EndpointGroupRegion", m_endpointGroupRegion);

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

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEndpointGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.CreateEndpointGroup"));
  return headers;

}




