/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/EndpointDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

EndpointDetails::EndpointDetails() : 
    m_awsGroundStationAgentEndpointHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_healthReasonsHasBeenSet(false),
    m_healthStatus(CapabilityHealth::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_securityDetailsHasBeenSet(false)
{
}

EndpointDetails::EndpointDetails(JsonView jsonValue) : 
    m_awsGroundStationAgentEndpointHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_healthReasonsHasBeenSet(false),
    m_healthStatus(CapabilityHealth::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_securityDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointDetails& EndpointDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsGroundStationAgentEndpoint"))
  {
    m_awsGroundStationAgentEndpoint = jsonValue.GetObject("awsGroundStationAgentEndpoint");

    m_awsGroundStationAgentEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetObject("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthReasons"))
  {
    Aws::Utils::Array<JsonView> healthReasonsJsonList = jsonValue.GetArray("healthReasons");
    for(unsigned healthReasonsIndex = 0; healthReasonsIndex < healthReasonsJsonList.GetLength(); ++healthReasonsIndex)
    {
      m_healthReasons.push_back(CapabilityHealthReasonMapper::GetCapabilityHealthReasonForName(healthReasonsJsonList[healthReasonsIndex].AsString()));
    }
    m_healthReasonsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthStatus"))
  {
    m_healthStatus = CapabilityHealthMapper::GetCapabilityHealthForName(jsonValue.GetString("healthStatus"));

    m_healthStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityDetails"))
  {
    m_securityDetails = jsonValue.GetObject("securityDetails");

    m_securityDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointDetails::Jsonize() const
{
  JsonValue payload;

  if(m_awsGroundStationAgentEndpointHasBeenSet)
  {
   payload.WithObject("awsGroundStationAgentEndpoint", m_awsGroundStationAgentEndpoint.Jsonize());

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithObject("endpoint", m_endpoint.Jsonize());

  }

  if(m_healthReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> healthReasonsJsonList(m_healthReasons.size());
   for(unsigned healthReasonsIndex = 0; healthReasonsIndex < healthReasonsJsonList.GetLength(); ++healthReasonsIndex)
   {
     healthReasonsJsonList[healthReasonsIndex].AsString(CapabilityHealthReasonMapper::GetNameForCapabilityHealthReason(m_healthReasons[healthReasonsIndex]));
   }
   payload.WithArray("healthReasons", std::move(healthReasonsJsonList));

  }

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("healthStatus", CapabilityHealthMapper::GetNameForCapabilityHealth(m_healthStatus));
  }

  if(m_securityDetailsHasBeenSet)
  {
   payload.WithObject("securityDetails", m_securityDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
