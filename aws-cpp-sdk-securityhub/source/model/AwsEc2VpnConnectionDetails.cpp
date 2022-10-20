/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VpnConnectionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2VpnConnectionDetails::AwsEc2VpnConnectionDetails() : 
    m_vpnConnectionIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_customerGatewayConfigurationHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_vgwTelemetryHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_routesHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false)
{
}

AwsEc2VpnConnectionDetails::AwsEc2VpnConnectionDetails(JsonView jsonValue) : 
    m_vpnConnectionIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_customerGatewayConfigurationHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_vgwTelemetryHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_routesHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VpnConnectionDetails& AwsEc2VpnConnectionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpnConnectionId"))
  {
    m_vpnConnectionId = jsonValue.GetString("VpnConnectionId");

    m_vpnConnectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerGatewayId"))
  {
    m_customerGatewayId = jsonValue.GetString("CustomerGatewayId");

    m_customerGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerGatewayConfiguration"))
  {
    m_customerGatewayConfiguration = jsonValue.GetString("CustomerGatewayConfiguration");

    m_customerGatewayConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpnGatewayId"))
  {
    m_vpnGatewayId = jsonValue.GetString("VpnGatewayId");

    m_vpnGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    m_category = jsonValue.GetString("Category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VgwTelemetry"))
  {
    Aws::Utils::Array<JsonView> vgwTelemetryJsonList = jsonValue.GetArray("VgwTelemetry");
    for(unsigned vgwTelemetryIndex = 0; vgwTelemetryIndex < vgwTelemetryJsonList.GetLength(); ++vgwTelemetryIndex)
    {
      m_vgwTelemetry.push_back(vgwTelemetryJsonList[vgwTelemetryIndex].AsObject());
    }
    m_vgwTelemetryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Options"))
  {
    m_options = jsonValue.GetObject("Options");

    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Routes"))
  {
    Aws::Utils::Array<JsonView> routesJsonList = jsonValue.GetArray("Routes");
    for(unsigned routesIndex = 0; routesIndex < routesJsonList.GetLength(); ++routesIndex)
    {
      m_routes.push_back(routesJsonList[routesIndex].AsObject());
    }
    m_routesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitGatewayId"))
  {
    m_transitGatewayId = jsonValue.GetString("TransitGatewayId");

    m_transitGatewayIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VpnConnectionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_vpnConnectionIdHasBeenSet)
  {
   payload.WithString("VpnConnectionId", m_vpnConnectionId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_customerGatewayIdHasBeenSet)
  {
   payload.WithString("CustomerGatewayId", m_customerGatewayId);

  }

  if(m_customerGatewayConfigurationHasBeenSet)
  {
   payload.WithString("CustomerGatewayConfiguration", m_customerGatewayConfiguration);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_vpnGatewayIdHasBeenSet)
  {
   payload.WithString("VpnGatewayId", m_vpnGatewayId);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", m_category);

  }

  if(m_vgwTelemetryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vgwTelemetryJsonList(m_vgwTelemetry.size());
   for(unsigned vgwTelemetryIndex = 0; vgwTelemetryIndex < vgwTelemetryJsonList.GetLength(); ++vgwTelemetryIndex)
   {
     vgwTelemetryJsonList[vgwTelemetryIndex].AsObject(m_vgwTelemetry[vgwTelemetryIndex].Jsonize());
   }
   payload.WithArray("VgwTelemetry", std::move(vgwTelemetryJsonList));

  }

  if(m_optionsHasBeenSet)
  {
   payload.WithObject("Options", m_options.Jsonize());

  }

  if(m_routesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routesJsonList(m_routes.size());
   for(unsigned routesIndex = 0; routesIndex < routesJsonList.GetLength(); ++routesIndex)
   {
     routesJsonList[routesIndex].AsObject(m_routes[routesIndex].Jsonize());
   }
   payload.WithArray("Routes", std::move(routesJsonList));

  }

  if(m_transitGatewayIdHasBeenSet)
  {
   payload.WithString("TransitGatewayId", m_transitGatewayId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
