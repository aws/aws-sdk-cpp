/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ConnectionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

ConnectionSummary::ConnectionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectionSummary& ConnectionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");
    m_connectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainUnitId"))
  {
    m_domainUnitId = jsonValue.GetString("domainUnitId");
    m_domainUnitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("physicalEndpoints"))
  {
    Aws::Utils::Array<JsonView> physicalEndpointsJsonList = jsonValue.GetArray("physicalEndpoints");
    for(unsigned physicalEndpointsIndex = 0; physicalEndpointsIndex < physicalEndpointsJsonList.GetLength(); ++physicalEndpointsIndex)
    {
      m_physicalEndpoints.push_back(physicalEndpointsJsonList[physicalEndpointsIndex].AsObject());
    }
    m_physicalEndpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");
    m_projectIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("props"))
  {
    m_props = jsonValue.GetObject("props");
    m_propsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_domainUnitIdHasBeenSet)
  {
   payload.WithString("domainUnitId", m_domainUnitId);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_physicalEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> physicalEndpointsJsonList(m_physicalEndpoints.size());
   for(unsigned physicalEndpointsIndex = 0; physicalEndpointsIndex < physicalEndpointsJsonList.GetLength(); ++physicalEndpointsIndex)
   {
     physicalEndpointsJsonList[physicalEndpointsIndex].AsObject(m_physicalEndpoints[physicalEndpointsIndex].Jsonize());
   }
   payload.WithArray("physicalEndpoints", std::move(physicalEndpointsJsonList));

  }

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("projectId", m_projectId);

  }

  if(m_propsHasBeenSet)
  {
   payload.WithObject("props", m_props.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ConnectionTypeMapper::GetNameForConnectionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
