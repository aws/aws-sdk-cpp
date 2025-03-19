/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/CapabilityReportEndpoint.h>
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

CapabilityReportEndpoint::CapabilityReportEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

CapabilityReportEndpoint& CapabilityReportEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceTypes"))
  {
    Aws::Utils::Array<JsonView> deviceTypesJsonList = jsonValue.GetArray("deviceTypes");
    for(unsigned deviceTypesIndex = 0; deviceTypesIndex < deviceTypesJsonList.GetLength(); ++deviceTypesIndex)
    {
      m_deviceTypes.push_back(deviceTypesJsonList[deviceTypesIndex].AsString());
    }
    m_deviceTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capabilities"))
  {
    Aws::Utils::Array<JsonView> capabilitiesJsonList = jsonValue.GetArray("capabilities");
    for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
    {
      m_capabilities.push_back(capabilitiesJsonList[capabilitiesIndex].AsObject());
    }
    m_capabilitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue CapabilityReportEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_deviceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceTypesJsonList(m_deviceTypes.size());
   for(unsigned deviceTypesIndex = 0; deviceTypesIndex < deviceTypesJsonList.GetLength(); ++deviceTypesIndex)
   {
     deviceTypesJsonList[deviceTypesIndex].AsString(m_deviceTypes[deviceTypesIndex]);
   }
   payload.WithArray("deviceTypes", std::move(deviceTypesJsonList));

  }

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsObject(m_capabilities[capabilitiesIndex].Jsonize());
   }
   payload.WithArray("capabilities", std::move(capabilitiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
