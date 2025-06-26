/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/Device.h>
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

Device::Device(JsonView jsonValue)
{
  *this = jsonValue;
}

Device& Device::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("CapabilityReport"))
  {
    m_capabilityReport = jsonValue.GetObject("CapabilityReport");
    m_capabilityReportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapabilitySchemas"))
  {
    Aws::Utils::Array<JsonView> capabilitySchemasJsonList = jsonValue.GetArray("CapabilitySchemas");
    for(unsigned capabilitySchemasIndex = 0; capabilitySchemasIndex < capabilitySchemasJsonList.GetLength(); ++capabilitySchemasIndex)
    {
      m_capabilitySchemas.push_back(capabilitySchemasJsonList[capabilitySchemasIndex].AsObject());
    }
    m_capabilitySchemasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceMetadata"))
  {
    m_deviceMetadata = jsonValue.GetObject("DeviceMetadata");
    m_deviceMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue Device::Jsonize() const
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

  if(m_capabilityReportHasBeenSet)
  {
   payload.WithObject("CapabilityReport", m_capabilityReport.Jsonize());

  }

  if(m_capabilitySchemasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitySchemasJsonList(m_capabilitySchemas.size());
   for(unsigned capabilitySchemasIndex = 0; capabilitySchemasIndex < capabilitySchemasJsonList.GetLength(); ++capabilitySchemasIndex)
   {
     capabilitySchemasJsonList[capabilitySchemasIndex].AsObject(m_capabilitySchemas[capabilitySchemasIndex].Jsonize());
   }
   payload.WithArray("CapabilitySchemas", std::move(capabilitySchemasJsonList));

  }

  if(m_deviceMetadataHasBeenSet)
  {
    if(!m_deviceMetadata.View().IsNull())
    {
       payload.WithObject("DeviceMetadata", JsonValue(m_deviceMetadata.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
