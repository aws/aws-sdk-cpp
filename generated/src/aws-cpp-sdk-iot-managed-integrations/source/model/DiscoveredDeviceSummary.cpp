/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/DiscoveredDeviceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

DiscoveredDeviceSummary::DiscoveredDeviceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DiscoveredDeviceSummary& DiscoveredDeviceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorDeviceId"))
  {
    m_connectorDeviceId = jsonValue.GetString("ConnectorDeviceId");
    m_connectorDeviceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectorDeviceName"))
  {
    m_connectorDeviceName = jsonValue.GetString("ConnectorDeviceName");
    m_connectorDeviceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceTypes"))
  {
    Aws::Utils::Array<JsonView> deviceTypesJsonList = jsonValue.GetArray("DeviceTypes");
    for(unsigned deviceTypesIndex = 0; deviceTypesIndex < deviceTypesJsonList.GetLength(); ++deviceTypesIndex)
    {
      m_deviceTypes.push_back(deviceTypesJsonList[deviceTypesIndex].AsString());
    }
    m_deviceTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedThingId"))
  {
    m_managedThingId = jsonValue.GetString("ManagedThingId");
    m_managedThingIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Modification"))
  {
    m_modification = DiscoveryModificationMapper::GetDiscoveryModificationForName(jsonValue.GetString("Modification"));
    m_modificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiscoveredAt"))
  {
    m_discoveredAt = jsonValue.GetDouble("DiscoveredAt");
    m_discoveredAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Brand"))
  {
    m_brand = jsonValue.GetString("Brand");
    m_brandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetString("Model");
    m_modelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationMaterial"))
  {
    m_authenticationMaterial = jsonValue.GetString("AuthenticationMaterial");
    m_authenticationMaterialHasBeenSet = true;
  }
  return *this;
}

JsonValue DiscoveredDeviceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_connectorDeviceIdHasBeenSet)
  {
   payload.WithString("ConnectorDeviceId", m_connectorDeviceId);

  }

  if(m_connectorDeviceNameHasBeenSet)
  {
   payload.WithString("ConnectorDeviceName", m_connectorDeviceName);

  }

  if(m_deviceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceTypesJsonList(m_deviceTypes.size());
   for(unsigned deviceTypesIndex = 0; deviceTypesIndex < deviceTypesJsonList.GetLength(); ++deviceTypesIndex)
   {
     deviceTypesJsonList[deviceTypesIndex].AsString(m_deviceTypes[deviceTypesIndex]);
   }
   payload.WithArray("DeviceTypes", std::move(deviceTypesJsonList));

  }

  if(m_managedThingIdHasBeenSet)
  {
   payload.WithString("ManagedThingId", m_managedThingId);

  }

  if(m_modificationHasBeenSet)
  {
   payload.WithString("Modification", DiscoveryModificationMapper::GetNameForDiscoveryModification(m_modification));
  }

  if(m_discoveredAtHasBeenSet)
  {
   payload.WithDouble("DiscoveredAt", m_discoveredAt.SecondsWithMSPrecision());
  }

  if(m_brandHasBeenSet)
  {
   payload.WithString("Brand", m_brand);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("Model", m_model);

  }

  if(m_authenticationMaterialHasBeenSet)
  {
   payload.WithString("AuthenticationMaterial", m_authenticationMaterial);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
