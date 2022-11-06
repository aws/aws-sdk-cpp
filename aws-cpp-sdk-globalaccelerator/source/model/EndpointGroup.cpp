/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/EndpointGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

EndpointGroup::EndpointGroup() : 
    m_endpointGroupArnHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
    m_endpointDescriptionsHasBeenSet(false),
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

EndpointGroup::EndpointGroup(JsonView jsonValue) : 
    m_endpointGroupArnHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
    m_endpointDescriptionsHasBeenSet(false),
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
  *this = jsonValue;
}

EndpointGroup& EndpointGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointGroupArn"))
  {
    m_endpointGroupArn = jsonValue.GetString("EndpointGroupArn");

    m_endpointGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointGroupRegion"))
  {
    m_endpointGroupRegion = jsonValue.GetString("EndpointGroupRegion");

    m_endpointGroupRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointDescriptions"))
  {
    Aws::Utils::Array<JsonView> endpointDescriptionsJsonList = jsonValue.GetArray("EndpointDescriptions");
    for(unsigned endpointDescriptionsIndex = 0; endpointDescriptionsIndex < endpointDescriptionsJsonList.GetLength(); ++endpointDescriptionsIndex)
    {
      m_endpointDescriptions.push_back(endpointDescriptionsJsonList[endpointDescriptionsIndex].AsObject());
    }
    m_endpointDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrafficDialPercentage"))
  {
    m_trafficDialPercentage = jsonValue.GetDouble("TrafficDialPercentage");

    m_trafficDialPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckPort"))
  {
    m_healthCheckPort = jsonValue.GetInteger("HealthCheckPort");

    m_healthCheckPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckProtocol"))
  {
    m_healthCheckProtocol = HealthCheckProtocolMapper::GetHealthCheckProtocolForName(jsonValue.GetString("HealthCheckProtocol"));

    m_healthCheckProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckPath"))
  {
    m_healthCheckPath = jsonValue.GetString("HealthCheckPath");

    m_healthCheckPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckIntervalSeconds"))
  {
    m_healthCheckIntervalSeconds = jsonValue.GetInteger("HealthCheckIntervalSeconds");

    m_healthCheckIntervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThresholdCount"))
  {
    m_thresholdCount = jsonValue.GetInteger("ThresholdCount");

    m_thresholdCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortOverrides"))
  {
    Aws::Utils::Array<JsonView> portOverridesJsonList = jsonValue.GetArray("PortOverrides");
    for(unsigned portOverridesIndex = 0; portOverridesIndex < portOverridesJsonList.GetLength(); ++portOverridesIndex)
    {
      m_portOverrides.push_back(portOverridesJsonList[portOverridesIndex].AsObject());
    }
    m_portOverridesHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointGroup::Jsonize() const
{
  JsonValue payload;

  if(m_endpointGroupArnHasBeenSet)
  {
   payload.WithString("EndpointGroupArn", m_endpointGroupArn);

  }

  if(m_endpointGroupRegionHasBeenSet)
  {
   payload.WithString("EndpointGroupRegion", m_endpointGroupRegion);

  }

  if(m_endpointDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointDescriptionsJsonList(m_endpointDescriptions.size());
   for(unsigned endpointDescriptionsIndex = 0; endpointDescriptionsIndex < endpointDescriptionsJsonList.GetLength(); ++endpointDescriptionsIndex)
   {
     endpointDescriptionsJsonList[endpointDescriptionsIndex].AsObject(m_endpointDescriptions[endpointDescriptionsIndex].Jsonize());
   }
   payload.WithArray("EndpointDescriptions", std::move(endpointDescriptionsJsonList));

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
   Aws::Utils::Array<JsonValue> portOverridesJsonList(m_portOverrides.size());
   for(unsigned portOverridesIndex = 0; portOverridesIndex < portOverridesJsonList.GetLength(); ++portOverridesIndex)
   {
     portOverridesJsonList[portOverridesIndex].AsObject(m_portOverrides[portOverridesIndex].Jsonize());
   }
   payload.WithArray("PortOverrides", std::move(portOverridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
