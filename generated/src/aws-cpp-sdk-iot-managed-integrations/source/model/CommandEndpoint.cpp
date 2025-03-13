/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/CommandEndpoint.h>
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

CommandEndpoint::CommandEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

CommandEndpoint& CommandEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endpointId"))
  {
    m_endpointId = jsonValue.GetString("endpointId");
    m_endpointIdHasBeenSet = true;
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

JsonValue CommandEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("endpointId", m_endpointId);

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
